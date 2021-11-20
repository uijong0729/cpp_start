#include <iostream>
#include "Vector1.h"

using namespace std;

// ������ ������
Vector1::Vector1() : mX(0), mY(0) 
{
	cout << mX << mY << endl;
}

// ������ ������
Vector1::Vector1(int x, int y)
	: mX(x)
	, mY(y)
{
	cout << mX << mY;
}

// �Ҹ��� ������
Vector1::~Vector1()
{

}

// ���� ������
// : ���� Ŭ������ ���� �ٸ� ��ü�� �̿��Ͽ� ���ο� ��ü�� �ʱ�ȭ
// : �Ͻ��� ��������� (�ڵ忡 ���� �����ڰ� ���� ��� �����Ϸ��� �Ͻ��� ���� �����ڸ� �ڵ� ����)
Vector1::Vector1(const Vector1& other)
	// other�� �ٸ���ü������, ���� class�� �ֱ� ������ private�� ������ �� �ִ�.
	:mX(other.mX)
	,mY(other.mY)
{
	// Vector a;	// �Ű����� ���� ������ ȣ��
	// Vector b(a); // ���� ������ ȣ��
}

bool Vector1::IsEqual(const Vector1& v) const
{
	return mX == v.GetX() && mY == v.GetY();
}

Vector1 Vector1::Multiply(const Vector1& v) const
{
	Vector1 result(mX * v.GetX(), mY * v.GetY());
	return result;
}

Vector1 Vector1::Multiply(int multiplier) const
{
	Vector1 result(mX * multiplier, mY * multiplier);
	return result;
}

void Vector1::Scale(const Vector1& v)
{
	mX *= v.mX;
	mY *= v.mY;
}

void Vector1::Scale(int multiplier)
{
	mX *= multiplier;
	mY *= multiplier;
}

// --------------------------------------------------------------------

// Const ����Լ� : ��� ������ ���ϴ� ���� ����
int Vector1::GetX() const
{
	return mX;
}

// Const ����Լ� : ��� ������ ���ϴ� ���� ����
int Vector1::GetY() const
{
	return mY;
}

void Vector1::SetX(int x)
{
	mX = x;
}

void Vector1::SetY(int y)
{
	mY = y;
}


void Vector1::Add(const Vector1& other) 
{
	mX += other.mX;
	mY += other.mY;
}

