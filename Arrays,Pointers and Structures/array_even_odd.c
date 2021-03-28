/*Program to pass array elements to a function
 * Compilation : gcc array_even_odd.c -o pass_arr_ele_to_func
 * Execution : ./pss_arr_ele_to_func */

#include<stdio.h>
#include<stdlib.h>
void check(int num)
{
	if(num % 2 == 0)
		printf("%d is even\n",num);
	else
		printf("%d is odd\n",num);
}


int main()
{
	int arr[3],i;
	printf("Enter the array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		check(arr[i]);
	}

	return 0;

}


