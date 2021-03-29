/*Program to display the values of structure members*/

#include<stdio.h>
#include<string.h>

struct student{
	char name[20];
	int rollno;
	float marks;
};

int main()
{
	struct student stud1 = {"Mary",25,68};

	struct student stud2,stud3;
	strcpy(stud2.name,"John");
	stud2.rollno = 26;
	stud2.marks = 98;

	printf("Enter name,rollno and marks for stud3\n");
	scanf("%s %d %f",stud3.name,&stud3.rollno,&stud3.marks);

	printf("stud1 : %s %d %.2f\n",stud1.name,stud1.rollno,stud1.marks);
	printf("stud2 : %s %d %.2f\n",stud2.name,stud2.rollno,stud2.marks);
	printf("stud3 : %s %d %.2f\n",stud3.name,stud3.rollno,stud3.marks);

	return 0;
}
