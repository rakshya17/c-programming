/*10.Define a structure called date with three elements day, month and year. Write a program to enter 
the date and print it.*/

#include<stdio.h>
#include<conio.h>
struct date{
	int day;
	int month;
	int year;
}s;
void main()
{
	printf("Enter the date in DD/MM/YYYY Format :");
	scanf("%d/%d/%d",&s.day,&s.month,&s.year);
	printf("\nDisplaying the Data :\n\n");
	printf("%d/%d/%d",s.day,s.month,s.year);
	getch();
}
