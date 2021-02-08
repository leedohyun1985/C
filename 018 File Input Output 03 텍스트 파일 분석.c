#include <stdio.h>
int main(void)
{	
	FILE *file_pointer;
	char file_name[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("파일이름 입력 : ");
	scanf("%s", file_name); 
	printf("탐색할 단어 입력 : ");
	scanf("%s", word);
	
	if( NULL == ( file_pointer = fopen( file_name , "r") ) )
	{
		fprintf(stderr, "파일 %s를 열 수 없습니다.", file_name);
		//stderr standard error
		return 0;
	}
	
	while( fgets(buffer, 256, file_pointer) )
	{
		line++;
		if( strstr(buffer, word) )
		{ //strstr 문자열에서 문자열 검색 
			printf("라인 %d : 단어 %s이(가) 발견되었습니다.", line , word);
			printf("\n");
		}
	}
	
	fclose(file_pointer);
	return 0;
}
