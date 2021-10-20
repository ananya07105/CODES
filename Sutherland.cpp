#include<iostream>
#include<conio.h>
#include<graphics.h>
#define round(a) ((int)(a+0.5))
using namespace std;
int k;
float xmin,ymin,xmax,ymax,arr[60],m;
void clipl(float x1,float y1,float x2,float y2)
{
    if(x2-x1)
        m=(y2-y1)/(x2-x1);
    else
        m=100000;
    if(x1 >= xmin && x2 >= xmin)
    {
        arr[k]=x2;
        arr[k+1]=y2;
        k+=2;
    }
    if(x1 < xmin && x2 >= xmin)
    {
        arr[k]=xmin;
        arr[k+1]=y1+m*(xmin-x1);
        arr[k+2]=x2;
        arr[k+3]=y2;
        k+=4;
    }
    if(x1 >= xmin  && x2 < xmin)
    {
        arr[k]=xmin;
        arr[k+1]=y1+m*(xmin-x1);
        k+=2;
    }
}

void clipt(float x1,float y1,float x2,float y2)
{
    if(y2-y1)
        m=(x2-x1)/(y2-y1);
    else
        m=100000;
    if(y1 <= ymax && y2 <= ymax)
    {
        arr[k]=x2;
        arr[k+1]=y2;
        k+=2;
    }
    if(y1 > ymax && y2 <= ymax)
    {
        arr[k]=x1+m*(ymax-y1);
        arr[k+1]=ymax;
        arr[k+2]=x2;
        arr[k+3]=y2;
        k+=4;
    }
    if(y1 <= ymax  && y2 > ymax)
    {
        arr[k]=x1+m*(ymax-y1);
        arr[k+1]=ymax;
        k+=2;
    }
}

void clipr(float x1,float y1,float x2,float y2)
{
    if(x2-x1)
        m=(y2-y1)/(x2-x1);
    else
        m=100000;
    if(x1 <= xmax && x2 <= xmax)
    {
        arr[k]=x2;
        arr[k+1]=y2;
        k+=2;
    }
    if(x1 > xmax && x2 <= xmax)
    {
        arr[k]=xmax;
        arr[k+1]=y1+m*(xmax-x1);
        arr[k+2]=x2;
        arr[k+3]=y2;
        k+=4;
    }
    if(x1 <= xmax  && x2 > xmax)
    {
        arr[k]=xmax;
        arr[k+1]=y1+m*(xmax-x1);
        k+=2;
    }
}

void clipb(float x1,float y1,float x2,float y2)
{
    if(y2-y1)
        m=(x2-x1)/(y2-y1);
    else
        m=100000;
    if(y1 >= ymin && y2 >= ymin)
    {
        arr[k]=x2;
        arr[k+1]=y2;
        k+=2;
    }
    if(y1 < ymin && y2 >= ymin)
    {
        arr[k]=x1+m*(ymin-y1);
        arr[k+1]=ymin;
        arr[k+2]=x2;
        arr[k+3]=y2;
        k+=4;
    }
    if(y1 >= ymin  && y2 < ymin)
    {
        arr[k]=x1+m*(ymin-y1);
        arr[k+1]=ymin;
        k+=2;
    }
}
void anotherwindow(int xmin,int ymax,int xmax,int ymin,int n,int poly[])
{
    initwindow(getmaxx(), getmaxy());
    setcolor(WHITE);
    outtext("INPUT WINDOW!");
    rectangle(xmin,ymax,xmax,ymin);
    setcolor(YELLOW);
    fillpoly(n,poly);
}
int main()
{
    int gdriver=DETECT,gmode,n,poly[60],i;
    float xi,yi,xf,yf,polyy[60];
    cout<<"MADE BY: ANANYA SHARMA\n\n";
    cout<<">>>> Sutherland-Hodgeman Polygon Clipping Program <<<<\n\n";
    cout<<"Enter Window Coordinates :\nXmin and Ymin  = ";
    cin>>xmin>>ymin;
    cout<<"Xmax and Ymax = ";
    cin>>xmax>>ymax;
    cout<<"\n\nEnter polygon details: \nNumber of sides in Polygon : ";
    cin>>n;
    cout<<"Enter the coordinates of Polygon : \n";

    for(i=0;i < 2*n;i++)
    {
       if(i%2==0)
       {
         cout<<"Point["<<i/2+1<<"] = ";
       }
       cin>>polyy[i];
    }
	cout<<endl;
    polyy[i]=polyy[0];
    polyy[i+1]=polyy[1];
    for(i=0;i < 2*n+2;i++)
		poly[i]=round(polyy[i]);
    initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
    setcolor(GREEN);
    rectangle(xmin,ymax,xmax,ymin);
    cout<<"\nUNCLIPPED POLYGON is shown on BGI Window";
    cout<<"\nPress any key after selecting BGI Window to see output";
    setcolor(WHITE);
    outtext("INPUT");
    fillpoly(n,poly);
    anotherwindow(xmin,ymax,xmax,ymin,n,poly);
	getch();
    cleardevice();
    setcolor(WHITE);
    outtext("OUTPUT");
    k=0;
    for(i=0;i < 2*n;i+=2)
		clipl(polyy[i],polyy[i+1],polyy[i+2],polyy[i+3]);
    n=k/2;
    for(i=0;i < k;i++)
		polyy[i]=arr[i];
    polyy[i]=polyy[0];
    polyy[i+1]=polyy[1];
    k=0;
    for(i=0;i < 2*n;i+=2)
		clipt(polyy[i],polyy[i+1],polyy[i+2],polyy[i+3]);
    n=k/2;
    for(i=0;i < k;i++)
		polyy[i]=arr[i];
    polyy[i]=polyy[0];
    polyy[i+1]=polyy[1];
    k=0;
    for(i=0;i < 2*n;i+=2)
		clipr(polyy[i],polyy[i+1],polyy[i+2],polyy[i+3]);
    n=k/2;
    for(i=0;i < k;i++)
		polyy[i]=arr[i];
    polyy[i]=polyy[0];
    polyy[i+1]=polyy[1];
    k=0;
    for(i=0;i < 2*n;i+=2)
		clipb(polyy[i],polyy[i+1],polyy[i+2],polyy[i+3]);
    for(i=0;i < k;i++)
		poly[i]=round(arr[i]);
    if(k)
		fillpoly(k/2,poly);
    setcolor(YELLOW);
    rectangle(xmin,ymax,xmax,ymin);
    cout<<"\nCLIPPED POLYGON is shown now on BGI Window";
    getch();
    closegraph();
    return 0;
}

