#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int main(){
    int x[4],y[4],i;
    double puty,putx,t;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    for ( i = 0; i < 4; i++)
    {
        printf("Nhap toa do x va y cho diem %d: ",i+1);//(50,60) (200,450) (650,400) (300,800)
        scanf("%d%d",&x[i],&y[i]);
        putpixel(x[i],y[i],3);
        
    }
    for(t=0.0;t<=1.0;t=t+0.001){
        putx=pow(1-t,3)*x[0]+ 3*t*pow(1-t,2)*x[1]+ 3*t*t*pow(1-t,1)*x[2]+ pow(t,3)*x[3];
        puty=pow(1-t,3)*y[0]+ 3*t*pow(1-t,2)*y[1]+ 3*t*t*pow(1-t,1)*y[2]+ pow(t,3)*y[3];
        putpixel(putx,puty,WHITE);
    }
    getch();
    closegraph();
    
}
