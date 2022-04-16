#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

//v (m, n)
//x' = x + m;
//y' = y + n;
//phep Tinh tien tren duong thang
int main (){
	initwindow (1000,1000);
    int x1 = 100, x2 = 300;
    int y1 = 150, y2 = 60;
    //dung for de di chuyen ung dung phep tinh tien
    for(int i=0;i<100;i++){
    	cleardevice();//xoa man hinh da ve truoc do
    	line(x1+i,y1,x2+i,y2);//dich chuyen theo i
    	Sleep(10);
	}
	
    getch ();
    return 0;
}
void display (){
	glColor3f (1.0, 1.0, 1.0); //mau trang
 	glBegin(GL_POLYGON); //ve hcnhat
 	glVertex3f (0.25, 0.25, 0.0); //xac dinh cac dinh
 	glVertex3f (0.75, 0.25, 0.0);
 	glVertex3f (0.75, 0.75, 0.0);
 	glVertex3f (0.25, 0.75, 0.0);
 	//phep bien doi ti le
 	void glScale{}(1.0, 2.0, 2.0, 2.0);
 	glEnd();
}
 
    
