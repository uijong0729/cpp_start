#include <iostream>

using namespace std;

int main() {
	// ���ڿ� ������ �����̱�
	string line = "hello world";
	cout << line << endl;

	// ���ڿ� �ڿ��� �Ȱ�, �ڿ������� �� ���ھ� ����
	for (int i = line.size() - 1; i > -1; i--) {
		line += line[i];
	}

	// ��� : hello worlddlrow olleh
	cout << "mirrored string : " << line << endl;
	return 0;
}