/*5.Write a program that reads different names and address into the computer and sorts the names
 into alphabetical order using structure variables.*/
 
 #include<stdio.h>
 #include<string.h>
 #include<conio.h>
 struct employee{
 	char name[50];
 	char address[50];
 }s[20],temp;
 void main()
 {
 	int i,j,n;
 	printf("How many of names with their address you wanna store : ");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		printf("\n\nEnter the name of employee no %d:",i+1);
 		scanf("%s",s[i].name);
 		printf("Enter the address of that employee:");
 		scanf("%s",s[i].address);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(s[i].name,s[j].name)>0)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("\n\nDisplaying the name and address of employees in alphabetical order :\n\n");
	for(i=0;i<n;i++)
	{
		printf("\nName=%s\tAddress=%s",s[i].name,s[i].address);
	}
	getch();
 }
