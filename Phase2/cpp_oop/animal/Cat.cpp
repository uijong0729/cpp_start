#include "Cat.h"
#include "Cat.h"
#include <iostream>
#include <string>

namespace samples
{
	// ������
	Cat::Cat(int age, std::string name)
		: Animal(age)
	{
		mName = name;
		std::cout << age << mName;
	}
}