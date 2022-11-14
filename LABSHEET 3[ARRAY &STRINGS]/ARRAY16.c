//17.	Write a program that accept a string from user and toggle the case of alphabet

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string[100];
	int i;
	printf("Enter the string:");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]>='a'&&string[i]<='z')
		{
			string[i]-=32;
		}
		else if(string[i]>='A'&&string[i]<='Z')
		{
			string[i]+=32;
		}
	}
	printf("The given case after toggling is :\n ");
	puts(string);
	getch();
	
}
