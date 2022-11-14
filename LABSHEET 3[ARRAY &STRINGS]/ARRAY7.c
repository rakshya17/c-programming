#include<stdio.h>
#include<conio.h>
void main()
{
	int num[25],i,positive=0,negative=0,odd=0,even=0;
	printf("Enter 25 numbers of your choice:\n");
	for(i=0;i<25;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<25;i++)
	{
		if(num[i]%2==0)
		even++;
		else
		odd++;
		if(num[i]<0)
		negative++;
		else
		positive++;
		
	}
	printf("\nThe number of positive numbers is %d.\n",positive);
printf("\nThe number of negative numbers is %d.\n",negative);
printf("\nThe number of even numbers is %d.\n",even);
printf("\nThe number of odd numbers is %d.\n",odd);
getch();
}
