#include <stdio.h>
int main(void)
{	
	int i, j;
	int multiple_array[10][10];
	
	for(i = 2 ; i < 10 ; i++)
	{
		printf("\n [ %d ´Ü ]\n\n", i);
		
		for(j = 1; j < 10; j++)
		{
			multiple_array[i][j] = i * j;
			printf("%d * %d = %d\n", i, j, multiple_array[i][j]);
		}
	}
	
	return 0;
}
