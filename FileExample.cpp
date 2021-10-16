#include <iostream>
#include <fstream>	// 파일 입출력

using namespace std;

int main() {
	// 파일에서 숫자만 읽기
	ifstream fin;
	fin.open("complex_text.txt");
	int number;
	string trash;

	while (true) {
		// 숫자만 출력
		fin >> number;

		if (!fin.fail()) {
			cout << number << endl;
			continue;
		} else {
			// fail 
			// fail비트가 설정되어 있으면, 프로그램 코드상의 기술이 있어도 파일읽기는 수행되지 않는다.
			// fin.clear();
			if (fin.eof()) {
				break;
			}
		}
		fin.clear();
		fin >> trash;
	}

	fin >> trash;
	return 0;
}