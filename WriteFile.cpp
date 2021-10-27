#include <iostream>
#include <fstream>	
#include <string>

using namespace std;

struct Record
{
	char name[20];
	char address[20];
	int age;
};

int main() {
	ofstream fout;
	fout.open("hello_world.txt");

	string line;
	getline(cin, line);

	if (!cin.fail()) {
		// endl은 new line과는 다를 수 있다.
		// endl : stream을 flush한다.
		// new line : flush되진 않는다.
		// 쓰기1
		fout << line << endl;
		// 쓰기2
		fout.put('a');
	}

	////////////////////////////////////////
	// 바이너리 파일에 쓰기
	////////////////////////////////////////
	ofstream fout("studentRecords.dat", ios_base::out | ios_base::binary);
	if (fout.is_open()) {
		char buffer[20] = "student name";
		// ofstream::write(const char*, streamsize);
		fout.write(buffer, 20);
	}
	fout.close();

	////////////////////////////////////////
	// 바이너리 파일 읽기
	////////////////////////////////////////
	ifstream fin("studentRecords.dat", ios_base::in | ios_base::binary);
	if (fin.is_open()) {
		Record record;
		// ifsteram::read(char*, streamsize);
		fin.read((char*)&record, sizeof(record));
	}
	fin.close();

	////////////////////////////////////////
	// 파일 안에서의 탐색
	////////////////////////////////////////
	fstream fs("studentRecords.dat", ios_base::in | ios_base::out | ios_base::binary);
	if (fs.is_open()) {
		// seek put 
		fs.seekp(20, ios_base::beg); // beg : begin(시작부터)
		if (!fs.fail()) {
			// 21번째 위치에서부터 덮어쓰기 

		}
	}

	// 탐색 유형
	// 절대적 : seekp(20)					: 20번째위치로 이동
	// 상대적 : seekp(20, ios_base::cur)	: 현재위치로부터 20바이트 뒤로 이동

	return 0;
}