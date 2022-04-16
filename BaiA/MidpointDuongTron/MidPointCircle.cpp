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
void midpoint(int x0,int y0,int R)
{
    int x,y;
    x=0;y=R;
    float P=5/4-R;
    cout<<P;
    while(x<=y)
    {
    	delay(DELAY);
        if(P<0) P=P+2*x+3;
        else{
            y--;
            P=P+2*(x-y)+5;
        }
        put8pixel(x0,y0,x,y);
        x++;
    }
}
int main()
{
    ktdh();
    midpoint(200,200,150);
    delay(3000);
    getch();
    closegraph();
}
