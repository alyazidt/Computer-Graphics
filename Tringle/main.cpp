#include <GL/glut.h>
#include <stdio.h>

void Line1(){

    glColor3f(0.0,0.0,1.0);
    glLineWidth(10);
    glBegin(GL_LINES);

        //Line 1
    //glVertex2i(100,100); glVertex2i(500,100);

    glVertex2i(100,300); glVertex2i(350,300);

    glEnd();

}


void Line2(){

    glColor3f(0.0,1.0,0.0);
    glLineWidth(10);
    glBegin(GL_LINES);


            //Line 2
    //glVertex2i(500,100); glVertex2i(300,300);

    glVertex2i(350,300); glVertex2i(200,100);

    glEnd();

}


void Line3(){

    glColor3f(1.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_LINES);


        //Line 3
    //glVertex2i(100,100); glVertex2i(300,300);

    glVertex2i(200,100); glVertex2i(100,300);

    glEnd();

}




void drawtriangle(){

    Line1();
    Line2();
    Line3();
    glFlush();

}


int main(int argc,char** argv){

    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(650,650);
    glutCreateWindow("Triangle");
    glClearColor(1.0,1.0,1.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10,640,10,640);
    glutDisplayFunc(drawtriangle);
    glutMainLoop();

}
