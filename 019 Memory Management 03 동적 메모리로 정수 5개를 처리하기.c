#include <stdio.h>
int main(void)
{
	int *pi, i;
	pi = (int *)malloc(5*sizeof(int));
	if(NULL == pi)
	{
		printf("���� �޸� �Ҵ翡 ������");
		printf("\n");
		exit(1);
	}
	
	pi[0] = 100;
	pi[1] = 200;
	pi[2] = 300;
	pi[3] = 400;
	pi[4] = 500;
	
	for(i = 0; i < 5 ; i++)
	{
		printf("%d", *(pi + i));
		printf("\n");
	}
	free(pi);
	return 0;
}
