#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void mid_pts(int,int,int,int);
int main()
{
	int gdriver=DETECT, gmode;
	int xc,yc,x,y;
	float p,r;
	initgraph(&gdriver,&gmode,"");
	printf("Enter the center coordinates:");
	scanf("%d %d",&xc,&yc);
	printf("Enter the radius:");
	scanf("%f",&r);
	x=0;
	y=r;
	p=1-r;
	do
	{
		mid_pts(xc,yc,x,y);
		if(p<0)
		{
			p=p+((2*x)+3);
		}
		else
		{
			p=p+((2*(x-y))+5);
			y--;
		}
		x++;
	}while(x<y);
	if(x==y)
	  mid_pts(xc,yc,x,y);
	getch();
	closegraph();
}
void mid_pts(int x,int y,int x1,int y1)
{
	putpixel(x+x1,y+y1,YELLOW);
	putpixel(x-x1,y+y1,YELLOW);
	putpixel(x+x1,y-y1,YELLOW);
	putpixel(x-x1,y-y1,YELLOW);
	putpixel(x+y1,y+x1,YELLOW);
	putpixel(x-y1,y+x1,YELLOW);
	putpixel(x+y1,y-x1,YELLOW);
	putpixel(x-y1,y-x1,YELLOW);
}
