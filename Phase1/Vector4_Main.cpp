#include "Vector4.h"

int main() 
{
	Vector4 v1(10, 20);
	Vector4 v2(20, 30);
	// + 연산자 오버로딩
	Vector4 sum = v1 + v2;
	sum.Print();

	// 위의 + 연산은 아래와 동일함
	Vector4 sum2 = v1.operator+(v2);
	sum.Print();
}