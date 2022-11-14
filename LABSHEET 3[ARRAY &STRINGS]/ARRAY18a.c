//19.	Write a program that accept the string and display it in reverse order using strrev( ) function.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string[100],copy[100];
	printf("Enter a string:");
	gets(string);
	strcpy(copy,string);
	strrev(string);
	printf("The reverse of %s is %s.",copy,string);
	getch();
}
