/* a c program that accepts of marks of BIT-I semester student in c programming and sort them in descending 
order and also print the maximum and minimum marks */

#include<stdio.h>
#include<conio.h>
void main()
{
	int num[200],i,j,max=0,min,temp,n;
	printf("How many students:");
	scanf("%d",&n);
	printf("\n\nEnter the marks of %d students:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]<num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	printf("Displaying the numbers in descending order:\n\n");
	for(i=0;i<n;i++)
	{
			if(max<num[i])
		{
			max=num[i];
		}
	
	
	}
	min=num[0];
	for(i=0;i<n;i++)
	{
	 if(num[i]<min)
		{
			min=num[i];
		}
			printf("%d\t",num[i]);
	}
	printf("\n\bnThe maximum marks brought is %d and the minimum marks brought is %d.",max,min);
	getch();
}


