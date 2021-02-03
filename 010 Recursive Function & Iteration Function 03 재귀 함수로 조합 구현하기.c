#include <stdio.h>
int main(void)
{
	int n, r;
	scanf("%d %d", &n, &r);
	printf("%d", nCr(n, r));
	return 0;
}

int nCr(int n, int r)
{
	if(r == 0 || r == n)
	{
		return 1;
	}
	else
	{
		return nCr( n - 1 , r - 1 ) + nCr(n - 1, r);
	}
}
