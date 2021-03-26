/*Program to add two matrices*/
#define ROW 2
#define COL 3
#include<stdio.h>

int main()
{
        int mat1[ROW][COL], mat2[ROW][COL], sum_mat[ROW][COL],i,j;
	printf("Enter the values for matrix 1 : \n");
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			scanf("%d",&mat1[i][j]);
	
	printf("Enter the values for matrix 2 : \n");
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			scanf("%d",&mat2[i][j]);

	//Addition
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			sum_mat[i][j] = mat1[i][j] + mat2[i][j];

	printf("Addition is : \n");	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			printf("%5d",sum_mat[i][j]);
		printf("\n");	
			
	}
	return 0;
}
