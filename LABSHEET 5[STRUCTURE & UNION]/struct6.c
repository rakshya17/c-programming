/*6.Create a structure named book which has name, pages and price as member variables. Read name
of book, its pages and price as member variables. Read name of book, its page number and price.
Finally display these members value .Use pointer to structure instead of structure itself to 
access member variable. */

#include<stdio.h>
#include<conio.h>
struct book
{
	char name[50];
	int page;
	int price;
};
void main()
{
	struct book s,*p;
	p=&s;
	printf("Enter the name of the book:");
	gets((*p).name);
	printf("Enter the no of pages on the book:");
	scanf("%d",&(*p).page);
	printf("Enter the price of the book:");
	scanf("%d",&(*p).price);
printf("\nDisplaying the details of the book:\n");
printf("Name of Book : %s\n",(*p).name);
printf("Pages : %d\n",(*p).page);
printf("Price : Rs %d",(*p).price);
getch();
}
