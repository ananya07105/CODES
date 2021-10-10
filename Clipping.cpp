#include<stdio.h>
#include<graphics.h>
using namespace std;
void Dda(int x1,int x2,int y1,int y2){
	float steps;
	float d_x=(x2-x1);
	float d_y=(y2-y1);
	if(d_x>d_y){
		steps=d_x;
	}
	else{
		steps=d_y;
	}
	float x_inc=d_x/steps;
	float y_inc=d_y/steps;
	float x=x1;
	float y=y1;
	for(int i=1;i<=steps;i++){
		putpixel(x,y,WHITE);
		x=x+x_inc;
		y=y+y_inc;
	}
	
	return;
}
int bit(int x, int y, int xl, int xh, int yl, int yh){
	int result=0;
	if(x<xl){
		result=1;
	}
	else if(x>xh){
		result=((1<<1) | result);
	}
	if(y>yh){
		result=((1<<2) | result);
	}
	else if(y<yl){
		result=((1<<3) | result);
	}
	return result;
}
int main(){
	int gd = DETECT ,gm;
	initgraph(&gd, &gm, "");
	int xl=100, xh=300, yl=100, yh=200;
	int x_ini=80,x_final=250,y_ini=150,y_final=60;
	Dda(xl,xh,yl,yl);
	Dda(xl,xl,yl,yh);
	Dda(xl,xh,yh,yh);
	Dda(xh,xh,yl,yh);
	Dda(x_ini,x_final,y_ini,y_final);
	int initial = bit(x_ini,y_ini,xl,xh,yl,yh);
	int final = bit(x_final,y_final,xl,xh,yl,yh);
	if(initial==0 && final==0){
		printf("Completely Inside");
	}
	else if((initial & final)==0){
		printf("Partially Inside");
	}
	else{
		printf("Outside");
	}
	
	getch();
	closegraph();
	
	
	return 0;
}



