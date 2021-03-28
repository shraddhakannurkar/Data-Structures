/* Program to understand dynamic memory  allocation - malloc*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p,n,i;
	printf("Enter the number of integers to be entered : ");
	scanf("%d",&n);

	p = (int*)malloc(n*sizeof(int));

	if(p == NULL)
	{
		printf("Error : Insufficient memory.\n");
		exit(1);
	}

	for(i=0;i<n;i++)
	{
		printf("Enter an integer");
		scanf("%d",p+i);
	}

	for(i=0;i<n;i++)
		printf("%d\t",*(p+i));

	return 0;
}
