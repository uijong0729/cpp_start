#include <iostream>

using namespace std;

int main() {
	// 문자열 뒤집어 덧붙이기
	string line = "hello world";
	cout << line << endl;

	// 문자열 뒤에서 훑고, 뒤에서부터 한 문자씩 더함
	for (int i = line.size() - 1; i > -1; i--) {
		line += line[i];
	}

	// 출력 : hello worlddlrow olleh
	cout << "mirrored string : " << line << endl;
	return 0;
}