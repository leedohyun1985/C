#include <stdio.h>
int main(void)
{

	int a, b; 
	a = 50;
	b = 30;

	printf("a ���� : %d, b ���� :  %d", a , b );
	printf("\n"); 
	
	printf("a�� b���� ũ�� b�� 40 �̸��ΰ�? ������ 1, Ʋ���� 0 : %d ", 
		(a > b) && (b < 40) );
	printf("\n"); 
	
	
	printf("a�� b���� �۰ų� Ȥ�� b�� 30�ΰ�? ������ 1, Ʋ���� 0 : %d", 
		(a < b) || (b == 30 ));
	printf("\n"); 
	
	printf("a�� 30�� �ƴѰ�? ������ 1, Ʋ���� 0 : %d", a != 30);
	printf("\n"); 
	
	return 0;
}
