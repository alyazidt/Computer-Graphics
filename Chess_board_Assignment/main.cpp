#include <GL/glut.h>
#include <stdio.h>

void whiteBox(int x , int y)
{
    glLineWidth(1);
    glColor3f(0.0, 1.0, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(x, y); glVertex2i(x, y + 50);
	glVertex2i(x, y + 50); glVertex2i(x + 50 , y + 50);
	glVertex2i(x + 50, y + 50); glVertex2i(x + 50, y);
	glVertex2i(x + 50 , y); glVertex2i(x , y);
	glEnd();
}


void blackBox(int x , int y)
{
    glColor3f(0.8, 0.4, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(x, y); glVertex2i(x, y + 50);
	glVertex2i(x, y + 50); glVertex2i(x + 50 , y + 50);
	glVertex2i(x + 50, y + 50); glVertex2i(x + 50, y);
	glVertex2i(x + 50 , y); glVertex2i(x , y);
	glEnd();
}



void Outline(float xs,float ys,float xe,float ye)
{

    float xdiff,ydiff,xtemp,ytemp,xincr,yincr;
    int steps;

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


    glColor3f(1.0, 1.0, 0.0);
    glPointSize(5);

    for(int i=1;i<=steps;i++)
    {
    glBegin(GL_POINTS);
    glVertex2f(xtemp,ytemp);
    glEnd();

    xtemp=xtemp+xincr;
    ytemp=ytemp+yincr;
    }

}



void chess_board(){


    Outline(298,352,453,352);
    Outline(452,352,452,197);
    Outline(452,198,297,198);
    Outline(298,198,298,353);


    whiteBox(300, 300);
    blackBox(350, 300);
    whiteBox(400, 300);


    blackBox(300, 250);
    whiteBox(350, 250);
    blackBox(400, 250);


    whiteBox(300, 200);
    blackBox(350, 200);
    whiteBox(400, 200);
    glFlush();
}


int main(int argc,char** argv){

    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(800,600);
    glutCreateWindow("Display Chess Board");
    glClearColor(1.0,1.0,1.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(50,700,50,500);
    glutDisplayFunc(chess_board);
    glutMainLoop();

}

