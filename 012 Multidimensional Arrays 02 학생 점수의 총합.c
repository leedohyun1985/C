#include <stdio.h>
int main(void)
{	
	int score[5][2];
	int total[2] = { 0 , };
	
	/*
	1���� �迭�Ҵ��Ҷ�  0 , ���� 0�� ������ �ʱ�ȭ�ϴ� ǥ�� 
	0 �ܷ̿δ� �̷��� ����� �ʱ�ȭ �Ұ���
	�迭�� �������� , 0���� ó���ϸ� �ʱ�ȭ �ȴٰ� ��
	{ 0 , } �ܿ��� { 0 }�� ó���ص� 0���� �ʱ�ȭ �Ѵٰ� �� 
	char str[32] = ""; �̰͵� 0���� �ʱ�ȭ�� 

	printf("\n");
	printf("%d",total[0]);
	printf("\n");
	printf("%d",total[1]);
	printf("\n");
	*/
	
	int i;
	
	for(i = 0 ; i < 5 ; i++)
	{
		printf("%d �� �л��� ����, ���� ���� : ", i + 1 );
		scanf("%d %d", &score[i][0], &score[i][1]);
	}
	
	for(i = 0 ; i < 5 ; i ++)
	{
		total[0] += score[i][0];
		total[1] += score[i][1];
	}
	
	printf("\n");
	printf("\n");
	printf("5���� ���� ���� �հ� : %d", total[0]);
	printf("\n");
	printf("5���� ���� ���� �հ� : %d", total[1]);
	
	
	return 0;
}
