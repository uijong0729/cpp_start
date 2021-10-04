#include <iostream>
#include <iomanip>
#include "InputExam.h"

using namespace std;

int main() {
	sum();
	getline();
	return 0;
}

/*
* 1. 사용자가 입력한 정수를 합해보자
*/
void sum() {
	// 타이틀
	cout << "+----------------------+";
	cout << "| Add Integers Example |";
	cout << "+----------------------+";

	// number변수는 키보드 입력값을 저장할 것


	// EOF문자가 입력될 때까지 무한반복
	// - 입력이 정수형이 아닌경우 스트림 상태를 지우고 다시 시작 (잘못된 입력임을 알려 줌)
	// - 반복이 끝나면 결과를 출력


}

/*
* 2. 입력된 문자열 뒤집기
*/
void getline() {
	// 타이틀
	cout << "+------------------------+";
	cout << "| Reverse String Example |";
	cout << "+------------------------+";

	// 한 줄의 최대 길이
	const int LINE_SIZE = 512;
	char line[LINE_SIZE];

	// 프롬프트
	// - 사용자 입력시 문자를 뒤집어서 출력
	// - EOF입력시 멈춤
	// 
	//반복문  {{
		// 스트링을 못읽었다면 종료
		if (cin.fail()) {
			cin.clear();
			return;
		}

		// 첫 문자를 가리키는 포인터
		char* p = line;

		// 마지막 문자를 기리키는 포인터 (배열은 0부터 시작하니까...)
		char* q = line + strlen(line) - 1;
	
	// }}

}