/*Program to assign a structure vvriable to another struture variable*/
#include<stdio.h>

struct student{
	char name[20];
	int rollno;
	float marks;
};

int main()
{
	struct student stud1 = {"John",25,100},stud2;
	stud2 = stud1;

	printf("stud1 = %s %d %.2f\n",stud1.name,stud1.rollno,stud1.marks);
	printf("stud2 = %s %d %.2f\n",stud2.name,stud2.rollno,stud2.marks);

	return 0;
}

