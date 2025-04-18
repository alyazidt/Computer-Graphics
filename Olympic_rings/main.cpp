#include <GL/glut.h>
#include <stdio.h>

int xcenter , ycenter , x2center , y2center , x3center , y3center , x4center , y4center , x5center , y5center ,radius , pi , xtemp , ytemp;


void olympic_rings(){

    xtemp = 0;
    ytemp = radius;
    pi = 1 - radius;
    glPointSize(8);


    while (xtemp <= ytemp){



    //Circle1//
    glBegin(GL_POINTS);
    glColor3f(0.0 , 0.0 , 1.0);
    glVertex2i(xcenter + xtemp , ycenter + ytemp);
    glVertex2i(xcenter - xtemp , ycenter + ytemp);
    glVertex2i(xcenter + xtemp , ycenter - ytemp);
    glVertex2i(xcenter - xtemp , ycenter - ytemp);


    glVertex2i(xcenter + ytemp , ycenter + xtemp);
    glVertex2i(xcenter - ytemp , ycenter + xtemp);
    glVertex2i(xcenter + ytemp , ycenter - xtemp);
    glVertex2i(xcenter - ytemp , ycenter - xtemp);

    glEnd();



    //Circle2//
    glBegin(GL_POINTS);
    glColor3f(1.0 , 1.0 , 0.0);
    glVertex2i(x2center + xtemp , y2center + ytemp);
    glVertex2i(x2center - xtemp , y2center + ytemp);
    glVertex2i(x2center + xtemp , y2center - ytemp);
    glVertex2i(x2center - xtemp , y2center - ytemp);


    glVertex2i(x2center + ytemp , y2center + xtemp);
    glVertex2i(x2center - ytemp , y2center + xtemp);
    glVertex2i(x2center + ytemp , y2center - xtemp);
    glVertex2i(x2center - ytemp , y2center - xtemp);

    glEnd();



    //Circle3//
    glBegin(GL_POINTS);
    glColor3f(0.0 , 0.0 , 0.0);
    glVertex2i(x3center + xtemp , y3center + ytemp);
    glVertex2i(x3center - xtemp , y3center + ytemp);
    glVertex2i(x3center + xtemp , y3center - ytemp);
    glVertex2i(x3center - xtemp , y3center - ytemp);


    glVertex2i(x3center + ytemp , y3center + xtemp);
    glVertex2i(x3center - ytemp , y3center + xtemp);
    glVertex2i(x3center + ytemp , y3center - xtemp);
    glVertex2i(x3center - ytemp , y3center - xtemp);

    glEnd();



    //Circle4//
    glBegin(GL_POINTS);
    glColor3f(0.0 , 1.0 , 0.0);
    glVertex2i(x4center + xtemp , y4center + ytemp);
    glVertex2i(x4center - xtemp , y4center + ytemp);
    glVertex2i(x4center + xtemp , y4center - ytemp);
    glVertex2i(x4center - xtemp , y4center - ytemp);


    glVertex2i(x4center + ytemp , y4center + xtemp);
    glVertex2i(x4center - ytemp , y4center + xtemp);
    glVertex2i(x4center + ytemp , y4center - xtemp);
    glVertex2i(x4center - ytemp , y4center - xtemp);

    glEnd();



    //Circle5//
    glBegin(GL_POINTS);
    glColor3f(1.0 , 0.0 , 0.0);
    glVertex2i(x5center + xtemp , y5center + ytemp);
    glVertex2i(x5center - xtemp , y5center + ytemp);
    glVertex2i(x5center + xtemp , y5center - ytemp);
    glVertex2i(x5center - xtemp , y5center - ytemp);


    glVertex2i(x5center + ytemp , y5center + xtemp);
    glVertex2i(x5center - ytemp , y5center + xtemp);
    glVertex2i(x5center + ytemp , y5center - xtemp);
    glVertex2i(x5center - ytemp , y5center - xtemp);

    glEnd();




    xtemp = xtemp + 1;
    if (pi < 0)
        pi = pi + (2 * xtemp + 1);


    else{
        ytemp = ytemp - 1;
        pi = pi + (2 * (xtemp - ytemp) + 1 );
    }

    }

    glFlush();

}





int main (int argc , char** argv){


    radius = 80;
    xcenter = 150;
    ycenter = 400;

    x2center = 240;
    y2center = 310;

    x3center = 330;
    y3center = 400;

    x4center = 420;
    y4center = 310;

    x5center = 510;
    y5center = 400;



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
