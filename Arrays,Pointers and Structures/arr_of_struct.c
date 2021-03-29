/*Program to understand array of structures*/

#include<stdio.h>

struct student{
	char name[20];
	int rollno;
	float marks;
};

int main()
{
	int i;
	struct student stud[3];
	for(i=0;i<3;i++)
	{
		printf("Enter name,rollno and marks\n");
		scanf("%s%d%f",stud[i].name,&stud[i].rollno,&stud[i].marks);
	}
	
	for(i=0;i<3;i++)
		printf("%s %d %.2f\n",stud[i].name,stud[i].rollno,stud[i].marks);
	return 0;
}
