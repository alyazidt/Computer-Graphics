#include <GL/glut.h>
#include <stdio.h>

int xcenter , ycenter , radius , pi , xtemp , ytemp;


void midcircle(){

    xtemp = 0;
    ytemp = radius;
    pi = 1 - radius;
    glPointSize(5);
    glColor3f(0.8 , 0.75 , 0.2);

    while (xtemp <= ytemp){


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

    glFlush();

}





int main (int argc , char** argv){

    printf("Enter Xcenter : ");
    scanf("%d" , &xcenter);

    printf("Enter Ycenter : ");
    scanf("%d" , &ycenter);

    printf("Enter Radius : ");
    scanf("%d" , &radius);






    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50 , 50);
    glutInitWindowSize(750 , 650);
    glutCreateWindow("Mid Point Circle Algorithm");
    glClearColor(1.0 , 1.0 , 1.0 , 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10 , 740 , 10 , 640);
    glutDisplayFunc(midcircle);
    glutMainLoop();


}
