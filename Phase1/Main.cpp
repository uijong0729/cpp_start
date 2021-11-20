#include "MyString.h"

int main()
{
	// 스택메모리에 생성하므로 delete str은 불필요
	MyString str;

	// 실행해서 소멸자 확인해보자
	MyString* str2 = new MyString();
	delete str2;

	return 0;
}