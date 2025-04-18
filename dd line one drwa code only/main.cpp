#include<GL/glut.h>
#include<stdio.h>



float xs,ys,xe,ye,xdiff,ydiff,xtemp,ytemp,xincr,yincr;
int steps;
void ddaline()
{
    glColor3f(1.0,0.0,0.0);
    glPointSize(5);

    for(int i=1;i<=steps;i++)
    {
    glBegin(GL_POINTS);
    glVertex2f(xtemp,ytemp);
    glEnd();

    xtemp=xtemp+xincr;
    ytemp=ytemp+yincr;
    }
    glFlush();
}
int main(int argc, char** argv)
{
    printf("Enter Xstart=");
    scanf("%f",&xs);
    printf("Enter Ystart=");
    scanf("%f",&ys);
    printf("Enter Xend=");
    scanf("%f",&xe);
    printf("Enter Yend=");
    scanf("%f",&ye);

    xdiff=xe-xs;
    ydiff=ye-ys;

    if ((xdiff<0)&&(ydiff==0))

        steps=xdiff*-1;

    else if ((xdiff==0)&&(ydiff<0))
        steps=ydiff*-1;

    else if(xdiff>ydiff)

        steps=xdiff;
    else
        steps=ydiff;

    if (steps<0)
        steps=steps*-1;

    xincr=xdiff/steps;
    yincr=ydiff/steps;
    xtemp=xs;
    ytemp=ys;

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(400,25);
    glutInitWindowSize(500,500);
    glutCreateWindow("DDA LINE DRAWING");
    glClearColor(1.0,1.0,1.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10,490,10,490);
    glutDisplayFunc(ddaline);
    glutMainLoop();
}
