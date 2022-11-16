/*9.Write a program to define a structure Date and declare its variable called Date1 and 
initialize it to February 25, 1957, in the correct format.*/

#include<stdio.h>
#include<conio.h>
struct date{
	char month[20];
	int day;
	int year;
}s;
void main()
{
	printf("Enter the name of month :");
	scanf("%s",s.month);
	printf("Enter the date of day:");
	scanf("%d",&s.day);
	printf("Enter the year:");
	scanf("%d",&s.year);
	printf("............................\n");
	printf("%s %d, %d",s.month,s.day,s.year);
	printf("\n............................");
	getch();
}
