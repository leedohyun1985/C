#include <stdio.h>
#include <stdlib.h>
int main(void)
{	
	char *pc; // Pointer Character
	int i = 0;
	
	pc = (char *)malloc(100 * sizeof(char));
	
	if(NULL == pc)
	{
		printf("���� �޸� �Ҵ翡 ������");
		printf("\n");
		exit(1); //���α׷� ���� 
	}
	
	for(i = 0 ; i < 26; i++)
	{
		*(pc + i) = 'a' + i;
	}
	// �ƽ�Ű �ڵ忡�� 0�� NULL�� �ǹ�
	*(pc + i) = 0;
	
	printf("%s", pc);
	printf("\n");
	free(pc);
	
	return 0;
}
