//9.Write a program to read matrix of size mxn entered by user, and display its transpose matrix

#include<stdio.h>
#include<conio.h>
void main()
{
	int mat1[20][20],*p,i,j,m,n;
	p=&mat1[0][0];
	printf("Enter row and column :");
	scanf("%d%d",&m,&n);
	printf("Enter the elements :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(p+i*n+j));
		}
	}
	
	printf("priniting the elements :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(p+i*n+j));
		}
		printf("\n");
	}
	printf("\nDisplaying the transpose of the matrix :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(p+j*n+i));
		}
		printf("\n");
	}
getch();
}
