#include <iostream>
#include <fstream>	// ���� �����

using namespace std;

int main() {
	// ���Ͽ��� ���ڸ� �б�
	ifstream fin;
	fin.open("complex_text.txt");
	int number;
	string trash;

	while (true) {
		// ���ڸ� ���
		fin >> number;

		if (!fin.fail()) {
			cout << number << endl;
			continue;
		} else {
			// fail 
			// fail��Ʈ�� �����Ǿ� ������, ���α׷� �ڵ���� ����� �־ �����б�� ������� �ʴ´�.
			// fin.clear();
			if (fin.eof()) {
				break;
			}
		}
		// �Ʒ��� ������ �ٲ�� �ȵȴ�. 
		// failbit�� ��� �бⰡ ���õǹǷ� clear()�� �ϴ� goodbit�� ���������ϱ� ����
		fin.clear();
		fin >> trash;
	}

	fin >> trash;
	return 0;
}