#include <stdio.h>
#include <stdlib.h>

struct student
{
	int number;
	char name[10];
	double grade;
}; //struct �� ; ���� �����ؾ� �� 

int main(void)
{
	struct student s;
	
	printf("�й� �Է� : ");
	scanf("%d", &s.number);	
	printf("�̸� �Է� : ");
	scanf("%s", &s.name);	
	printf("���� �Է� : ");
	scanf("%lf", &s.grade);
	// float --> %f / double --> %lf 
	// %lf�� �Է¹޾ƾ� ��, ���� 1�� �ƴ� 
	 
	printf("�й� : %d", s.number); 
	printf("\n");
	printf("�̸� : %s", s.name);
	printf("\n");
	printf("���� : %.1f", s.grade);
	printf("\n");
	return 0;
}

