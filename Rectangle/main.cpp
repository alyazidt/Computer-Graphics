#include <GL/glut.h>
#include <stdio.h>

void drawRectangle(){

    glColor3f(0.8,0.8,0.4);
    glLineWidth(10);
    glBegin(GL_LINES);

    glVertex2i(300,575); glVertex2i(300,400);

    glVertex2i(300,400); glVertex2i(550,400);

    glVertex2i(550,400); glVertex2i(550,575);

    glVertex2i(550,575); glVertex2i(300,575);

    glEnd();
    glFlush();

}


int main(int argc,char** argv){

    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("Display Rectangle");
    glClearColor(0.2,0.2,0.4,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10,590,10,590);
    glutDisplayFunc(drawRectangle);
    glutMainLoop();

}
