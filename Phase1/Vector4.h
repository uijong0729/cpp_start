#pragma once
#include <ostream>

class Vector4
{
	// ��� �ƴ� ������ �����ε��� �ۼ��ϴ� �� 
	// friend�� public�� ���ֹ��� �ʱ� ������ ���� ������ ���´�
	friend std::ostream& operator<<(std::ostream& os, const Vector4& rhs);

public:
	// �� �ڽ�(Vector)�� �ٸ� Vector�� +�� �� �� ����Ǵ� ����(������ �����ε�)
	Vector4 operator+(const Vector4& rhs) const;
	Vector4(int x, int y);
	Vector4();
	// void Print(); // <-- �޼ҵ� ��ſ� <<�����ڷ� ����� �� ������? : �����Լ�, friend Ű����

private:
	int mX;
	int mY;
}; // Ŭ���� ���� ������ ;�� ����