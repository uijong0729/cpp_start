#pragma once
#include <ostream>

class Vector4
{
	// 멤버 아닌 연산자 오버로딩을 작성하는 법 
	// friend는 public에 구애받지 않기 때문에 대충 맨위에 적는다
	friend std::ostream& operator<<(std::ostream& os, const Vector4& rhs);

public:
	// 나 자신(Vector)과 다른 Vector에 +를 할 때 적용되는 정의(연산자 오버로딩)
	Vector4 operator+(const Vector4& rhs) const;
	Vector4(int x, int y);
	Vector4();
	// void Print(); // <-- 메소드 대신에 <<연산자로 출력할 수 없을까? : 전역함수, friend 키워드

private:
	int mX;
	int mY;
}; // 클래스 선언 끝에는 ;를 붙임