#pragma once

class Vector1
{
public:
	// 생성자
	Vector1();
	Vector1(int x, int y);
	
	// 소멸자
	// - 매개변수 없이 딱 하나만 있다.
	// - 객체가 지워질 때 호출 됨
	// - 클래스 안에서 동적 메모리 할당할 경우 소멸자에서 해제
	~Vector1();

private:
	int mX;
	int mY;
}; // 클래스 선언 끝에는 ;를 붙임