#include<graphics.h>
#include<conio.h>
            #include<winbgim.h>
#include<dos.h>
#include<math.h>
#include<stdio.h>

main()
{
   int gd = DETECT,gm,left=100,top=100,right=200,bottom=200,x= 300,y=150,r=50,i;
   double k=0,af,a,b,c,shift,angle,det1,det2,det3,x1,x2,x3,y1,y2,y3,f,g;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   setbkcolor(4);

for(i=0;i<=1100*5;i++)
   {
     k=i*0.017;


if(i<360)
        {line(200+100*cos(k),200+100*sin(k),200+100*cos(k+1.57),200+100*sin(k+1.57));
   line(200+100*cos(k+1.57),200+100*sin(k+1.57),200+100*cos(k+3.14),200+100*sin(k+3.14));
    line(200+100*cos(k+3.14),200+100*sin(k+3.14),200+100*cos(k+4.71),200+100*sin(k+4.71));
    line(200+100*cos(k+4.71),200+100*sin(k+4.71),200+100*cos(k),200+100*sin(k));
    }
if(i>360 && i<720)
{ellipse(50,350,31-i,59-i,290,290);
 ellipse(50,50,-59-i,-31-i,290,290);
    ellipse(350,350,-239-i,-211-i,290,290);
 ellipse(350,50,-149-i,-121-i,290,290);

}
if(i>720 && i<1080)
{ ellipse(150,250,18-i,73-i,160,160);

ellipse(150,150,-73-i,-18-i,160,160);

ellipse(250,250,-252-i,-198-i,160,160);

ellipse(250,150,-163-i,-108-i,160,160);
}

if(i>1080)
{circle(200,200,100);
delay(100);
i=1;}
delay(1);
cleardevice();
   }


   getch();
   closegraph();
}