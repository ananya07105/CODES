#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	int d,r,x,y,xc,yc;
	initgraph(&gd,&gm,"");
	printf("Enter the radius:");
	scanf("%d",&r);
	printf("Enter the center of circle:");
	scanf("%d%d",&xc,&yc);
	d=3-2*r;
	x=0;
	y=r;
	printf("NAME: ANANYA SHARMA\n SAPID: 500077736\n");
	printf("The points are:\n");
	while(x<=y)
	{
		putpixel(x+xc,y+yc,WHITE);
        putpixel(x+xc,-y+yc,WHITE);
        putpixel(-x+xc,-y+yc,WHITE);
        putpixel(-x+xc,y+yc,WHITE);
        putpixel(y+xc,x+yc,WHITE);
        putpixel(y+xc,-x+yc,WHITE);
        putpixel(-y+xc,-x+yc,WHITE);
        putpixel(-y+xc,x+yc,WHITE);
		printf("(%d, %d)\n",x,y);
		if(d<=0)
		{
		    d=d+4*x+6;
		    x++;
		}
	    else
	    {
		  d=d+4*x-4*y+10;
		  y=y-1;
		  x++;
	    }
	   
}
getch();
closegraph();
return 0;
}
