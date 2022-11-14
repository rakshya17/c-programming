//20.	Write a program that accept a string and display its ascii value.

#include<stdio.h>
#include<conio.h>
void main()
{
	char string[100];
	printf("Enter string :");
	gets(string);
	printf("The ASCII value of %s is %d.",string,string);
	getch();
}
