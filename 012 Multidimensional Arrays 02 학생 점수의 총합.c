#include <stdio.h>
int main(void)
{	
	int score[5][2];
	int total[2] = { 0 , };
	
	/*
	1차원 배열할당할때  0 , 으로 0인 값으로 초기화하는 표기 
	0 이외로는 이러한 방식의 초기화 불가능
	배열의 마지막에 , 0으로 처리하면 초기화 된다고도 함
	{ 0 , } 외에도 { 0 }로 처리해도 0으로 초기화 한다고 함 
	char str[32] = ""; 이것도 0으로 초기화됨 

	printf("\n");
	printf("%d",total[0]);
	printf("\n");
	printf("%d",total[1]);
	printf("\n");
	*/
	
	int i;
	
	for(i = 0 ; i < 5 ; i++)
	{
		printf("%d 번 학생의 수학, 영어 점수 : ", i + 1 );
		scanf("%d %d", &score[i][0], &score[i][1]);
	}
	
	for(i = 0 ; i < 5 ; i ++)
	{
		total[0] += score[i][0];
		total[1] += score[i][1];
	}
	
	printf("\n");
	printf("\n");
	printf("5명의 수학 점수 합계 : %d", total[0]);
	printf("\n");
	printf("5명의 영어 점수 합계 : %d", total[1]);
	
	
	return 0;
}
