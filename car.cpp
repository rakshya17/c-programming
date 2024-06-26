#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>

void clearScreen()
{
    system("cls");
   
}

int main()
{
   int gd=DETECT,gm,i=10;
    clearScreen();
    initgraph(&gd, &gm, "C:\\TC\\BGI");
 
    while (i <= 600)
    {
	    setcolor(WHITE); 
        line(0 + i, 300, 210 + i, 300);
        line(50 + i, 300, 75 + i, 270);
        line(75 + i, 270, 150 + i, 270);
        line(150 + i, 270, 165 + i, 300);
        line(0 + i, 300, 0 + i, 330);
        line(210 + i, 300, 210 + i, 330);
        circle(65 + i, 330, 15);
        circle(65 + i, 330, 2);
        circle(145 + i, 330, 15);
        circle(145 + i, 330, 2);
        line(0 + i, 330, 50 + i, 330);
        line(80 + i, 330, 130 + i, 330);
        line(210 + i, 330, 160 + i, 330);
        line(0,345,600,345);
        line(0,360,600,360);
        rectangle(500,10,600,70);

        if (i == 200)
        {
            setfillstyle(SOLID_FILL, RED);
            circle(525, 45, 25);
            floodfill(525, 45, WHITE);
            Sleep(5000);
        }
        else
        {
            setfillstyle(SOLID_FILL, GREEN);
            circle(575, 45, 25);
            floodfill(575, 45, WHITE);
        }

        i++;
        delay(10);
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}

