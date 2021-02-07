#include <stdio.h>
#include <math.h>

struct point
{
	int x;
	int y;
};

struct rectangle
{
	struct point p1;
	struct point p2;
};

int main(void)
{	
	struct rectangle rec;
	int width, height, area, perimeter;
	
	printf("왼쪽 상단의 좌표를 입력 : ");
	scanf("%d %d", &rec.p1.x, &rec.p1.y);
	
	printf("오른쪽 하단의 좌표를 입력 : ");
	scanf("%d %d", &rec.p2.x, &rec.p2.y);
	
	width = abs(rec.p2.x - rec.p1.x);
	height = abs(rec.p2.y - rec.p1.y);
	
	area = width * height;
	perimeter = 2 * width + 2 * height;
	
	printf("사각형의 넓이 : %d , 둘레 : %d", area, perimeter);
	
	return 0;
}

