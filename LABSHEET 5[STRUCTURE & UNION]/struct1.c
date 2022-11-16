
//question no 1 
#include<stdio.h>
int main()
{
struct student{
		char name[50];
		char grade;
	    int marks;
};

	int i;
	struct student s[4]=
	{
		
		{"Ram",'C',100},
		{"Sita",'B',120},
		{"Gita",'B',130},
		{"Gopal",'A',150}
	};
	
	for(i=0;i<4;i++)
	{
		printf("\n\n Name=%s",s[i].name);
		printf("\n Grade=%c",s[i].grade);
		printf("\n Total-Marks=%d",s[i].marks);
	}
	
	return 0;
}

