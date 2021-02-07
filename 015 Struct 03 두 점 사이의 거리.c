#include <stdio.h>
#include <math.h>

//구조체 선언이 main 함수 뒤에 있으면 에러가 남 
struct point
{
	int x;
	int y;
};


int main(void)
{
	struct point p1, p2;
	int xDiff, yDiff;
	double distance;
	
	printf("1번 점의 좌표를 입력 : ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("2번 점의 좌표를 입력 : ");
	scanf("%d %d", &p2.x, &p2.y);
	
	xDiff = p1.x - p2.x;
	yDiff = p1.y - p2.y;
	
	distance = sqrt(xDiff * xDiff + yDiff * yDiff );
	// sqrt 제곱근을 구하는 함수 
	printf("두 점사이의 거리 :  %f", distance);
	return 0;
}



