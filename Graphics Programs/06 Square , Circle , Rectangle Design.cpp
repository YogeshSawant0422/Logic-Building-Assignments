//Square , Circle , Rectangle Design
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<math.h>

int main()
{
    int gd = DETECT , gm;

    initgraph(&gd,&gm,"");

    rectangle(250,200,350,300);
    circle(300,250,50);
    circle(300,250,141.421);

    getch();
    closegraph();

    return 0;
}
