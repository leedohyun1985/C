#include <stdio.h>
int main(void)
{	
	int input;
	printf("���ڸ� �Է��ϼ���.");
	scanf("%d", &input);
	print(input);

	return 0;
}

int print(int input)
{
	int i, j;
	
	for(i = 0 ; i < input; i++)
	{
		for(j = 0 ; j <= i; j++)
		{
			printf("%d ", j + 1);
		}
		printf("\n");
	}
	
}
