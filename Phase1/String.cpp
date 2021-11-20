#include <iostream>
#include <string>

using namespace std;

int main() {
	
	// 문자열 합치기
	string firstName = "LEE";
	string lastName = "EUIJONG";
	string name = firstName + " " + lastName;
	cout << name << endl;

	// 문자열 비교 (사전순 비교)
	string a = "ABC";
	string b = "BBC";
	if (a < b) {
		cout << "b가 a보다 사전순으로 뒤에있다" << endl;
	}

	// 문자열 비교
	firstName = "EUIJONG";
	if (firstName == lastName) {
		cout << "두 문자열은 같다" << endl;
	}

	// 문자열의 길이는 size와 length가 있으나 size를 주로 쓴다.
	cout << firstName.size() << endl;

	// c_str : string을 원시형태인 const char* 로 반환한다.
	// 1. c언어와의 호환을 위해 사용한다.
	// 2. 운영체제 기반의함수는 대부분 string이 아닌 char*를 사용한다.
	string str = "string";
	const char* cStr = str.c_str();

	// string 속 한 문자에 접근
	string dog = "siba";
	cout << dog[0] << (dog[1] = 'p') << endl;
	cout << dog << endl;

	// 한 줄 읽기1
	string line;
	getline(cin, line);			// \n 문자를 만날 떄까지 cin에서 문자들을 꺼내서 line에 저장
	cout << line << endl;
	
	// 한 줄 읽기2
	line = "";
	getline(cin, line, '@');	// @ 문자를 만날 때까지 cin에서 문자들을 꺼내서 line에 저장
	cout << line << endl;		// eee@fff 입력시 eee출력

	return 0;
}