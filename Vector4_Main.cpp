#include "Vector4.h"

int main() 
{
	Vector4 v1(10, 20);
	Vector4 v2(20, 30);
	// + ������ �����ε�
	Vector4 sum = v1 + v2;
	sum.Print();

	// ���� + ������ �Ʒ��� ������
	Vector4 sum2 = v1.operator+(v2);
	sum.Print();
}