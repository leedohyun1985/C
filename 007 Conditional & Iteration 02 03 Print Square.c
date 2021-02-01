#include <stdio.h>
#define n 10
int main(void)
{	
	int i, j;
	i = 0;
	j = 0;
	
	// C언어에서는 for 문 내부에서 i 초기화가 불가능 
	for(i = 0 ; i < n ; i++)
	{
		
		for(j = 0 ; j < n ; j++)
		{
			printf("☆");	
		}
		
		printf("\n");
		
	}

	return 0;
}
