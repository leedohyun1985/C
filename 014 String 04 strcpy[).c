#include <stdio.h>
#include <string.h>
int main(void)
{	
	char input[10] = "I Love You";
	char result[5] = "Love";
	
	strcpy(result, input); // input2의 내용을 input1로 복사하는 것 
	//strcpy(input, result);
	printf("문자열 복사 : %s ", result);
	//printf("문자열 복사 : %s ", input);
	//문자열을 복사해서 넣음 
	return 0;
}
