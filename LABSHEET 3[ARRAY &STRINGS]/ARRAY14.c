// 15.	Write a program that accept a string from user and display the content in upper case

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string[20];
	printf("Enter the string in lowercase to convert into uppercase:\n");
	gets(string);
	strupr(string);
	printf("The string in upper case is:\n");
	puts(string);
	getch();
}
