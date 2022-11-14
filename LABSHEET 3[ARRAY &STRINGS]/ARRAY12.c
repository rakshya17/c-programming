//Write a program to copy contents of one array into another in reverse order

#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],n,i;
printf("How many elements:");
scanf("%d",&n);
printf("Enter %d elements:\n",n);
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}

printf("Printing the entered numbers in reverse:\n\n");
for(i=n-1;i>=0;i--)
{

printf("arr[%d]=%d\n",i,arr[i]);
}	
getch();
}
