#include <windows.h>
#include <GL/glut.h>

void mydisplay() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);

    glVertex2i(1,0);
    glVertex2i(-1,0);
    glVertex2i(0,-1);
    glVertex2i(0,1);

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 1.0, 0.0);

    glVertex2f(0.6, 0.7);
    glVertex2f(0.6, 0.3);
    glVertex2f(0.3, 0.3);

    glEnd();


    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);

    glVertex2f(-0.5, 0.8);
    glVertex2f(-0.8, 0.5);
    glVertex2f(-0.5, 0.2);
    glVertex2f(-0.2, 0.5);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);

    glVertex2f(-0.7, -0.125);
    glVertex2f(-0.7, -0.5);
    glVertex2f(-0.125,-0.5);
    glVertex2f(-0.125, -0.125);

    glEnd();

    glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("GL Points");
	glutInitWindowSize(100,100);
	glutDisplayFunc(mydisplay);
	glutMainLoop();
	return 0;
}


