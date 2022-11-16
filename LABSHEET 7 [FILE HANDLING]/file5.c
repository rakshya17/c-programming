/*5.Write a program to create a file named student .txt in d:\test\ drive and write
 name, roll, address and marks of a student to this file.*/
 
 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 void main()
 {
 	char name[100],address[100];
 	int marks;
 	FILE *fp;
 	fp=fopen("D:\\student.txt","w");
 	if(fp==NULL)
 	{
 		printf("File cannot be opened.");
 		exit(0);
	}
else
{
	printf("Enter the name of student :");
	gets(name);
	printf("Enter the address of student :");
	gets(address);
	printf("Enter the marks of student :");
	scanf("%d",&marks);
	fprintf(fp,"The details of students are :\n\n");
	fprintf(fp,"Name=%s\nAddress=%s\nMarks=%d",name,address,marks);
}	
fclose(fp);
 }
