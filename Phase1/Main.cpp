#include "MyString.h"

int main()
{
	// ���ø޸𸮿� �����ϹǷ� delete str�� ���ʿ�
	MyString str;

	// �����ؼ� �Ҹ��� Ȯ���غ���
	MyString* str2 = new MyString();
	delete str2;

	return 0;
}