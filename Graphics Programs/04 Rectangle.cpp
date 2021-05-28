// Rectangle
#include<graphics.h>
#include<dos.h>
#include<conio.h>

int main()
{
    int gd = DETECT , gm;

    initgraph(&gd,&gm,"");

    rectangle(200, 200, 350,300);

    getch();
    closegraph();

    return 0;
}
