#include <iostream>
#include "Vector1.h"

using namespace std;

// 생성자 구현부
Vector1::Vector1() : mX(0), mY(0) 
{
	cout << mX << mY << endl;
}

// 생성자 구현부
Vector1::Vector1(int x, int y)
	: mX(x)
	, mY(y)
{
	cout << mX << mY;
}

// 소멸자 구현부
Vector1::~Vector1()
{

}

// Const 멤버함수 : 멤버 변수가 변하는 것을 방지
int Vector1::GetX() const
{
	return mX;
}

// Const 멤버함수 : 멤버 변수가 변하는 것을 방지
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
