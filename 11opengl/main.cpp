//to develop 2D and 3D primitives using openGL
#include <GL/glut.h> //here glut..h is a header file that stands for graphics library utility, and contains functions for creating drawing window, rendering 3D object, and manipulating call back function

void display ()
{
    glClearColor(0.0f,1.0f,1.0f,1);
    // glClearColor(R,G,B,T); to change background color
    //glColor3f(R,G,B); [0-1] to give vertex color
    glBegin(GL_POINTS);
    //GL_POINTS for points
    //GL_LINES for line
    //GL_POLYGON for polygon

    //glVertex3f(0.2,-0.8,0.5);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2d(0.5,0.9);

    // glVertex3f(0.2,-0.8,0.5);
    //glVertex3f(0.3,0.1,0.4);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f,0.0f,1.0f);
    glVertex2d(0.2,0.9);
    glVertex2d(0.5,-0.9);
    //glVertex3f(0.3,-0.5,0.9);
    //glVertex3f(-0.9,0.6,0.8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.3f,0.0f,0.1f);
    glVertex3f(0.3,0.4,0.2);
    glColor3f(1.0f,0.6f,1.0f);
    glVertex3f(0.1,-0.5,0.3);
    glColor3f(1.0f,1.0f,0.3f);
    glVertex3f(-0.5,0.4,0.4);
    glVertex3f(0.5,-0.4,0.4);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex3f(0.3,0.4,0.2);
    glEnd();
    glFlush();
}

int main (int argc, char** argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("First Program");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

