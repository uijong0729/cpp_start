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
* 1. ����ڰ� �Է��� ������ ���غ���
*/
void sum() {
	// Ÿ��Ʋ
	cout << "+----------------------+";
	cout << "| Add Integers Example |";
	cout << "+----------------------+";

	// number������ Ű���� �Է°��� ������ ��


	// EOF���ڰ� �Էµ� ������ ���ѹݺ�
	// - �Է��� �������� �ƴѰ�� ��Ʈ�� ���¸� ����� �ٽ� ���� (�߸��� �Է����� �˷� ��)
	// - �ݺ��� ������ ����� ���


}

/*
* 2. �Էµ� ���ڿ� ������
*/
void getline() {
	// Ÿ��Ʋ
	cout << "+------------------------+";
	cout << "| Reverse String Example |";
	cout << "+------------------------+";

	// �� ���� �ִ� ����
	const int LINE_SIZE = 512;
	char line[LINE_SIZE];

	// ������Ʈ
	// - ����� �Է½� ���ڸ� ����� ���
	// - EOF�Է½� ����
	// 
	//�ݺ���  {{
		// ��Ʈ���� ���о��ٸ� ����
		if (cin.fail()) {
			cin.clear();
			return;
		}

		// ù ���ڸ� ����Ű�� ������
		char* p = line;

		// ������ ���ڸ� �⸮Ű�� ������ (�迭�� 0���� �����ϴϱ�...)
		char* q = line + strlen(line) - 1;
	
	// }}

}