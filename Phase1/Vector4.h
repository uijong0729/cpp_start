#pragma once

class Vector4
{
public:
	// �� �ڽ�(Vector)�� �ٸ� Vector�� +�� �� �� ����Ǵ� ����
	Vector4 operator+(const Vector4& rhs) const;
	Vector4(int x, int y);
	Vector4();
	void Print(); // <-- �޼ҵ� ��ſ� <<�����ڷ� ����� �� ������? : �����Լ�, friend Ű����

private:
	int mX;
	int mY;
}; // Ŭ���� ���� ������ ;�� ����