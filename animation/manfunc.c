void man1(int x,int y,int count);
void man2(int x,int y,int count);
void man3(int x,int y,int count);
int count=1;
void man(int x,int y,int count)
{
	int m=0,m1=0,m2=0,m3=0,i,tem[3][1],tempx;
	float steps=0,steps1=0,steps2=0,steps3=0;

	for (i = 0; i < 1800; ++i)
	{
	tempx=x+i;
	//getvalue();	
	glClear(GL_COLOR_BUFFER_BIT);	
	display2();
	//head
	circle(60,tempx,y);
	//backbone
	line( tempx, y-60, tempx   , y-280);
	

	//hands
	if(m<500)
	{		
		//printf("s1");
		actrotate(tempx,y-80,tempx+80,y-261,steps-=.002);		
	}
	else if(m==500|| m<=1000)
	{
		actrotate(tempx,y-80,tempx+80,y-261,steps+=.002);		
	}
	else if(m==1001)
	{
		m=0;
	}
	m++;
	if(m1<500)
	{		
		//printf("s1");
		actrotate(tempx, y-80, tempx-80, y-261,steps1+=.002);		
	}
	else if(m1==500|| m1<=1000)
	{
		actrotate(tempx, y-80, tempx-80, y-261,steps1-=.002);		
	}
	else if(m1==1001)
	{
		m1=0;
	}
	m1++;


	//legs
	if(m2<500)
	{		
		//printf("s1");
		actrotateleg(tempx, y-280,tempx+80, y-467,steps2-=.002);		
	}
	else if(m2==500|| m2<=1000)
	{
		actrotateleg(tempx, y-280,tempx+80, y-467,steps2+=.002);		
	}
	else if(m2==1001)
	{
		m2=0;
	}
	m2++;
	

	if(m3<500)
	{		
		//printf("s1");
		actrotateleg(tempx, y-280,tempx-80, y-467,steps3+=.002);		
	}
	else if(m3==500|| m3<=1000)
	{
		actrotateleg(tempx, y-280,tempx-80, y-467,steps3-=.002);		
	}
	else if(m3==1001)
	{
		m3=0;
	}
	m3++;



	usleep(2000);
	glFlush();
	}
	usleep(10000);

	man1(tempx,y,count);
}

void man1(int x,int y,int count)
{
	int i,tempx1,m=0,m1=0,m2=0,m3=0;
	float steps=0,steps1=0,steps2=0,steps3=0;

	for (i = 0; i < 1900; ++i)
	{
	tempx1=x-i;;
	glClear(GL_COLOR_BUFFER_BIT);
		
	if(count==1)
	{
	display1(tempx1+460,600);
	}
	else
	{
	display3(tempx1+460,600);	
	}
	//head
	circle(60,tempx1,y);
	//backbone
	line( tempx1, y-60, tempx1   , y-280);
	

	//hands
	if(m<500)
	{		
		//printf("s1");
		actrotate1(tempx1,y-80,tempx1+80,y-261,steps-=.002,tempx1+280 ,y-230 );		
	}
	else if(m==500|| m<=1000)
	{
		actrotate1(tempx1,y-80,tempx1+80,y-261,steps+=.002,tempx1+280 ,y-230 );		
	}
	else if(m==1001)
	{
		m=0;
	}
	m++;
	if(m1<500)
	{		
		//printf("s1");
		actrotate(tempx1, y-80, tempx1-80, y-261,steps1+=.002);		
	}
	else if(m1==500|| m1<=1000)
	{
		actrotate(tempx1, y-80, tempx1-80, y-261,steps1-=.002);		
	}
	else if(m1==1001)
	{
		m1=0;
	}
	m1++;


	//legs
	if(m2<500)
	{		
		//printf("s1");
		actrotate(tempx1, y-280,tempx1+80, y-467,steps2-=.002);		
	}
	else if(m2==500|| m2<=1000)
	{
		actrotate(tempx1, y-280,tempx1+80, y-467,steps2+=.002);		
	}
	else if(m2==1001)
	{
		m2=0;
	}
	m2++;


	if(m3<500)
	{		
		//printf("s1");
		actrotate(tempx1, y-280,tempx1-80, y-467,steps3+=.002);		
	}
	else if(m3==500|| m3<=1000)
	{
		actrotate(tempx1, y-280,tempx1-80, y-467,steps3-=.002);		
	}
	else if(m3==1001)
	{
		m3=0;
	}
	m3++;


	
	
	//board
	line(tempx1+320 ,y    ,tempx1+320 ,y-460);
	line(tempx1+320 ,y    ,tempx1+1300,y    );
	line(tempx1+320 ,y-460,tempx1+1300,y-460);
	line(tempx1+1300,y    ,tempx1+1300,y-460);
	circle(20,tempx1+380,y-100);
	line(tempx1+380,y-100,tempx1+280,y-230);
	line(tempx1+380,y-360,tempx1+280,y-230);
	circle(20,tempx1+380,y-360);

		
	
	usleep(1000);
	glFlush();
	}
	sleep(3);
	//printf("%d\t%d",tempx1,y);
man2(tempx1,y,count);
}

