#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int number = 123;

	// cout ��� �޼���
	// - ���ӽ����̽� : ios_base
	// - setf, unsetf, width, fill, precision
	// - �׸� ���� �������� ����

	// cout�� ��� �޼���(setf)
	// cout << showpos << number;
	cout.setf(ios_base::showpos);

	// cout�� ��� �޼���(width)
	// cout << setw(5) << number;
	cout.width(5);
	cout << number;

	return 0;
}