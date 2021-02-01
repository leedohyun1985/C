#include <stdio.h>
int main(void)
{	
	/*
		윤년 계산  => 4년 마다, 그렇지만 100년 단위일때는 윤년해당 하지 않음
		윤년 => 400년 단위일 때는 어떤 상황이든 간에 윤년으로 설정 
	*/
	
	int year = 2016;
	if( (year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 )
	{
		printf("%d년은 윤년입니다.", year);
		printf("\n"); 
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.", year);
		printf("\n"); 
	}
	return 0;
}
