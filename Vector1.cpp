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
