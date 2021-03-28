/*When array is passed to a function, the receiving argument is declared as a pointer*/
#include<stdio.h>

void func(float f[],int *i,char ch[5]);

int main()
{
	float f_arr[5] = {1.4, 2.5, 3.7, 4., 5.9};
	int i_arr[5] = {1,2,3,4,5};
	char c_arr[5] = {'a','b','c','d','e'};

	printf("Inside main()\n");
	printf("Size of f_arr = %lu\n",sizeof(f_arr));
	printf("Size of i_arr = %lu\n",sizeof(i_arr));
	printf("Size of c_arr = %lu\n",sizeof(c_arr));

	func(f_arr,i_arr,c_arr);

	return 0;
}

void func(float f[], int *i, char c[5])
{
	printf("Inside func()\n");
	printf("Size of f = %lu\n",sizeof(f));	
	printf("Size of i = %lu\n",sizeof(i));
	printf("Size of c = %lu\n",sizeof(c));
}
