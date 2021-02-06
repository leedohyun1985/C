#include <stdio.h>
#include <string.h>
int main(void)
{	
	char input_01[5] = "string";
	char input_02[5] = "string";
	
	printf("문자열 비교 : %d ", strcmp(input_01,input_02));
	//strcmp 완전히 같으면 0, 다르면 음수 혹은 양수 반환 
	return 0;
}
