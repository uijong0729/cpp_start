#include <iostream>
#include <iomanip>
#include "PrintMenu.h"

using namespace std;

/*
* 3���� �޴� �׸�� ����
*	coffeePrice : 1200��
*	lattePrice : 4500��
*	breakfastComboPrice : 12000��
*/
int main() {
	PrintMenuExample();
	return 0;
}

void PrintMenuExample() {
	// 3���� �޴� �׸�� ����($)
	const double coffeePrice = 1.25;
	const double lattePrice = 4.75;
	const double breakfastComboPrice = 12.104;

	// �÷� ���� (�̸� 20ĭ, ����10ĭ)
	// size_t : ũ�⸦ ��Ÿ���� ��� �ڷ���
	const size_t nameColumnLength = 20;
	const size_t priceColumnLength = 10;

	// �Ʒ��� ������ ���� cout���� ����ȴ�. 
	//  - left : ��������
	//  - fixed : ���� �Ҽ���
	//  - showpoint : �Ҽ���ǥ��
	//  - setprecision(2) : �Ҽ������� 2�ڸ�
	cout << left << fixed << showpoint << setprecision(2);

	// -----------------------------
	// �� �ڸ��� '-'�� ä��� ��ħ�� �����Ѵ�. ���ڸ�("")�� ä���. ������ �ѱ��
	// ���� ����(Name, Price�� ǥ�õǴ� ����)�� ���ؼ� �� �ڸ��� ' ' �� ä���.
	cout << setfill('-') << setw(nameColumnLength + priceColumnLength) << "" << endl << setfill(' ');
	cout << setw(nameColumnLength) << "Name"
		<< setw(priceColumnLength) << "Price" << endl;
	
	// -----------------------------
	// �� �ڸ��� '-'�� ä��� ��ħ�� �����Ѵ�. ���ڸ�("")�� ä���. ������ �ѱ��
	// ���� ����(Name, Price�� ǥ�õǴ� ����)�� ���ؼ� �� �ڸ��� ' ' �� ä���.
	cout << setfill('-') << setw(nameColumnLength + priceColumnLength) << "" << endl << setfill(' ');

	cout << setw(nameColumnLength) << "Coffee" << "$" << coffeePrice << endl;
	cout << setw(nameColumnLength) << "Latte" << "$" << lattePrice << endl;
	cout << setw(nameColumnLength) << "breakfastCombo" << "$" << breakfastComboPrice << endl;

	// �� �ڸ��� �ִٸ� -�� ä��� �÷� ���̴� 30�̴� �ش� �÷� ���� ""�� ä���. ������ �ѱ��.
	cout << setfill('-') << setw(nameColumnLength + priceColumnLength) << ""  << endl;
}
