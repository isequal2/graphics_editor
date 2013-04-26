/*Program to implement Midpoint Algorithm of Straight Line for any slopes*/

#include<graphics.h>
void midptline(int, int, int, int);
int sign(int);
void swap(int *,int *);
void plot(int x,int y)
{
putpixel(x,getmaxy()-y,RED);
}
int main(void)
{
  int x1, y1, x2, y2 ;
  int graphdriver=DETECT,graphmode;
  initgraph(&graphdriver,&graphmode,"..\\bgi");                  
  printf("\n Enter the coordinates of the first point:  ");
  scanf("%d%d",&x1,&y1) ;
  printf("\n Enter the coordinates of the second point:  ");
  scanf("%d%d",&x2,&y2) ;
  clrscr();
  cleardevice() ;
  creategrid(DARKGRAY, DARKGRAY) ;
 setfillstyle(1, DARKGRAY) ;
   midptline(x1, y1, x2, y2) ;  
  setcolor(BLACK);
  drawline(x1, y1, x2, y2) ;
    getch();
   closegraph();           
   return 0;
 }
void midptline(int x1, int y1, int x2, int y2)
{
 int i, ds, dx, dy, x, y, incrE, incrNE, incrN, incrW, incrNW ;
 float slope ;
 if(y1==y2)       
 {
            x = min(x1, x2);
        y = y1;
            while(x<=max(x1,x2))
            {
                        plot(x,y);
                        x+=1;
        }
 }
 else if(x1==x2)  
 {
            y = min(y1, y2);
        x = x1;
            while(y<=max(y1,y2))
            {
                        plot(x,y);
                        y+=1;
            }
 }
 else if(abs(x2-x1)==abs(y2-y1))
 {
             x=x1;
             y=y1;
             do
             {
                         plot(x,y);
                         x+=sign(x2-x1);
                         y+=sign(y2-y1);
             }while(x!=x2 && y!=y2);
             plot(x,y);
 }
 else                 
 {
             slope = (float) (y2-y1)/(x2-x1) ;

             if(slope>0 && slope<1)
             {
                        dx = abs(x2-x1) ;
                        dy = abs(y2-y1) ;
                        ds = 2*dy - dx ;
                        incrE = 2*dy ;
                        incrNE = 2*(dy-dx) ;
                        x = min(x1, x2);
                        y = min(y1, y2);
                        plot(x,y);
                        while(x<max(x1,x2))
                        {
                         if(ds<=0)
                                     ds+=incrE;
                         else
                         {
                                     ds+=incrNE;
                                     y+=1;
                         }
                         x+=1 ;
                         plot(x,y);
                        }
            }
             else if(slope>1)
             {        
                        dx = abs(x2-x1) ;
                        dy = abs(y2-y1) ;
                        ds = 2*dx - dy ;
                        incrN = 2*dx ;
                        incrNE = 2*(dx-dy) ;
                        x = min(x1, x2);
                        y = min(y1, y2);
                        plot(x,y);
                        while(y<max(y1,y2))
                        {
                         if(ds<=0)
                                     ds+=incrN;
                         else
                         {
                                     ds+=incrNE;
                                     x+=1;
                         }
                         y+=1 ;
                         plot(x,y);
                        }
             }
             else if(slope<0 && slope>-1)
             {
                        dx = abs(x2-x1) ;
                        dy = abs(y2-y1) ;
                        ds = 2*dy - dx ;
                        incrW = 2*dy ;
                        incrNW = 2*(dy-dx) ;
                        x = min(x1, x2);
                        y = max(y1, y2);
                        plot(x,y);
                        while(x<max(x1,x2))
                        {
                         if(ds<=0)
                                     ds+=incrW;
                         else
                         {
                                     ds+=incrNW;
                                     y-=1;
                         }
                         x+=1 ;
                         plot(x,y);
                        }
            }
             else
            {        
                        dx = abs(x2-x1) ;
                        dy = abs(y2-y1) ;
                        ds = 2*dx - dy ;
                        incrN = 2*dx ;
                        incrNW = 2*(dx-dy) ;
                        x = max(x1, x2);
                        y = min(y1, y2);
                        plot(x,y);
                        while(y<max(y1,y2))
                        {
                         if(ds<=0)
                                     ds+=incrN;
                         else
                         {
                                     ds+=incrNW;
                                     x-=1;
                         }
                         y+=1 ;
                         plot(x,y);
                        }
             }
 }

}

int sign(int a)
{
 return a>0 ? 1:(a<0 ? -1:0) ;
}

void swap(int *a, int *b)
{
            int temp = *a;
            *a = *b;
            *b = temp;
}
