#include <stdio.h>
int main(void)
{	
	FILE *file_pointer;
	char file_name[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("�����̸� �Է� : ");
	scanf("%s", file_name); 
	printf("Ž���� �ܾ� �Է� : ");
	scanf("%s", word);
	
	if( NULL == ( file_pointer = fopen( file_name , "r") ) )
	{
		fprintf(stderr, "���� %s�� �� �� �����ϴ�.", file_name);
		//stderr standard error
		return 0;
	}
	
	while( fgets(buffer, 256, file_pointer) )
	{
		line++;
		if( strstr(buffer, word) )
		{ //strstr ���ڿ����� ���ڿ� �˻� 
			printf("���� %d : �ܾ� %s��(��) �߰ߵǾ����ϴ�.", line , word);
			printf("\n");
		}
	}
	
	fclose(file_pointer);
	return 0;
}
