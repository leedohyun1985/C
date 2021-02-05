#include <stdio.h>
int main(void)
{	
	int x = 1;
	int y = 2;
	swap(&x, &y);
	printf("x = %d ", x);
	printf("\n");
	printf("y = %d ", y);
	printf("\n");
	return 0;
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
