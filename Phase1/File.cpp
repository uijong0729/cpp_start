#include <iostream>
#include <fstream>	// ���� �����

using namespace std;

int main() {
	// ���� ���� (�б�����)
	ifstream fin;
	fin.open("hello.txt");
	
	// ���� ���� (��������, ������ ������ ����)
	ofstream fout;
	fout.open("hello2.txt");

	// �б�/���� �������� ������ ����
	fstream fs;
	fs.open("HelloWorld.txt");

	// open()
	// �� ��Ʈ��(ifstream, ofstream, fstream)���� open()�޼��尡 ����
	// ��� �÷��� (in, out, ate, app, trunc, binary) : �����ؼ� �� �� ������ ��� ������ ��ȿ������ ����
	// ��� �÷��� ��
	// r : ios_base::in
	// w : ios_base::out
	// a : ios_base::out | ios_base::trunc
	// r+ : ios_base::in | ios_base::out
	// w+ : ios_base::in | ios_base::out | ios_base::trunc

	// ���� �ݱ� : ������ �Ҹ��ϸ� �ڵ����� ������.
	fin.close();
	fout.close();
	fs.close();

	// ��Ʈ�� ���� Ȯ���ϱ�
	fstream fs2;
	fs2.open("hello.txt");
	if (fs2.is_open()) {
		cout << "opend";
	}
	fs2.close();

	// close() 
	// �� ��Ʈ������ ����
	
	////////////////////////////////////////////
	// ���Ͽ��� ���� �ϳ��� �б�
	////////////////////////////////////////////
	ifstream fin2;
	fin2.open("hello.txt");
	char character;
	while (true) {
		fin2.get(character);
		
		// �ؽ�Ʈ���� ���ڸ� ���� ���Ѵٰ� �ϸ� EOF����� ���� ���̴�.
		if (fin2.fail()) {
			break;
		}
		cout << character;
	}
	fin2.close();

	////////////////////////////////////////////
	// ���Ͽ��� �� �پ� �б�
	// get(), getline() : � ��Ʈ���� �־ �����ϰ� ������
	////////////////////////////////////////////
	
	////////////////////////////////////////////
	// ���Ͽ��� �� �ܾ �б�
	////////////////////////////////////////////
	ifstream fin3;
	fin3.open("balance.txt");
	
	string name;
	float balance;
	
	while (!fin3.eof()) {
		// <����>
		// "                      hello                 123"
		// �� �����Ͱ� �Ʒ��� ���� ������� ������ ������ ���õȴ�. 
		// (firstData : hello / secondData : 123)
		// char firstData[512];
		// int secondData;
		// cin >> firstData >> secondData;

		// �̸��� �ܰ� �ϳ��� ����
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