//sorts 10 numbers in ascending order
#include<stdio.h>
#include<conio.h>
void main()
{

int num[20],i,j,temp;
printf("Enter 10 numbers of your choice:\n");
for(i=0;i<10;i++)
{
	scanf("%d",&num[i]);
}
for(i=0;i<10;i++)
{
	for(j=i+1;j<10;j++)
	{
		if(num[i]>num[j])
		{
			temp=num[i];
			num[i]=num[j];
			num[j]=temp;
		}
	}
}
	printf("Displaying the numbers in ascending order:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",num[i]);
	}
	getch();

}
