#include <stdio.h>
int main(void)
{	
	int score = 80;
	/*
		if�� ���ǿ� ��ġ�ϴ����� ���θ� �Ǵ��Ѵ�
		
		else�� if���� ��ġ���� ���� ��� ����ȴ�.
	
		��, ����� if���� true���� ������ �ȴٸ� else���� ������� �ʴ´�.
		
		������ else if �������� 
		����� if���̵�, ����� else if�̵� 
		�ϳ��� true���� ������ �Ǹ� 
		������ if�� ������� �ʰ� �ȴ�.
		if , else if , else	������ ���Ǹ� �������̶�� 
		switch���� ������ ����� ������ �ȴ�. 
		else�� ���� if������ ���� �����Ǿ� �ִٸ� ��� ������ �ش� ����
		 
	*/
	if(score >= 90)
	{
		printf("���� : A");
	}
	else if(score >= 80) // ����� �ϴ�  score >= 90 ���ǰ� ��ġ���� ���� ���� ����ȴ� 
	{
		printf("���� : B");
	}
	else if(score >= 70)
	{
		printf("���� : C");
	}
	else if(score >= 60)
	{
		printf("���� : D");
	}
	else
	{
		printf("���� : F");
	} 
	return 0;
}
