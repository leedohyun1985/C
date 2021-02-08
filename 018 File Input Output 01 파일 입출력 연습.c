#include <stdio.h>
int main(void)
{
	FILE *file_pointer = NULL;
	file_pointer = fopen("018 File Input Output 01 파일 입출력 연습.txt", "w"); 
	// fopen 파일 열기
	// w write 쓰기  r  read 읽기
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
	fputc('H', file_pointer);
	fputc('e', file_pointer);
	fputc('l', file_pointer);
	fputc('l', file_pointer);
	fputc('o', file_pointer);
	fputc(',', file_pointer);
	fputc(' ', file_pointer);
	fputc('w', file_pointer);
	fputc('o', file_pointer);
	fputc('r', file_pointer);
	fputc('l', file_pointer);
	fputc('d', file_pointer);
	fputc('!', file_pointer);
	
	fclose(file_pointer);
	return 0;
}
