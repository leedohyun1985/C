/*
���ڷ��� Data Type

 - ���� Primitive
 	char
 	int
 	float
 	void : �ڷ��� ��ü�� ����
	* C���� String �ڷ����� ����, char �ڷ����� ���������� ��� 
	
	���� �Ϲ����� ���� �ڷ����� �� 4����
	Integer ����
	Character ���� 
	Float �Ǽ� 
	Double �Ǽ� 

 - �Ļ� Derivied
	Array
	Pointer
	Function
	
 - ����� ���� User Defined
	Enum
	Structure
	Union 
*/

#include <stdio.h>
#define MONTHS 12 //����� ���� 
int main(void)
{
	
	double month_salary = 1000.5;
	printf("$ %.2f\n", month_salary * MONTHS); // \n �ٹٲ� 
	
	return 0;
}
