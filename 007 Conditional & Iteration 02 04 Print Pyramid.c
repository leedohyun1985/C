#include <stdio.h>
#define n 20
int main(void)
{	
	int i, j;
	i = 0;
	j = 0;
	
	for(i = 0 ; i < n ; i++)
	{
		
		for(j = n - i - 1 ; j > 0 ; j--) //피라미드의 좌측 부분 공백 출력 
		{
			printf("　");
		}
		
		for(j = 0 ; j < i ; j++ ) //피라미드의 좌측 부분 출력 
		{
			printf("☆");
		}
		
		for(j = 0 ; j < i - 1 ; j++ ) //피라미드의 우측 부분 출력, 좌측 부분 출력 보다 1개 적게 출력함 
		{
			printf("★");
		}
	
		printf("\n");
	
	}
	
	return 0;
}
