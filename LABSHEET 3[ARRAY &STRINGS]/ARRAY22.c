//22.	Write a program to input a string and count number of vowels present in the string.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string[100];
	int vowel=0,i,length;
	printf("Enter the string:");
	gets(string);
	length=strlen(string);
	for(i=0;i<length;i++)
	{
		if((string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')||(string[i]=='A'||string[i]=='E'
		||string[i]=='I'||string[i]=='O'||string[i]=='U'))
		{
			vowel++;
		}
	}
	printf("The number of vowels present in the string is %d.",vowel);
	getch();
	
}
