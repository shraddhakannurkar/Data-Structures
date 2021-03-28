/* Program to pass an array to a function - sum of squares */

#include<stdio.h>
void sum_of_squares(int val[])
{
	int sum = 0,i;
	for(i=0;i<6;i++)
	{
		//val[i] = val[i]*val[i]; //change
		sum += val[i]*val[i];
	}

	printf("The sum of squares is : %d\n",sum);
}

int main()
{
        int i,arr[6] = {1,2,3,4,5,6};
        sum_of_squares(arr);
        printf("Contents of array are ; \n");
        for (i=0;i<6;i++)
                printf("%d\t",arr[i]);

        return 0;
}
