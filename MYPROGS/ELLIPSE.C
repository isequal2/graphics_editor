#include <iostream>
#include <conio.h>
#include <math.h>
#include <graphics.h>
#include<stdio.h>
using namespace std;
void plotline(int x,int y,int z,int o)
    {
        int a,b;
        a=getmaxx()/2;
        b=getmaxy()/2;
        line(a+x,b-y,a+z,b-o);
    }

void drawlips(int a,int b,int x,int y){
    putpixel(a+x,getmaxy()-(b+y),RED);
    putpixel(a+x,getmaxy()-(b-y),RED);
    putpixel(a-x,getmaxy()-(b-y),RED);
    putpixel(a-x,getmaxy()-(b+y),RED);
}

int main(){
initwindow(1234,480,"WINDOWS BGI");{

int a,b,x1,y1,c1,c2;
float d,d1;
printf("Enter radiuses of ellipse");
scanf("%d%d",&a,&b);
x1=0;
y1=b;
c1=getmaxx()/2;
c2=getmaxy()/2;

d=(b*b)+((a*a)*0.25)-(a*a*b);
drawlips(c1,c2,x1,y1);
while((b*b*(x1+1))<(a*a*(y1-0.5)))
{
    if(d<0)
    {
        d+=(((2*x1)+3)*(b*b));
        x1++;
    }
    else
    {
        d+=(((((2*x1)+3))*(b*b))+((2-(2*y1)))*(a*a));
        x1++,y1--;
    }
    drawlips(c1,c2,x1,y1);
}

d1=((b*b)*(x1+0.5)*(x1+0.5))+(a*a*(y1-1)*(y1-1))-(a*a*b*b);
while(y1>0)
{
    if(d1<0)
    {
        d1+=(((b*b)*((2*x1)+2))+((a*a)*((-2*y1)+3)));
        x1++;y1--;
    }
    else
    {
        d1+=((a*a)*(-2*y1+3));
        y1--;
    }
    drawlips(c1,c2,x1,y1);
}
getch();
closegraph();
}
return 0;
}