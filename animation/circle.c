setpixel_circle(int x,int y,int xc,int yc)
{
	glBegin(GL_POINTS);
	glVertex2f(x+xc,y+yc);
	glVertex2f(x+xc,-y+yc);
	glVertex2f(-x+xc,y+yc);
	glVertex2f(-x+xc,-y+yc);
	glVertex2f(y+xc,x+yc);
	glVertex2f(y+xc,-x+yc);
	glVertex2f(-y+xc,x+yc);
	glVertex2f(-y+xc,-x+yc);
	glEnd();
	//glFlush();
	
}

void circle(int r,int xc,int yc)
{
	int x,y,po,i;
	x=0;
	y=r;
	setpixel_circle(x,y,xc,yc);
	po=1-r;
	while(x<y)
	{
		if(po<0)
		{
			x=x+1;
			po=po+2*x+1;
			//xc=x+xc;
			//yc=yc+y;
			setpixel_circle(x,y,xc,yc);
		}
		else
		{
			x=x+1;
			y=y-1;
			po=po+2*x+1-2*y;
			//xc=x+xc;
			//yc=yc+y;
			setpixel_circle(x,y,xc,yc);
		}
	}
}