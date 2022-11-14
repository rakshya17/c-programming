//Write a program to read two m*n matrices and display their sum, difference and product.

#include<stdio.h>
#include<conio.h>
#define N 30
void main()
{
	int mat[N][N],mat1[N][N],c[N][N],i,j,m,n,k,add,sum[N][N],diff[N][N]; 
	printf("Enter the row and the column of the matrix:");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of first Matrix of %d * %d :\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\nEnter the elements of 2nd matrix of %d * %d:\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	//sum and difference of the matrix
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=mat[i][j]+mat1[i][j];
			diff[i][j]=mat[i][j]-mat1[i][j];
		}
	}
	//multiplication of matrix
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			add=0;
			for(k=0;k<m;k++)
			{
				add=add+mat[i][k]*mat1[k][j];
				c[i][j]=add;
			}
		}
	}
	//DISPLAYING SUM,DIFFERENCE AND MULTIPLICATION OF MATRIX
	printf("\nThe SUM of the matrix are :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	printf("\nThe DIFFERENCE of the matrix are :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",diff[i][j]);
		}
		printf("\n");
	}
	printf("\nThe MULTIPLICATION of the matrix are:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	getch();
}
