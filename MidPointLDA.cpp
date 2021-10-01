#include<graphics.h>
using namespace std;
int  midPoint(int x1,int y1,int x2,int y2)
{
	int dx=x2-x1;
	int dy=y2-y1;
    int d=dy-(dx/2);
	int x=x1;
	int y=y1;
	putpixel(x,y,WHITE);
    while(x<x2)
	{
		if(d<=0){
			d=d+dy;
			x++;
		}
		else{
			d=d+dy-dx;
		    x++;
			y++;
		}
		putpixel(x,y,WHITE);
	}
    
}
int main() 
{ 
	int gd = DETECT , gm;
	initgraph(&gd, &gm,"");
    midPoint(100,100,600,300); 
    getch();
    return 0; 
} 
