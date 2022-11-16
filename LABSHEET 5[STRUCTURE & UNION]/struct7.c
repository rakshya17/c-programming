/*7.Create a structure named book which has members name, pages and price. Write a program to 
read name, no of pages and price of 5 books using array of structure. Display the name, no of 
pages and price of most expensive book.*/

#include<stdio.h>
#include<conio.h>
struct book{
	char name[50];
	int page;
	int price;
}s[5],temp;
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		printf("\n\nEnter the name of book No.%d:",i);
		scanf("%s",&s[i].name);
		printf("Enter the no of pages :");
		scanf("%d",&s[i].page);
		printf("Enter the price of the book:");
		scanf("%d",&s[i].price);
	}
	for(i=1;i<=5;i++)
	{
	for(j=i+1;j<=5;j++)
	{
		if(s[i].price < s[j].price)
		{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}
	}
		
	}
	printf("\n\nDisplaying the details of the most expensive book:\n\n");

	for(i=1;i<=1;i++)
	{
	printf("Name = %s\n",s[i].name);
	printf("No of Pages = %d\n",s[i].page);
	printf("Price = %d",s[i].price);
}
	getch();

}



