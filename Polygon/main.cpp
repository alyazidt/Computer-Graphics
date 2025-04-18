#include <GL/glut.h>
#include <stdio.h>


void Polygon(){

    glColor3f(0.0 , 0.0 , 1.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);

    glVertex2i(150 , 225);
    glVertex2i(150 , 400);
    glVertex2i(300 , 225);

    glEnd();

    glFlush();

}





int main (int argc , char** argv){



    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50 , 50);
    glutInitWindowSize(500 , 500);
    glutCreateWindow("Polygon");
    glClearColor(1.0 , 1.0 , 1.0 , 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10 , 490 , 10 , 490);
    glutDisplayFunc(Polygon);
    glutMainLoop();


}


