/*2.	Write a program to print out all Armstrong numbers between 1 and 500.
3.	[Hint: If sum of cubes of each digit of the number is equal to the number itself, 
then the number is called anArmstrong number. For example, 
153= (1*1*1) + (5*5*5) + (3*3*3)] */

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,store,sum,d;
	for(i=1;i<=100;i++)
	{
		store=i;
		sum=0;
		while(store>0)
		{
			d=store%10;
			sum=sum+(d*d*d);
			store=store/10;
		}
	if(sum==i)
	{
		printf("%d\t",i);
	}	
	}
	getch();
}
