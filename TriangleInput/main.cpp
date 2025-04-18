#include <GL/glut.h>
#include <stdio.h>


int x1,x2,x3,y1,y2,y3;

void displaytri(){

    glColor3f(1.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_LINES);

    glVertex2i(x3,y3);
    glVertex2i(x1,y1);


    glVertex2i(x1,y1);
    glVertex2i(x2,y2);

    glVertex2i(x2,y2);
    glVertex2i(x3,y3);

    glEnd();
    glFlush();

}

int main(int argc , char** argv){

    printf("Enter x1=");
    scanf("%d",&x1);


    printf("Enter y1=");
    scanf("%d",&y1);


    printf("Enter x2=");
    scanf("%d",&x2);


    printf("Enter y2=");
    scanf("%d",&y2);


    printf("Enter x3=");
    scanf("%d",&x3);


    printf("Enter y3=");
    scanf("%d",&y3);


    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(400,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("Display Triangle Using Input");
    glClearColor(1.0,1.0,1.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(10,490,10,490);
    glutDisplayFunc(displaytri);
    glutMainLoop();

}
