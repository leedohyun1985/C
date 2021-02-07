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
	
	printf("���� ����� ��ǥ�� �Է� : ");
	scanf("%d %d", &rec.p1.x, &rec.p1.y);
	
	printf("������ �ϴ��� ��ǥ�� �Է� : ");
	scanf("%d %d", &rec.p2.x, &rec.p2.y);
	
	width = abs(rec.p2.x - rec.p1.x);
	height = abs(rec.p2.y - rec.p1.y);
	
	area = width * height;
	perimeter = 2 * width + 2 * height;
	
	printf("�簢���� ���� : %d , �ѷ� : %d", area, perimeter);
	
	return 0;
}

