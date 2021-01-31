#include <stdio.h>
#include <limits.h> // INT_MAX 등을 담고 있는 라이브러리 

int main(void)
{
	int x = INT_MAX;
	printf("int형의 최대 크기는 %d \n", x);
	printf("x+1의 값은 %d \n", x+1); //최소값이 출력된다 
	return 0;
}
