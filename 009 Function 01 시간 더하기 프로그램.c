#include <stdio.h>

int h, m, a;

void counter()
{
	m += a;
	h += m / 60;
	m %= 60;
	h %= 24;	
}

int main(void)
{	
	printf("�� �Է� : ");
	scanf("%d", &h); 
	printf("�� �Է� : ");
	scanf("%d", &m); 
	printf("���� �� �Է� : ");
	scanf("%d", &a); 
	counter();
	printf("������ �ð��� %d�� %d�� �Դϴ�.");
	printf("\n") ;
	return 0;
}
