#pragma once
#include <ostream>

class Vector4
{
	// ��� �ƴ� ������ �����ε��� �ۼ��ϴ� �� 
	// friend�� public�� ���ֹ��� �ʱ� ������ ���� ������ ���´�
	friend std::ostream& operator<<(std::ostream& os, const Vector4& rhs);
	friend Vector4 operator*(int multiplier, const Vector4 rhs);

public:
	// �� �ڽ�(Vector)�� �ٸ� Vector�� +�� �� �� ����Ǵ� ����(������ �����ε�)
	// �޼��忡 const : ��������� ���� �ٲ�� ���� ����, �ִ��� ���� ���� const�� ���� ��
	// �μ��� const : ���ʿ��� ��ü�� �纻�� ����� ���� ����(����), ��� ������ �ٲ�� ���� ����
	Vector4 operator+(const Vector4& rhs) const;
	Vector4(int x, int y);
	Vector4();

	// �񱳿����� ������
	// ������ this�� �ش�, ������ �μ��� rhs�� �ش�
	bool operator==(const Vector4& rhs) const;

private:
	int mX;
	int mY;
}; // Ŭ���� ���� ������ ;�� ����