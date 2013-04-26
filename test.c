#include<stdio.h>
#include<GL\glut.h>
void display();
{
	glClear(GL_COLLOR_BUFFER_BIT);
	glFlush();
	
}
int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitWindowSize(600,600);
	glutInitWindowPosition(100,100);
	glutCreateWindow("test");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
	
}
