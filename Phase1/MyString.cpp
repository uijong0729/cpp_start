#include "MyString.h"
#include <iostream>

// MyString 积己磊 备泅
MyString::MyString(): mLength(0), mCapacity(15) 
{
	std::cout << "constructor" << std::endl;
	mChars = new char[mCapacity + 1];
}

// MyString 家戈磊 备泅
MyString::~MyString()
{
	std::cout << "destructor" << std::endl;
	delete mChars;
}
