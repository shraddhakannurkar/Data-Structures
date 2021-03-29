/*Program to understand pointers to structures*/

#include<stdio.h>

struct student{
	char name[20];
	int rollno;
	int marks;
};


int main()	
{	
	struct student stud1 = {"Shraddha",1,99};

	struct student *ptr = &stud1;
	printf("Name = %s\n",ptr->name);
	printf("Rollno = %d\n",ptr->rollno);
	printf("Marks = %d\n",ptr->marks);
	return 0;
}
