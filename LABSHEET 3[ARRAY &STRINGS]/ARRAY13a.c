// a c program to find the length of string using library function strlen

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string[20];
	int i;
	printf("Enter a string:");
	gets(string);
	i=strlen(string);
	printf("The length of the string is %d.",i);
	getch();
}
