#include <stdio.h>

int main(void)
{
	
	int a; 
	a = 100; 
	
	printf("10���� ��� : %d", a); // %d�� d�� decimal 10����  
	printf("\n"); 
	printf("8���� ��� : %o", a); // %o�� o�� octal  8����  
	printf("\n"); 
	printf("16���� ��� : %x", a); //%x x��  hexadecimal 16����
	printf("\n"); 
	
	/*
	c����� printf �Լ� ���� (parameter)
	
	%[�÷���(flag)][��(width)][.���е�][ũ��(length)]���� ����(specifier)
	
	https://modoocode.com/35 ���� 
	*/
	
	return 0;
}
