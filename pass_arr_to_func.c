/*Program to show that changes to the array made inside the function affect the original array*/

#include<stdio.h>
void func(int a[]);

int main()
{
	int i, arr[5] = {3,6,2,7,1};
	printf("Inside main()\n");
	for(i=0;i<5;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	func(arr);
	printf("Again Inside main()\n");
        for(i=0;i<5;i++)
                printf("%d\t",arr[i]);
        printf("\n");
	return 0;
}

void func(int a[])
{
	int i;
	printf("Inside func()\n");
	for(i=0;i<5;i++)
	{
		a[i] += 2;
		printf("%d\t",a[i]);
	}
	printf("\n");
}
