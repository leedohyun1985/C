#include <stdio.h>
#define n 20
int main(void)
{	
	int i, j;
	i = 0;
	j = 0;
	
	for(i = 0 ; i < n ; i++)
	{
		
		for(j = n - i - 1 ; j > 0 ; j--) //�Ƕ�̵��� ���� �κ� ���� ��� 
		{
			printf("��");
		}
		
		for(j = 0 ; j < i ; j++ ) //�Ƕ�̵��� ���� �κ� ��� 
		{
			printf("��");
		}
		
		for(j = 0 ; j < i - 1 ; j++ ) //�Ƕ�̵��� ���� �κ� ���, ���� �κ� ��� ���� 1�� ���� ����� 
		{
			printf("��");
		}
	
		printf("\n");
	
	}
	
	return 0;
}
