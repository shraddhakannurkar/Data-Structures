/*Demo Call by Value*/
#include<stdio.h>

void value(int x, int y)
{
	x++;
	y++;
	printf("Inside function : x = %d, y = %d\n",x,y);
}

int main()
{
	int a = 5, b = 8;
	printf("Value before calling the function : a = %d, y = %d\n",a,b);
	value(a,b);
	printf("Value after calling the function : a = %d, b = %d\n",a,b);
}


