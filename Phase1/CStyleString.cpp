#include <iostream>
#include <cstring>

using namespace std;

// ������ C++���ø����̼ǿ����� ������ ���ɻ��� ������ ���� C�Լ����� ���
int main() {
	char str[10] = "string";

	// ���ڿ��� ���� ���ϱ�
	// size_t strlen(const char* str);
	size_t length = strlen(str);
	cout << "���� : " << length;

	// const int 

	return 0;
}