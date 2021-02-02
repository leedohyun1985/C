#include <stdio.h>
int main(void)
{	
	int month, day;
	//입력값에 대한 검증 기능은 생략 
	printf("1월 1일부터 입력한 날짜까지의 거리를 계산합니다. \n정확한 날짜를 입력하세요.\n");
	scanf("%d %d", &month, &day);
	printf("결과 : %d", getDays( month , day ) );
	
	return 0;
}

int getDays(int month, int day)
{
	int i, sum = 0;
	
	for( i = 1 ; i < month ; i++ )
	{
		
		if(i == 2)
		{
			sum += 28;
		}
		else if(i % 2 == 0)
		{
			sum += 30;
		}
		else
		{
			sum += 31;
		}	
	}
	
	return sum + day;
}
