#include <stdio.h>

int h, m, a;

void counter()
{
	m += a;
	h += m / 60;
	m %= 60;
	h %= 24;	
}

int main(void)
{	
	printf("시 입력 : ");
	scanf("%d", &h); 
	printf("분 입력 : ");
	scanf("%d", &m); 
	printf("더할 분 입력 : ");
	scanf("%d", &a); 
	counter();
	printf("더해진 시간은 %d시 %d분 입니다.");
	printf("\n") ;
	return 0;
}
