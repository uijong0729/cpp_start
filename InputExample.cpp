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
* 1. ����ڰ� �Է��� ������ ���غ���
*/
void sum() {
	// Ÿ��Ʋ
	cout << "+----------------------+";
	cout << "| Add Integers Example |";
	cout << "+----------------------+" << endl;

	// number������ Ű���� �Է°��� ������ ��
	int sum = 0;

	// EOF���ڰ� �Էµ� ������ ���ѹݺ� ( EOF�����Է� : [ctrl + z ���� �� ����] )
	// - �Է��� �������� �ƴѰ�� ��Ʈ�� ���¸� ����� �ٽ� ���� (�߸��� �Է����� �˷� ��)
	// - �ݺ��� ������ ����� ���
	while (true) {
		if (cin.eof()) {
			break;
		}

		int number;
		cin >> number;
		if (cin.fail()) {
			cout << "���ڸ� �Է��ϼ���" << endl;
			cin.clear();
			
			// ���� �� �ִ� ���� �ִ� ������ ����
			// ��, ���� ���� �� ���๮�ڰ� ���ԵǸ� ��ٷ� ����
			cin.ignore(LLONG_MAX, '\n');
			continue;
		}
		sum += number;
	}

	cout << "Sum result : " << sum;
}

/*
* 2. �Էµ� ���ڿ� ������
*/
void getline() {
	// Ÿ��Ʋ
	cout << "+------------------------+";
	cout << "| Reverse String Example |";
	cout << "+------------------------+" << endl;

	// �� ���� �ִ� ����
	const int LINE_SIZE = 512;
	char line[LINE_SIZE];

	// ������Ʈ
	// - ����� �Է½� ���ڸ� ����� ���
	// - EOF�Է½� ����
	while (true) {
		// ����� �Է�
		cin.getline(line, LINE_SIZE);

		// ��Ʈ���� ���о��ٸ� ����
		if (cin.fail() || cin.eof()) {
			cin.clear();
			return;
		}

		// ������ ������ �����Ϸ��� �ڷ��� �ڿ� *�� ����
		// ù ���ڸ� ����Ű�� ������
		char* p = line;
		// strlen : ���ڿ��� ����
		char* q = line + strlen(line) - 1;

		while (p < q) {
			// *p : ������ (�ּҷκ��� ���� ������)
			// &p : ���� (�ش� ���� �ּҸ� ������)
			char tmp = *p;
			*p = *q;
			*q = tmp;

			// ������ ����
			p++;
			// ������ ����
			q--;
		}

		cout << line << endl;
	}
}