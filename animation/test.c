#include <stdio.h>
#include <GL/glut.h>
#include <math.h>
#include "line.c"
#include "circle.c"
#include "board.c"
#include "transform.c"
#include "t.c"
#include "manfunc1.c"
void init()
{
	glShadeModel (GL_FLAT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,2000,0,2000);
   	makeRasterFont();

}


void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
}




int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	
	glutInitWindowPosition(100,100);
	glutInitWindowSize(600,600);
	glutCreateWindow("ques");
	init();
	//glClearColor( 0.0f,0.0f, 1.0f, 0.1f);
	man(300,1000,1);
	glutDisplayFunc(display);
	glutMainLoop();
	return 1;
}
