#include "Animal.h"
#include <iostream>

namespace samples
{
	Animal::Animal(int age) 
		:mAge(age)
	{
		std::cout << mAge;
	}

	void Animal::Move() const
	{
		std::cout << "move" << std::endl;
	}
}