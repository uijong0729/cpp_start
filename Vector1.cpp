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

// 복사 생성자
// : 같은 클래스에 속한 다른 개체를 이용하여 새로운 개체를 초기화
// : 암시적 복사생성자 (코드에 복사 생성자가 없는 경우 컴파일러가 암시적 복사 생성자를 자동 생성)
Vector1::Vector1(const Vector1& other)
	// other는 다른개체이지만, 같은 class에 있기 때문에 private에 접근할 수 있다.
	:mX(other.mX)
	,mY(other.mY)
{
	// Vector a;	// 매개변수 없는 생성자 호출
	// Vector b(a); // 복사 생성자 호출
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

