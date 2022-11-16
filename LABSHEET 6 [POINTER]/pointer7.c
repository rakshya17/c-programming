/*7.Write a program that takes one dimensional array of n numbers and sorts the elements in 
ascending order. Use dynamic memory allocations.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *p,n,i,j,temp;
	printf("Enter the value of n:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("Enter numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i) > *(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
	
}
