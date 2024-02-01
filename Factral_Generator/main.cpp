#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <time.h>

#define PENTAGON 1
#define HEXAGON 2
#define BARNSLEY 3

/* globals */
GLsizei wh = 500, ww = 500; /* initial window size */
int option = PENTAGON;
int points=5000;
int x1,y1; //cursor
int move_init=1; //flag to move
int lastX=0,lastY=0; //origin


/* reshaping routine called whenever window is resized or moved */
void myReshape(GLsizei w, GLsizei h)
{
    /* adjust clipping box */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, (GLdouble)w, 0.0, (GLdouble)h, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    /* adjust viewport and clear */
    glViewport(0,0,w,h);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
    /* set global size for use by drawing routine */
    ww = w;
    wh = h;
}

/*Mouse callback for the motion of the fractal with the mouse */
void mouseMove(int x, int y)
{
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();

   int dx = x1-x;
   int dy = y1-y;

   gluOrtho2D( dx, dx + ww, -dy, -dy + wh);

   glMatrixMode(GL_MODELVIEW);

   glutPostRedisplay();
}

/* Small fuction to return a random number */
int number(void)
{
   int x=0;
   srand ( time(NULL) );
   x = rand();
   x = x%9+1;
   return x;
}

/* mynit */
void myinit(void)
{
      /* attributes */
      glClearColor(1.0, 1.0, 1.0, 1.0); /* white background */
      switch (number())
      {
            case 1:
                glColor3f(1.0,0.0,0.0);/*red*/
                break;
            case 2:
                glColor3f(0.0,1.0,0.0);/*green*/
                break;
            case 3:
                glColor3f(0.0,0.0,1.0);/*blue*/
                break;
            case 4:
                glColor3f(1.0,1.0,0.0);/*yellow*/
                break;
            case 5:
                glColor3f(1.0,0.0,1.0); /*magenda*/
                break;
            case 6:
                glColor3f(0.0,1.0,1.0);/*cyan*/
                break;
            case 7:
                glColor3f(1.0,0.5,1.0);/*orange*/
                break;
            case 8:
                glColor3f(0.5,1.0,0.5); /*light green*/
                break;
            default:
                glColor3f(0,0,0); /*black*/
                break;
      }

      glMatrixMode(GL_PROJECTION);
      glLoadIdentity();
      gluOrtho2D(0.0, 500.0, 0.0, 500.0);
      glMatrixMode(GL_MODELVIEW);
}

/* Where the fractal is drawn-HEXAGON*/
void hexagon(void)
{
    /* define a point data type */
    typedef GLfloat point2[3];
    point2 vertices[6]={{250,500},{500,370},{500,120},{250,0},{0,120},{0,370}}; /*a hexagon*/
    int j, k;
    int rand();       /* standard random number generator */
    point2 p ={0.0,50.0};  /* An arbitrary initial point inside hexagon */
    glClear(GL_COLOR_BUFFER_BIT);  /*clear the window */
    /* compute and plots 5000 new points */

    for( k=0; k<points; k++)
    {
         j=rand()%6; /* pick a vertex at random */
         /* Compute point halfway between selected vertex and old point */
         p[0] = (p[0]+vertices[j][0])*(1.0/3.0);
         p[1] = (p[1]+vertices[j][1])*(1.0/3.0);
        /* plot new point */
          glBegin(GL_POINTS);
               glVertex2fv(p);
          glEnd();
    }
     glFlush(); /* clear buffers */
     glutSwapBuffers();
}

/* Where the fractal is drawn-PENTAGON*/
void pentagon( void )
{
    /* define a point data type */
    typedef GLfloat point2[2];
    point2 vertices[5]={{100,0},{400,0},{495,300},{250,480},{5,300}}; /*a pentagon*/
    int j, k;
    int rand();       /* standard random number generator */
    point2 p ={0.0,50.0};  /* An arbitrary initial point inside pentagon */

    glClear(GL_COLOR_BUFFER_BIT);  /*clear the window */

    /* compute and plots new points */
    for( k=0; k<points; k++)
    {
         j=rand()%5; /* pick a vertex at random */
         /* Compute point halfway between selected vertex and old point */
         p[0] = (p[0]+vertices[j][0])*(3.0/8.0);
         p[1] = (p[1]+vertices[j][1])*(3.0/8.0);
         /* plot new point */
          glBegin(GL_POINTS);
               glVertex2fv(p);
          glEnd();
     }
     glFlush(); /* clear buffers */
     glutSwapBuffers();
 }

