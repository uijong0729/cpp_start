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

	// 복사 생성자 : 나랑 똑같은 클래스를 인수로 받는 생성자
	Vector1(const Vector1& other);

	bool IsEqual(const Vector1& v) const;

	// 함수 오버로딩 1 (값 복사 반환)
	//	- 요소별 곱셈
	Vector1 Multiply(const Vector1& v) const;	// const 메서드. 해당 개체 안의 어떠한 것도 바꾸지 않음
	//	- 요소에 곱셈
	Vector1 Multiply(int multiplier) const;		// const 메서드. 해당 개체 안의 어떠한 것도 바꾸지 않음

	// 함수 오버로딩 2
	void Scale(const Vector1& v);	// const 키워드가 없으므로 나 자신을 확대/축소 하는 메소드임을 알 수 있음
	void Scale(int multiplier);		// const 키워드가 없으므로 나 자신을 확대/축소 하는 메소드임을 알 수 있음

private:
	int mX;
	int mY;
}; // 클래스 선언 끝에는 ;를 붙임