#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int number = 123;

	// cout 멤버 메서드
	// - 네임스페이스 : ios_base
	// - setf, unsetf, width, fill, precision
	// - 그리 많이 사용되지는 않음

	// cout의 멤버 메서드(setf)
	// cout << showpos << number;
	cout.setf(ios_base::showpos);

	// cout의 멤버 메서드(width)
	// cout << setw(5) << number;
	cout.width(5);
	cout << number;

	return 0;
}