/*Program tto demonstrate pointers witihin structures*/

#include<stdio.h>

struct student{
	char name[20];
	int rollno;
	int *ptrmem;
};

int main()
{
	struct student stud = {"mary",1,NULL}, *ptr = &stud;
	printf("Value at ptrmem : %p\n",stud.ptrmem);

	int a = 5;
	stud.ptrmem = &a;
	printf("Value of *ptrmem : %d\n",*(stud.ptrmem));
	
	printf("Value at ptr->ptrmem or *ptr.ptrmem : %d\n",*(ptr->ptrmem));
	return 0;
}
