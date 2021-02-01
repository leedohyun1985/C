#include <stdio.h>
int main(void)
{	
	int i, sum;
	i = 1;
	sum = 0;
	
	while(i <= 1000) //조건이 참이면 반복 실행 
	{
		sum += i; //sum = sum + i;
		i++;
	}
	
	printf("1부터 1000까지의 합 : %d", sum);
	
	return 0;
}
