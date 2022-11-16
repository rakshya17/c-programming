/*6.	Write a program read name, address, and telephone, save it in a file and 
display them on the screen. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	struct data
	{
		char name[100];
		char address[100];
		long int number;
	};
	struct data s;
	FILE *fp;
	fp=fopen("D:\\try.txt","w");
	if(fp==NULL)
	{
		printf("Cannot open the file.");
		exit(0);
	}
	{
	printf("Enter name :");
	gets(s.name);
	printf("Enter address :");
	gets(s.address);
	printf("Enter phone no :");
	scanf("%ld",&s.number);
	fprintf(fp,"%s%s%ld",s.name,s.address,s.number);
	fflush(stdin);
}
	fclose(fp);
	fp=fopen("D:\\try.txt","r");
	fscanf(fp,"%s%s%ld",&s.name,&s.address,&s.number);
	printf("%s\n%s\n%ld",s.name,s.address,s.number);
	fclose(fp);
	getch();
}
