#include <stdio.h>
int main(void)
{
	int a;
	a = -200;
	
	if(a < 0)
	{
		a = -a;
	}

	printf("a = -200, a의 절대값 = %d", a);
	printf("\n");

	return 0;
}
