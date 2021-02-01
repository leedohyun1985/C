#include <stdio.h>
int main(void)
{

	int a, b; 
	a = 50;
	b = 30;
	
	// a 와 b는 같은 값을 가지고 있는가?
	// == 으로 판단
	// C언어는 Boolean 타입이 없다. 0이 false, 1 이상은 true 값 
	
	printf("a 값은 : %d, b 값은 :  %d", a , b );
	printf("\n"); 
	
	printf("a와 b는 동일한 값인가? 맞으면 1, 틀리면 0 : %d ", a == b);
	printf("\n"); 
	
	printf("a와 b는 다른 값인가? 맞으면 1, 틀리면 0 : %d", a != b);
	printf("\n"); 
	
	printf("a는 b보다 큰 값인가? 맞으면 1, 틀리면 0 : %d", a > b);
	printf("\n"); 
	
	printf("a는 b보다 작은 값인가? 맞으면 1, 틀리면 0 : %d", a < b);
	printf("\n"); 
	
	printf("만약 a = b라고 입력하면 어떤 값이 나올까? : %d", a = b);
	//사실상 b의 값을 a에 넣는 연산을 먼저 하기 때문에 좌측 변수의 값이 출력되게 된다.  
	printf("\n"); 
	
	return 0;
}
