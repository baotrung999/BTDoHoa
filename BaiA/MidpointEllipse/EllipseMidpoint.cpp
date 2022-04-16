#include<graphics.h>
#include<conio.h>
#include<iostream>
#define ROUND(a) (int)(a+0.5)
using namespace std;
 
void plot(int xc, int yc, int x, int y, int color)
{
    putpixel(xc+x, yc+y, color);
    putpixel(xc-x, yc+y, color);
    putpixel(xc+x, yc-y, color);
    putpixel(xc-x, yc-y, color);
    delay(10);
}
void elipMidpoint(int xc,int yc, int a, int b, int color)
{
    int x, y, fx, fy, a2, b2, p;
    x = 0;
    y = b;
    a2 = a*a;
    b2 = b*b;
    fx = 0;
    fy = 2 * a2 * y;
    plot(xc, yc, x, y, color);
    p = ROUND(b2 -(a2*b) + (0.25*a2));
    while(fx<fy)//ve nhanh thu 1
    {
        x++;
        fx += 2*b2;
        delay(50);
        if(p<0)
        {
            p += b2*(2*x + 3);
        }
        else
        {
            y--;
            p += b2*(2*x +3) + a2*(2- 2*y);
            fy -= 2*a2;
        }
        plot(xc, yc, x, y, color);
    }
    p = ROUND(b2*(x +0.5)*(x +0.5) + a2*(y-1)*(y-1) - a2*b2);
    while(y>0)//Ve nhanh thu 2
    {
        y--;
        fy -= 2*a2;
        delay(50);
        if(p >=0)
        {
            p += a2*(3-2*y); 
        }
        else
        {
            x++;
            fx += 2*b2;
            p += b2*(2*x +2) +a2*(3- 2*y);
        }
        plot(xc, yc, x, y, color);
    }
}
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,NULL);
    elipMidpoint(getmaxx()/2, getmaxy()/2,200,100,15);
    getch();
    closegraph();
    return 0;
}
