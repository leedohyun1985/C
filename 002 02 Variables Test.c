#include <stdio.h>

int main(void)
{
	int x = 50;
	float y = 123456789.123456789; //ũ�Ⱑ Ŀ���� �������� ���� �ʴ� ���� ���� �ȴ� 
	double z = 123456789.123456789; //���� �������� ������ ����� �߸��� ���� �� �� �ִ� 
	printf("x = %d / ũ��� %d byte\n", x, sizeof(x));
	printf("y = %.2f / ũ��� %d byte\n", y, sizeof(y));
	printf("z = %.8f / ũ��� %d byte", z, sizeof(z));
	
	return 0;
}
