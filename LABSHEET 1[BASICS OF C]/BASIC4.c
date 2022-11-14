/* 4.	The length and breadth are input through the keyboard. Write a program to calculate 
the area and perimeter of the rectangle.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int length,breadth,area,perimeter;
	printf("Enter the length and then the breadth : ");
	scanf("%d%d",&length,&breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	printf("\nlength = %d\tbreadth = %d\n",length,breadth);
	printf("Perimeter :\n= 2(Length + breadth)\n=2(%d + %d)\n=%d\n",length,breadth,perimeter);
	printf("\n\nArea :\n = Length * breadth\n=%d * %d\n=%d",length,breadth,area);
	getch();
}
