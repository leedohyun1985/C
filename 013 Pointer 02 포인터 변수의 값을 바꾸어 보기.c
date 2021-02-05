#include <stdio.h>
int main(void)
{	
	int i = 10;
	int *p;
	p = &i;
	printf(" i = %d ", i);
	printf("\n");
	*p = 20;
	printf(" i = %d ", i);
	printf("\n");
	return 0;
}
