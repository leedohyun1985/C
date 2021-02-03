#include <stdio.h>
int main(void)
{	
	int number;
	printf("문자열을 몇 개 출력합니까?");
	scanf("%d", &number);
	print(number); 
	printf("\n");
	
	return 0;
}

//재귀 함수 
void print(int count)
{
	if(count == 0)
	{
		return;
	}
	else
	{
		printf("문자열을 출력");
		printf("\n");
		print(count - 1 );
	}
}
