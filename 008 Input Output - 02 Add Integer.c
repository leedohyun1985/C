#include <stdio.h>
int main(void)
{	
	/*
		������ ���� ��ŭ�� ������ �Է¹޾� ���� ���� ��� 
	*/
	int number, x, i, sum = 0;
	
	printf("������ ������ �Է� : ");
	scanf("%d", &number);
	
	for(i = 0; i < number ; i++)
	{
		printf("������ ���� �Է� : " );
		scanf("%d", &x);
		sum += x;
	} 
	printf("������ �Է°� ��ŭ ���� �� : %d", sum);
	printf("\n");
	return 0;
}
