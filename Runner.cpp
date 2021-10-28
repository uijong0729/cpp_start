#include <iostream>

using namespace std;

class Vector
{
// 멤버변수는 맨앞에 m 을 붙임
// 키워드를 생략한 기본 접근권한은 private
int mX;
int mY;

// 접근제어자
public:int mA;		// 누구나 접근 가능
protected:int mB;	// 자식 클래스에서 접근 가능
private:int mC;		// 해당 클래스에서만 접근 가능 (개체에서는 접근 불가능)

// 표준 : 제어자별로 멤버들을 그룹지음
public:
	int mD;
	int mE;
protected:
	int mF;
	int mG;
private:
	int mH;
	int mI;
};

int main() {

	return 0;
}