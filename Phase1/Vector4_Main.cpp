#include "Vector4.h"
#include <iostream>

int main() 
{
	Vector4 v1(10, 20);
	Vector4 v2(20, 30);
	// + ������ �����ε�
	Vector4 sum = v1 + v2;

	// ���� + ������ �Ʒ��� ������
	Vector4 sum2 = v1.operator+(v2);
	
	// << ������ �����ε�
	std::cout << v1 << std::endl << v2;
}