// a program to read marks of 10 students and print out top 5.

#include<stdio.h>
#include<conio.h>
void main()
{
	int mark[20],i,j,temp;
	printf("Enter the marks of 10 students:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&mark[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(mark[i]<mark[j])
			{
				temp=mark[i];
				mark[i]=mark[j];
				mark[j]=temp;
			}
		}
	}
	printf("The students with the top 5 marks are :\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",mark[i]);
	}
	getch();
}

