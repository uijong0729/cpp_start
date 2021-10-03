#include <iostream>
#include <iomanip>
#include "PrintMenu.h"

using namespace std;

/*
* 3개의 메뉴 항목과 가격
*	coffeePrice : 1200원
*	lattePrice : 4500원
*	breakfastComboPrice : 12000원
*/
int main() {
	PrintMenuExample();
	return 0;
}

void PrintMenuExample() {
	// 3개의 메뉴 항목과 가격($)
	const double coffeePrice = 1.25;
	const double lattePrice = 4.75;
	const double breakfastComboPrice = 12.104;

	// 컬럼 길이 (이름 20칸, 가격10칸)
	// size_t : 크기를 나타내는 양수 자료형
	const size_t nameColumnLength = 20;
	const size_t priceColumnLength = 10;

	// 아래의 설정은 이후 cout에도 적용된다. 
	//  - left : 왼쪽정렬
	//  - fixed : 고정 소수점
	//  - showpoint : 소수점표시
	//  - setprecision(2) : 소수점이하 2자리
	cout << left << fixed << showpoint << setprecision(2);

	// -----------------------------
	// 빈 자리는 '-'로 채우는 방침을 적용한다. 빈자리("")를 채운다. 라인을 넘긴다
	// 다음 라인(Name, Price가 표시되는 라인)에 대해서 빈 자리는 ' ' 로 채운다.
	cout << setfill('-') << setw(nameColumnLength + priceColumnLength) << "" << endl << setfill(' ');
	cout << setw(nameColumnLength) << "Name"
		<< setw(priceColumnLength) << "Price" << endl;
	
	// -----------------------------
	// 빈 자리는 '-'로 채우는 방침을 적용한다. 빈자리("")를 채운다. 라인을 넘긴다
	// 다음 라인(Name, Price가 표시되는 라인)에 대해서 빈 자리는 ' ' 로 채운다.
	cout << setfill('-') << setw(nameColumnLength + priceColumnLength) << "" << endl << setfill(' ');

	cout << setw(nameColumnLength) << "Coffee" << "$" << coffeePrice << endl;
	cout << setw(nameColumnLength) << "Latte" << "$" << lattePrice << endl;
	cout << setw(nameColumnLength) << "breakfastCombo" << "$" << breakfastComboPrice << endl;

	// 빈 자리가 있다면 -로 채운다 컬럼 길이는 30이다 해당 컬럼 수를 ""로 채운다. 라인을 넘긴다.
	cout << setfill('-') << setw(nameColumnLength + priceColumnLength) << ""  << endl;
}
