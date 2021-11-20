#pragma once

class Vector4
{
public:
	// 나 자신(Vector)과 다른 Vector에 +를 할 때 적용되는 정의
	Vector4 operator+(const Vector4& rhs) const;
	Vector4(int x, int y);
	Vector4();
	void Print(); // <-- 메소드 대신에 <<연산자로 출력할 수 없을까? : 전역함수, friend 키워드

private:
	int mX;
	int mY;
}; // 클래스 선언 끝에는 ;를 붙임