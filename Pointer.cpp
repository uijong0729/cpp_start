#include <iostream>
#include <iomanip>
#include "practice.h"

using namespace std;
int main() {
	prac1();
	prac2();
	return 0;
}

// 10과 20이 각 줄에 출력되게 만드세요.
void prac1() {
	int* numPtr;
	int num1 = 10;
	int num2 = 20;

	// 10
	numPtr = &num1;
	cout << *numPtr << endl;
	
	// 20
	numPtr = &num2;
	cout << *numPtr << endl;	
}

// 55와 22가 각 줄에 출력되게 만드세요.
void prac2() {
	int numArr[5] = { 11, 22, 33, 44, 55 };
	int* numPtrA;
	
	// << void포인터 >>
	// void 포인터는 자료형이 정해지지 않은 특성 때문에 
	// 어떤 자료형으로 된 포인터든 모두 저장할 수 있습니다. 
	// 반대로 다양한 자료형으로 된 포인터에도 void 포인터를 저장할 수도 있습니다. 
	// 이런 특성 때문에 void 포인터는 범용 포인터라고 합니다.
	// void 포인터는 역참조를 할 수 없습니다.
	void* ptr;

	numPtrA = &numArr[2];
	ptr = numArr;

	//55
	cout << *(numPtrA + 2) << endl;
	
	//22 
	cout << *(((int*)ptr) + 1) << endl;
}

void pointerBasic() {
	// 포인터는 너무 안쓰다보니 까먹는다
	int score = 100;
	int* pointer = &score; // (score의 주소)
	// 포인터 위치에 값 대입
	* pointer = 50;
	cout << score; // 결과 : 50
}