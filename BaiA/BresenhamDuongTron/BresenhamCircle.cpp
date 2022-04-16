#include<conio.h>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<graphics.h>
#define DELAY 10
using namespace std;
void ktdh()
{
    int gd=0,gm;
    initgraph(&gd,&gm,NULL);
}
void nhap(int &x,int &y,int &R)
{
    cout<<"Nhap vao toa do tam O\n";
    cout<<"nhap x = ";
    cin>>x;
    cout<<"Nhap y = ";
    cin>>y;
    cout<<"Nhap vao ban kinh duong tron : ";
    cin>>R;
}
void put8pixel(int x0,int y0,int x,int y)
{	//khoi tao 8 diem 
    putpixel(x+x0,y+y0,5);
 	putpixel(y+x0,x+y0,5);
 	putpixel(-x+x0,-y+y0,5);
 	putpixel(-y+x0,-x+y0,5);
 	putpixel(-x+x0,y+y0,5);
 	putpixel(-y+x0,x+y0,5);
 	putpixel(x+x0,-y+y0,5);
 	putpixel(y+x0,-x+y0,5);;
}
void bresenham(int x0,int y0,int R)
{
    int x,y;
    x=0;y=R;
    int p=3-2*R;
    while(x<=y)
    {
    	delay(DELAY);
        if(p<0) p=p+4*x-6;
        else{
            y--;
            p=p+4*(x-y+10);
        }
        put8pixel(x0,y0,x,y);
        x++;
    }
}
int main()
{
    ktdh();
    bresenham(200,200,150);
    delay(3000);
    getch();
    closegraph();
}
