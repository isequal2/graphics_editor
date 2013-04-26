/*Program to print Circles using Midpoint Algorithm and Polynomial Algorithm*/

#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>
void circ(void)
{
float a,b,r,x,y,i,j,d;
printf("enter the centre\n");
scanf("%f%f",&a,&b);
printf("enter the radius\n");
scanf("%f",&r);
x=0;
y=r;
d=(5/4-r);
putpixel(int(a),getmaxy()-int((b+r)),25);
putpixel(int(a-r),getmaxy()-int((b)),25);
putpixel(int(a+r),getmaxy()-int((b)),25);
putpixel(int(a),getmaxy()-int((b-r)),25);
while(y>x)
{
if(d<0)
{
d+=(2*x)+3;
}
else
{
d+=(2*(x-y))+5;
y--;
}
x++;
putpixel(int(a+x),getmaxy()-int((b+y)),25);
putpixel(int(a-x),getmaxy()-int((b+y)),25);
putpixel(int(a+x),getmaxy()-int((b-y)),25);
putpixel(int(a-x),getmaxy()-int((b-y)),25);
putpixel(int(a+y),getmaxy()-int((b+x)),25);
putpixel(int(a-y),getmaxy()-int((b+x)),25);
putpixel(int(a+y),getmaxy()-int((b-x)),25);
putpixel(int(a-y),getmaxy()-int((b-x)),25);
delay(50);
}
a+=150;
for(x=-r;x<=r;x++)
{
y=abs(int(sqrt(r*r-x*x)));
putpixel(a+x,getmaxy()-(b+y),15);
putpixel(a+x,getmaxy()-(b-y),15);
}
outtextxy(175,300,"Midpoint Algorithm");
outtextxy(350,300,"Bresanhams Algorithm");
}
main()
{
int graphdriver=DETECT,graphmode;
initgraph(&graphdriver,&graphmode,"..\\bgi");
circ();
getch();
return 0;
}
