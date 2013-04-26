#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
union REGS in,out;

int callmouse()
{
	in.x.ax=1;
	int86(51,&in,&out);
	return 1;
}
void mouseposi (int &xpos,int &ypos,int &click )
{
	in.x.ax=3;
	int86(51,&in,&out);
	click=out.x.bx;
	xpos=out.x.cx;
	ypos=out.x.dx;

}
int mousehide()
{
      in.x.ax=2;
      int86(51,&in,&out);
      return 1;
}
void setposi(int &xpos,int &ypos)
{
     in.x.ax=4;
     in.x.cx=xpos;
     in.x.dx=ypos;
     int86(51,&in,&out);
}
int main()
{
     int x,y,cl,a,b,cl1;
     clrscr();
     int g=DETECT,m;
     initgraph(&g,&m,"C:\\TC\\BGI");

     callmouse();
     do
     {
	     mouseposi(x,y,cl);
	     if(cl==1)
	     {
		a=x;b=y;
		break;
	     }
     }while(1);
     mousehide();
     delay(500);
     callmouse();
     do
     {
	     mouseposi(x,y,cl);
	     if(cl==1)
		break;
     }while(1);
     mousehide();

     line(a,b,x,y);
     getch();

     closegraph();
     return 0;
}