#include <stdio.h>
#include <string.h>
int main(void)
{	
	char input[10] = "I Love You";
	char result[5] = "Love";
	
	strcpy(result, input); // input2�� ������ input1�� �����ϴ� �� 
	//strcpy(input, result);
	printf("���ڿ� ���� : %s ", result);
	//printf("���ڿ� ���� : %s ", input);
	//���ڿ��� �����ؼ� ���� 
	return 0;
}
