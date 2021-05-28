// Rectangle Within Rectangle
#include<graphics.h>
#include<dos.h>
#include<conio.h>

int main()
{
    int gd = DETECT , gm , x1 = 0 , x2 = 0 , y1 = 0 , y2 = 0;

    initgraph(&gd,&gm,"");

    for(x1 = 200 , x2 = 250 ,y1 =250 ,y2 = 300; x1 > 50 ; x1 -= 25 ,x2 += 25 ,y1 -= 25 ,y2 += 25)

        rectangle(x1 , y1 , x2 , y2);


    getch();
    closegraph();

    return 0;
}
