#include <iostream>
#include <cstring>

using namespace std;

// 현업의 C++애플리케이션에서는 여전히 성능상의 이유로 많은 C함수들을 사용
int main() {
	char str[10] = "string";

	// 문자열의 길이 구하기
	// size_t strlen(const char* str);
	size_t length = strlen(str);
	cout << "길이 : " << length;

	// const int 

	return 0;
}