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
	
	printf("학번 입력 : ");
	scanf("%d", &s.number);	
	printf("이름 입력 : ");
	scanf("%s", &s.name);	
	printf("학점 입력 : ");
	scanf("%lf", &s.grade);
	// float --> %f / double --> %lf 
	// %lf로 입력받아야 함, 숫자 1이 아님 
	 
	printf("학번 : %d", s.number); 
	printf("\n");
	printf("이름 : %s", s.name);
	printf("\n");
	printf("학점 : %.1f", s.grade);
	printf("\n");
	return 0;
}

