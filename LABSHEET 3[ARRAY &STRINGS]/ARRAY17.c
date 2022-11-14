// a c program that determines the string is palindrome or not

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string[100],string1[100];
	int i;
	printf("Enter the string:\n");
	gets(string);
	strcpy(string1,string);
	i=strcmp(string,string1);
	if(i==0)
	{
		printf("%s is a palindrome.",string1);
	}
	else
	{
		printf("%s is not a palindrome.",string1);
	}
	getch();
}
