#include<graphics.h>
#include<dos.h>
#include<conio.h>

int main()
{
    int gd = DETECT , gm;

    initgraph(&gd,&gm,"");

    line(150, 250, 450,250);

    getch();
    closegraph();

    return 0;

}
