#include <stdio.h>
int main(void)
{
	//Ternary operation, Conditional Operator ���׿��� ���ǿ��� 
	int a, b, absoluteX, max, min; 
	a = -50;
	b = 30;
	absoluteX = (a > 0) ? a : -a;
	max = (a > b) ? a : b;
	min = (a < b) ? a : b;

	printf("a ���� : %d, b ���� :  %d", a , b );
	printf("\n"); 
		
	printf("a�� ���밪 = %d", absoluteX);
	printf("\n"); 
	
	printf("a�� b�� ū �� = %d", max);
	printf("\n"); 
	
	printf("a�� b�� ���� �� = %d", min);
	printf("\n"); 
	
	return 0;
}
