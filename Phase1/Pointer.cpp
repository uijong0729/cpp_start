#include <iostream>
#include <iomanip>
#include "practice.h"

using namespace std;
int main() {
	prac1();
	prac2();
	return 0;
}

// 10�� 20�� �� �ٿ� ��µǰ� ���弼��.
void prac1() {
	int* numPtr;
	int num1 = 10;
	int num2 = 20;

	// 10
	numPtr = &num1;
	cout << *numPtr << endl;
	
	// 20
	numPtr = &num2;
	cout << *numPtr << endl;	
}

// 55�� 22�� �� �ٿ� ��µǰ� ���弼��.
void prac2() {
	int numArr[5] = { 11, 22, 33, 44, 55 };
	int* numPtrA;
	
	// << void������ >>
	// void �����ʹ� �ڷ����� �������� ���� Ư�� ������ 
	// � �ڷ������� �� �����͵� ��� ������ �� �ֽ��ϴ�. 
	// �ݴ�� �پ��� �ڷ������� �� �����Ϳ��� void �����͸� ������ ���� �ֽ��ϴ�. 
	// �̷� Ư�� ������ void �����ʹ� ���� �����Ͷ�� �մϴ�.
	// void �����ʹ� �������� �� �� �����ϴ�.
	void* ptr;

	numPtrA = &numArr[2];
	ptr = numArr;

	//55
	cout << *(numPtrA + 2) << endl;
	
	//22 
	cout << *(((int*)ptr) + 1) << endl;
}

void pointerBasic() {
	// �����ʹ� �ʹ� �Ⱦ��ٺ��� ��Դ´�
	int score = 100;
	int* pointer = &score; // (score�� �ּ�)
	// ������ ��ġ�� �� ����
	* pointer = 50;
	cout << score; // ��� : 50
}