//Circle Within Circle
#include<graphics.h>
#include<dos.h>
#include<conio.h>
int main()
{
    int gd = DETECT , gm , x = 250 , y = 250 , radius = 0;

    initgraph(&gd,&gm,"");

    for(radius = 25 ; radius <= 200 ; radius += 20)
    {
         circle(x ,y , radius);
    }

    getch();
    closegraph();

    return 0;

}
