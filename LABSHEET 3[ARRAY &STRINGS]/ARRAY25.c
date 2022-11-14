//25.	Write a program to read names of 10 students and sort them in alphabetical order.

#include<stdio.h>
#include<string.h>
int main()
{
	char name[100][100],temp[100];
	int i,j,k;
	printf("Enter name of 10 students:\n");
	for(i=0;i<10;i++)
	{
		scanf("%s",name[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	printf("\nSORTING THE NAMES IN ALPHABETICAL ORDER:\n");
	for(i=0;i<10;i++)
	{
		printf("%s\n",name[i]);
	}
	
	return 0;
}
