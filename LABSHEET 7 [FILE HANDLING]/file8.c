/*8.Write a program to write and read even numbers between 10 and 50 to a file named 
evennumbers.txt in d:\test\evennumbers.txt.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int num[100],i;
	FILE *fp;
	fp=fopen("D:\\evennumbers.txt","w");
	if(fp==NULL)
	{
		printf("cannot open file.");
		exit(0);
	}
	for(i=1;i<=50;i++)
	{
		if(i%2==0)
		{
		fprintf(fp,"%d\n",i);
	}
	}
	fclose(fp);
	fp=fopen("D:\\evennumbers.txt","r");
	printf("The even numbers from 10 to 50 are :");
	for(i=1;i<=50;i++)
	{
		fscanf(fp,"%d",&i);
		if(i>=10&&i<=50)
		{
		printf("%d\n",i);
	    }
	}
	fclose(fp);
	getch();
	
}
