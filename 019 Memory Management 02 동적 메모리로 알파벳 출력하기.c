#include <stdio.h>
#include <stdlib.h>
int main(void)
{	
	char *pc; // Pointer Character
	int i = 0;
	
	pc = (char *)malloc(100 * sizeof(char));
	
	if(NULL == pc)
	{
		printf("동적 메모리 할당에 실패함");
		printf("\n");
		exit(1); //프로그램 종료 
	}
	
	for(i = 0 ; i < 26; i++)
	{
		*(pc + i) = 'a' + i;
	}
	// 아스키 코드에서 0은 NULL을 의미
	*(pc + i) = 0;
	
	printf("%s", pc);
	printf("\n");
	free(pc);
	
	return 0;
}