/* Where the fractal is drawn-FERN*/
void barnsleyFern(void)
{
	typedef GLfloat point2[2];
	point2 p = {0.0,50.0},newPoint;

	/*Probability table of the 3 transformations*/
	double probability[3] = {85, 92, 99};

	glClear ( GL_COLOR_BUFFER_BIT );

	/*main drawing loop*/
    for(int i=0; i<points; i++)
	{
	   GLfloat prevx=p[0];
	   GLfloat randnum=rand()%100 +1;
	   if (randnum<probability[0])
       {
            p[0]=p[0]*0.85+0.04*p[1];
            p[1]=prevx*(-0.04)+0.85*p[1]+1.6;
	   }
	   else if(randnum<probability[1])
	   {
            p[0]=0.2*p[0]-0.26*p[1];
            p[1]=0.23*prevx+0.22*p[1]+1.6;
	   }
	   else if(randnum<probability[2])
	   {
            p[0]=-0.15*p[0]+0.28*p[1];
            p[1]=0.26*prevx+0.24*p[1]+0.44;
	   }
	   else
	   {
            p[0]=0.0;
            p[1]=0.16*p[1];
	   }

	   newPoint[0]=p[0]*50+250;
	   newPoint[1]=p[1]*50;
	   if(i>100)
	   {
		  /*Plot new point*/
		  glBegin(GL_POINTS);
               glVertex2fv(newPoint);
          glEnd();
	   }
  }
	//  Clear all buffers.
	glFlush ( );
	glutSwapBuffers();
}

/* myDisplay */
void myDisplay()
{
    switch(option)
    {
        case PENTAGON:
            pentagon();
            break;
        case HEXAGON:
            hexagon();
            break;
        case BARNSLEY:
            barnsleyFern();
            break;
    }
}

/*Function for the pop-up menu*/
void menu (int id)
{
    switch(id)
    {
        case 1:
            points=100000;
            break;
        case 2:
            points=200000;
            break;
        case 3:
            option = PENTAGON;
            break;
        case 4:
            option = HEXAGON;
            break;
        case 5:
            option = BARNSLEY;
            break;
        case 6:
            exit(0);
            break;
    }
    glutPostRedisplay();
}

void mouseFunc(int button,int state,int x,int y){
	   if(button==GLUT_LEFT_BUTTON){
		   if(state==GLUT_DOWN&&move_init){
		      x1=x-lastX;
		      y1=y+lastY;
		      move_init = 0;
		    }
		    else
            {
                move_init = 1;
                lastX=-x1+x;
                lastY=y1-y;
            }
	   }
}

int main(int argc, char** argv)
{
    /* Standard GLUT initialization */
    glutInit(&argc,argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); /* double buffering */
    glutInitWindowSize(ww,wh); /* 500 x 500 pixel window */
    glutInitWindowPosition(0,0); /* place window top left on display */
    glutCreateWindow("Fractals"); /* window title */

    glutDisplayFunc(myDisplay); /* change the callback to hexagon or to pentagon or to barnsleyFern */

    glutCreateMenu(menu); /* POP-UP menu with right click*/
    glutAddMenuEntry("100000 points", 1);
    glutAddMenuEntry("200000 points", 2);
    glutAddMenuEntry("Pentagon", 3);
    glutAddMenuEntry("Hexagon", 4);
    glutAddMenuEntry("Fern", 5);
    glutAddMenuEntry("Quit", 6);
    glutAttachMenu(GLUT_RIGHT_BUTTON);

    glutMouseFunc(mouseFunc);
    glutMotionFunc(mouseMove);
    myinit(); /* set attributes */
    glutReshapeFunc (myReshape);
    glutMainLoop(); /* enter event loop */

    return 0;
}
