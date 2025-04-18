#include <GL/glut.h>
#include <stdio.h>



int x1,x2,x3,x4,x5,y1,y2,y3,y4,y5;

line1(){


    glColor3f(1.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_LINES);

    glVertex2i(x1,y1);
    glVertex2i(x2,y2);
    glEnd();
}



line2(){

    glColor3f(0.0,1.0,0.0);
    glLineWidth(10);
    glBegin(GL_LINES);

    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glEnd();
}



line3(){

    glColor3f(0.0,0.0,1.0);
    glLineWidth(10);
    glBegin(GL_LINES);

    glVertex2i(x3,y3);
    glVertex2i(x4,y4);
    glEnd();

}


line4(){

    glColor3f(0.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_LINES);

    glVertex2i(x4,y4);
    glVertex2i(x5,y5);
    glEnd();

}


line5(){

    glColor3f(0.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_LINES);

    glVertex2i(x5,y5);
    glVertex2i(x4,y4);
    glEnd();

}

void displayM(){

    //glColor3f(1.0,0.0,0.0);
   // glLineWidth(10);
   // glBegin(GL_LINES);

    line1();
    line2();
    line3();
    line4();
    line5();



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

    printf("Enter x4=");
    scanf("%d",&x4);


    printf("Enter y4=");
    scanf("%d",&y4);


    printf("Enter x5=");
    scanf("%d",&x5);


    printf("Enter y5=");
    scanf("%d",&y5);


    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(1000,200);
    glutInitWindowSize(400,450);
    glutCreateWindow("Display M");
    glClearColor(1.0,1.0,1.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(50,400,50,400);
    glutDisplayFunc(displayM);
    glutMainLoop();

}
