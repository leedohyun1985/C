#include <stdio.h>
int main(void)
{	
	/*
	- 대표적인 무한루프 표현 
		for(;;)
		while(1)
	- break;로 빠져나올수 있다
	
	 scanf() 함수 
	 scanf("%d", &a) 와 같은 방식으로 사용 
	*/ 
	
	int a, b;
	char c;
	
	while(1)
	{
		printf("수식 입력 ex) '숫자'' + - * / '숫자' : ");
		scanf("%d %c %d", &a, &c, &b);
		
		if(c == '+') //""는 안됨, C언어에서 한글자만 조건문에 넣을 때는 작은 따옴표 사용 
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
			printf("입력이 잘못 되었습니다.");
			printf("\n"); 			
		}
		
		fflush(stdin);
		//getchar(); //버퍼비우기 용도로 사용  fflush()
		printf("프로그램을 종료하시겠습니까? (y/n)");
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
			printf("입력이 잘못되었습니다.");
		} 
		
		printf("\n");
	}
	
	
	
	return 0;
}
