#include<iostream>
#include<winbgim.h>
#include<math.h>
#include<conio.h>
using namespace std;
int color=15;
void Ve4diem(int xc,int yc,int x, int y,int color)
{
    putpixel(xc+x,yc+y,color);
    putpixel(xc-x,yc+y,color);
    putpixel(xc-x,yc-y,color);
    putpixel(xc+x,yc-y,color);
    delay(10);
}
void Elipse(int x_center,int y_center,int a,int b,int color)
{
    float p,a2,b2;
    int x,y;
    a2=pow(a,2);
    b2=pow(b,2);
    x=0;
    y=b;
    p=2*((float)b2/a2)-(2*b)+1;
    while(((float)b2/a2)*x<=y) //ve nhanh thu 1(tu tren xuong )
    {
        Ve4diem(y_center,y_center,x,y,color);
        if(p<0)
        {
            p=p+2*((float)b2/a2)*(2*x+3);
        }
        else{
            p= p- 4*y + 2*((float)b2/a2)*(2*x+3);
            y--;
        }
        x++;
    }
    y=0;//ve nhanh thu 2(tu duoi len )
    x=a;
    p=2*((float)a2/b2)-2*a+1;
    while(((float)a2/b2)*y<=x)
    {
        Ve4diem(y_center,y_center,x,y,color);
        if(p<0)
        {
            p=p +2*((float)a2/b2)*(2*y+3);
        }
        else
        {
            p=p- 4*x + 2*((float)a2/b2)*(2*y+3);
            x=x-1;
        }
        y=y+1;
    }
}
int main()
{
    int x,y;
    cout<<"\nNhap toa do tam Elip \nx: "; cin>>x; //x=250 y=300
    cout<<"\ny: "; cin>>y;
    initwindow(800,1000);
    Elipse(x,y,300,150,color);
    getch();
    return 0;
}
