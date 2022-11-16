/*12.Define a structure called date with three elements day, month and year. Write a program to 
enter the two date and print the difference*/

#include<stdio.h>
#include<conio.h>
struct date
{
	int year;
	int month;
	int day;
}current,past,today;
void main()
{
	printf("Enter the date in DD/MM/YYYY format and number of days should be <=30:\n");
	printf("Enter the past date in AD(for eg 30/02/2003):");
	scanf("%d/%d/%d",&past.day,&past.month,&past.year);
	printf("Enter the current date in AD(for eg 30/02/2022):");
	scanf("%d/%d/%d",&current.day,&current.month,&current.year);
	if(current.day>=past.day)
	{
		today.day=current.day-past.day;
		
	}
	else
	{
		current.day+=30;
		current.month-=1;
		today.day=current.day-past.day;
	}
	if(current.month>=past.month)
	{
		today.month=current.month-past.month;
	}
	else
	{
		current.month+=12;
		current.year-=1;
		today.month=current.month-past.month;
	}
	today.year=current.year-past.year;
	printf("Difference : %d years %02d months %02d days",today.year,today.month,today.day);
	getch();
}
