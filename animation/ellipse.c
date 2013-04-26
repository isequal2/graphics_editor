
void setpixelellipse(int x,int y,int xc,int yc)
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_POINTS);
glVertex2f(x+xc,y+yc);
glVertex2f(x+xc,-y+yc);
glVertex2f(-x+xc,y+yc);
glVertex2f(-x+xc,-y+yc);
glEnd();
}

void ellips(float rx , float ry, int xc,int yc)
{
//float rx=35,ry=25,x=0,y=25,x1,y1,p1j,p1k,x0,y0,p2j,p2k;
float x=0,y=25,x1,y1,p1j,p1k,x0,y0,p2j,p2k;
p1k=(float)(ry*ry-rx*rx*ry+(rx*rx)/4);
//y=ry;
//setpixelellipse(x,y);
//x++;
while((2*ry*ry*x)<=(2*rx*rx*y))
{
//printf("s");
if(p1k<0)
p1j=p1k+2*ry*ry*x+ry*ry;
else
p1j=p1k+2*ry*ry*x-2*rx*rx*y+ry*ry;

if(p1j<0)
{
x1=x++;
y1=y;
setpixelellipse(x1,y1,xc,yc);
}
else
{
x1=x++;
y1=y--;
setpixelellipse(x1,y1,xc,yc);
}
p1k=p1j;
}



x0=x;
y0=y;
p2k=(float)ry*ry*(pow((x0+1/2),2))+rx*rx*(pow((y0-1),2))-(pow(rx,2))*(pow(ry,2));

while(y>=0)
{
//printf("y=%d",y);
if(p2k>0)
p2j=p2k+rx*rx-2*rx*rx*(y+1);
else
p2j=p2k+rx*rx-2*rx*rx*(y+1)+2*ry*ry*(x+1);


if(p2j>0)
setpixelellipse(x,y--,xc,yc);
else
setpixelellipse(x++,y--,xc,yc);
p2k=p2j;
}
}
