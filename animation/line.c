
void setpixel_line(int x,int y);

void line(int x1, int y1, int x2, int y2)
{
	int i, ds, dx, dy, x, y, incrE, incrNE, incrN, incrW, incrNW ;
	float slope;

 
	if(y1==y2)         
	{       x = min(x1, x2);
	        y = y1;
	        while(x<=max(x1,x2))
		    {
    	        setpixel_line(x,y);
    	        x+=1;
        	}
 	}
 	else if(x1==x2)  
 	{
    	    y = min(y1, y2);
    	    x = x1;
            while(y<=max(y1,y2))
            {
                setpixel_line(x,y);
                y+=1;
            }
	}
	else if(abs(x2-x1)==abs(y2-y1))
	{
            x=x1;
            y=y1;
            do
            {
                setpixel_line(x,y);
                x+=sign(x2-x1);
                y+=sign(y2-y1);
            }	
	while(x!=x2 && y!=y2);
            setpixel_line(x,y);
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
                        setpixel_line(x,y);
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
                         setpixel_line(x,y);
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
                        setpixel_line(x,y);
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
                         setpixel_line(x,y);
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
                        setpixel_line(x,y);
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
                         setpixel_line(x,y);
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
                        setpixel_line(x,y);
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
                         setpixel_line(x,y);
                        }
             }



 }
//glFlush();
}

void setpixel_line(int x,int y)
{
	glBegin(GL_POINTS);
	glVertex2f(x,y);
	glEnd();
}


int min(int a,int b)
{
return (a<b)?a:b;
}

int max(int a,int b)
{
return (a>b)?a:b;
}
int sign(int a)
{
return a>0?1:-1;
}
