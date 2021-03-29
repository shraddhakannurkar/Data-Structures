/*Program to understand arrays within structures*/
#include<stdio.h>

struct student {
	char name[20];
	int rollno;
	int submarks[2];
};

int main()
{
	int i,j;
	struct student stud[3];

	for(i=0;i<3;i++)
	{
		printf("Enter data for student %d\n",i);
	
		printf("Enter name : \n");
		scanf("%s",stud[i].name);

		printf("Enter rollno : \n");
		scanf("%d",&stud[i].rollno);
	
		for(j=0;j<2;j++)
		{
			printf("Enter marks : \n");
			scanf("%d",&stud[i].submarks[j]);
		}

	}
	for(i=0;i<3;i++)
	{
		printf("Data of students is :\n");
		printf("Name : %s\tRollno : %d\t",stud[i].name,stud[i].rollno);
		for(j=0;j<2;j++)
			printf("Marks : %d\t",stud[i].submarks[j]);
		printf("\n");
	}
	return 0;
}
