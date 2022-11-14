//24.	Write a program to concatenate two strings without using string handling built in function.

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char string[100],string1[100],name[100];
	printf("Enter string 1st:");
	gets(string);
	printf("Enter string 2nd:");
	gets(string1);
	for(i=0;string[i]!='\0';i++)
	{
		name[i]=string[i];
		
	}
	name[i]=' ';
	for(j=0;string1[j]!='\0';j++)
	{
		name[i+j+1]=string1[j];
		
	}
	name[i+j+1]='\0';
	printf("%s",name);
	getch();
	return 0;
}
