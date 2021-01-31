#include <stdio.h>
int main(void)
{
	int x; //변수
	x = 5;
	printf("%d\n", x); // \n 줄바꿈 
	printf("변수 x의 메모리 크기는 %d byte입니다.", sizeof(x)); // sizeof 바이트 값을 출력
	return 0;
}
