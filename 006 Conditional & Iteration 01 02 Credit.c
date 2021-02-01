#include <stdio.h>
int main(void)
{	
	int score = 80;
	/*
		if는 조건에 일치하는지의 여부를 판단한다
		
		else는 if문이 일치하지 않을 경우 실행된다.
	
		즉, 상단의 if문이 true값을 가지게 된다면 else문은 실행되지 않는다.
		
		때문에 else if 문에서도 
		상단의 if문이든, 상단의 else if이든 
		하나가 true값을 가지게 되면 
		이후의 if는 실행되지 않게 된다.
		if , else if , else	구조는 조건만 정상적이라면 
		switch문과 동일한 결과를 가지게 된다. 
		else문 없이 if문으로 연속 구성되어 있다면 상기 사항은 해당 없음
		 
	*/
	if(score >= 90)
	{
		printf("학점 : A");
	}
	else if(score >= 80) // 여기는 일단  score >= 90 조건과 일치하지 않을 때만 실행된다 
	{
		printf("학점 : B");
	}
	else if(score >= 70)
	{
		printf("학점 : C");
	}
	else if(score >= 60)
	{
		printf("학점 : D");
	}
	else
	{
		printf("학점 : F");
	} 
	return 0;
}
