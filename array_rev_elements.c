/*Program to reverse the elements of an array
 *Compilation : gcc array_rev_elements.c -o rev_arr_ele
 *Execuution : ./rev_arr_ele
 * */

#include<stdio.h>
int main()
{
	int arr[6] = {6,5,4,3,2,1};
	int i,j,temp;

        printf("Array before reversal : ");
	for(i=0;i<6;i++)
		printf("%d\t",arr[i]);
	printf("\n");

	for(i=0,j=5;i<j;i++,j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	printf("Array after reversing : ");
	for(i=0;i<6;i++)
		printf("%d\t",arr[i]);

	printf("\n");
	return 0;
}
