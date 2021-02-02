#include <stdio.h>
int main(void)
{	
	/*
		정해진 개수 만큼의 정수를 입력받아 더한 값을 출력 
	*/
	int number, x, i, sum = 0;
	
	printf("정수의 개수를 입력 : ");
	scanf("%d", &number);
	
	for(i = 0; i < number ; i++)
	{
		printf("정수의 값을 입력 : " );
		scanf("%d", &x);
		sum += x;
	} 
	printf("정수를 입력값 만큼 더한 값 : %d", sum);
	printf("\n");
	return 0;
}
