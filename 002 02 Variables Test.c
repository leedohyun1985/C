#include <stdio.h>

int main(void)
{
	int x = 50;
	float y = 123456789.123456789; //크기가 커지면 마지막에 맞지 않는 값이 들어가게 된다 
	double z = 123456789.123456789; //더블 형에서도 마지막 사이즈가 잘리는 것을 알 수 있다 
	printf("x = %d / 크기는 %d byte\n", x, sizeof(x));
	printf("y = %.2f / 크기는 %d byte\n", y, sizeof(y));
	printf("z = %.8f / 크기는 %d byte", z, sizeof(z));
	
	return 0;
}
