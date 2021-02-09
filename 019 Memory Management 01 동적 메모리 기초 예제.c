#include <stdio.h>
#include <stdlib.h>
/*
동적 메모리 할당이란 프로그램이 실행 도중에 동적으로 메모리를 할당 받는 것 
malloc() 계열의 라이브러리 함수를 사용 
동적 메모리 사용이 끝나면 반드시 해당 메모리영역을 명시적으로 반납해야함 
*/
int main(void)
{	
	int *pi; // Pointer Integer
	pi = (int *)malloc(sizeof(int)); //int형의 크기만큼 할당후 pi가 위치를 가리키게 함 
	
	if(NULL == pi)
	{
		printf("동적 메모리 할당에 실패함");
		printf("\n");
		exit(1); //프로그램 종료 
	}
	
	*pi = 100;
	printf("%d", *pi); 
	printf("\n");
	
	/*
	동적 메모리를 사용한 이후에는 반드시 해당 메모리를 반환해야함 
	*/
	free(pi);
	
	return 0;
}
