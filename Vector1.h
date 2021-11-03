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

	// 클래스의 멤버 함수
	// - 메서드 : OOP에서 오브젝트 안에 들어가있는 함수
	// - 함수 : 오브젝트 바깥 전역 함수로 쓰는 함수
	void SetX(int x);
	void SetY(int y);
	int GetX() const;	// const 메서드. 해당 개체 안의 어떠한 것도 바꾸지 않음
	int GetY() const;	// const 메서드. 해당 개체 안의 어떠한 것도 바꾸지 않음
	void Add(const Vector1& other);

private:
	int mX;
	int mY;
}; // 클래스 선언 끝에는 ;를 붙임