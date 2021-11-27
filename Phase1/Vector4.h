#pragma once
#include <ostream>

class Vector4
{
	// 멤버 아닌 연산자 오버로딩을 작성하는 법 
	// friend는 public에 구애받지 않기 때문에 대충 맨위에 적는다
	friend std::ostream& operator<<(std::ostream& os, const Vector4& rhs);
	friend Vector4 operator*(int multiplier, const Vector4 rhs);

public:
	// 나 자신(Vector)과 다른 Vector에 +를 할 때 적용되는 정의(연산자 오버로딩)
	// 메서드에 const : 멤버변수의 값이 바뀌는 것을 방지, 최대한 많은 곳에 const를 붙일 것
	// 인수에 const : 불필요한 개체의 사본이 생기는 것을 방지(참조), 멤버 변수가 바뀌는 것을 방지
	Vector4 operator+(const Vector4& rhs) const;
	Vector4(int x, int y);
	Vector4();

	// 비교연산자 재정의
	// 좌항이 this에 해당, 우항이 인수인 rhs에 해당
	bool operator==(const Vector4& rhs) const;

private:
	int mX;
	int mY;
}; // 클래스 선언 끝에는 ;를 붙임