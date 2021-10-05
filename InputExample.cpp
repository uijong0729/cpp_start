#include <iostream>
#include <iomanip>
#include "InputExam.h"

using namespace std;

int main() {
	//sum();
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
	cout << "+----------------------+" << endl;

	// number변수는 키보드 입력값을 저장할 것
	int sum = 0;

	// EOF문자가 입력될 때까지 무한반복 ( EOF문자입력 : [ctrl + z 누른 후 엔터] )
	// - 입력이 정수형이 아닌경우 스트림 상태를 지우고 다시 시작 (잘못된 입력임을 알려 줌)
	// - 반복이 끝나면 결과를 출력
	while (true) {
		if (cin.eof()) {
			break;
		}

		int number;
		cin >> number;
		if (cin.fail()) {
			cout << "숫자를 입력하세요" << endl;
			cin.clear();
			
			// 버릴 수 있는 문자 최대 개수를 버림
			// 단, 버린 문자 중 개행문자가 포함되면 곧바로 멈춤
			cin.ignore(LLONG_MAX, '\n');
			continue;
		}
		sum += number;
	}

	cout << "Sum result : " << sum;
}

/*
* 2. 입력된 문자열 뒤집기
*/
void getline() {
	// 타이틀
	cout << "+------------------------+";
	cout << "| Reverse String Example |";
	cout << "+------------------------+" << endl;

	// 한 줄의 최대 길이
	const int LINE_SIZE = 512;
	char line[LINE_SIZE];

	// 프롬프트
	// - 사용자 입력시 문자를 뒤집어서 출력
	// - EOF입력시 멈춤
	while (true) {
		// 사용자 입력
		cin.getline(line, LINE_SIZE);

		// 스트링을 못읽었다면 종료
		if (cin.fail() || cin.eof()) {
			cin.clear();
			return;
		}

		// 포인터 변수를 선언하려면 자료형 뒤에 *를 붙임
		// 첫 문자를 가리키는 포인터
		char* p = line;
		// strlen : 문자열의 길이
		char* q = line + strlen(line) - 1;

		while (p < q) {
			// *p : 역참조 (주소로부터 값을 가져옴)
			// &p : 참조 (해당 값의 주소를 가져옴)
			char tmp = *p;
			*p = *q;
			*q = tmp;

			// 포인터 증가
			p++;
			// 포인터 감소
			q--;
		}

		cout << line << endl;
	}
}