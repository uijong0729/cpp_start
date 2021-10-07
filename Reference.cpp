#include <iostream>
#include "Swap.h"

using namespace std;
using namespace sample;

int main() {
	int number = 100;

	//////////////////////////////////////////////////////////////
	// ������ ��Ī�̴�.
	// & : int�� �������̴�. 
	// <<����>> �ּҿ����� &�ʹ� ���� �ٸ� ��
	int& reference = number;

	// ������ NULL�� �� �� ����
	// int& reference = NULL;

	// �ʱ�ȭ �߿� �ݵ�� ���� �Ǿ�� ��
	// int& reference;

	// 100
	cout << reference << endl;
	
	//////////////////////////////////////////////////////////////
	// �����ϴ� ����� �ٲ� �� ����.
	int number1 = 100;
	int number2 = 200;
	int& refer = number1;
	
	// �����ϰ� number1�� number2�� �����ϴ� ��Ȳ�� ��
	refer = number2;

	// �� ���� ���� ��� 200�� ��
	cout << number1 << number2 << refer << endl;

	SwapExample();
	return 0;
}

namespace sample {
	
	// �����ͷε� ���� �� ������ ������ �̿��� �����Լ��� ����
	// �̰��� �� �����ϱ� ������ �����
	// 1. number1, number2�� NULL�� ������ �� ���� (���������� NULL�� �����ʴ´�)
	// 2. �츮�� �������� ���� �޸� ��Ҹ� ����ų �� ����
	void Swap(int& number1, int& number2) {
		int tmp = number1;
		number1 = number2;
		number2 = tmp;
	}

	void SwapExample() {
		int number1 = 1;
		int number2 = 2;
		
		// �Ű������� int& number1, int& number2�̸� �״�� �μ��� �ǳ��ش�.
		// ������ �̿��ϸ� �ּ� �����ڰ� �ʿ����.
		Swap(number1, number2);
		cout << number1 << number2;
	}
}
