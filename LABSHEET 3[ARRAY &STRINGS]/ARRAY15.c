//Write a program that accept a string from user and display the content in lower case.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string[20];
	printf("Enter the string in uppercase to convert into lowercase:\n");
	gets(string);
	strlwr(string);
	printf("The UPPERCASE string in LOWERCASE IS:\n");
	puts(string);
	getch();
}
