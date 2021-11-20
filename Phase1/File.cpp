#include <iostream>
#include <fstream>	// 파일 입출력

using namespace std;

int main() {
	// 파일 오픈 (읽기전용)
	ifstream fin;
	fin.open("hello.txt");
	
	// 파일 오픈 (쓰기전용, 파일이 없으면 만듬)
	ofstream fout;
	fout.open("hello2.txt");

	// 읽기/쓰기 범용으로 파일을 오픈
	fstream fs;
	fs.open("HelloWorld.txt");

	// open()
	// 각 스트림(ifstream, ofstream, fstream)마다 open()메서드가 있음
	// 모드 플래그 (in, out, ate, app, trunc, binary) : 조합해서 쓸 수 있으나 모든 조합이 유효하지는 않음
	// 모드 플래그 예
	// r : ios_base::in
	// w : ios_base::out
	// a : ios_base::out | ios_base::trunc
	// r+ : ios_base::in | ios_base::out
	// w+ : ios_base::in | ios_base::out | ios_base::trunc

	// 파일 닫기 : 변수가 소멸하면 자동으로 닫힌다.
	fin.close();
	fout.close();
	fs.close();

	// 스트림 상태 확인하기
	fstream fs2;
	fs2.open("hello.txt");
	if (fs2.is_open()) {
		cout << "opend";
	}
	fs2.close();

	// close() 
	// 각 스트림마다 존재
	
	////////////////////////////////////////////
	// 파일에서 문자 하나씩 읽기
	////////////////////////////////////////////
	ifstream fin2;
	fin2.open("hello.txt");
	char character;
	while (true) {
		fin2.get(character);
		
		// 텍스트에서 문자를 읽지 못한다고 하면 EOF말고는 없을 것이다.
		if (fin2.fail()) {
			break;
		}
		cout << character;
	}
	fin2.close();

	////////////////////////////////////////////
	// 파일에서 한 줄씩 읽기
	// get(), getline() : 어떤 스트림에 넣어도 동일하게 동작함
	////////////////////////////////////////////
	
	////////////////////////////////////////////
	// 파일에서 한 단어씩 읽기
	////////////////////////////////////////////
	ifstream fin3;
	fin3.open("balance.txt");
	
	string name;
	float balance;
	
	while (!fin3.eof()) {
		// <복습>
		// "                      hello                 123"
		// 위 데이터가 아래와 같은 방식으로 들어오면 공백은 무시된다. 
		// (firstData : hello / secondData : 123)
		// char firstData[512];
		// int secondData;
		// cin >> firstData >> secondData;

		// 이름과 잔고를 하나씩 읽음
		fin3 >> name >> balance;
		
		if (fin3.fail()) {
			fin3.clear();
			fin.ignore(LLONG_MAX, ' ');
		}
		else {
			cout << name << ", $" << balance << endl;
		}
		fin.clear();
	}
	fin3.close();

	return 0;
}