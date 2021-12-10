#pragma once
#include "Animal.h"
#include <string>

namespace samples
{
	// Animal ���
	class Cat : public Animal
	{
	public:
		Cat(int age, std::string name);
	private:
		std::string mName;
	};
}