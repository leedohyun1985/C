#include <stdio.h>
#include <limits.h>
#define NUMBER 5
int main(void)
{	
	int i, max, min, index;
	int array[NUMBER];
	max = 0;
	index = 0;
	// array[0] ~ array[4] : �� 5�� �� ũ���� �迭 ����;
	
	for( i = 0 ; i < NUMBER; i++)
	{
		scanf("%d", &array[i]); //�迭�� �� �־��ֱ�
		 
		if(max < array[i]) //i ��° �迭�� ���� max���� ũ�ٸ� 
		{
			max = array[i];
			index = i;
		}
	}
	printf("���� ū ���� %d�̰�, %d ��° ��ġ�մϴ�. ", max, index + 1);
	printf("\n"); 
	min = INT_MAX; // INT_MAX�� limits.h include�ؾ� ��밡�� 
	for( i = 0 ; i < NUMBER; i++)
	{
		if(min > array[i]) //i ��° �迭�� ���� max���� ũ�ٸ� 
		{
			min = array[i];
			index = i;
		}
	}	
	
	printf("���� ���� ���� %d�̰�, %d ��° ��ġ�մϴ�. ", min, index + 1);
	
	
	return 0;
}
