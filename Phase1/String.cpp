#include <iostream>
#include <string>

using namespace std;

int main() {
	
	// ���ڿ� ��ġ��
	string firstName = "LEE";
	string lastName = "EUIJONG";
	string name = firstName + " " + lastName;
	cout << name << endl;

	// ���ڿ� �� (������ ��)
	string a = "ABC";
	string b = "BBC";
	if (a < b) {
		cout << "b�� a���� ���������� �ڿ��ִ�" << endl;
	}

	// ���ڿ� ��
	firstName = "EUIJONG";
	if (firstName == lastName) {
		cout << "�� ���ڿ��� ����" << endl;
	}

	// ���ڿ��� ���̴� size�� length�� ������ size�� �ַ� ����.
	cout << firstName.size() << endl;

	// c_str : string�� ���������� const char* �� ��ȯ�Ѵ�.
	// 1. c������ ȣȯ�� ���� ����Ѵ�.
	// 2. �ü�� ������Լ��� ��κ� string�� �ƴ� char*�� ����Ѵ�.
	string str = "string";
	const char* cStr = str.c_str();

	// string �� �� ���ڿ� ����
	string dog = "siba";
	cout << dog[0] << (dog[1] = 'p') << endl;
	cout << dog << endl;

	// �� �� �б�1
	string line;
	getline(cin, line);			// \n ���ڸ� ���� ������ cin���� ���ڵ��� ������ line�� ����
	cout << line << endl;
	
	// �� �� �б�2
	line = "";
	getline(cin, line, '@');	// @ ���ڸ� ���� ������ cin���� ���ڵ��� ������ line�� ����
	cout << line << endl;		// eee@fff �Է½� eee���

	return 0;
}