/*Program to understand how structure members are sent to a function*/

#include<stdio.h>
#include<string.h>

struct student {
	char name[10];
	int rollno;
	int marks;
};

void display_struct(char name[],int rollno,int marks);

int main()
{
	struct student stud1 = {"Shraddha",1,99};
	struct student stud2;
	strcpy(stud2.name,"shr");
	stud2.rollno = 25;
	stud2.marks = 100;

	display_struct(stud1.name,stud1.rollno,stud1.marks);
	display_struct(stud2.name,stud2.rollno,stud2.marks);

	return 0;
}

void display_struct(char name[],int rollno,int marks)
{
	printf("\n");
	printf("Name : %s\nRollno : %d\nMarks : %d\n",name,rollno,marks);
}
