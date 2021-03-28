/*Call by Reference*/

#include<stdio.h>
void ref(int *p,int *q)
{
	(*p)++;
	(*q)++;
	printf("inside function *p = %d, *q = %d\n", *p,*q);
}

int main()
{
	int a =5, b = 8;
	printf("Before calling func : a = %d, b = %d\n",a,b);
	ref(&a,&b);
	printf("After calling func : a = %d, b = %d\n",a,b);

	return 0;
}
