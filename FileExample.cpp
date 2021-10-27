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
		// 아래의 순서는 바뀌면 안된다. 
		// failbit인 경우 읽기가 무시되므로 clear()로 일단 goodbit로 돌려놔야하기 때문
		fin.clear();
		fin >> trash;
	}

	fin >> trash;
	return 0;
}