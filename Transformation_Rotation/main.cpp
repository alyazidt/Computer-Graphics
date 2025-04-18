#include <GL/glut.h>
#include <stdio.h>
#include <math.h>


float xo1,yo1,xo2,yo2,xo3,yo3,sx,sy,xn1,yn1,xn2,yn2,xn3,yn3,angle,sinv,cosv;




void Rotaion()
{
    glColor3f(1,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2i(xo1,yo1);
    glVertex2i(xo2,yo2);
    glVertex2i(xo3,yo3);
    glEnd();





    cosv=cos(angle*3.14/180);
    sinv=sin(angle*3.14/180);

    xn1=(xo1*cosv)+(yo1*sinv);
    yn1=-(xo1*sinv)+(yo1*cosv);

    xn2=(xo2*cosv)+(yo2*sinv);
    yn2=-(xo2*sinv)+(yo2*cosv);

    xn3=(xo3*cosv)+(yo3*sinv);
    yn3=-(xo3*sinv)+(yo3*cosv);



    glBegin(GL_POLYGON);
    glVertex2i(xn1,yn1);
    glVertex2i(xn2,yn2);
    glVertex2i(xn3,yn3);
    glEnd();
    glFlush();

}


int main (int argc,char** argv)
{
    printf(" Enter xo1 = ");
    scanf("%f",&xo1);
    printf(" Enter yo1= ");
    scanf("%f",&yo1);





    printf(" Enter xo2 = ");
    scanf("%f",&xo2);
    printf(" Enter yo2= ");
    scanf("%f",&yo2);





    printf(" Enter xo3 = ");
    scanf("%f",&xo3);
    printf(" Enter yo3= ");
    scanf("%f",&yo3);






    printf(" Enter angle = ");
    scanf("%f",&angle);





    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(750,650);
    glutCreateWindow("Rotaion");
    glClearColor(0.25,0.18,0.42,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10,740,10,640);
    glutDisplayFunc(Rotaion);
    glutMainLoop();



}

