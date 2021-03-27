/*Program to understand the use of realloc function*/

#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int i, *ptr;
	ptr = (int*)calloc(5,sizeof(int));
	if(ptr == NULL)
	{
		printf("Error : Insufficient memory.\n");
		exit(1);
	}

	printf("Enter 5 integers\n");
	for(i=0;i<5;i++)
		scanf("%d",ptr+i);

	/*Allocate memory for 4 more integers*/
	ptr = (int*)realloc(ptr,9*sizeof(int));
	if(ptr == NULL)
	{
		printf("Error : Insufficient memory.\n");
		exit(1);
	}

	printf("Enter 4 more integers\n");
	for(i=5;i<9;i++)
		scanf("%d",ptr+i);
	for(i=0;i<9;i++)
		printf("%d\t",*(ptr+i));

	return 0;
}
