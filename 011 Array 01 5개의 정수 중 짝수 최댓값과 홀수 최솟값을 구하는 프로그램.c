#include <stdio.h>
#include <limits.h>
#define NUMBER 5
int main(void)
{	
	int i, max, min, index;
	int array[NUMBER];
	max = 0;
	index = 0;
	// array[0] ~ array[4] : 총 5개 들어갈 크기의 배열 선언;
	
	for( i = 0 ; i < NUMBER; i++)
	{
		scanf("%d", &array[i]); //배열에 값 넣어주기
		 
		if(max < array[i]) //i 번째 배열의 값이 max보다 크다면 
		{
			max = array[i];
			index = i;
		}
	}
	printf("가장 큰 값은 %d이고, %d 번째 위치합니다. ", max, index + 1);
	printf("\n"); 
	min = INT_MAX; // INT_MAX는 limits.h include해야 사용가능 
	for( i = 0 ; i < NUMBER; i++)
	{
		if(min > array[i]) //i 번째 배열의 값이 max보다 크다면 
		{
			min = array[i];
			index = i;
		}
	}	
	
	printf("가장 작은 값은 %d이고, %d 번째 위치합니다. ", min, index + 1);
	
	
	return 0;
}
