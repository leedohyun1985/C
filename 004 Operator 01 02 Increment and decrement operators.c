#include <stdio.h>
int main(void)
{

	int a ; 
	a = 0;
	printf("1 a = %d", a);
	printf("\n"); 
	a++;
	printf("2 a = %d", a);
	printf("\n"); 
	printf("3 a = %d", a--); //출력후 감소가 이루어짐 
	printf("\n"); 
	printf("4 a = %d", a);
	printf("\n"); 
	printf("5 a = %d", --a); //출력전 감소가 이루어짐 
	printf("\n"); 
	printf("6 a = %d", a);
	printf("\n"); 
	
	return 0;
}
