#include <stdio.h>
int main(void)
{	
	int number;
	printf("���ڿ��� �� �� ����մϱ�?");
	scanf("%d", &number);
	print(number); 
	printf("\n");
	
	return 0;
}

//��� �Լ� 
void print(int count)
{
	if(count == 0)
	{
		return;
	}
	else
	{
		printf("���ڿ��� ���");
		printf("\n");
		print(count - 1 );
	}
}
