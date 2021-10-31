#include <iostream>

using namespace std;

// public 변수를 제일 위에 보여주고 private를 제일 아래 보여준다.
class Vector
{

	// 멤버변수는 맨앞에 m 을 붙임
	// 키워드를 생략한 기본 접근권한은 private
public:
	int mX = 0;
	int mY = 0;

	// 접근제어자
public:int mA;		// 누구나 접근 가능
protected:int mB;	// 자식 클래스에서 접근 가능
private:int mC;		// 해당 클래스에서만 접근 가능 (개체에서는 접근 불가능)

// 표준 : 제어자별로 멤버들을 그룹지음
public:
	// 멤버변수는 값이 초기화 되지 않음
	// 초기화를 안하면 어딘가의 쓰레기값이 들어감
	int mD;
	int mE;

	// 매개변수 없는 생성자. 각 멤버변수를 0으로 초기화.
	// 초기화 리스트
	// - 오브젝트가 만들어질 때 초기화
	// - 멤버변수를 대입없이 초기화, 상수나 참조변수도 초기화 가능
	Vector(): mX(0), mY(0), mH(5), mI(10)
	{
		// 엄밀히 말하면 초기화가 된 이후에 실행되는 대입이기에 초기화는 아님 (비권장)
		mF = 0;
		mG = 0;
		mA = 0;
		mB = 0;
		mC = 0;
		mD = 0;
		mE = 0;
	}
protected:
	int mF;
	int mG;
private:
	// const 변수도 초기화 가능 (대입으로는 불가능)
	const int mH;
	const int mI;
};

// a와 b는 참조형이지만 그 원본 값이 바뀌지 않도록 const를 기재한다.
Vector AddVector(const Vector& a, const Vector& b)
{
	Vector result;
	result.mX = a.mX + b.mX;
	result.mY = a.mY + b.mY;
	return result;
}

void Foo()
{
	Vector a;
	Vector b;
	Vector c = AddVector(a, b);
}

void PrintVectors(const Vector& a, const Vector& b)
{
	// 함수 안에서 new하는건 좋은 예가 아님
	// 로컬변수는 스택에 저장하고 빼내는게 맞음
	Vector* result = new Vector;
	result->mA = a.mA + b.mA;
	result->mD = a.mD + b.mD;

	cout << result->mA;
	cout << result->mD;

	// 메모리 지움
	delete result;
}

int main() {
	// 개체 생성
	// 1. 스택 메모리에 만들기 (빠름)
	Vector a;

	// 2. 힙 메모리에 만들기 (느림)
	Vector* b = new Vector();

	// 개체 배열 
	// 참고1 : 자바의 개체는 Vector포인터 10개이고 실제 Vector의 크기만큼의 할당이 되진 않음
	// 참고2 : 실제 Vector 10개 만큼의 공간을 만들어준다.
	Vector* list = new Vector[10];
	
	// 자바처럼 10개의 포인터를 힙에 만듦
	Vector** pList = new Vector*[10];

	// 개체 소멸 : 자바에서는 null을 대입하면 GC가 언젠가는 지워줌
	delete b;		// 개체
	delete[] list;	// 개체배열 : []를 안해주면 첫번째 멤버변수에 대한 소멸자만 호출된다.
	delete[] pList;	// 개체포인터 배열
	
	// 안해도 되지만, 해당 메모리에 접근해서 NULL인지를 확인하는 로직이 있을경우 
	// NULL을 넣어주지 않으면 장애발생 우려가 있음
	b = NULL;
	list = NULL;
	pList = NULL;

	return 0;
}