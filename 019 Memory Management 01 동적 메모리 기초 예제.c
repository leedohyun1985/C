#include <stdio.h>
#include <stdlib.h>
/*
���� �޸� �Ҵ��̶� ���α׷��� ���� ���߿� �������� �޸𸮸� �Ҵ� �޴� �� 
malloc() �迭�� ���̺귯�� �Լ��� ��� 
���� �޸� ����� ������ �ݵ�� �ش� �޸𸮿����� ��������� �ݳ��ؾ��� 
*/
int main(void)
{	
	int *pi; // Pointer Integer
	pi = (int *)malloc(sizeof(int)); //int���� ũ�⸸ŭ �Ҵ��� pi�� ��ġ�� ����Ű�� �� 
	
	if(NULL == pi)
	{
		printf("���� �޸� �Ҵ翡 ������");
		printf("\n");
		exit(1); //���α׷� ���� 
	}
	
	*pi = 100;
	printf("%d", *pi); 
	printf("\n");
	
	/*
	���� �޸𸮸� ����� ���Ŀ��� �ݵ�� �ش� �޸𸮸� ��ȯ�ؾ��� 
	*/
	free(pi);
	
	return 0;
}
