#include <stdio.h>
int main(void)
{
	int a;
	a = -200;
	
	if(a < 0)
	{
		a = -a;
	}

	printf("a = -200, a�� ���밪 = %d", a);
	printf("\n");

	return 0;
}
