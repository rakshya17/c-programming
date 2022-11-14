//19.	Write a program that accept the string and display it in reverse order without using strrev( ) function.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,length;
	char string[100],reverse[100];
	printf("Enter string:");
	gets(string);
	length=strlen(string);
	for(i=0,j=length-1;i<length;i++,j--)
	{
		reverse[i]=string[j];
	}
	reverse[i]='\0';
	puts(reverse);
	getch();
}


