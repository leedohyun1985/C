#include <stdio.h>
#define SECOND_PER_MINUTE 60
int main(void)
{
	/*
	�ǿ����� : operand
	������ : operator 
	*/
	
	int input, minute, second ; 
	input = 1000; 
	minute = input / SECOND_PER_MINUTE;
	second = input % SECOND_PER_MINUTE;
	
	printf("%d �� = %d�� %d��", input, minute, second);
	printf("\n"); 
	
	return 0;
}
