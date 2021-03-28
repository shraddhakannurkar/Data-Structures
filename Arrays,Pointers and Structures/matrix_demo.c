/*program to input and display the matrix*/

#include<stdio.h>

int main()
{
	int matrix[2][3],i,j;
	printf("enter the elemnts of matrix row and col wise\n");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&matrix[i][j]);
	
					
	printf("Entered matrix is :\n");
	for(i=0;i<2;i++)
	{
	    for(j=0;j<3;j++)
	        printf("%5d",matrix[i][j]);
	
	    printf("\n");
	}
	return 0;
}

