#include <stdio.h>
int main(void)
{	
	/*
	- ��ǥ���� ���ѷ��� ǥ�� 
		for(;;)
		while(1)
	- break;�� �������ü� �ִ�
	
	 scanf() �Լ� 
	 scanf("%d", &a) �� ���� ������� ��� 
	*/ 
	
	int a, b;
	char c;
	
	while(1)
	{
		printf("���� �Է� ex) '����'' + - * / '����' : ");
		scanf("%d %c %d", &a, &c, &b);
		
		if(c == '+') //""�� �ȵ�, C���� �ѱ��ڸ� ���ǹ��� ���� ���� ���� ����ǥ ��� 
		{
			printf("%d %c %d = %d", a, c, b, a + b);
			printf("\n"); 
		}

		else if(c == '-')
		{
			printf("%d %c %d = %d", a, c, b, a - b);
			printf("\n"); 
		}
		else if(c == '*')
		{
			printf("%d %c %d = %d", a, c, b, a * b);
			printf("\n"); 
		}
		else if(c == '/')
		{
			printf("%d %c %d = %d", a, c, b, a / b);
			printf("\n"); 
		}
		else if(c == '%')
		{
			printf("%d %c %d = %d", a, c, b, a % b);
			printf("\n"); 
		}
		else
		{
			printf("�Է��� �߸� �Ǿ����ϴ�.");
			printf("\n"); 			
		}
		
		fflush(stdin);
		//getchar(); //���ۺ��� �뵵�� ���  fflush()
		printf("���α׷��� �����Ͻðڽ��ϱ�? (y/n)");
		scanf("%c", &c);
		
		if(c == 'n' || c == 'N')
		{
			continue;
		}
		else if(c == 'y' || c == 'Y')
		{
			break;
		}
		else
		{
			printf("�Է��� �߸��Ǿ����ϴ�.");
		} 
		
		printf("\n");
	}
	
	
	
	return 0;
}
