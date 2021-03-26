/*Program to dereference poiter variables*/

#include<stdio.h>

int main()
{
	int a = 87;
	float b = 4.5;

	int *p1 = &a;
	float *p2 = &b;

	printf("Value of p1 = Address of a = %p\n",p1);
	printf("Value of p2 = Address of b = %p\n",p2);

	printf("Address of p1 = %p\n",&p1);
	printf("Address of p2 = %p\n",&p2);

	printf("Value of a = %d\t %d\t %d\t\n",a,*p1,*(&a));
	printf("Value of b = %f\t %f\t %f\t\n",b,*p2,*(&b));
	
	return 0;
}
