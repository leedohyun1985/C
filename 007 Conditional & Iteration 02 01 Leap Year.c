#include <stdio.h>
int main(void)
{	
	/*
		���� ���  => 4�� ����, �׷����� 100�� �����϶��� �����ش� ���� ����
		���� => 400�� ������ ���� � ��Ȳ�̵� ���� �������� ���� 
	*/
	
	int year = 2016;
	if( (year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 )
	{
		printf("%d���� �����Դϴ�.", year);
		printf("\n"); 
	}
	else
	{
		printf("%d���� ������ �ƴմϴ�.", year);
		printf("\n"); 
	}
	return 0;
}
