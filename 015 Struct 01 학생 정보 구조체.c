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
	s.number = 2015001;
	strcpy(s.name, "ȫ�浿");
	s.grade = 4.5;
	
	printf("�й� : %d", s.number); 
	printf("\n");
	printf("�̸� : %s", s.name);
	printf("\n");
	printf("���� : %.1f", s.grade);
	printf("\n");
	return 0;
}

