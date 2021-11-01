#pragma once
class MyString
{
public:
	MyString();
	~MyString();
private:
	char* mChars;
	int mLength;
	int mCapacity;
};

