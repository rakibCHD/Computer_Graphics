#include <windows.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <GL/gl.h>
#include <GL/glut.h>

using namespace std;

int X1 = 0, X2 = 0, Y1 = 0, Y2 = 0;

void DDA_Algorithm(void)
{
    double dx = (X2 - X1), dy = (Y2 - Y1), l;
    float x = X1, y = Y1;
    int d, dnew, dne, de;

    d = 2 * dy - dx;
    dne = 2 * (dy - dx);
    de = 2 * dy;

    if (abs(dx) > abs(dy))
        l = abs(dx);
    else
        l = abs(dy);

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);

    glVertex2d(x, y);

    for (int i = 0; i < l; i++)
    {
        if (d > 0)
        {
            dnew = d + dne;
            x++;
            y++;
            d = dnew;
        }
        else
        {
            dnew = d + de;
            x++;
        }
        glVertex2d(x, round(y));
    }
    glEnd();
    glFlush();
}

void myInit(void)
{
    glClearColor(1, 1, 1, 0);
    glColor3f(1, 0, 0);
    glPointSize(3.2);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100, 700, -100, 700);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutCreateWindow("Line Drawing using Midpoint Circle Algorithm");

    cout<<"Enter an initial points: ";
    cin>>X1>>Y1;

    cout<<"Enter the final points: ";
    cin>>X2>>Y2;

    glutDisplayFunc(DDA_Algorithm);

    myInit();
    glutMainLoop();
}
