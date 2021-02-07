#include <stdio.h>
#include <stdlib.h>

struct student
{
	int number;
	char name[10];
	double grade;
}; //struct 는 ; 으로 종료해야 함 

int main(void)
{
	struct student s;
	s.number = 2015001;
	strcpy(s.name, "홍길동");
	s.grade = 4.5;
	
	printf("학번 : %d", s.number); 
	printf("\n");
	printf("이름 : %s", s.name);
	printf("\n");
	printf("학점 : %.1f", s.grade);
	printf("\n");
	return 0;
}

