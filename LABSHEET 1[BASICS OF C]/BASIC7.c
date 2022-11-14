//7.	Write a program to convert entered number of days into years, months and days.

#include<stdio.h>
#include<conio.h>
void main()
{
	int day,year,months,days;
	printf("Enter how many days :");
	scanf("%d",&day);
	year=day/365;
	months=(day-(year*365))/30;
	days=day-(year*365)-(months*30);
	printf("The number of days in Year:Months:Day format is\n");
	printf("%d:%d:%d",year,months,days);
	getch();

}
