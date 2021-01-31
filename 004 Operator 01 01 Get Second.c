#include <stdio.h>
#define SECOND_PER_MINUTE 60
int main(void)
{
	/*
	피연산자 : operand
	연산자 : operator 
	*/
	
	int input, minute, second ; 
	input = 1000; 
	minute = input / SECOND_PER_MINUTE;
	second = input % SECOND_PER_MINUTE;
	
	printf("%d 초 = %d분 %d초", input, minute, second);
	printf("\n"); 
	
	return 0;
}
