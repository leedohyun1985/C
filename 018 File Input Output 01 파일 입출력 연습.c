#include <stdio.h>
int main(void)
{
	FILE *file_pointer = NULL;
	file_pointer = fopen("018 File Input Output 01 ���� ����� ����.txt", "w"); 
	// fopen ���� ����
	// w write ����  r  read �б�
	if(NULL == file_pointer) 
	{
		printf("���� ���⿡ ������");
		printf("\n"); 
	}
	else
	{
		printf("���� ���⿡ ������");
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
