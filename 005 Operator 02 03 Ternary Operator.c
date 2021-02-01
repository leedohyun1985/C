#include <stdio.h>
int main(void)
{
	//Ternary operation, Conditional Operator 삼항연산 조건연산 
	int a, b, absoluteX, max, min; 
	a = -50;
	b = 30;
	absoluteX = (a > 0) ? a : -a;
	max = (a > b) ? a : b;
	min = (a < b) ? a : b;

	printf("a 값은 : %d, b 값은 :  %d", a , b );
	printf("\n"); 
		
	printf("a의 절대값 = %d", absoluteX);
	printf("\n"); 
	
	printf("a와 b중 큰 값 = %d", max);
	printf("\n"); 
	
	printf("a와 b중 작은 값 = %d", min);
	printf("\n"); 
	
	return 0;
}
