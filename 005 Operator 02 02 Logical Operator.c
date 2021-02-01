#include <stdio.h>
int main(void)
{

	int a, b; 
	a = 50;
	b = 30;

	printf("a 값은 : %d, b 값은 :  %d", a , b );
	printf("\n"); 
	
	printf("a는 b보다 크고 b는 40 미만인가? 맞으면 1, 틀리면 0 : %d ", 
		(a > b) && (b < 40) );
	printf("\n"); 
	
	
	printf("a가 b보다 작거나 혹은 b가 30인가? 맞으면 1, 틀리면 0 : %d", 
		(a < b) || (b == 30 ));
	printf("\n"); 
	
	printf("a는 30이 아닌가? 맞으면 1, 틀리면 0 : %d", a != 30);
	printf("\n"); 
	
	return 0;
}
