/*
○자료형 Data Type

 - 원시 Primitive
 	char
 	int
 	float
 	void : 자료형 자체가 없음
	* C언어는 String 자료형이 없음, char 자료형을 연속적으로 사용 
	
	가장 일반적인 변수 자료형은 총 4가지
	Integer 정수
	Character 문자 
	Float 실수 
	Double 실수 

 - 파생 Derivied
	Array
	Pointer
	Function
	
 - 사용자 정의 User Defined
	Enum
	Structure
	Union 
*/

#include <stdio.h>
#define MONTHS 12 //상수의 선언 
int main(void)
{
	
	double month_salary = 1000.5;
	printf("$ %.2f\n", month_salary * MONTHS); // \n 줄바꿈 
	
	return 0;
}
