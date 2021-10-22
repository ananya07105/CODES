#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	int gdriver = DETECT, gmode;
	int x1,y1,x2,y2,i,step,xn,yn,dx,dy;
	initgraph(&gdriver,&gmode,"");
	printf("Enter the starting coordinates:");
	scanf("%d%d",&x1,&y1);
	printf("Enter the end coordinates:");
	scanf("%d%d",&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	if(dx>dy)
		step=dx;
	else
		step=dy;
	xn=dx/step;
	yn=dy/step;
	for(i=1;i<=step;i++)
	{
		putpixel(x1,y1,LIGHTBLUE);
		x1=x1+xn;
		y1=y1+yn;
	}
	getch();
	closegraph();
}
