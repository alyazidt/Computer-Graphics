#include <GL/glut.h>

#include <stdio.h>



void triangle3d(){

    glLineWidth(2);

    glBegin(GL_LINES);

    glColor3f(1 , 0 , 0);

    glVertex3f(0 , 0 , 0);

    glVertex3f(6 , 0 , 0);


    glColor3f(0 , 1 , 0);
    glVertex3f(0 , 0 , 0);
    glVertex3f(0 , 6 , 0);


    glColor3f(0 , 0 , 1);

    glVertex3f(0 , 0 , 0);

    glVertex3f(0 , 0 , 6);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.5 , 0.35 , 0.72);

    glVertex3f(2.25 , 0 , 0);


    glColor3f(0.7 , 0.20 , 0.60);

    glVertex3f(0 , 2.5 , 0);


    glColor3f(0.5 , 0.35 , 0.72);

    glVertex3f(0 , 0 , 2.3);

    glColor3f(0.7 , 0.20 , 0.60);

    glVertex3f(2.25 , 0 , 0);


    glEnd();

    glFlush();


}


int main(int argc , char** argv){

    glutInit(&argc , argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(1000,200);

    glutInitWindowSize(400,450);

    glutCreateWindow("Display Triangle in 3D");

    glClearColor(0.0,0.0,0.0,0.0);

    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    gluPerspective(60 , 4.0/3.0 , 1 , 150);

    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();

    gluLookAt(4 , 6 , 5 , 0 , 0 , 0 , 0 , 1 , 0);

    glutDisplayFunc(triangle3d);

    glutMainLoop();


}