void man2(int x,int y,int count)
{
	int m=0,m1=0,m2=0,m3=0,i,tem[3][1],tempx,changex=x,changey=y;
	float steps=0,steps1=0,steps2=0,steps3=0;

	for (i = 0; i < 200; ++i)
	{
	tempx=x+i;
	//getvalue();	
	glClear(GL_COLOR_BUFFER_BIT);	
	if(count==1)
	{
	display1(changex+460,600);
	}
	else
	{
	display3(changex+460,600);
	}
	//head
	circle(60,tempx,y);
	//backbone
	line( tempx, y-60, tempx   , y-280);
	

	//hands
	if(m<800)
	{		
		//printf("s1");
		actrotate(tempx,y-80,tempx+80,y-261,steps-=.002);		
	}
	else if(m==800|| m<=1600)
	{
		actrotate(tempx,y-80,tempx+80,y-261,steps+=.002);		
	}
	else if(m==1601)
	{
		m=0;
	}
	m++;
	if(m1<800)
	{		
		//printf("s1");
		actrotate(tempx, y-80, tempx-80, y-261,steps1+=.002);		
	}
	else if(m1==800|| m1<=1600)
	{
		actrotate(tempx, y-80, tempx-80, y-261,steps1-=.002);		
	}
	else if(m1==1601)
	{
		m1=0;
	}
	m1++;


	//legs
	if(m2<800)
	{		
		//printf("s1");
		actrotateleg(tempx, y-280,tempx+80, y-467,steps2-=.002);		
	}
	else if(m2==800|| m2<=1600)
	{
		actrotateleg(tempx, y-280,tempx+80, y-467,steps2+=.002);		
	}
	else if(m2==1601)
	{
		m2=0;
	}
	m2++;
	

	if(m3<800)
	{		
		//printf("s1");
		actrotateleg(tempx, y-280,tempx-80, y-467,steps3+=.002);		
	}
	else if(m3==800|| m3<=1600)
	{
		actrotateleg(tempx, y-280,tempx-80, y-467,steps3-=.002);		
	}
	else if(m3==1601)
	{
		m3=0;
	}
	m3++;

	

	//board
	
	line(changex+320 ,changey    ,changex+320 ,changey-460);
	line(changex+320 ,changey    ,changex+1300,changey    );
	line(changex+320 ,changey-460,changex+1300,changey-460);
	line(changex+1300,changey    ,changex+1300,changey-460);
	circle(20,changex+380,changey-100);
	line(changex+380,changey-100,changex+280,changey-230);
	line(changex+380,changey-360,changex+280,changey-230);
	circle(20,changex+380,changey-360);



	usleep(2000);
	glFlush();
	
	}
	usleep(10000);

	man3(tempx,y,count);
}

void man3(int x,int y,int count)
{
	int j=0,m=0,tempx,m1=0,m2=0,m3=0,i,tem[3][1];
	float steps=0,steps1=0,steps2=0,steps3=0;

	for (i = 0; i < 1500; ++i)
	{
	tempx=x+i;
	//getvalue();	
	glClear(GL_COLOR_BUFFER_BIT);	
	

	if(count==1)
	{	
	if(tempx+380<700)
	{
		display1(tempx+460,600+i);
	}
	else
	{
		display1(tempx+460-j,600+i);
	}
	}
	else
	{

	if(tempx+380<700)
	{
		display3(tempx+460,600+i);
	}
	else
	{
		display3(tempx+460-j,600+i);
	}	
	}
	//head
	circle(60,x,y);
	//backbone
	line( x, y-60, x   , y-280);
	

	//hands
	if(m<800)
	{		
		//printf("s1");
		actrotate(x,y-80,x+80,y-261,steps-=.002);		
	}
	else if(m==800|| m<=1600)
	{
		actrotate(x,y-80,x+80,y-261,steps+=.002);		
	}
	else if(m==1601)
	{
		m=0;
	}
	m++;
	if(m1<800)
	{		
		//printf("s1");
		actrotate(x, y-80, x-80, y-261,steps1+=.002);		
	}
	else if(m1==800|| m1<=1600)
	{
		actrotate(x, y-80, x-80, y-261,steps1-=.002);		
	}
	else if(m1==1601)
	{
		m1=0;
	}
	m1++;


	//legs
	if(m2<800)
	{		
		//printf("s1");
		actrotateleg(x, y-280,x+80, y-467,steps2-=.002);		
	}
	else if(m2==800|| m2<=1600)
	{
		actrotateleg(x, y-280,x+80, y-467,steps2+=.002);		
	}
	else if(m2==1601)
	{
		m2=0;
	}
	m2++;
	

	if(m3<800)
	{		
		//printf("s1");
		actrotateleg(x, y-280,x-80, y-467,steps3+=.002);		
	}
	else if(m3==800|| m3<=1600)
	{
		actrotateleg(x, y-280,x-80, y-467,steps3-=.002);		
	}
	else if(m3==1601)
	{
		m3=0;
	}
	m3++;

	if(tempx<700)
	{

	line(tempx+320 ,y+i    ,tempx+320 ,y+i-460);
	line(tempx+320 ,y+i    ,tempx+1300,y+i    );
	line(tempx+320 ,y+i-460,tempx+1300,y+i-460);
	line(tempx+1300,y+i    ,tempx+1300,y+i-460);
	circle(20,tempx+380,y+i-100);
	line(tempx+380,y+i-100,tempx+280,y+i-230);
	line(tempx+380,y+i-360,tempx+280,y+i-230);
	circle(20,tempx+380,y+i-360);
	}
	else
	{
	j+=2;	
	line(tempx-j+320 ,y+i    ,tempx-j+320 ,y+i-460);
	line(tempx-j+320 ,y+i    ,tempx-j+1300,y+i    );
	line(tempx-j+320 ,y+i-460,tempx-j+1300,y+i-460);
	line(tempx-j+1300,y+i    ,tempx-j+1300,y+i-460);
	circle(20,tempx-j+380,y+i-100);
	line(tempx-j+380,y+i-100,tempx-j+280,y+i-230);
	line(tempx-j+380,y+i-360,tempx-j+280,y+i-230);
	circle(20,tempx-j+380,y+i-360);
	}

	


	usleep(2000);
	glFlush();
	
	}
	usleep(10000);
	count++;
	if(count<3)
	{
	man(x,y,count);
	}	
}