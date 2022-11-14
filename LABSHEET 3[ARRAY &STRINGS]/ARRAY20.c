//21.	Write a program that determines how many lower case, upper case and space are in a given string.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int lowercase=0,uppercase=0,space=0,length,i,other=0;
	char string[100];
	printf("Enter a string :");
	gets(string);
	length=strlen(string);
	for(i=0;i<length;i++)
	{
	if(string[i]>='A'&&string[i]<='Z')
	{
	uppercase++;	
	}	
	else if(string[i]>='a'&&string[i]<'z')
	{
		lowercase++;
	}
	else if(string[i]=" ")
	{
		space++;
	}
	
	else
	{
	
	}
	
}
printf("Space=%d\nUppercase=%d\nLowercase=%d\n",space,uppercase,lowercase);

getch();
}
