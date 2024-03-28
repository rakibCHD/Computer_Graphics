#include <windows.h>
#include <GL/glut.h>
#include <cmath>
#include<math.h>
#define PI 3.141516
float _moveA = 0.0f;
float _moveB = 0.0f;
float _moveC = 0.0f;
float _angle1 = 0.0f;
float speed = 0.02f;


GLfloat position = 0.5f;
GLfloat mov=0.0f;
GLfloat mov2=0.0f;
//GLfloat speed = 0.06558f;
GLfloat speedC1=0.01f;

void Run(int value)
{


    if(position >10 )
        position = 0.5f;




    position += speed;


glutPostRedisplay();//display refresh and render
glutTimerFunc(100, Run, 0);
}
void moveCloud(int value)
{
    if(mov >1.0)
        mov=-0.0f;

  mov +=speedC1;

  glutPostRedisplay();
  glutTimerFunc(100,moveCloud,0);
}
void moveCloud2(int value)
{
    if(mov2 <-1.0)
        mov2=0.0f;

  mov2 -=speedC1;
  glutPostRedisplay();
  glutTimerFunc(100,moveCloud2,0);
}


void cloud()
{
glPushMatrix();
glTranslatef(mov,0.0f,0.0f);
glBegin (GL_POLYGON);//Cloud 2 part 1
glColor3ub (255,255,255);
glVertex2f(-0.477083f,0.603704f);
glVertex2f(-0.41875f,0.618519f);
glVertex2f(-0.386458f,0.622222f);
glVertex2f(-0.363542f,0.612963f);
glVertex2f(-0.346875f,0.601852f);
glVertex2f(-0.328125f,0.587037f);
glVertex2f(-0.325f,0.577778f);
glEnd();

glBegin (GL_POLYGON);//Cloud 2 part 2
glVertex2f(-0.325f,0.577778f);
glVertex2f(-0.303125f,0.622222f);
glVertex2f(-0.2875f,0.640741f);
glVertex2f(-0.26875f,0.651852f);
glVertex2f(-0.251042f,0.651852f);
glVertex2f(-0.238542f,0.644444f);
glVertex2f(-0.222917f,0.611111f);
glVertex2f(-0.216667f,0.561111f);
glEnd();

glBegin (GL_POLYGON);//Cloud 2 part 3
glVertex2f(-0.216667f,0.561111f);
glVertex2f(-0.20625f,0.585185f);
glVertex2f(-0.19375f,0.607407f);
glVertex2f(-0.179167f,0.62963f);
glVertex2f(-0.163542f,0.651852f);
glVertex2f(-0.151042f,0.672222f);
glVertex2f(-0.136458f,0.688889f);
glVertex2f(-0.125f,0.701852f);
glVertex2f(-0.111458f,0.716667f);
glVertex2f(-0.096875f,0.72963f);
glVertex2f(-0.0802083f,0.740741f);
glVertex2f(-0.0666667f,0.744444f);
glVertex2f(-0.0541667f,0.742593f);
glVertex2f(-0.04375f,0.737037f);
glVertex2f(-0.0364583f,0.725926f);
glVertex2f(-0.0322917f,0.709259f);
glVertex2f(-0.03125f,0.688889f);
glVertex2f(-0.0333333f,0.67037f);
glVertex2f(-0.0354167f,0.653704f);
glVertex2f(-0.0385417f,0.635185f);
glVertex2f(-0.04375f,0.618519f);
glVertex2f(-0.0489583f,0.601852f);
glVertex2f(-0.0552083f,0.583333f);
glVertex2f(-0.0614583f,0.568519f);
glVertex2f(-0.065625f,0.555556f);
glVertex2f(-0.0697917f,0.546296f);
glVertex2f(-0.0697917f,0.537037f);
glEnd();

glBegin (GL_POLYGON);//Cloud 2 part 4
glVertex2f(-0.0697917f,0.537037f);
glVertex2f(-0.0625f,0.559259f);
glVertex2f(-0.05625f,0.575926f);
glVertex2f(-0.0489583f,0.590741f);
glVertex2f(-0.0395833f,0.605556f);
glVertex2f(-0.03125f,0.618519f);
glVertex2f(-0.0208333f,0.62963f);
glVertex2f(-0.0114583f,0.642593f);
glVertex2f(-0.00104167f,0.65f);
glVertex2f(0.0135417f,0.659259f);
glVertex2f(0.028125f,0.661111f);
glVertex2f(0.040625f,0.659259f);
glVertex2f(0.053125f,0.655556f);
glVertex2f(0.0645833f,0.644444f);
glVertex2f(0.0729167f,0.631481f);
glVertex2f(0.0791667f,0.62037f);
glVertex2f(0.0864583f,0.601852f);
glVertex2f(0.090625f,0.581481f);
glVertex2f(0.09375f,0.561111f);
glVertex2f(0.0958333f,0.542593f);
glVertex2f(0.096875f,0.525926f);
glVertex2f(0.0979167f,0.509259f);
glEnd();

glBegin (GL_POLYGON);//Cloud 2 part 5
glVertex2f(0.096875f,0.509259f);
glVertex2f(0.140625f,0.522222f);
glVertex2f(0.164583f,0.52037f);
glVertex2f(0.197917f,0.509259f);
glVertex2f(0.233333f,0.487037f);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(mov2,0.0f,0.0f);
glBegin (GL_POLYGON);//Cloud 3 part 1
glVertex2f(0.378125f,0.674074f);
glVertex2f(0.388542f,0.683333f);
glVertex2f(0.403125f,0.688889f);
glVertex2f(0.433333f,0.688889f);
glVertex2f(0.453125f,0.683333f);
glVertex2f(0.463542f,0.672222f);
glVertex2f(0.467708f,0.662963f);
glEnd();

glBegin (GL_POLYGON);//Cloud 3 part 2
glVertex2f(0.467708f,0.662963f);
glVertex2f(0.477083f,0.687037f);
glVertex2f(0.490625f,0.709259f);
glVertex2f(0.50625f,0.733333f);
glVertex2f(0.520833f,0.75f);
glVertex2f(0.535417f,0.764815f);
glVertex2f(0.553125f,0.774074f);
glVertex2f(0.571875f,0.775926f);
glVertex2f(0.590625f,0.772222f);
glVertex2f(0.604167f,0.764815f);
glVertex2f(0.617708f,0.751852f);
glVertex2f(0.630208f,0.735185f);
glVertex2f(0.641667f,0.711111f);
glVertex2f(0.648958f,0.688889f);
glVertex2f(0.654167f,0.664815f);
glVertex2f(0.657292f,0.640741f);
glEnd();

glBegin (GL_POLYGON);//Cloud 3 part 3
glVertex2f(0.657292f,0.640741f);
glVertex2f(0.663542f,0.65f);
glVertex2f(0.676042f,0.653704f);
glVertex2f(0.695833f,0.653704f);
glVertex2f(0.727083f,0.646296f);
glVertex2f(0.748958f,0.638889f);
glVertex2f(0.76875f,0.627778f);
glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(mov,0.0f,0.0f);
glTranslatef(0.5f,0.2f,0.0f);
glBegin (GL_POLYGON);//Cloud 4 part 1
glVertex2f(0.378125f,0.674074f);
glVertex2f(0.388542f,0.683333f);
glVertex2f(0.403125f,0.688889f);
glVertex2f(0.433333f,0.688889f);
glVertex2f(0.453125f,0.683333f);
glVertex2f(0.463542f,0.672222f);
glVertex2f(0.467708f,0.662963f);
glEnd();

glBegin (GL_POLYGON);//Cloud 4 part 2
glVertex2f(0.467708f,0.662963f);
glVertex2f(0.477083f,0.687037f);
glVertex2f(0.490625f,0.709259f);
glVertex2f(0.50625f,0.733333f);
glVertex2f(0.520833f,0.75f);
glVertex2f(0.535417f,0.764815f);
glVertex2f(0.553125f,0.774074f);
glVertex2f(0.571875f,0.775926f);
glVertex2f(0.590625f,0.772222f);
glVertex2f(0.604167f,0.764815f);
glVertex2f(0.617708f,0.751852f);
glVertex2f(0.630208f,0.735185f);
glVertex2f(0.641667f,0.711111f);
glVertex2f(0.648958f,0.688889f);
glVertex2f(0.654167f,0.664815f);
glVertex2f(0.657292f,0.640741f);
glEnd();

glBegin (GL_POLYGON);//Cloud 4 part 3
glVertex2f(0.657292f,0.640741f);
glVertex2f(0.663542f,0.65f);
glVertex2f(0.676042f,0.653704f);
glVertex2f(0.695833f,0.653704f);
glVertex2f(0.727083f,0.646296f);
glVertex2f(0.748958f,0.638889f);
glVertex2f(0.76875f,0.627778f);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(mov,0.0f,0.0f);
glColor3d(255, 255, 255);
glTranslatef(0.3, 0.1, 0);
glutSolidSphere(0.025f, 50,50);
glPopMatrix();

glPushMatrix();
glTranslatef(mov,0.0f,0.0f);
glColor3d(255, 255, 255);
glTranslatef(0.4, 0.1, 0);
glutSolidSphere(0.125f, 50,50);
glPopMatrix();

glPushMatrix();
glTranslatef(mov,0.0f,0.0f);
glColor3d(255, 255, 255);
glTranslatef(0.3, 0.2, 0);
glutSolidSphere(0.1f, 50,50);
glPopMatrix();
glPushMatrix();
glTranslatef(mov,0.0f,0.0f);
glColor3d(255, 255, 255);
glTranslatef(0.3, 0.05, 0);
glutSolidSphere(0.125f, 50,50);
glPopMatrix();

glPushMatrix();
glTranslatef(mov,0.0f,0.0f);
glColor3d(255, 255, 220);
glTranslatef(0.2, 0.125, 0);
glutSolidSphere(0.1f, 50,50);
glPopMatrix();

glPushMatrix();
glTranslatef(mov,0.0f,0.0f);
glColor3d(255, 255, 255);
glTranslatef(0.5, 0.125, 0);
glutSolidSphere(0.1f, 50,50);
glPopMatrix();

    ///cloud3///
glPushMatrix();
glTranslatef(mov2,0.0f,0.0f);
glColor3d(255, 255, 255);
glTranslatef(-0.3, 0.4, 0);
glutSolidSphere(0.025f, 50,50);
glPopMatrix();

glPushMatrix();
glTranslatef(mov2,0.0f,0.0f);
glColor3d(255, 255, 255);
glTranslatef(-0.4, 0.4, 0);
glutSolidSphere(0.125f, 50,50);
glPopMatrix();

glPushMatrix();
glTranslatef(mov2,0.0f,0.0f);
glColor3d(255, 255, 255);
glTranslatef(-0.3, 0.5, 0);
glutSolidSphere(0.1f, 50,50);
glPopMatrix();

glPushMatrix();
glTranslatef(mov2,0.0f,0.0f);
glColor3d(255, 255, 255);
glTranslatef(-0.3, 0.35, 0);
glutSolidSphere(0.125f, 50,50);
glPopMatrix();

glPushMatrix();
glTranslatef(mov2,0.0f,0.0f);
glColor3d(255, 255, 220);
glTranslatef(-0.2, 0.425, 0);
glutSolidSphere(0.1f, 50,50);
glPopMatrix();

/*glPushMatrix();
glTranslatef(mov2,0.0f,0.0f);
glColor3d(255, 255, 255);
glTranslatef(-0.5, 0.425, 0);
glutSolidSphere(0.1f, 50,50);
glPopMatrix();*/
}

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(.5);
	glPointSize(5.0);


	//sky
    glBegin(GL_QUADS);
    glColor3ub(150,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(145,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.95f);
	glVertex2f(-1.0f, 0.95f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(140,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.9f);
	glVertex2f(-1.0f, 0.9f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(135,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.85f);
	glVertex2f(-1.0f, 0.85f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(130,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.8f);
	glVertex2f(-1.0f, 0.8f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(125,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.75f);
	glVertex2f(-1.0f, 0.75f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(120,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.7f);
	glVertex2f(-1.0f, 0.7f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(115,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.65f);
	glVertex2f(-1.0f, 0.65f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(110,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.60f);
	glVertex2f(-1.0f, 0.60f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(105,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.55f);
	glVertex2f(-1.0f, 0.55f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(100,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.5f);
	glVertex2f(-1.0f, 0.5f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(95,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.45f);
	glVertex2f(-1.0f, 0.45f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(90,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.4f);
	glVertex2f(-1.0f, 0.4f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.35f);
	glVertex2f(-1.0f, 0.35f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(80,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(-1.0f, 0.3f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(75,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.25f);
	glVertex2f(-1.0f, 0.25f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(70,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.2f);
	glVertex2f(-1.0f, 0.2f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(65,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.15f);
	glVertex2f(-1.0f, 0.15f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(60,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.1f);
	glVertex2f(-1.0f, 0.1f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(55,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.05f);
	glVertex2f(-1.0f, 0.05f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(50,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(45,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, -0.05f);
	glVertex2f(-1.0f, -0.05f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(40,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, -0.1f);
	glVertex2f(-1.0f, -0.1f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(35,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, -0.15f);
	glVertex2f(-1.0f, -0.15f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(30,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, -0.2f);
	glVertex2f(-1.0f, -0.2f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(25,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, -0.25f);
	glVertex2f(-1.0f, -0.25f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(20,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, -0.30f);
	glVertex2f(-1.0f, -0.30f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(15,200,250);
    glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, -0.35f);
	glVertex2f(-1.0f, -0.35f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();

    ///sun///
    glPushMatrix();
    glTranslatef(0.4f, 0.6f, 0.0f);
    glColor3ub(255, 255, 0);
    glutSolidSphere(0.1f, 50,50);
    glPopMatrix();





    //nightmode
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, -0.4f);
    glEnd();

    //moon
    int i;
    int j;
	GLfloat x=-0.6f; GLfloat y=0.8f; GLfloat radius =.1f;
	int triangleAmount = 100;
	GLfloat twicePi = 2.0f * PI;
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

	GLfloat a=-0.55f; GLfloat b=0.8f;
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a, b);
		for(j = 0; j <= triangleAmount;j++)
        {
			glVertex2f( a + (radius * cos(j *  twicePi / triangleAmount)),
                        b + (radius * sin(j * twicePi / triangleAmount)) );
		}
    glEnd();

    //star
    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.1f, 0.9f);
	glVertex2f(-0.0f, 0.7f);
	glVertex2f(-0.4f, 0.9f);
	glVertex2f(-0.1f, 0.5f);
	glVertex2f(-0.0f, 0.4f);
	glVertex2f(-0.3f, 0.5f);
	glVertex2f(-0.25f, 0.75f);
	glVertex2f(-0.55f, 0.85f);
	glVertex2f(-0.7f, 0.7f);
	glVertex2f(-0.9f, 0.9f);
	glVertex2f(-0.85f, 0.75f);
	glVertex2f(-0.5f, 0.5f);
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.95f, 0.5f);
	glVertex2f(-0.9f, 0.4f);
	glVertex2f(-0.85f, 0.6f);
	glVertex2f(0.1f, 0.9f);
	glVertex2f(0.0f, 0.7f);
	glVertex2f(0.4f, 0.9f);
	glVertex2f(0.25f, 0.75f);
	glVertex2f(0.9f, 0.9f);
	glVertex2f(0.85f, 0.75f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(0.3f, 0.45f);
	glVertex2f(0.7f, 0.9f);
	glVertex2f(0.6f, 0.5f);
	glVertex2f(0.95f, 0.5f);
	glVertex2f(0.9f, 0.4f);
	glVertex2f(0.85f, 0.6f);
	glEnd();

    //cloud();//cloud

    //beach
	glBegin(GL_QUADS);           //beach
	glColor3f(0.9f, 0.9f, 0.45f);
	glVertex2f(1.0f, -0.45f);
	glVertex2f(1.0f, -0.46f);
	glVertex2f(-1.0f, -0.46f);
	glVertex2f(-1.0f, -0.45f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.9f, 0.9f, 0.5f);
	glVertex2f(1.0f, -0.46f);
	glVertex2f(1.0f, -0.47f);
	glVertex2f(-1.0f, -0.47);
	glVertex2f(-1.0f, -0.46f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.9f, 0.9f, 0.55f);
	glVertex2f(1.0f, -0.47f);
	glVertex2f(1.0f, -0.48f);
	glVertex2f(-1.0f, -0.48f);
	glVertex2f(-1.0f, -0.47f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.9f, 0.9f, 0.6f);
	glVertex2f(1.0f, -0.48f);
	glVertex2f(1.0f, -0.49f);
	glVertex2f(-1.0f, -0.49f);
	glVertex2f(-1.0f, -0.48f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.9f, 0.9f, 0.65f);
	glVertex2f(1.0f, -0.49f);
	glVertex2f(1.0f, -0.50f);
	glVertex2f(-1.0f, -0.50f);
	glVertex2f(-1.0f, -0.49f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.9f, 0.9f, 0.7f);
	glVertex2f(1.0f, -0.50f);
	glVertex2f(1.0f, -0.51f);
	glVertex2f(-1.0f, -0.51f);
	glVertex2f(-1.0f, -0.50f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.9f, 0.9f, 0.75f);
	glVertex2f(1.0f, -0.51f);
	glVertex2f(1.0f, -0.525f);
	glVertex2f(-1.0f, -0.525f);
	glVertex2f(-1.0f, -0.51f);
	glEnd();


	glPushMatrix();
    glTranslatef(mov2,0.0f,0.0f);
	glBegin(GL_QUADS);           //Water
	glColor3f(0.55f, 1.0f, 1.0f);
	glVertex2f(2.5f, -0.525f);
	glVertex2f(2.5f, -0.55f);
	glVertex2f(-1.0f, -0.55f);
	glVertex2f(-1.0f, -0.525f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.5f, 1.0f, 1.0f);
	glVertex2f(2.5f, -0.55f);
	glVertex2f(2.5f, -0.6f);
	glVertex2f(-1.0f, -0.6f);
	glVertex2f(-1.0f, -0.55f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.45f, 1.0f, 1.0f);
	glVertex2f(2.5f, -0.6f);
	glVertex2f(2.5f, -0.65f);
	glVertex2f(-1.0f, -0.65f);
	glVertex2f(-1.0f, -0.6f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.4f, 1.0f, 1.0f);
	glVertex2f(2.5f, -0.65f);
	glVertex2f(2.5f, -0.7f);
	glVertex2f(-1.0f, -0.7f);
	glVertex2f(-1.0f, -0.65f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.35f, 1.0f, 1.0f);
	glVertex2f(2.5f, -0.7f);
	glVertex2f(2.5f, -0.75f);
	glVertex2f(-1.0f, -0.75f);
	glVertex2f(-1.0f, -0.7f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.3f, 1.0f, 1.0f);
	glVertex2f(2.5f, -0.75f);
	glVertex2f(2.5f, -0.8f);
	glVertex2f(-1.0f, -0.8f);
	glVertex2f(-1.0f, -0.75f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.25f, 1.0f, 1.0f);
	glVertex2f(2.5f, -0.8f);
	glVertex2f(2.5f, -0.85f);
	glVertex2f(-1.0f, -0.85f);
	glVertex2f(-1.0f, -0.8f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.2f, 1.0f, 1.0f);
	glVertex2f(2.5f, -0.85f);
	glVertex2f(2.5f, -0.9f);
	glVertex2f(-1.0f, -0.9f);
	glVertex2f(-1.0f, -0.85f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.15f, 1.0f, 1.0f);
	glVertex2f(2.5f, -0.9f);
	glVertex2f(2.5f, -0.95f);
	glVertex2f(-1.0f, -0.95f);
	glVertex2f(-1.0f, -0.9f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.1f, 1.0f, 1.0f);
	glVertex2f(2.5f, -0.95f);
	glVertex2f(2.5f, -1.f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(-1.0f, -0.95f);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.6f, 1.0f, 1.0f);
    glVertex2f(-1,-0.525);//1
    glVertex2f(-0.9,-0.475);
    glVertex2f(-0.8,-0.525);

    glVertex2f(-0.8,-0.525);//2
    glVertex2f(-0.7,-0.475);
    glVertex2f(-0.6,-0.525);

    glVertex2f(-0.6,-0.525);//3
    glVertex2f(-0.5,-0.475);
    glVertex2f(-0.4,-0.525);

    glVertex2f(-0.4,-0.525);//4
    glVertex2f(-0.3,-0.475);
    glVertex2f(-0.2,-0.525);

    glVertex2f(-0.2,-0.525);//5
    glVertex2f(-0.1,-0.475);
    glVertex2f(0.0,-0.525);

    glVertex2f(0.0,-0.525);//6
    glVertex2f(0.1,-0.475);
    glVertex2f(0.2,-0.525);

    glVertex2f(0.2,-0.525);//7
    glVertex2f(0.3,-0.475);
    glVertex2f(0.4,-0.525);

    glVertex2f(0.4,-0.525);//8
    glVertex2f(0.5,-0.475);
    glVertex2f(0.6,-0.525);

    glVertex2f(0.6,-0.525);//9
    glVertex2f(0.7,-0.475);
    glVertex2f(0.8,-0.525);

    glVertex2f(0.8,-0.525);//10
    glVertex2f(0.9,-0.475);
    glVertex2f(1.0,-0.525);

    glVertex2f(1.0,-0.525);//11
    glVertex2f(1.1,-0.475);
    glVertex2f(1.2,-0.525);

    glVertex2f(1.2,-0.525);//12
    glVertex2f(1.3,-0.475);
    glVertex2f(1.4,-0.525);

    glVertex2f(1.4,-0.525);//13
    glVertex2f(1.5,-0.475);
    glVertex2f(1.6,-0.525);

    glVertex2f(1.6,-0.525);//14
    glVertex2f(1.7,-0.475);
    glVertex2f(1.8,-0.525);

    glVertex2f(1.8,-0.525);//15
    glVertex2f(1.9,-0.475);
    glVertex2f(2.0,-0.525);
    glEnd();

     //Road
	glBegin(GL_QUADS); //Road
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, -0.45f);
	glVertex2f(2.5f, -0.45f);
	glVertex2f(2.5f, -0.4f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.9f, -0.425f);
	glVertex2f(-0.8f, -0.425f);
	glVertex2f(-0.7f, -0.425f);
	glVertex2f(-0.6f, -0.425f);
	glVertex2f(-0.5f, -0.425f);
	glVertex2f(-0.4f, -0.425f);
	glVertex2f(-0.3f, -0.425f);
	glVertex2f(-0.2f, -0.425f);
	glVertex2f(-0.1f, -0.425f);
	glVertex2f(0.0f, -0.425f);
	glVertex2f(0.1f, -0.425f);
	glVertex2f(0.2f, -0.425f);
	glVertex2f(0.3f, -0.425f);
	glVertex2f(0.4f, -0.425f);
	glVertex2f(0.5f, -0.425f);
	glVertex2f(0.6f, -0.425f);
	glVertex2f(0.7f, -0.425f);
	glVertex2f(0.8f, -0.425f);
	glVertex2f(0.9f, -0.425f);
	glVertex2f(1.0f, -0.425f);
	glVertex2f(1.1f, -0.425f);
	glVertex2f(1.2f, -0.425f);
	glVertex2f(1.3f, -0.425f);
	glVertex2f(1.4f, -0.425f);
	glVertex2f(1.5f, -0.425f);
	glVertex2f(1.6f, -0.425f);
	glVertex2f(1.7f, -0.425f);
	glVertex2f(1.8f, -0.425f);
	glVertex2f(1.9f, -0.425f);
	glVertex2f(2.0f, -0.425f);
	glEnd();

	//Small Boat
	glBegin(GL_QUADS);            //boat 1
	glColor3f(0.8f, 0.8f, 0.5f);
	glVertex2f(-0.2f, -0.9f);
	glVertex2f(-0.4f, -0.9);
	glVertex2f(-0.5f, -0.8f);
	glVertex2f(-0.2f, -0.85f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.8f, 0.5f);
	glVertex2f(-0.2f, -0.85f);
	glVertex2f(-0.4f, -0.85);
	glVertex2f(-0.3f, -0.75f);
	glVertex2f(-0.2f, -0.8f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.2f, -0.9f);
	glVertex2f(-0.4f, -0.9);
	glVertex2f(-0.4f, -0.9);
	glVertex2f(-0.5f, -0.8f);
	glVertex2f(-0.5f, -0.8f);
	glVertex2f(-0.2f, -0.85f);
	glVertex2f(-0.2f, -0.85f);
	glVertex2f(-0.2f, -0.9f);
	glVertex2f(-0.375f, -0.825);
	glVertex2f(-0.3f, -0.75f);
	glVertex2f(-0.3f, -0.75f);
	glVertex2f(-0.2f, -0.8f);
	glVertex2f(-0.2f, -0.8f);
	glVertex2f(-0.2f, -0.85f);
    glVertex2f(-0.25f, -0.77);
	glVertex2f(-0.275f, -0.84f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.80f, 1.0f, 1.0f);
	glVertex2f(-0.205f, -0.835f);
	glVertex2f(-0.205f, -0.81);
	glVertex2f(-0.25f, -0.79f);
	glVertex2f(-0.2625f, -0.825f);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.80f, 1.0f, 1.0f);
	glVertex2f(-0.2625f, -0.7825f);
	glVertex2f(-0.2975f, -0.7625);
	glVertex2f(-0.35f, -0.8125f);
	glVertex2f(-0.28f, -0.825f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.205f, -0.835f);
	glVertex2f(-0.205f, -0.81);
	glVertex2f(-0.205f, -0.81);
	glVertex2f(-0.25f, -0.79f);
	glVertex2f(-0.25f, -0.79f);
	glVertex2f(-0.2625f, -0.825f);
	glVertex2f(-0.2625f, -0.825f);
	glVertex2f(-0.205f, -0.835f);
    glVertex2f(-0.2625f, -0.7825f);
    glVertex2f(-0.2975f, -0.7625);
	glVertex2f(-0.2975f, -0.7625);
	glVertex2f(-0.35f, -0.8125f);
	glVertex2f(-0.35f, -0.8125f);
	glVertex2f(-0.28f, -0.825f);
	glVertex2f(-0.28f, -0.825f);
	glVertex2f(-0.2625f, -0.7825f);
	glEnd();

	glBegin(GL_QUADS);            //boat 2
	glColor3f(0.8f, 0.8f, 0.5f);
	glVertex2f(0.9f, -0.65f);
	glVertex2f(0.7f, -0.65);
	glVertex2f(0.6f, -0.55f);
	glVertex2f(0.9f, -0.6f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.8f, 0.5f);
	glVertex2f(0.9f, -0.6f);
	glVertex2f(0.7f, -0.6);
	glVertex2f(0.8f, -0.5f);
	glVertex2f(0.9f, -0.55f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.9f, -0.65f);
	glVertex2f(0.7f, -0.65);
	glVertex2f(0.7f, -0.65);
	glVertex2f(0.6f, -0.55f);
	glVertex2f(0.6f, -0.55f);
	glVertex2f(0.9f, -0.6f);
	glVertex2f(0.9f, -0.6f);
	glVertex2f(0.9f, -0.65f);
	glVertex2f(0.7255f, -0.575);
	glVertex2f(0.8f, -0.5f);
	glVertex2f(0.8f, -0.5f);
	glVertex2f(0.9f, -0.55f);
	glVertex2f(0.9f, -0.55f);
	glVertex2f(0.9f, -0.65f);
	glVertex2f(0.85f, -0.52);
	glVertex2f(0.825f, -0.59f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.80f, 1.0f, 1.0f);
	glVertex2f(0.895f, -0.585f);
	glVertex2f(0.895f, -0.56);
	glVertex2f(0.85f, -0.54f);
	glVertex2f(0.8375f, -0.575f);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.80f, 1.0f, 1.0f);
	glVertex2f(0.8375f, -0.5325f);
	glVertex2f(0.8025f, -0.5125);
	glVertex2f(0.75f, -0.5625f);
	glVertex2f(0.82f, -0.575f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.895f, -0.585f);
	glVertex2f(0.895f, -0.56);
	glVertex2f(0.895f, -0.56);
	glVertex2f(0.85f, -0.54f);
	glVertex2f(0.85f, -0.54f);
	glVertex2f(0.8375f, -0.575f);
	glVertex2f(0.8375f, -0.575f);
	glVertex2f(0.895f, -0.585f);
	glVertex2f(0.8375f, -0.5325f);
	glVertex2f(0.8025f, -0.5125);
	glVertex2f(0.8025f, -0.5125);
	glVertex2f(0.75f, -0.5625f);
	glVertex2f(0.75f, -0.5625f);
	glVertex2f(0.82f, -0.575f);
	glVertex2f(0.82f, -0.575f);
	glVertex2f(0.8375f, -0.5325f);
	glEnd();


	//BurjKhalifa
	glBegin(GL_QUADS);              // 1
	glColor3f(0.45f, 0.6f, 0.7f);
	glVertex2f(0.025f, -0.4f);
	glVertex2f(0.025f, -0.25f);
	glVertex2f(-0.20f, -0.25f);
	glVertex2f(-0.20f, -0.4f);
	glEnd();

	glBegin(GL_QUADS);              // 2
	glColor3f(0.45f, 0.6f, 0.7f);
	glVertex2f(0.0f, -0.25f);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(-0.20f, -0.1f);
	glVertex2f(-0.20f, -0.25f);
	glEnd();

	glBegin(GL_QUADS);                // 3
	glColor3f(0.45f, 0.6f, 0.7f);
	glVertex2f(0.0f, -0.10f);
	glVertex2f(0.0f, 0.05f);
	glVertex2f(-0.175f, 0.05f);
	glVertex2f(-0.175f, -0.1f);
	glEnd();

	glBegin(GL_QUADS);              // 4
	glColor3f(0.45f, 0.6f, 0.7f);
	glVertex2f(-0.025f, 0.05f);
	glVertex2f(-0.025f, 0.2f);
	glVertex2f(-0.175f, 0.2f);
	glVertex2f(-0.175f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);               // 5
	glColor3f(0.45f, 0.6f, 0.7f);
	glVertex2f(-0.025f, 0.2f);
	glVertex2f(-0.025f, 0.35f);
	glVertex2f(-0.15f, 0.35f);
	glVertex2f(-0.15f, 0.2f);
	glEnd();

	glBegin(GL_QUADS);               // 6
	glColor3f(0.45f, 0.6f, 0.7f);
	glVertex2f(-0.05f, 0.35f);
	glVertex2f(-0.05, 0.5f);
	glVertex2f(-0.15f, 0.5f);
	glVertex2f(-0.15f, 0.35f);
	glEnd();

	glBegin(GL_QUADS);              // 7
	glColor3f(0.45f, 0.6f, 0.7f);
	glVertex2f(-0.05f, 0.5f);
	glVertex2f(-0.05f, 0.65f);
	glVertex2f(-0.125f, 0.65f);
	glVertex2f(-0.125f, 0.5f);
	glEnd();

    glBegin(GL_QUADS);              // 8
	glColor3f(0.45f, 0.6f, 0.7f);
	glVertex2f(-0.075f, 0.65f);
	glVertex2f(-0.075f, 0.775f);
	glVertex2f(-0.125f, 0.775f);
	glVertex2f(-0.125f, 0.65f);
	glEnd();

	glBegin(GL_QUADS);              // 9
	glColor3f(0.45f, 0.6f, 0.7f);
	glVertex2f(-0.075f, 0.775f);
	glVertex2f(-0.075f, 0.825f);
	glVertex2f(-0.1f, 0.825f);
	glVertex2f(-0.1f, 0.775f);
	glEnd();

	glBegin(GL_QUADS);             // 10
	glColor3f(0.45f, 0.6f, 0.7f);
	glVertex2f(-0.09f, 0.825f);
	glVertex2f(-0.09f, 0.925f);
	glVertex2f(-0.1f, 0.925f);
	glVertex2f(-0.1f, 0.825f);
	glEnd();

	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, -0.4f);
	glVertex2f(0.0f, -0.25f);
	glVertex2f(-0.025f, -0.4f);
	glVertex2f(-0.025f, 0.05f);
	glVertex2f(-0.050f, -0.4f);
	glVertex2f(-0.050f, 0.35f);
	glVertex2f(-0.075f, -0.4f);
	glVertex2f(-0.075f, 0.65f);
	glVertex2f(-0.1f, -0.4f);
	glVertex2f(-0.1f, 0.775f);
	glVertex2f(-0.125f, -0.4f);
	glVertex2f(-0.125f, 0.5f);
	glVertex2f(-0.15f, -0.4f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(-0.175f, -0.4f);
	glVertex2f(-0.175f, -0.1f);
	glEnd();

	glBegin(GL_LINES);              //Lines
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.025f, -0.4f);
	glVertex2f(-0.20f, -0.4f);
	glVertex2f(0.025f, -0.3625f);
	glVertex2f(-0.20f, -0.3625f);
	glVertex2f(0.025f, -0.325f);
	glVertex2f(-0.20f, -0.325f);
	glVertex2f(0.025f, -0.2875f);
	glVertex2f(-0.20f, -0.2875f);
	glVertex2f(0.025f, -0.25f);
	glVertex2f(-0.20f, -0.25f);

	glVertex2f(0.0f, -0.1f);      //Lines
	glVertex2f(-0.20f, -0.1f);
	glVertex2f(0.0f, -0.1375f);
	glVertex2f(-0.20f, -0.1375f);
	glVertex2f(0.0f, -0.175f);
	glVertex2f(-0.20f, -0.175f);
	glVertex2f(0.0f, -0.2175f);
	glVertex2f(-0.20f, -0.2175f);
	glVertex2f(-0.20f, -0.25f);
	glVertex2f(0.0f, -0.25f);

	glVertex2f(0.0f, 0.05f);      //Lines
	glVertex2f(-0.175f, 0.05f);
	glVertex2f(0.0f, 0.0175f);
	glVertex2f(-0.175f, 0.0175f);
	glVertex2f(0.0f, -0.025f);
	glVertex2f(-0.175f, -0.025f);
	glVertex2f(0.0f, -0.0625f);
	glVertex2f(-0.175f, -0.0625f);
	glVertex2f(-0.175f, -0.1f);
	glVertex2f(0.0f, -0.10f);

	glVertex2f(-0.025f, 0.2f);       //Lines
	glVertex2f(-0.175f, 0.2f);
	glVertex2f(-0.025f, 0.1625f);
	glVertex2f(-0.175f, 0.1625f);
	glVertex2f(-0.025f, 0.125f);
	glVertex2f(-0.175f, 0.125f);
	glVertex2f(-0.025f, 0.0875f);
	glVertex2f(-0.175f, 0.0875f);
	glVertex2f(-0.175f, 0.05f);
	glVertex2f(-0.025f, 0.05f);

	glVertex2f(-0.025f, 0.35f);        //Lines
	glVertex2f(-0.15f, 0.35f);
	glVertex2f(-0.025f, 0.3125f);
	glVertex2f(-0.15f, 0.3125f);
	glVertex2f(-0.025f, 0.275f);
	glVertex2f(-0.15f, 0.275f);
	glVertex2f(-0.025f, 0.2375f);
	glVertex2f(-0.15f, 0.2375f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(-0.025f, 0.2f);

	glVertex2f(-0.05, 0.5f);        //Lines
	glVertex2f(-0.15f, 0.5f);
	glVertex2f(-0.05, 0.4625f);
	glVertex2f(-0.15f, 0.4625f);
	glVertex2f(-0.05, 0.425f);
	glVertex2f(-0.15f, 0.425f);
	glVertex2f(-0.05, 0.3875f);
	glVertex2f(-0.15f, 0.3875f);
	glVertex2f(-0.15f, 0.35f);
	glVertex2f(-0.05f, 0.35f);

	glVertex2f(-0.05f, 0.65f);        //Lines
	glVertex2f(-0.125f, 0.65f);
	glVertex2f(-0.05f, 0.6125f);
	glVertex2f(-0.125f, 0.6125f);
	glVertex2f(-0.05f, 0.575f);
	glVertex2f(-0.125f, 0.575f);
	glVertex2f(-0.05f, 0.5375f);
	glVertex2f(-0.125f, 0.5375f);
	glVertex2f(-0.125f, 0.5f);
	glVertex2f(-0.05f, 0.5f);

	glVertex2f(-0.075f, 0.775f);        //Lines
	glVertex2f(-0.125f, 0.775f);
	glVertex2f(-0.075f, 0.745f);
	glVertex2f(-0.125f, 0.745f);
	glVertex2f(-0.075f, 0.7125f);
	glVertex2f(-0.125f, 0.7125f);
	glVertex2f(-0.075f, 0.685f);
	glVertex2f(-0.125f, 0.685f);
	glVertex2f(-0.125f, 0.65f);
	glVertex2f(-0.075f, 0.65f);

	glVertex2f(-0.075f, 0.825f);      //Lines
	glVertex2f(-0.1f, 0.825f);
	glVertex2f(-0.075f, 0.8f);
	glVertex2f(-0.1f, 0.8f);
	glVertex2f(-0.1f, 0.775f);
	glVertex2f(-0.075f, 0.775f);
	glEnd();

	//Right side
	glBegin(GL_QUADS);              //Building 1
	glColor3f(0.2f, 0.5f, 0.7f);
	glVertex2f(0.05f, -0.4f);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.05f, -0.2f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.05f, -0.2f);
	glVertex2f(0.05f, -0.38f);
	glVertex2f(0.1f, -0.38f);
	glVertex2f(0.05f, -0.36f);
	glVertex2f(0.1f, -0.36f);
	glVertex2f(0.05f, -0.34f);
	glVertex2f(0.1f, -0.34f);
	glVertex2f(0.05f, -0.32f);
	glVertex2f(0.1f, -0.32f);
	glVertex2f(0.05f, -0.3f);
	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.05f, -0.28f);
	glVertex2f(0.1f, -0.28f);
	glVertex2f(0.05f, -0.26f);
	glVertex2f(0.1f, -0.26f);
	glVertex2f(0.05f, -0.24f);
	glVertex2f(0.1f, -0.24f);
	glVertex2f(0.05f, -0.22f);
	glVertex2f(0.1f, -0.22f);
	glVertex2f(0.05f, -0.2f);
	glVertex2f(0.1f, -0.2f);
	glVertex2f(0.058f, -0.18f);
	glVertex2f(0.1f, -0.18f);
	glVertex2f(0.068f, -0.16f);
	glVertex2f(0.1f, -0.16f);
	glVertex2f(0.08f, -0.14f);
	glVertex2f(0.1f, -0.14f);
	glVertex2f(0.09f, -0.12f);
	glVertex2f(0.1f, -0.12f);
	glEnd();

	glBegin(GL_QUADS);              //Building 2
	glColor3f(0.2f, 0.2f, 0.2f);
	glVertex2f(0.075f, -0.4f);
	glVertex2f(0.15f, -0.4f);
	glVertex2f(0.15f, -0.15f);
	glVertex2f(0.075f, -0.2f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.15f, -0.15f);
	glVertex2f(0.075f, -0.2f);
	glVertex2f(0.0875f, -0.4f);
	glVertex2f(0.0875f, -0.19f);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(0.1f, -0.18f);
	glVertex2f(0.1125f, -0.4f);
	glVertex2f(0.1125f, -0.175f);
	glVertex2f(0.125f, -0.4f);
	glVertex2f(0.125f, -0.165f);
	glVertex2f(0.1375f, -0.4f);
	glVertex2f(0.1375f, -0.155f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.075f, -0.375f);
	glVertex2f(0.15f, -0.375f);
	glVertex2f(0.075f, -0.35f);
	glVertex2f(0.15f, -0.35f);
	glVertex2f(0.075f, -0.325f);
	glVertex2f(0.15f, -0.325f);
	glVertex2f(0.075f, -0.3f);
	glVertex2f(0.15f, -0.3f);
	glVertex2f(0.075f, -0.275f);
	glVertex2f(0.15f, -0.275f);
	glVertex2f(0.075f, -0.25f);
	glVertex2f(0.15f, -0.25f);
	glVertex2f(0.075f, -0.225f);
	glVertex2f(0.15f, -0.225f);
	glVertex2f(0.075f, -0.2f);
	glVertex2f(0.15f, -0.2f);
	glVertex2f(0.1125f, -0.175f);
	glVertex2f(0.15f, -0.175f);
	glEnd();

	glBegin(GL_QUADS);              //Building 3
	glColor3f(0.0f, 0.25f, 0.65f);
	glVertex2f(0.16f, -0.4f);
	glVertex2f(0.26f, -0.4f);
	glVertex2f(0.26f, -0.075f);
	glVertex2f(0.16f, -0.125f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.26f, -0.075f);
	glVertex2f(0.16f, -0.125f);
	glVertex2f(0.17f, -0.4f);
	glVertex2f(0.17f, -0.12f);
	glVertex2f(0.18f, -0.4f);
	glVertex2f(0.18f, -0.117f);
	glVertex2f(0.19f, -0.4f);
	glVertex2f(0.19f, -0.112f);
	glVertex2f(0.2f, -0.4f);
	glVertex2f(0.2f, -0.105f);
	glVertex2f(0.21f, -0.4f);
	glVertex2f(0.21f, -0.1f);
	glVertex2f(0.22f, -0.4f);
	glVertex2f(0.22f, -0.095f);
	glVertex2f(0.23f, -0.4f);
	glVertex2f(0.23f, -0.085f);
	glVertex2f(0.24f, -0.4f);
	glVertex2f(0.24f, -0.0825f);
	glVertex2f(0.25f, -0.4f);
	glVertex2f(0.25f, -0.08f);
	glEnd();

	glBegin(GL_QUADS);              //Building 4
	glColor3f(0.75f, 0.75f, 0.75f);
	glVertex2f(0.27f, -0.4f);
	glVertex2f(0.3f, -0.4f);
	glVertex2f(0.3f, -0.2f);
	glVertex2f(0.27f, -0.15f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.3f, -0.2f);
	glVertex2f(0.27f, -0.15f);
	glVertex2f(0.28f, -0.4f);
	glVertex2f(0.28f, -0.165f);
	glVertex2f(0.29f, -0.4f);
	glVertex2f(0.29f, -0.18f);
	glEnd();

	glBegin(GL_QUADS);              //Building 5
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.31f, -0.4f);
	glVertex2f(0.33f, -0.4f);
	glVertex2f(0.33f, -0.1f);
	glVertex2f(0.31f, -0.1f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.32f, -0.1f);
	glVertex2f(0.32f, -0.4f);
	glVertex2f(0.31f, -0.125f);
	glVertex2f(0.33f, -0.125f);
	glVertex2f(0.31f, -0.15f);
	glVertex2f(0.33f, -0.15f);
	glVertex2f(0.31f, -0.175f);
	glVertex2f(0.33f, -0.175f);
	glVertex2f(0.31f, -0.2f);
	glVertex2f(0.33f, -0.2f);
	glVertex2f(0.31f, -0.225f);
	glVertex2f(0.33f, -0.225f);
	glVertex2f(0.31f, -0.25f);
	glVertex2f(0.33f, -0.25f);
	glVertex2f(0.31f, -0.275f);
	glVertex2f(0.33f, -0.275f);
	glEnd();

	glBegin(GL_QUADS);              //Building 7
	glColor3f(0.2f, 0.5f, 0.7f);
	glVertex2f(0.35f, -0.4f);
	glVertex2f(0.38f, -0.4f);
	glVertex2f(0.38f, -0.15f);
	glVertex2f(0.35f, -0.15f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.365f, -0.4f);
	glVertex2f(0.365f, -0.15f);
	glVertex2f(0.38f, -0.175f);
	glVertex2f(0.35f, -0.175f);
	glVertex2f(0.38f, -0.2f);
	glVertex2f(0.35f, -0.2f);
	glVertex2f(0.38f, -0.225f);
	glVertex2f(0.35f, -0.225f);
	glVertex2f(0.38f, -0.25f);
	glVertex2f(0.35f, -0.25f);
	glEnd();

	glBegin(GL_QUADS);              //Building 6
	glColor3f(0.33f, 0.33f, 0.33f);
	glVertex2f(0.34f, -0.4f);
	glVertex2f(0.36f, -0.4f);
	glVertex2f(0.36f, -0.2f);
	glVertex2f(0.34f, -0.2f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.35f, -0.4f);
	glVertex2f(0.35f, -0.2f);
	glEnd();
	glBegin(GL_LINES);                //Lines
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.34f, -0.225f);
	glVertex2f(0.36f, -0.225f);
	glVertex2f(0.34f, -0.25f);
	glVertex2f(0.36f, -0.25f);
	glEnd();

	glBegin(GL_QUADS);              //Building 8
	glColor3f(1.0f, .8f, 0.1f);
	glVertex2f(0.2f, -0.4f);
	glVertex2f(0.45f, -0.4f);
	glVertex2f(0.45f, -0.25f);
	glVertex2f(0.2f, -0.3f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.2f, -0.375f);
	glVertex2f(0.45f, -0.375f);
	glVertex2f(0.2f, -0.35f);
	glVertex2f(0.45f, -0.35f);
	glVertex2f(0.2f, -0.325f);
	glVertex2f(0.45f, -0.325f);
	glVertex2f(0.2f, -0.3f);
	glVertex2f(0.45f, -0.3f);
	glVertex2f(0.324f, -0.275f);
	glVertex2f(0.45f, -0.275f);
	glVertex2f(0.45f, -0.25f);
	glVertex2f(0.2f, -0.3f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.275f, -0.4f);
	glVertex2f(0.375f, -0.4f);
	glVertex2f(0.375f, -0.35f);
	glVertex2f(0.275f, -0.35f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.325f, -0.4f);
	glVertex2f(0.325f, -0.35f);
	glEnd();

	glBegin(GL_QUADS);              //Building 9
	glColor3f(1.0f, .8f, 0.1f);
	glVertex2f(0.5f, -0.4f);
	glVertex2f(0.55f, -0.4f);
	glVertex2f(0.55f, -0.05f);
	glVertex2f(0.5f, -0.05f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.51f, -0.4f);
	glVertex2f(0.54f, -0.4f);
	glVertex2f(0.54f, -0.03f);
	glVertex2f(0.51f, -0.03f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1.0f, .8f, 0.1f);
	glVertex2f(0.52f, -0.4f);
	glVertex2f(0.53f, -0.4f);
	glVertex2f(0.53f, -0.03f);
	glVertex2f(0.52f, -0.03f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.5f, -0.1f);
	glVertex2f(0.55f, -0.1f);
	glVertex2f(0.5f, -0.075f);
	glVertex2f(0.55f, -0.075f);
	glVertex2f(0.5f, -0.05f);
	glVertex2f(0.55f, -0.05f);
	glVertex2f(0.5f, -0.15f);
	glVertex2f(0.55f, -0.15f);
	glVertex2f(0.5f, -0.125f);
	glVertex2f(0.55f, -0.125f);
	glEnd();

	glBegin(GL_POLYGON);            //Building 10
	glColor3f(0.2f, 0.6f, 0.7f);
	glVertex2f(0.45f, -0.4f);
	glVertex2f(0.75f, -0.4f);
	glVertex2f(0.75f, -0.175f);
	glVertex2f(0.65f, -0.15f);
	glVertex2f(0.55f, -0.15f);
	glVertex2f(0.45f, -0.175f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.5f, -0.3f);
	glVertex2f(0.6f, -0.3f);
	glVertex2f(0.6f, -0.175f);
	glVertex2f(0.57f, -0.1675f);
	glVertex2f(0.53f, -0.1725f);
	glVertex2f(0.5f, -0.185f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.80f, 1.0f, 1.0f);
	glVertex2f(0.51f, -0.28f);
	glVertex2f(0.59f, -0.28f);
	glVertex2f(0.59f, -0.185f);
	glVertex2f(0.56f, -0.1775f);
	glVertex2f(0.54f, -0.1825f);
	glVertex2f(0.51f, -0.195f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.45f, -0.175f);
	glVertex2f(0.55f, -0.15f);
	glVertex2f(0.55f, -0.15f);
	glVertex2f(0.65f, -0.15f);
	glVertex2f(0.65f, -0.15f);
	glVertex2f(0.75f, -0.175f);
	glVertex2f(0.51f, -0.28f);      //Lines
	glVertex2f(0.59f, -0.28f);
	glVertex2f(0.51f, -0.26f);
	glVertex2f(0.59f, -0.26f);
	glVertex2f(0.51f, -0.24f);
	glVertex2f(0.59f, -0.24f);
	glVertex2f(0.51f, -0.22f);
	glVertex2f(0.59f, -0.22f);
	glVertex2f(0.51f, -0.2f);
	glVertex2f(0.59f, -0.2f);
	glVertex2f(0.59f, -0.185f);
	glVertex2f(0.56f, -0.1775f);
	glVertex2f(0.56f, -0.1775f);
	glVertex2f(0.54f, -0.1825f);
	glVertex2f(0.54f, -0.1825f);
	glVertex2f(0.51f, -0.195f);
	glVertex2f(0.51f, -0.28f);        //Lines
	glVertex2f(0.51f, -0.19f);
	glVertex2f(0.59f, -0.1825f);
	glVertex2f(0.59f, -0.28f);
	glVertex2f(0.56f, -0.1775f);
	glVertex2f(0.56f, -0.28f);
	glVertex2f(0.54f, -0.28f);
    glVertex2f(0.54f, -0.1825f);
    glVertex2f(0.475f, -0.4f);       //Lines
    glVertex2f(0.475f, -0.165f);
    glVertex2f(0.5f, -0.4f);
    glVertex2f(0.5f, -0.165f);
    glVertex2f(0.525f, -0.4f);
    glVertex2f(0.525f, -0.3f);
    glVertex2f(0.55f, -0.4f);
    glVertex2f(0.55f, -0.3f);
    glVertex2f(0.55f, -0.4f);
    glVertex2f(0.55f, -0.3f);
    glVertex2f(0.6f, -0.4f);
    glVertex2f(0.6f, -0.15f);
    glVertex2f(0.625f, -0.4f);
    glVertex2f(0.625f, -0.15f);
    glVertex2f(0.65f, -0.4f);
    glVertex2f(0.65f, -0.15f);
    glVertex2f(0.675f, -0.4f);
    glVertex2f(0.675f, -0.16f);
    glVertex2f(0.7f, -0.4f);
    glVertex2f(0.7f, -0.165f);
    glVertex2f(0.725f, -0.4f);
    glVertex2f(0.725f, -0.165f);
    glVertex2f(0.575f, -0.4f);
    glVertex2f(0.575f, -0.3f);
	glEnd();

	glBegin(GL_POLYGON);            //Building 11
	glColor3f(0.0f, 0.45f, 0.45f);
	glVertex2f(0.65f, -0.4f);
	glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, -0.1f);
	glVertex2f(0.775f, -0.13f);
	glVertex2f(0.75f, -0.165f);
	glVertex2f(0.65f, -0.19f);
	glEnd();
	glBegin(GL_QUADS); //1
	glColor3f(0.80f, 1.0f, 1.0f);
	glVertex2f(0.66f, -0.4f);
	glVertex2f(0.69f, -0.4f);
	glVertex2f(0.69f, -0.315f);
	glVertex2f(0.66f, -0.315f);
	glEnd();
	glBegin(GL_QUADS); //2
	glColor3f(0.80f, 1.0f, 1.0f);
	glVertex2f(0.71f, -0.4f);
	glVertex2f(0.74f, -0.4f);
	glVertex2f(0.74f, -0.315f);
	glVertex2f(0.71f, -0.315f);
	glEnd();
	glBegin(GL_QUADS); //3
	glColor3f(0.80f, 1.0f, 1.0f);
	glVertex2f(0.76f, -0.4f);
	glVertex2f(0.79f, -0.4f);
	glVertex2f(0.79f, -0.315f);
	glVertex2f(0.76f, -0.315f);
	glEnd();
	glBegin(GL_QUADS); //4
	glColor3f(0.80f, 1.0f, 1.0f);
	glVertex2f(0.81f, -0.4f);
	glVertex2f(0.84f, -0.4f);
	glVertex2f(0.84f, -0.315f);
	glVertex2f(0.81f, -0.315f);
	glEnd();
	glBegin(GL_QUADS); //5
	glColor3f(0.80f, 1.0f, 1.0f);
	glVertex2f(0.86f, -0.4f);
	glVertex2f(0.89f, -0.4f);
	glVertex2f(0.89f, -0.315f);
	glVertex2f(0.86f, -0.315f);
	glEnd();
	glBegin(GL_QUADS); //6
	glColor3f(0.80f, 1.0f, 1.0f);
	glVertex2f(0.91f, -0.4f);
	glVertex2f(0.94f, -0.4f);
	glVertex2f(0.94f, -0.315f);
	glVertex2f(0.91f, -0.315f);
	glEnd();
	glBegin(GL_QUADS); //7
	glColor3f(0.80f, 1.0f, 1.0f);
	glVertex2f(0.96f, -0.4f);
	glVertex2f(0.99f, -0.4f);
	glVertex2f(0.99f, -0.315f);
	glVertex2f(0.96f, -0.315f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.69f, -0.4f);
	glVertex2f(0.69f, -0.315f);
	glVertex2f(0.69f, -0.315f);
	glVertex2f(0.66f, -0.315f);
	glVertex2f(0.66f, -0.315f);
	glVertex2f(0.66f, -0.4f);
	glVertex2f(0.71f, -0.4f);
	glVertex2f(0.71f, -0.315f);
	glVertex2f(0.71f, -0.315f);
	glVertex2f(0.74f, -0.315f);
	glVertex2f(0.74f, -0.315f);
	glVertex2f(0.74f, -0.4f);
	glVertex2f(0.94f, -0.4f);
	glVertex2f(0.94f, -0.315f);
	glVertex2f(0.94f, -0.315f);
	glVertex2f(0.91f, -0.315f);
    glVertex2f(0.91f, -0.315f);
	glVertex2f(0.91f, -0.4f);
	glVertex2f(0.99f, -0.4f);
	glVertex2f(0.99f, -0.315f);
	glVertex2f(0.99f, -0.315f);
	glVertex2f(0.96f, -0.315f);
	glVertex2f(0.96f, -0.315f);
	glVertex2f(0.96f, -0.4f);
	glEnd();
	glBegin(GL_QUADS); //1
	glColor3f(0.0f, 0.45f, 0.45f);
	glVertex2f(0.65f, -0.4f);
	glVertex2f(0.75f, -0.4f);
	glVertex2f(0.75f, -0.34f);
	glVertex2f(0.65f, -0.34f);
	glEnd();
	glBegin(GL_QUADS); //2
	glColor3f(0.0f, 0.45f, 0.45f);
	glVertex2f(0.9f, -0.4f);
	glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, -0.34f);
	glVertex2f(0.9f, -0.34f);
	glEnd();
	glBegin(GL_QUADS); //1
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.76f, -0.175f);
	glVertex2f(0.99f, -0.15f);
	glVertex2f(0.99f, -0.275f);
	glVertex2f(0.76f, -0.275f);
	glEnd();
	glBegin(GL_QUADS); //1
	glColor3f(0.0f, 0.45f, 0.45f);
	glVertex2f(0.79f, -0.15f);
	glVertex2f(0.81f, -0.15f);
	glVertex2f(0.81f, -0.275f);
	glVertex2f(0.79f, -0.275f);
	glEnd();
	glBegin(GL_QUADS); //2
	glColor3f(0.0f, 0.45f, 0.45f);
	glVertex2f(0.84f, -0.15f);
	glVertex2f(0.86f, -0.15f);
	glVertex2f(0.86f, -0.275f);
	glVertex2f(0.84f, -0.275f);
	glEnd();
	glBegin(GL_QUADS); //3
	glColor3f(0.0f, 0.45f, 0.45f);
	glVertex2f(0.89f, -0.15f);
	glVertex2f(0.91f, -0.15f);
	glVertex2f(0.91f, -0.275f);
	glVertex2f(0.89f, -0.275f);
	glEnd();
	glBegin(GL_QUADS); //4
	glColor3f(0.0f, 0.45f, 0.45f);
	glVertex2f(0.94f, -0.15f);
	glVertex2f(0.96f, -0.15f);
	glVertex2f(0.96f, -0.275f);
	glVertex2f(0.94f, -0.275f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.65f, -0.34f);
	glVertex2f(0.75f, -0.34f);
	glVertex2f(0.75f, -0.34f);
	glVertex2f(0.75f, -0.4f);
	glVertex2f(0.9f, -0.34f);
	glVertex2f(0.9f, -0.4f);
	glVertex2f(0.9f, -0.34f);
	glVertex2f(1.0f, -0.34f);
	glVertex2f(0.65f, -0.36f);
	glVertex2f(0.75f, -0.36f);
	glVertex2f(0.65f, -0.38f);
	glVertex2f(0.75f, -0.38f);
	glVertex2f(1.0f, -0.36f);
	glVertex2f(0.9f, -0.36f);
	glVertex2f(0.9f, -0.38f);
	glVertex2f(1.0f, -0.38f);
	glVertex2f(0.75f, -0.165f);   //Lines
	glVertex2f(0.65f, -0.19f);
	glVertex2f(1.0f, -0.1f);
	glVertex2f(0.775f, -0.13f);
	glVertex2f(0.775f, -0.13f);
	glVertex2f(0.75f, -0.165f);
	glVertex2f(0.75f, -0.3f);      //Lines
	glVertex2f(0.75f, -0.165f);
	glVertex2f(0.65f, -0.3f);
	glVertex2f(0.752f, -0.3f);
	glVertex2f(0.66f, -0.188f);   //Lines
	glVertex2f(0.66f, -0.3f);
	glVertex2f(0.67f, -0.185f);
	glVertex2f(0.67f, -0.3f);
	glVertex2f(0.68f, -0.183f);
	glVertex2f(0.68f, -0.3f);
	glVertex2f(0.69f, -0.180f);
	glVertex2f(0.69f, -0.3f);
	glVertex2f(0.70f, -0.178f);
	glVertex2f(0.70f, -0.3f);
	glVertex2f(0.71f, -0.175f);
	glVertex2f(0.71f, -0.3f);
	glVertex2f(0.72f, -0.172f);
	glVertex2f(0.72f, -0.3f);
	glVertex2f(0.73f, -0.169f);
	glVertex2f(0.73f, -0.3f);
	glVertex2f(0.74f, -0.166f);
	glVertex2f(0.74f, -0.3f);
	glEnd();

	//Right side extended
	glBegin(GL_QUADS);              //Building 12
	glColor3f(1.0f, .8f, 0.1f);
	glVertex2f(0.98f, -0.4f);
	glVertex2f(1.23f, -0.4f);
	glVertex2f(1.23f, -0.25f);
	glVertex2f(0.98f, -0.3f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.98f, -0.375f);
	glVertex2f(1.23f, -0.375f);
	glVertex2f(0.98f, -0.35f);
	glVertex2f(1.23f, -0.35f);
	glVertex2f(0.98f, -0.325f);
	glVertex2f(1.23f, -0.325f);
	glVertex2f(0.98f, -0.3f);
	glVertex2f(1.23f, -0.3f);
	glVertex2f(1.104f, -0.275f);
	glVertex2f(1.23f, -0.275f);
	glVertex2f(1.23f, -0.25f);
	glVertex2f(0.98f, -0.3f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.80f, 1.0f, 1.0f);
	glVertex2f(1.055f, -0.4f);
	glVertex2f(1.155f, -0.4f);
	glVertex2f(1.155f, -0.35f);
	glVertex2f(1.055f, -0.35f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.105f, -0.4f);
	glVertex2f(1.105f, -0.35f);
	glEnd();

	glBegin(GL_QUADS);              //Building 13
	glColor3f(0.0f, 0.6f, 0.9f);
	glVertex2f(1.21f, -0.4f);
	glVertex2f(1.26f, -0.4f);
	glVertex2f(1.26f, -0.2f);
	glVertex2f(1.21f, -0.2f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.22f, -0.4f);
	glVertex2f(1.22f, -0.2f);
	glVertex2f(1.23f, -0.4f);
	glVertex2f(1.23f, -0.2f);
	glVertex2f(1.24f, -0.4f);
	glVertex2f(1.24f, -0.2f);
	glVertex2f(1.25f, -0.4f);
	glVertex2f(1.25f, -0.2f);
	glVertex2f(1.21f, -0.375f);    //Lines
	glVertex2f(1.26f, -0.375f);
	glVertex2f(1.21f, -0.35f);
	glVertex2f(1.26f, -0.35f);
	glVertex2f(1.21f, -0.325f);
	glVertex2f(1.26f, -0.325f);
	glVertex2f(1.21f, -0.3f);
	glVertex2f(1.26f, -0.3f);
	glVertex2f(1.21f, -0.275f);
	glVertex2f(1.26f, -0.275f);
	glVertex2f(1.21f, -0.25f);
	glVertex2f(1.26f, -0.25f);
	glVertex2f(1.21f, -0.225f);
	glVertex2f(1.26f, -0.225f);
	glEnd();

	glBegin(GL_QUADS);              //Building 14
	glColor3f(0.0f, 0.25f, 0.65f);
	glVertex2f(1.27f, -0.4f);
	glVertex2f(1.3f, -0.4f);
	glVertex2f(1.3f, -0.05f);
	glVertex2f(1.27f, -0.05f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.28f, -0.4f);
	glVertex2f(1.29f, -0.4f);
	glVertex2f(1.29f, -0.03f);
	glVertex2f(1.28f, -0.03f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.27f, -0.375f);
	glVertex2f(1.30f, -0.375f);
	glVertex2f(1.27f, -0.35f);
	glVertex2f(1.30f, -0.35f);
	glVertex2f(1.27f, -0.325f);
	glVertex2f(1.30f, -0.325f);
	glVertex2f(1.27f, -0.3f);
	glVertex2f(1.30f, -0.3f);
	glVertex2f(1.27f, -0.275f);
	glVertex2f(1.30f, -0.275f);
	glVertex2f(1.27f, -0.25f);
	glVertex2f(1.30f, -0.25f);
	glVertex2f(1.27f, -0.225f);
	glVertex2f(1.30f, -0.225f);
	glVertex2f(1.27f, -0.2f);
	glVertex2f(1.30f, -0.2f);
	glVertex2f(1.27f, -0.175f);
	glVertex2f(1.30f, -0.175f);
	glVertex2f(1.27f, -0.15f);
	glVertex2f(1.30f, -0.15f);
	glVertex2f(1.27f, -0.125f);
	glVertex2f(1.30f, -0.125f);
	glVertex2f(1.30f, -0.1f);
	glVertex2f(1.27f, -0.1f);
	glVertex2f(1.27f, -0.075f);
	glVertex2f(1.30f, -0.075f);
	glEnd();

	glBegin(GL_QUADS);              //Building 15
	glColor3f(1.0f, .8f, 0.1f);
	glVertex2f(1.35f, -0.4f);
	glVertex2f(1.38f, -0.4f);
	glVertex2f(1.38f, -0.15f);
	glVertex2f(1.35f, -0.15f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.36f, -0.4f);
	glVertex2f(1.37f, -0.4f);
	glVertex2f(1.37f, -0.13f);
	glVertex2f(1.36f, -0.13f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.35f, -0.375f);
	glVertex2f(1.38f, -0.375f);
	glVertex2f(1.35f, -0.35f);
	glVertex2f(1.38f, -0.35f);
	glVertex2f(1.35f, -0.325f);
	glVertex2f(1.38f, -0.325f);
	glVertex2f(1.35f, -0.3f);
	glVertex2f(1.38f, -0.3f);
	glVertex2f(1.35f, -0.275f);
	glVertex2f(1.38f, -0.275f);
	glVertex2f(1.35f, -0.25f);
	glVertex2f(1.38f, -0.25f);
	glVertex2f(1.35f, -0.225f);
	glVertex2f(1.38f, -0.225f);
	glVertex2f(1.35f, -0.2f);
	glVertex2f(1.38f, -0.2f);
	glVertex2f(1.35f, -0.175f);
	glVertex2f(1.38f, -0.175f);
	glEnd();

	glBegin(GL_POLYGON);            //Building 16
	glColor3f(0.9f, 0.65f, 0.05f);
	glVertex2f(1.27f, -0.4f);
	glVertex2f(1.38f, -0.4f);
	glVertex2f(1.38f, -0.35f);
	glVertex2f(1.325f, -0.275f);
	glVertex2f(1.3f, -0.29f);
	glVertex2f(1.27f, -0.3f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.325f, -0.275f);
	glVertex2f(1.325f, -0.4f);
	glVertex2f(1.38f, -0.35f);
	glVertex2f(1.325f, -0.275f);
	glVertex2f(1.325f, -0.275f);
	glVertex2f(1.3f, -0.29f);
	glVertex2f(1.3f, -0.29f);
	glVertex2f(1.27f, -0.3f);
	glVertex2f(1.38f, -0.36f);   //Lines
	glVertex2f(1.325f, -0.3f);
	glVertex2f(1.38f, -0.37f);
	glVertex2f(1.325f, -0.325f);
	glVertex2f(1.38f, -0.38f);
	glVertex2f(1.325f, -0.35f);
	glVertex2f(1.38f, -0.39f);
	glVertex2f(1.325f, -0.375f);
	glVertex2f(1.325f, -0.3f);     //Lines
	glVertex2f(1.3f, -0.31f);
	glVertex2f(1.325f, -0.325f);
	glVertex2f(1.3f, -0.33f);
	glVertex2f(1.325f, -0.35f);
	glVertex2f(1.3f, -0.3565f);
	glVertex2f(1.325f, -0.375f);
	glVertex2f(1.3f, -0.3775f);
	glVertex2f(1.27f, -0.315f);     //Lines
	glVertex2f(1.3f, -0.31f);
	glVertex2f(1.27f, -0.335f);
	glVertex2f(1.3f, -0.33f);
	glVertex2f(1.27f, -0.36f);
	glVertex2f(1.3f, -0.3565f);
	glVertex2f(1.27f, -0.38f);
	glVertex2f(1.3f, -0.3775f);
	glEnd();

	glBegin(GL_QUADS);              //Building 17
	glColor3f(0.75f, 0.75f, 0.75f);
	glVertex2f(1.39f, -0.4f);
	glVertex2f(1.42f, -0.4f);
	glVertex2f(1.42f, -0.2f);
	glVertex2f(1.39f, -0.2f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.39f, -0.375f);
	glVertex2f(1.42f, -0.375f);
	glVertex2f(1.39f, -0.35f);
	glVertex2f(1.42f, -0.35f);
	glVertex2f(1.39f, -0.325f);
	glVertex2f(1.42f, -0.325f);
	glVertex2f(1.39f, -0.3f);
	glVertex2f(1.42f, -0.3f);
	glVertex2f(1.39f, -0.275f);
	glVertex2f(1.42f, -0.275f);
	glVertex2f(1.39f, -0.25f);
	glVertex2f(1.42f, -0.25f);
	glVertex2f(1.39f, -0.225f);
	glVertex2f(1.42f, -0.225f);
	glVertex2f(1.4f, -0.4f);       //Lines
	glVertex2f(1.4f, -0.2f);
	glVertex2f(1.41f, -0.4f);
	glVertex2f(1.41f, -0.2f);
	glEnd();

	glBegin(GL_QUADS);              //Building 18
	glColor3f(0.0f, 0.6f, 0.9f);
	glVertex2f(1.43f, -0.4f);
	glVertex2f(1.47f, -0.4f);
	glVertex2f(1.47f, -0.2f);
	glVertex2f(1.43f, -0.2f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.43f, -0.375f);
	glVertex2f(1.47f, -0.375f);
	glVertex2f(1.43f, -0.35f);
	glVertex2f(1.47f, -0.35f);
	glVertex2f(1.43f, -0.325f);
	glVertex2f(1.47f, -0.325f);
	glVertex2f(1.43f, -0.3f);
	glVertex2f(1.47f, -0.3f);
	glVertex2f(1.43f, -0.275f);
	glVertex2f(1.47f, -0.275f);
	glVertex2f(1.43f, -0.25f);
	glVertex2f(1.47f, -0.25f);
	glVertex2f(1.43f, -0.225f);
	glVertex2f(1.47f, -0.225f);
	glVertex2f(1.44f, -0.4f);     //Lines
	glVertex2f(1.44f, -0.2f);
	glVertex2f(1.45f, -0.4f);
	glVertex2f(1.45f, -0.2f);
	glVertex2f(1.46f, -0.4f);
	glVertex2f(1.46f, -0.2f);
	glEnd();

	glBegin(GL_QUADS);              //Building 19
	glColor3f(0.2f, 0.25f, 0.65f);
	glVertex2f(1.48f, -0.4f);
	glVertex2f(1.53f, -0.4f);
	glVertex2f(1.53f, -0.05f);
	glVertex2f(1.48f, -0.05f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.49f, -0.4f);
	glVertex2f(1.52f, -0.4f);
	glVertex2f(1.52f, -0.03f);
	glVertex2f(1.49f, -0.03f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.2f, 0.2f, 0.2f);
	glVertex2f(1.5f, -0.4f);
	glVertex2f(1.51f, -0.4f);
	glVertex2f(1.51f, -0.01f);
	glVertex2f(1.5f, -0.01f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.48f, -0.375f);
	glVertex2f(1.53f, -0.375f);
	glVertex2f(1.48f, -0.35f);
	glVertex2f(1.53f, -0.35f);
	glVertex2f(1.48f, -0.325f);
	glVertex2f(1.53f, -0.325f);
	glVertex2f(1.48f, -0.3f);
	glVertex2f(1.53f, -0.3f);
	glVertex2f(1.48f, -0.275f);
	glVertex2f(1.53f, -0.275f);
	glVertex2f(1.48f, -0.25f);
	glVertex2f(1.53f, -0.25f);
	glVertex2f(1.48f, -0.225f);
	glVertex2f(1.53f, -0.225f);
	glVertex2f(1.48f, -0.2f);
	glVertex2f(1.53f, -0.2f);
	glVertex2f(1.48f, -0.175f);
	glVertex2f(1.53f, -0.175f);
	glVertex2f(1.48f, -0.15f);
	glVertex2f(1.53f, -0.15f);
	glVertex2f(1.48f, -0.125f);
	glVertex2f(1.53f, -0.125f);
	glVertex2f(1.53f, -0.1f);
	glVertex2f(1.48f, -0.1f);
	glVertex2f(1.48f, -0.075f);
	glVertex2f(1.53f, -0.075f);
	glEnd();

	glBegin(GL_QUADS);              //Building 21
	glColor3f(0.75f, 0.55f, 0.75f);
	glVertex2f(1.79f, -0.4f);
	glVertex2f(1.73f, -0.4f);
	glVertex2f(1.73f, -0.1f);
	glVertex2f(1.79f, -0.2f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(1.73f, -0.1f);
	glVertex2f(1.79f, -0.2f);
	glVertex2f(1.735f, -0.11f);
	glVertex2f(1.735f, -0.4f);
	glVertex2f(1.74f, -0.12f);
	glVertex2f(1.74f, -0.4f);
	glVertex2f(1.745f, -0.125f);
	glVertex2f(1.745f, -0.4f);
	glVertex2f(1.75f, -0.135f);
	glVertex2f(1.75f, -0.4f);
	glVertex2f(1.755f, -0.14f);
	glVertex2f(1.755f, -0.4f);
	glVertex2f(1.76f, -0.15f);
	glVertex2f(1.76f, -0.4f);
	glVertex2f(1.765f, -0.155f);
	glVertex2f(1.765f, -0.4f);
	glVertex2f(1.77f, -0.16f);
	glVertex2f(1.77f, -0.4f);
	glVertex2f(1.775f, -0.17f);
	glVertex2f(1.775f, -0.4f);
	glVertex2f(1.78f, -0.18f);
	glVertex2f(1.78f, -0.4f);
	glVertex2f(1.785f, -0.19f);
	glVertex2f(1.785f, -0.4f);
	glEnd();

	glBegin(GL_QUADS);              //Building 20
	glColor3f(0.2f, 0.6f, 0.7f);
	glVertex2f(1.5f, -0.4f);
	glVertex2f(1.75f, -0.4f);
	glVertex2f(1.75f, -0.25f);
	glVertex2f(1.5f, -0.3f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.5f, -0.385f);
	glVertex2f(1.75f, -0.375f);
	glVertex2f(1.5f, -0.365f);
	glVertex2f(1.75f, -0.35f);
	glVertex2f(1.5f, -0.345f);
	glVertex2f(1.75f, -0.325f);
	glVertex2f(1.5f, -0.325f);
	glVertex2f(1.75f, -0.3f);
	glVertex2f(1.5f, -0.31f);
	glVertex2f(1.75f, -0.275f);
	glVertex2f(1.75f, -0.25f);
	glVertex2f(1.5f, -0.3f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.80f, 1.0f, 1.0f);
	glVertex2f(1.575f, -0.4f);
	glVertex2f(1.675f, -0.4f);
	glVertex2f(1.675f, -0.34f);
	glVertex2f(1.575f, -0.36f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.625f, -0.4f);
	glVertex2f(1.625f, -0.35f);
	glEnd();

	glBegin(GL_QUADS);              //Building 22
	glColor3f(1.0f, .8f, 0.1f);
	glVertex2f(1.8f, -0.4f);
	glVertex2f(1.85f, -0.4f);
	glVertex2f(1.85f, -0.05f);
	glVertex2f(1.8f, -0.05f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.84f, -0.4f);
	glVertex2f(1.81f, -0.4f);
	glVertex2f(1.81f, -0.03f);
	glVertex2f(1.84f, -0.03f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.2f, 0.2f, 0.2f);
	glVertex2f(1.82f, -0.4f);
	glVertex2f(1.83f, -0.4f);
	glVertex2f(1.83f, -0.01f);
	glVertex2f(1.82f, -0.01f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.80f, -0.375f);
	glVertex2f(1.85f, -0.375f);
	glVertex2f(1.80f, -0.35f);
	glVertex2f(1.85f, -0.35f);
	glVertex2f(1.80f, -0.325f);
	glVertex2f(1.85f, -0.325f);
	glVertex2f(1.80f, -0.3f);
	glVertex2f(1.85f, -0.3f);
	glVertex2f(1.80f, -0.275f);
	glVertex2f(1.85f, -0.275f);
	glVertex2f(1.80f, -0.25f);
	glVertex2f(1.85f, -0.25f);
	glVertex2f(1.80f, -0.225f);
	glVertex2f(1.85f, -0.225f);
	glVertex2f(1.80f, -0.2f);
	glVertex2f(1.85f, -0.2f);
	glVertex2f(1.80f, -0.175f);
	glVertex2f(1.85f, -0.175f);
	glVertex2f(1.80f, -0.15f);
	glVertex2f(1.85f, -0.15f);
	glVertex2f(1.80f, -0.125f);
	glVertex2f(1.85f, -0.125f);
	glVertex2f(1.85f, -0.1f);
	glVertex2f(1.80f, -0.1f);
	glVertex2f(1.80f, -0.075f);
	glVertex2f(1.85f, -0.075f);
	glEnd();

	glBegin(GL_QUADS);              //Building 23
	glColor3f(0.95f, 0.9f, 0.5f);
	glVertex2f(1.86f, -0.4f);
	glVertex2f(1.89f, -0.4f);
	glVertex2f(1.89f, -0.2f);
	glVertex2f(1.86f, -0.2f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.86f, -0.375f);
	glVertex2f(1.89f, -0.375f);
	glVertex2f(1.86f, -0.35f);
	glVertex2f(1.89f, -0.35f);
	glVertex2f(1.86f, -0.325f);
	glVertex2f(1.89f, -0.325f);
	glVertex2f(1.86f, -0.3f);
	glVertex2f(1.89f, -0.3f);
	glVertex2f(1.86f, -0.275f);
	glVertex2f(1.89f, -0.275f);
	glVertex2f(1.86f, -0.25f);
	glVertex2f(1.89f, -0.25f);
	glVertex2f(1.86f, -0.225f);
	glVertex2f(1.89f, -0.225f);
	glVertex2f(1.87f, -0.4f);       //Lines
	glVertex2f(1.87f, -0.2f);
	glVertex2f(1.88f, -0.4f);
	glVertex2f(1.88f, -0.2f);
	glEnd();

	glBegin(GL_POLYGON);            //Building 24
	glColor3f(0.9f, 0.65f, 0.05f);
	glVertex2f(1.87f, -0.4f);
	glVertex2f(2.0f, -0.4f);
	glVertex2f(2.0f, -0.3f);
	glVertex2f(1.95f, -0.25f);
	glVertex2f(1.9f, -0.275f);
	glVertex2f(1.87f, -0.28f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.95f, -0.25f);
	glVertex2f(1.95f, -0.4f);
	glVertex2f(2.0f, -0.3f);
	glVertex2f(1.95f, -0.25f);
	glVertex2f(1.95f, -0.25f);
	glVertex2f(1.90f, -0.275f);
	glVertex2f(1.90f, -0.275f);
	glVertex2f(1.87f, -0.28f);
	glVertex2f(2.0f, -0.32f);   //Lines
	glVertex2f(1.95f, -0.28f);
	glVertex2f(2.0f, -0.34f);
	glVertex2f(1.95f, -0.31f);
	glVertex2f(2.0f, -0.36f);
	glVertex2f(1.95f, -0.34f);
	glVertex2f(2.0f, -0.38f);
	glVertex2f(1.95f, -0.37f);
	glVertex2f(1.9f, -0.3f);     //Lines
	glVertex2f(1.95f, -0.28f);
	glVertex2f(1.9f, -0.325f);
	glVertex2f(1.95f, -0.31f);
	glVertex2f(1.9f, -0.35f);
	glVertex2f(1.95f, -0.34f);
	glVertex2f(1.9f, -0.375f);
	glVertex2f(1.95f, -0.37f);
	glVertex2f(1.9f, -0.3f);     //Lines
	glVertex2f(1.87f, -0.31f);
	glVertex2f(1.9f, -0.325f);
	glVertex2f(1.87f, -0.33f);
	glVertex2f(1.9f, -0.35f);
	glVertex2f(1.87f, -0.356f);
	glVertex2f(1.9f, -0.375f);
	glVertex2f(1.87f, -0.3775f);
	glEnd();

	//Left side
	glBegin(GL_QUADS);              //Building 1
	glColor3f(0.0f, 0.6f, 0.9f);
	glVertex2f(-0.21f, -0.4f);
	glVertex2f(-0.26f, -0.4f);
	glVertex2f(-0.26f, -0.2f);
	glVertex2f(-0.21f, -0.2f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.22f, -0.4f);
	glVertex2f(-0.22f, -0.2f);
	glVertex2f(-0.23f, -0.4f);
	glVertex2f(-0.23f, -0.2f);
	glVertex2f(-0.24f, -0.4f);
	glVertex2f(-0.24f, -0.2f);
	glVertex2f(-0.25f, -0.4f);
	glVertex2f(-0.25f, -0.2f);
	glVertex2f(-0.21f, -0.375f);    //Lines
	glVertex2f(-0.26f, -0.375f);
	glVertex2f(-0.21f, -0.35f);
	glVertex2f(-0.26f, -0.35f);
	glVertex2f(-0.21f, -0.325f);
	glVertex2f(-0.26f, -0.325f);
	glVertex2f(-0.21f, -0.3f);
	glVertex2f(-0.26f, -0.3f);
	glVertex2f(-0.21f, -0.275f);
	glVertex2f(-0.26f, -0.275f);
	glVertex2f(-0.21f, -0.25f);
	glVertex2f(-0.26f, -0.25f);
	glVertex2f(-0.21f, -0.225f);
	glVertex2f(-0.26f, -0.225f);
	glEnd();

	glBegin(GL_QUADS);              //Building 2
	glColor3f(0.0f, 0.25f, 0.65f);
	glVertex2f(-0.27f, -0.4f);
	glVertex2f(-0.3f, -0.4f);
	glVertex2f(-0.3f, -0.05f);
	glVertex2f(-0.27f, -0.05f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.28f, -0.4f);
	glVertex2f(-0.29f, -0.4f);
	glVertex2f(-0.29f, -0.03f);
	glVertex2f(-0.28f, -0.03f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.27f, -0.375f);
	glVertex2f(-0.30f, -0.375f);
	glVertex2f(-0.27f, -0.35f);
	glVertex2f(-0.30f, -0.35f);
	glVertex2f(-0.27f, -0.325f);
	glVertex2f(-0.30f, -0.325f);
	glVertex2f(-0.27f, -0.3f);
	glVertex2f(-0.30f, -0.3f);
	glVertex2f(-0.27f, -0.275f);
	glVertex2f(-0.30f, -0.275f);
	glVertex2f(-0.27f, -0.25f);
	glVertex2f(-0.30f, -0.25f);
	glVertex2f(-0.27f, -0.225f);
	glVertex2f(-0.30f, -0.225f);
	glVertex2f(-0.27f, -0.2f);
	glVertex2f(-0.30f, -0.2f);
	glVertex2f(-0.27f, -0.175f);
	glVertex2f(-0.30f, -0.175f);
	glVertex2f(-0.27f, -0.15f);
	glVertex2f(-0.30f, -0.15f);
	glVertex2f(-0.27f, -0.125f);
	glVertex2f(-0.30f, -0.125f);
	glVertex2f(-0.30f, -0.1f);
	glVertex2f(-0.27f, -0.1f);
	glVertex2f(-0.27f, -0.075f);
	glVertex2f(-0.30f, -0.075f);
	glEnd();

	glBegin(GL_QUADS);              //Building 3
	glColor3f(1.0f, .8f, 0.1f);
	glVertex2f(-0.35f, -0.4f);
	glVertex2f(-0.38f, -0.4f);
	glVertex2f(-0.38f, -0.15f);
	glVertex2f(-0.35f, -0.15f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.36f, -0.4f);
	glVertex2f(-0.37f, -0.4f);
	glVertex2f(-0.37f, -0.13f);
	glVertex2f(-0.36f, -0.13f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.35f, -0.375f);
	glVertex2f(-0.38f, -0.375f);
	glVertex2f(-0.35f, -0.35f);
	glVertex2f(-0.38f, -0.35f);
	glVertex2f(-0.35f, -0.325f);
	glVertex2f(-0.38f, -0.325f);
	glVertex2f(-0.35f, -0.3f);
	glVertex2f(-0.38f, -0.3f);
	glVertex2f(-0.35f, -0.275f);
	glVertex2f(-0.38f, -0.275f);
	glVertex2f(-0.35f, -0.25f);
	glVertex2f(-0.38f, -0.25f);
	glVertex2f(-0.35f, -0.225f);
	glVertex2f(-0.38f, -0.225f);
	glVertex2f(-0.35f, -0.2f);
	glVertex2f(-0.38f, -0.2f);
	glVertex2f(-0.35f, -0.175f);
	glVertex2f(-0.38f, -0.175f);
	glEnd();

	glBegin(GL_POLYGON);            //Building 4
	glColor3f(0.9f, 0.65f, 0.05f);
	glVertex2f(-.27f, -0.4f);
	glVertex2f(-0.38f, -0.4f);
	glVertex2f(-0.38f, -0.35f);
	glVertex2f(-0.325f, -0.275f);
	glVertex2f(-0.3f, -0.29f);
	glVertex2f(-0.27f, -0.3f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.325f, -0.275f);
	glVertex2f(-0.325f, -0.4f);
	glVertex2f(-0.38f, -0.35f);
	glVertex2f(-0.325f, -0.275f);
	glVertex2f(-0.325f, -0.275f);
	glVertex2f(-0.3f, -0.29f);
	glVertex2f(-0.3f, -0.29f);
	glVertex2f(-0.27f, -0.3f);
	glVertex2f(-0.38f, -0.36f);   //Lines
	glVertex2f(-0.325f, -0.3f);
	glVertex2f(-0.38f, -0.37f);
	glVertex2f(-0.325f, -0.325f);
	glVertex2f(-0.38f, -0.38f);
	glVertex2f(-0.325f, -0.35f);
	glVertex2f(-0.38f, -0.39f);
	glVertex2f(-0.325f, -0.375f);
	glVertex2f(-0.325f, -0.3f);     //Lines
	glVertex2f(-0.3f, -0.31f);
	glVertex2f(-0.325f, -0.325f);
	glVertex2f(-0.3f, -0.33f);
	glVertex2f(-0.325f, -0.35f);
	glVertex2f(-0.3f, -0.3565f);
	glVertex2f(-0.325f, -0.375f);
	glVertex2f(-0.3f, -0.3775f);
	glVertex2f(-0.27f, -0.315f);     //Lines
	glVertex2f(-0.3f, -0.31f);
	glVertex2f(-0.27f, -0.335f);
	glVertex2f(-0.3f, -0.33f);
	glVertex2f(-0.27f, -0.36f);
	glVertex2f(-0.3f, -0.3565f);
	glVertex2f(-0.27f, -0.38f);
	glVertex2f(-0.3f, -0.3775f);
	glEnd();

	glBegin(GL_QUADS);              //Building 5
	glColor3f(0.75f, 0.75f, 0.75f);
	glVertex2f(-0.39f, -0.4f);
	glVertex2f(-0.42f, -0.4f);
	glVertex2f(-0.42f, -0.2f);
	glVertex2f(-0.39f, -0.2f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.39f, -0.375f);
	glVertex2f(-0.42f, -0.375f);
	glVertex2f(-0.39f, -0.35f);
	glVertex2f(-0.42f, -0.35f);
	glVertex2f(-0.39f, -0.325f);
	glVertex2f(-0.42f, -0.325f);
	glVertex2f(-0.39f, -0.3f);
	glVertex2f(-0.42f, -0.3f);
	glVertex2f(-0.39f, -0.275f);
	glVertex2f(-0.42f, -0.275f);
	glVertex2f(-0.39f, -0.25f);
	glVertex2f(-0.42f, -0.25f);
	glVertex2f(-0.39f, -0.225f);
	glVertex2f(-0.42f, -0.225f);
	glVertex2f(-0.4f, -0.4f);       //Lines
	glVertex2f(-0.4f, -0.2f);
	glVertex2f(-0.41f, -0.4f);
	glVertex2f(-0.41f, -0.2f);
	glEnd();

	glBegin(GL_QUADS);              //Building 6
	glColor3f(0.0f, 0.6f, 0.9f);
	glVertex2f(-0.43f, -0.4f);
	glVertex2f(-0.47f, -0.4f);
	glVertex2f(-0.47f, -0.2f);
	glVertex2f(-0.43f, -0.2f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.43f, -0.375f);
	glVertex2f(-0.47f, -0.375f);
	glVertex2f(-0.43f, -0.35f);
	glVertex2f(-0.47f, -0.35f);
	glVertex2f(-0.43f, -0.325f);
	glVertex2f(-0.47f, -0.325f);
	glVertex2f(-0.43f, -0.3f);
	glVertex2f(-0.47f, -0.3f);
	glVertex2f(-0.43f, -0.275f);
	glVertex2f(-0.47f, -0.275f);
	glVertex2f(-0.43f, -0.25f);
	glVertex2f(-0.47f, -0.25f);
	glVertex2f(-0.43f, -0.225f);
	glVertex2f(-0.47f, -0.225f);
	glVertex2f(-0.44f, -0.4f);     //Lines
	glVertex2f(-0.44f, -0.2f);
	glVertex2f(-0.45f, -0.4f);
	glVertex2f(-0.45f, -0.2f);
	glVertex2f(-0.46f, -0.4f);
	glVertex2f(-0.46f, -0.2f);
	glEnd();

	glBegin(GL_QUADS);              //Building 7
	glColor3f(0.2f, 0.25f, 0.65f);
	glVertex2f(-0.48f, -0.4f);
	glVertex2f(-0.53f, -0.4f);
	glVertex2f(-0.53f, -0.05f);
	glVertex2f(-0.48f, -0.05f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.49f, -0.4f);
	glVertex2f(-0.52f, -0.4f);
	glVertex2f(-0.52f, -0.03f);
	glVertex2f(-0.49f, -0.03f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.2f, 0.2f, 0.2f);
	glVertex2f(-0.5f, -0.4f);
	glVertex2f(-0.51f, -0.4f);
	glVertex2f(-0.51f, -0.01f);
	glVertex2f(-0.5f, -0.01f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.48f, -0.375f);
	glVertex2f(-0.53f, -0.375f);
	glVertex2f(-0.48f, -0.35f);
	glVertex2f(-0.53f, -0.35f);
	glVertex2f(-0.48f, -0.325f);
	glVertex2f(-0.53f, -0.325f);
	glVertex2f(-0.48f, -0.3f);
	glVertex2f(-0.53f, -0.3f);
	glVertex2f(-0.48f, -0.275f);
	glVertex2f(-0.53f, -0.275f);
	glVertex2f(-0.48f, -0.25f);
	glVertex2f(-0.53f, -0.25f);
	glVertex2f(-0.48f, -0.225f);
	glVertex2f(-0.53f, -0.225f);
	glVertex2f(-0.48f, -0.2f);
	glVertex2f(-0.53f, -0.2f);
	glVertex2f(-0.48f, -0.175f);
	glVertex2f(-0.53f, -0.175f);
	glVertex2f(-0.48f, -0.15f);
	glVertex2f(-0.53f, -0.15f);
	glVertex2f(-0.48f, -0.125f);
	glVertex2f(-0.53f, -0.125f);
	glVertex2f(-0.53f, -0.1f);
	glVertex2f(-0.48f, -0.1f);
	glVertex2f(-0.48f, -0.075f);
	glVertex2f(-0.53f, -0.075f);
	glEnd();

	glBegin(GL_QUADS);              //Building 9
	glColor3f(0.1f, 0.5f, 0.7f);
	glVertex2f(-0.79f, -0.4f);
	glVertex2f(-0.73f, -0.4f);
	glVertex2f(-0.73f, -0.1f);
	glVertex2f(-0.79f, -0.2f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.73f, -0.1f);
	glVertex2f(-0.79f, -0.2f);
	glVertex2f(-0.735f, -0.11f);
	glVertex2f(-0.735f, -0.4f);
	glVertex2f(-0.74f, -0.12f);
	glVertex2f(-0.74f, -0.4f);
	glVertex2f(-0.745f, -0.125f);
	glVertex2f(-0.745f, -0.4f);
	glVertex2f(-0.75f, -0.135f);
	glVertex2f(-0.75f, -0.4f);
	glVertex2f(-0.755f, -0.14f);
	glVertex2f(-0.755f, -0.4f);
	glVertex2f(-0.76f, -0.15f);
	glVertex2f(-0.76f, -0.4f);
	glVertex2f(-0.765f, -0.155f);
	glVertex2f(-0.765f, -0.4f);
	glVertex2f(-0.77f, -0.16f);
	glVertex2f(-0.77f, -0.4f);
	glVertex2f(-0.775f, -0.17f);
	glVertex2f(-0.775f, -0.4f);
	glVertex2f(-0.78f, -0.18f);
	glVertex2f(-0.78f, -0.4f);
	glVertex2f(-0.785f, -0.19f);
	glVertex2f(-0.785f, -0.4f);
	glEnd();

	glBegin(GL_QUADS);              //Building 8
	glColor3f(0.9f, 0.65f, 0.05f);
	glVertex2f(-0.5f, -0.4f);
	glVertex2f(-0.75f, -0.4f);
	glVertex2f(-0.75f, -0.25f);
	glVertex2f(-0.5f, -0.3f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, -0.385f);
	glVertex2f(-0.75f, -0.375f);
	glVertex2f(-0.5f, -0.365f);
	glVertex2f(-0.75f, -0.35f);
	glVertex2f(-0.5f, -0.345f);
	glVertex2f(-0.75f, -0.325f);
	glVertex2f(-0.5f, -0.325f);
	glVertex2f(-0.75f, -0.3f);
	glVertex2f(-0.5f, -0.31f);
	glVertex2f(-0.75f, -0.275f);
	glVertex2f(-0.75f, -0.25f);
	glVertex2f(-0.5f, -0.3f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.80f, 1.0f, 1.0f);
	glVertex2f(-0.575f, -0.4f);
	glVertex2f(-0.675f, -0.4f);
	glVertex2f(-0.675f, -0.34f);
	glVertex2f(-0.575f, -0.36f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.625f, -0.4f);
	glVertex2f(-0.625f, -0.35f);
	glEnd();

	glBegin(GL_QUADS);              //Building 10
	glColor3f(1.0f, .8f, 0.1f);
	glVertex2f(-0.8f, -0.4f);
	glVertex2f(-0.85f, -0.4f);
	glVertex2f(-0.85f, -0.05f);
	glVertex2f(-0.8f, -0.05f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.84f, -0.4f);
	glVertex2f(-0.81f, -0.4f);
	glVertex2f(-0.81f, -0.03f);
	glVertex2f(-0.84f, -0.03f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.2f, 0.2f, 0.2f);
	glVertex2f(-0.82f, -0.4f);
	glVertex2f(-0.83f, -0.4f);
	glVertex2f(-0.83f, -0.01f);
	glVertex2f(-0.82f, -0.01f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.80f, -0.375f);
	glVertex2f(-0.85f, -0.375f);
	glVertex2f(-0.80f, -0.35f);
	glVertex2f(-0.85f, -0.35f);
	glVertex2f(-0.80f, -0.325f);
	glVertex2f(-0.85f, -0.325f);
	glVertex2f(-0.80f, -0.3f);
	glVertex2f(-0.85f, -0.3f);
	glVertex2f(-0.80f, -0.275f);
	glVertex2f(-0.85f, -0.275f);
	glVertex2f(-0.80f, -0.25f);
	glVertex2f(-0.85f, -0.25f);
	glVertex2f(-0.80f, -0.225f);
	glVertex2f(-0.85f, -0.225f);
	glVertex2f(-0.80f, -0.2f);
	glVertex2f(-0.85f, -0.2f);
	glVertex2f(-0.80f, -0.175f);
	glVertex2f(-0.85f, -0.175f);
	glVertex2f(-0.80f, -0.15f);
	glVertex2f(-0.85f, -0.15f);
	glVertex2f(-0.80f, -0.125f);
	glVertex2f(-0.85f, -0.125f);
	glVertex2f(-0.85f, -0.1f);
	glVertex2f(-0.80f, -0.1f);
	glVertex2f(-0.80f, -0.075f);
	glVertex2f(-0.85f, -0.075f);
	glEnd();

	glBegin(GL_QUADS);              //Building 11
	glColor3f(0.95f, 0.9f, 0.5f);
	glVertex2f(-0.86f, -0.4f);
	glVertex2f(-0.89f, -0.4f);
	glVertex2f(-0.89f, -0.2f);
	glVertex2f(-0.86f, -0.2f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.86f, -0.375f);
	glVertex2f(-0.89f, -0.375f);
	glVertex2f(-0.86f, -0.35f);
	glVertex2f(-0.89f, -0.35f);
	glVertex2f(-0.86f, -0.325f);
	glVertex2f(-0.89f, -0.325f);
	glVertex2f(-0.86f, -0.3f);
	glVertex2f(-0.89f, -0.3f);
	glVertex2f(-0.86f, -0.275f);
	glVertex2f(-0.89f, -0.275f);
	glVertex2f(-0.86f, -0.25f);
	glVertex2f(-0.89f, -0.25f);
	glVertex2f(-0.86f, -0.225f);
	glVertex2f(-0.89f, -0.225f);
	glVertex2f(-0.87f, -0.4f);       //Lines
	glVertex2f(-0.87f, -0.2f);
	glVertex2f(-0.88f, -0.4f);
	glVertex2f(-0.88f, -0.2f);
	glEnd();

	glBegin(GL_POLYGON);            //Building 12
	glColor3f(0.9f, 0.65f, 0.05f);
	glVertex2f(-.87f, -0.4f);
	glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, -0.3f);
	glVertex2f(-0.95f, -0.25f);
	glVertex2f(-0.9f, -0.275f);
	glVertex2f(-0.87f, -0.28f);
	glEnd();
	glBegin(GL_LINES);              //Lines
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.95f, -0.25f);
	glVertex2f(-0.95f, -0.4f);
	glVertex2f(-1.0f, -0.3f);
	glVertex2f(-0.95f, -0.25f);
	glVertex2f(-0.95f, -0.25f);
	glVertex2f(-0.90f, -0.275f);
	glVertex2f(-0.90f, -0.275f);
	glVertex2f(-0.87f, -0.28f);
	glVertex2f(-1.0f, -0.32f);   //Lines
	glVertex2f(-0.95f, -0.28f);
	glVertex2f(-1.0f, -0.34f);
	glVertex2f(-0.95f, -0.31f);
	glVertex2f(-1.0f, -0.36f);
	glVertex2f(-0.95f, -0.34f);
	glVertex2f(-1.0f, -0.38f);
	glVertex2f(-0.95f, -0.37f);
	glVertex2f(-0.9f, -0.3f);     //Lines
	glVertex2f(-0.95f, -0.28f);
	glVertex2f(-0.9f, -0.325f);
	glVertex2f(-0.95f, -0.31f);
	glVertex2f(-0.9f, -0.35f);
	glVertex2f(-0.95f, -0.34f);
	glVertex2f(-0.9f, -0.375f);
	glVertex2f(-0.95f, -0.37f);
	glVertex2f(-0.9f, -0.3f);     //Lines
	glVertex2f(-0.87f, -0.31f);
	glVertex2f(-0.9f, -0.325f);
	glVertex2f(-0.87f, -0.33f);
	glVertex2f(-0.9f, -0.35f);
	glVertex2f(-0.87f, -0.356f);
	glVertex2f(-0.9f, -0.375f);
	glVertex2f(-0.87f, -0.3775f);
	glEnd();
	glPopMatrix();

	//boat
	glPushMatrix();
    glTranslatef(mov,0.0f,0.0f);

    glTranslatef(-0.5, -0.87f, 0.0f);
    glPushMatrix();
    glScalef(0.0015f, 0.0015f, 1.00f);

    glColor3ub(20,20,20);
    glBegin(GL_POLYGON);
    glVertex2f(100,50);
    glVertex2f(0,100);
    glVertex2f(400,100);
    glVertex2f(300,50);
    glEnd();

    glColor3ub(255,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(50,100);
    glVertex2f(50,120);
    glVertex2f(350,120);
    glVertex2f(350,100);
    glEnd();

    glColor3ub(0,0,128);
    glBegin(GL_POLYGON);
    glVertex2f(70,120);
    glVertex2f(70,140);
    glVertex2f(330,140);
    glVertex2f(330,120);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(110,65);
    glVertex2f(110,85);
    glVertex2f(140,85);
    glVertex2f(140,65);
    glEnd();

    glPushMatrix();
    glTranslatef(50,0,0);
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(110,65);
    glVertex2f(110,85);
    glVertex2f(140,85);
    glVertex2f(140,65);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(100,0,0);
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(110,65);
    glVertex2f(110,85);
    glVertex2f(140,85);
    glVertex2f(140,65);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(150,0,0);
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(110,65);
    glVertex2f(110,85);
    glVertex2f(140,85);
    glVertex2f(140,65);
    glEnd();
    glPopMatrix();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(110,140);
    glVertex2f(110,180);
    glVertex2f(140,180);
    glVertex2f(140,140);
    glEnd();

    glPushMatrix();
    glTranslatef(75,0,0);
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(110,140);
    glVertex2f(110,180);
    glVertex2f(140,180);
    glVertex2f(140,140);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(150,0,0);
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(110,140);
    glVertex2f(110,180);
    glVertex2f(140,180);
    glVertex2f(140,140);
    glEnd();
    glPopMatrix();

    glPopMatrix();
    glPopMatrix();


    glFlush();  // Render now
}

// Main function: GLUT runs as a console application starting at main()
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutTimerFunc(100, Run, 0);//recursion start from here
    glutTimerFunc(100, moveCloud, 0);//recursion start from here
    glutTimerFunc(100, moveCloud2, 0);//recursion start from here
    glutMainLoop(); //Enter the event processing loop
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
