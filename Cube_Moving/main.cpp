#include<GL/freeglut.h>
#include<stdio.h>
int cx=0,cy=0,cz=0;
void drawgrid()
{
int i;
for(i=0;i<40;i++)
{
	glPushMatrix();
	if (i<20)
		glTranslatef(0,0,i);
	if(i>=20)
	{
		glTranslatef(i-20,0,0);
		glRotatef(-90,0,1,0);
	}
	glLineWidth(1);
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex3f(0,0,0);
	glVertex3f(19,0,0);
	glEnd();
	glPopMatrix();
}
}

void displaycube()
{
glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(cx,cy,cz);
glutSolidCube(0.5);
glPopMatrix();
}

void movekey(unsigned char key, int x, int y)
{
if (key=='l')
	cx=cx-1;
if(key=='r')
	cx=cx+1;
if(key=='t')
	cz=cz-1;
if(key=='b')
	cz=cz+1;
if(key=='w')
	cy=cy-1;
if(key=='x')
	cy=cy+1;
glutPostRedisplay();
}

void displayoutput()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(-13,0,-45);
	glRotatef(40,1,1,0);
	drawgrid();
	displaycube();
	glFlush();
}

int main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(50,50);
glutInitWindowSize(900,550);
glutCreateWindow("CUBE MOVING USING KEYS");
glClearColor(0.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(35,1.0f,0.1f,1000);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluLookAt(4,6,5,0,0,0,0,1,0);
glutDisplayFunc(displayoutput);
glutKeyboardFunc(movekey);
glutMainLoop();
}
