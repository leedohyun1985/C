#include <stdio.h>
#include <string.h>
int main(void)
{	
	char input_01[5] = "string";
	char input_02[5] = "string";
	
	printf("���ڿ� �� : %d ", strcmp(input_01,input_02));
	//strcmp ������ ������ 0, �ٸ��� ���� Ȥ�� ��� ��ȯ 
	return 0;
}
