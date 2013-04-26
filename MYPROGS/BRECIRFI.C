 #include<stdio.h>
 #include<graphics.h>
 #include<conio.h>
 void cmp(int xc,int yc,int r)
 {int x=0;
  int yr;
  int y=r;
  float d;
  void pp(int,int,int,int);
  d=5/4-r;
  while(x<y)
  {
  if(d<0)
  d=d+(2*x+3);
  else
  {d=d+(2*(x-y)+5);
  y--;
  }
 pp(xc,yc,x,y);
 x++;
 }}
 void pp(int xc,int yc,int x,int y)
 {
 setcolor(WHITE);
 line(xc+x,yc-y,xc-x,yc-y);
 line(xc+x,yc+y,xc-x,yc+y);
 line(xc+y,yc+x,xc-y,yc+x);
 line(xc+y,yc-x,xc-y,yc-x);
 }
 main()
 {
 int xc,yc,r,a,b;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 a=getmaxx();
 b=getmaxy();
 setcolor(RED);
 line(a/2,0,a/2,b);
 line(0,b/2,a,b/2);
 printf("Enter the Center and radius");
 scanf("%d%d%d",&xc,&yc,&r);
 xc=xc+a/2;
 yc=b/2-yc;
 cmp(xc,yc,r);
 getch();
 closegraph();
 return 0;
 }
 
