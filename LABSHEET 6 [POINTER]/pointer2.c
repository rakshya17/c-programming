//2.Write a program to find the sum of all the elements of an array using pointer.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],sum,n,*p,i;
	printf("Enter how many elements you wanna store:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the value for %d elememt :",i+1);
		scanf("%d",&a[i]);
	}
	p=a;
	sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum + *p;
		p++;
	}
	printf("\nThe sum of entered elements using pointer is %d.",sum);
	getch();
}
