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
		// endl�� new line���� �ٸ� �� �ִ�.
		// endl : stream�� flush�Ѵ�.
		// new line : flush���� �ʴ´�.
		// ����1
		fout << line << endl;
		// ����2
		fout.put('a');
	}

	////////////////////////////////////////
	// ���̳ʸ� ���Ͽ� ����
	////////////////////////////////////////
	ofstream fout("studentRecords.dat", ios_base::out | ios_base::binary);
	if (fout.is_open()) {
		char buffer[20] = "student name";
		// ofstream::write(const char*, streamsize);
		fout.write(buffer, 20);
	}
	fout.close();

	////////////////////////////////////////
	// ���̳ʸ� ���� �б�
	////////////////////////////////////////
	ifstream fin("studentRecords.dat", ios_base::in | ios_base::binary);
	if (fin.is_open()) {
		Record record;
		// ifsteram::read(char*, streamsize);
		fin.read((char*)&record, sizeof(record));
	}
	fin.close();

	////////////////////////////////////////
	// ���� �ȿ����� Ž��
	////////////////////////////////////////
	fstream fs("studentRecords.dat", ios_base::in | ios_base::out | ios_base::binary);
	if (fs.is_open()) {
		// seek put 
		fs.seekp(20, ios_base::beg); // beg : begin(���ۺ���)
		if (!fs.fail()) {
			// 21��° ��ġ�������� ����� 

		}
	}

	// Ž�� ����
	// ������ : seekp(20)					: 20��°��ġ�� �̵�
	// ����� : seekp(20, ios_base::cur)	: ������ġ�κ��� 20����Ʈ �ڷ� �̵�

	return 0;
}