/*Array of Pointers demo*/

#include<stdio.h>

int main()
{
	int *p[3];
	int a = 5, b = 10,c = 15, i;
	p[0] = &a;
	p[1] = &b;
	p[2] = &c;

	for(i = 0;i<3;i++)
	{
		printf("p[%d] = %p\n",i,p[i]);	
		printf("*p[%d] = %d\n",i,*p[i]);
	}
	return 0;
}

