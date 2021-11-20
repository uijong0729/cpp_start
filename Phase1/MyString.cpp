#include "MyString.h"
#include <iostream>

// MyString ������ ����
MyString::MyString(): mLength(0), mCapacity(15) 
{
	std::cout << "constructor" << std::endl;
	mChars = new char[mCapacity + 1];
}

// MyString �Ҹ��� ����
MyString::~MyString()
{
	std::cout << "destructor" << std::endl;
	delete mChars;
}
