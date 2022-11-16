//6.Write a program to add two matrices using pointers( m by n size matrix).

#include<stdio.h>
#include<conio.h>
void display(int *a,int *b,int *c,int m,int n);
int main()
{
	int mat1[20][20],mat2[20][20],sum[20][20],*a,*b,*c,m,n,i,j;
	a=&mat1[0][0];
	b=&mat2[0][0];
	c=&sum[0][0];
	printf("Enter how many row and column:");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of first matrix :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(a+i*n+j);
		}
	}
	printf("Enter the elements of second matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(b+i*n+j);
		}
	}
	display(a,b,c,m,n);
	getch();
	return 0;
	
}
void display(int *mat1,int *mat2,int *sum,int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(sum+i*n+j)=*(mat1+i*n+j) + *(mat2+i*n+j);
		}
   }
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		printf("%d\t",*(sum+i*n+j));
	   }
	   printf("\n");
	   }	
}
