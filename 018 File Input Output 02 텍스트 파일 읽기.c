#include <stdio.h>
int main(void)
{	
	FILE *file_pointer = NULL;
	int c;
	
	file_pointer = fopen("018 File Input Output 01 ���� ����� ����.txt", "r");
	
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
	
	while( (c = fgetc(file_pointer)) != EOF )
	{
	//fgetc ���� �ϳ��� �о� c�� ����  
	//EOF End of File ������ �� 
		putchar(c);// �ֿܼ� ���� ��� 
	}
	
	fclose(file_pointer);
	
	return 0;
}
