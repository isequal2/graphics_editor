#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

union REGS in,out;

int hidemouse()
{
  in.x.ax=2;
  int86(51,&in,&out);
  return 1;
}

int callmouse()
{
 in.x.ax=1;
 int86(51,&in,&out);
 return 1;
}

void mouse(int &x,int &y,int &c)
{

  in.x.ax=3;
  int86(51,&in,&out);
  c=out.x.bx;
  x=out.x.cx;
  y=out.x.dx;
}
void set_min_max()
{
 in.x.ax=8;
 in.x.cx=0;
 in.x.dx=getmaxy();
 int86(51,&in,&out);
 }

main()
{

  int temp,j,a[100][100],x,y,d,c,x1,y1,gd=DETECT,gm,i=0,k,xi[100],n;
  float dy,dx,slope[100];
  initgraph(&gd,&gm,"C://TC//BGI");
  set_min_max();
  do
  {
    callmouse();

    mouse(x1,y1,c);

    if(c==1)
    {
      if(a[i-1][0]!=x1&&a[i-1][1]!=y1)
      {
	a[i][0]=x1;
	a[i][1]=y1;
	i++;
	printf("%d %d\n",x1,y1);
      }
      hidemouse();
      delay(100);
    }
 }while(!kbhit());

 a[i][0]=a[0][0];
 a[i][1]=a[0][1];

 n=i;

for(i=0;i<n;i++)
{
setcolor(36);
line(a[i][0],a[i][1],a[i+1][0],a[i+1][1]);
}
 for(i=0;i<n;i++)
{
dy=a[i+1][1]-a[i][1];
dx=a[i+1][0]-a[i][0];

if(dy==0) slope[i]=1.0;
if(dx==0) slope[i]=0.0;

if((dy!=0)&&(dx!=0))
{
slope[i]=(float) dx/dy;
}
}

for(y=0;y< 480;y++)
{
k=0;
for(i=0;i<n;i++)
{

if( ((a[i][1]<=y)&&(a[i+1][1]>y))||
((a[i][1]>y)&&(a[i+1][1]<=y)))
{
xi[k]=(int)(a[i][0]+slope[i]*(y-a[i][1]));
k++;
}
}

for(j=0;j<k-1;j++)
for(i=0;i<k-1;i++)
{
if(xi[i]>xi[i+1])
{
temp=xi[i];
xi[i]=xi[i+1];
xi[i+1]=temp;
}
}

setcolor(y%255);
for(i=0;i<k;i+=2)
{
line(xi[i],y,xi[i+1]+1,y);
getch();
}

}

 delay(1000);
 closegraph();
 getch();
 return 0;
 }