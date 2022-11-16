//3.Write a program to read marks obtained by n student in a subject and display the top five marks.

#include<stdio.h>
#include<conio.h>
void main()
{
int *a,s[20],i,j,n,temp;
printf("How many students marks :");
scanf("%d",&n);
a=s;
for(i=0;i<n;i++)
{
printf("\nEnter the marks of student %d:",i+1);	
scanf("%d",(s+i));
	
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(*(a+i) < *(a+j))
{
temp=*(a+i);
*(a+i)=*(a+j);
*(a+j)=temp;	
}	
}	
}
printf("Printing Out the Top 5 marks :\n");
for(i=0;i<5;i++)
{
printf("%d\n",*(a+i));	
}	
getch();
}
