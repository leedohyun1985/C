#include <stdio.h>
int main(void)
{	
	int i, sum;
	i = 1;
	sum = 0;
	
	while(i <= 1000) //������ ���̸� �ݺ� ���� 
	{
		sum += i; //sum = sum + i;
		i++;
	}
	
	printf("1���� 1000������ �� : %d", sum);
	
	return 0;
}
