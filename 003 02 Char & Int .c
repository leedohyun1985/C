#include <stdio.h>

int main(void)
{
	//char a; 
	int a; 
	a = 'A'; // ""으로 감싸면 값 안나옴 
	//a = 65; // ASCII 코드의 65값은 대문자 A, 내부적으로는 숫자임 
	printf("%c", a); //문자 출력인 경우 숫자값에 대응하는 문자가 출력됨 
	printf("\n"); 
	printf("%d", a);
	printf("\n"); 
	return 0;
}
