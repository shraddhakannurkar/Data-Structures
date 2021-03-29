/*Program to understand how ta structure variable is sent to a function*/

#include<stdio.h>

struct student{
	char name[10];
	int rollno,marks;
};

void display(struct student st)
{
	printf("Name : %s\nRollno : %d\nMarks : %d\n",st.name,st.rollno,st.marks);
}

int main()
{

	struct student stud1 = {"Shraddha",1,100},stud2 = {"Sharvari",2,99};

	display(stud1);
	display(stud2);
	return 0;
}
