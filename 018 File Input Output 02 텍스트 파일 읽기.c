#include <stdio.h>
int main(void)
{	
	FILE *file_pointer = NULL;
	int c;
	
	file_pointer = fopen("018 File Input Output 01 파일 입출력 연습.txt", "r");
	
	if(NULL == file_pointer)
	{
		printf("파일 열기에 실패함");
		printf("\n"); 
	}
	else
	{
		printf("파일 열기에 성공함");
		printf("\n"); 
	}
	
	while( (c = fgetc(file_pointer)) != EOF )
	{
	//fgetc 문자 하나를 읽어 c에 담음  
	//EOF End of File 파일의 끝 
		putchar(c);// 콘솔에 문자 출력 
	}
	
	fclose(file_pointer);
	
	return 0;
}
