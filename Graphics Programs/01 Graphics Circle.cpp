#include<graphics.h>
#include<dos.h>
#include<conio.h>

int main()
{
    int gd = DETECT , gm;

    initgraph(&gd,&gm,"");

    circle(250 , 250 , 150);

    getch();
    closegraph();

    return 0;

}
