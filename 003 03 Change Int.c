#include <stdio.h>

int main(void)
{
	
	int a; 
	a = 100; 
	
	printf("10진수 출력 : %d", a); // %d의 d는 decimal 10진수  
	printf("\n"); 
	printf("8진수 출력 : %o", a); // %o의 o는 octal  8진수  
	printf("\n"); 
	printf("16진수 출력 : %x", a); //%x x는  hexadecimal 16진수
	printf("\n"); 
	
	/*
	c언어의 printf 함수 인자 (parameter)
	
	%[플래그(flag)][폭(width)][.정밀도][크기(length)]서식 문자(specifier)
	
	https://modoocode.com/35 참조 
	*/
	
	return 0;
}
