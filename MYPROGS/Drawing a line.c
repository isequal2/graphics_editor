/*Program to print a straight line for a given equation */

#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
main()
{
int x;
float y;
int graphdriver=DETECT,graphmode;
  initgraph(&graphdriver,&graphmode,"..\\bgi");   
for(x=0;x<=100;x++)
{
y=.5*x+1;
putpixel(x,getmaxy()-int(y),BLUE);
}
getch();
return 0;
}
