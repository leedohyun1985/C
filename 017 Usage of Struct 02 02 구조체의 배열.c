#include <stdio.h>
#define SIZE 5

struct student
{
	int number;
	char name[20];
	double grade;
};
 
int main(void)
{	
	struct student list[SIZE];
	int i;
	
	for(i = 0 ; i < SIZE ; i++)
	{
		printf("�й� �Է� : ");
		scanf("%d", &list[i].number);
		printf("�̸� �Է� : ");
		scanf("%s", &list[i].name);
		printf("���� �Է� : ");
		scanf("%lf", &list[i].grade);
	}

	for(i = 0 ; i < SIZE ; i++)
	{
		printf("�й� : %d, �̸� : %s, ����: %.1f ", list[i].number , list[i].name , list[i].grade );
		printf("\n");
	}
	return 0;
}
