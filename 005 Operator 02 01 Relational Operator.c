#include <stdio.h>
int main(void)
{

	int a, b; 
	a = 50;
	b = 30;
	
	// a �� b�� ���� ���� ������ �ִ°�?
	// == ���� �Ǵ�
	// C���� Boolean Ÿ���� ����. 0�� false, 1 �̻��� true �� 
	
	printf("a ���� : %d, b ���� :  %d", a , b );
	printf("\n"); 
	
	printf("a�� b�� ������ ���ΰ�? ������ 1, Ʋ���� 0 : %d ", a == b);
	printf("\n"); 
	
	printf("a�� b�� �ٸ� ���ΰ�? ������ 1, Ʋ���� 0 : %d", a != b);
	printf("\n"); 
	
	printf("a�� b���� ū ���ΰ�? ������ 1, Ʋ���� 0 : %d", a > b);
	printf("\n"); 
	
	printf("a�� b���� ���� ���ΰ�? ������ 1, Ʋ���� 0 : %d", a < b);
	printf("\n"); 
	
	printf("���� a = b��� �Է��ϸ� � ���� ���ñ�? : %d", a = b);
	//��ǻ� b�� ���� a�� �ִ� ������ ���� �ϱ� ������ ���� ������ ���� ��µǰ� �ȴ�.  
	printf("\n"); 
	
	return 0;
}
