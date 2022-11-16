//4.Write a program to append some text to a certain file. Take name from user.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char name[100],txt[100],text1;
	printf("Enter the name of file:");
	gets(name);
	fp=fopen(name,"a");
	if(fp==NULL)
	{
		printf("Cannot open the file.");
		exit(0);
	}
printf("Enter anything :");
gets(txt);
fputs(txt,fp);
fclose(fp);
fp=fopen(name,"r");
 while ((text1 = fgetc(fp) )!= EOF)
   {
      printf ("%c",text1);
}
fclose(fp);
	getch();
}
