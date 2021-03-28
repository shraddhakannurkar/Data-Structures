/* Program to find the largest and smallest number in an array*/
/*Compilation : gcc array_max_min.c -o max_min
 *Execution : ./max_min*/

#include<stdio.h>

int main()
{
	int arr[10] = {2,5,4,1,8,9,11,6,3,7};

	int i, small,large;
	small = large = arr[0];

	for(i=1;i<10;i++)
	{
		if(arr[i] < small)
			small = arr[i];
		if(arr[i] > large)
			large = arr[i];

	}

	printf("Smallest = %d\n Largest = %d\n",small,large);

	return 0;
}
