#include <GL/glut.h>
#include <stdio.h>


void circle(int xcenter , int ycenter , int radius){

    int pi , xtemp , ytemp;
    xtemp = 0;
    ytemp = radius;
    pi = 1 - radius;
    glPointSize(8);


    while (xtemp <= ytemp){



    //Circle1//
    glBegin(GL_POINTS);

    glVertex2i(xcenter + xtemp , ycenter + ytemp);
    glVertex2i(xcenter - xtemp , ycenter + ytemp);
    glVertex2i(xcenter + xtemp , ycenter - ytemp);
    glVertex2i(xcenter - xtemp , ycenter - ytemp);


    glVertex2i(xcenter + ytemp , ycenter + xtemp);
    glVertex2i(xcenter - ytemp , ycenter + xtemp);
    glVertex2i(xcenter + ytemp , ycenter - xtemp);
    glVertex2i(xcenter - ytemp , ycenter - xtemp);

    glEnd();






    xtemp = xtemp + 1;
    if (pi < 0)
        pi = pi + (2 * xtemp + 1);


    else{
        ytemp = ytemp - 1;
        pi = pi + (2 * (xtemp - ytemp) + 1 );
    }

    }



}


void olympic_rings(){

    glColor3f(0.0 , 0.0 , 1.0);
    circle(250 , 550 , 70);

    glColor3f(0.0 , 0.0 , 0.0);
    circle(410 , 550 , 70);

    glColor3f(1.0 , 0.0 , 0.0);
    circle(570 , 550 , 70);

    glColor3f(1.0 , 1.0 , 0.0);
    circle(330 , 480 , 70);

    glColor3f(0.0 , 1.0 , 0.0);
    circle(490 , 480 , 70);

    glFlush();

}





int main (int argc , char** argv){



    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50 , 50);
    glutInitWindowSize(750 , 650);
    glutCreateWindow("Olympic Rings");
    glClearColor(1.0 , 1.0 , 1.0 , 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10 , 740 , 10 , 640);
    glutDisplayFunc(olympic_rings);
    glutMainLoop();


}

