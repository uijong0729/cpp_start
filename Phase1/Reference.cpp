#include <iostream>
#include "Swap.h"

using namespace std;
using namespace sample;

int main() {
	int number = 100;

	//////////////////////////////////////////////////////////////
	// 참조는 별칭이다.
	// & : int의 참조형이다. 
	// <<주의>> 주소연산자 &와는 전혀 다른 애
	int& reference = number;

	// 참조는 NULL이 될 수 없음
	// int& reference = NULL;

	// 초기화 중에 반드시 선언 되어야 함
	// int& reference;

	// 100
	cout << reference << endl;
	
	//////////////////////////////////////////////////////////////
	// 참조하는 대상을 바꿀 수 없다.
	int number1 = 100;
	int number2 = 200;
	int& refer = number1;
	
	// 순수하게 number1에 number2를 대입하는 상황이 됨
	refer = number2;

	// 세 변수 값이 모두 200이 됨
	cout << number1 << number2 << refer << endl;

	SwapExample();
	return 0;
}

namespace sample {
	
	// 포인터로도 만들 수 있지만 참조를 이용한 스왑함수도 가능
	// 이것이 더 안전하기 때문에 권장됨
	// 1. number1, number2는 NULL을 대입할 수 없음 (구조적으로 NULL이 오지않는다)
	// 2. 우리가 소유하지 않은 메모리 장소를 가리킬 수 없음
	void Swap(int& number1, int& number2) {
		int tmp = number1;
		number1 = number2;
		number2 = tmp;
	}

	void SwapExample() {
		int number1 = 1;
		int number2 = 2;
		
		// 매개변수가 int& number1, int& number2이면 그대로 인수로 건네준다.
		// 참조를 이용하면 주소 연산자가 필요없다.
		Swap(number1, number2);
		cout << number1 << number2;
	}
}
