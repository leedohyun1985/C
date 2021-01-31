#include <stdio.h>
int main(void)
{

	int a ; 
	a = 100;
	printf("1 a = %d", a);
	printf("\n"); 
	
	a += 50; // a = a + 50
	
	printf("2 a = %d", a);
	printf("\n"); 
	
	a -= 30; // a = a - 30
	
	printf("3 a = %d", a);
	printf("\n"); 
	
	a *= 2; // a = a * 2
	
	printf("4 a = %d", a);
	printf("\n"); 
	
	a /= 30; // a = a / 30
	
	printf("5 a = %d", a);
	printf("\n");
	
	a %= 3; // a = a % 30
	
	printf("6 a = %d", a);
	printf("\n");
	
	
	return 0;
}
