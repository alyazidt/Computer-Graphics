#include <GL/glut.h>
#include <stdio.h>


float xs , ys , xe , ye , xdiff , ydiff , xtemp , ytemp , index;

void Bresenhems_line_Drawing(){


    xdiff = xe - xs;

    ydiff = ye - ys;

    xtemp = xs;

    ytemp = ys;

    index = (2 * ydiff) - xdiff;

    glColor3f(1.0,1.0,1.0);

    glPointSize(6);

    while ((xtemp <= xe)&&(ytemp <= ye)){

        glBegin(GL_POINTS);

        glVertex2i(xtemp,ytemp);

        glEnd();


    if (index < 0){

        xtemp = xtemp + 1;

        ytemp = ytemp + 0;

        index = index + (2 * ydiff);

    }

    else {

        xtemp = xtemp + 1;

        ytemp = ytemp + 1;

        index = index + 2 * (ydiff - xdiff);
    }

    }
    glFlush();

}




int main (int argc , char** argv){

    printf("Enter X start =");
    scanf("%f",&xs);

    printf("Enter Y start =");
    scanf("%f",&ys);

    printf("Enter X end =");
    scanf("%f",&xe);

    printf("Enter Y end =");
    scanf("%f",&ye);







    glutInit(&argc , argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(100,100);

    glutInitWindowSize(600,500);

    glutCreateWindow("Bresenhems_line_Drawing");

    glClearColor(0.25,0.25,0.25,0.0);

    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);

    gluOrtho2D(10,590,10,490);

    glutDisplayFunc(Bresenhems_line_Drawing);

    glutMainLoop();


}
