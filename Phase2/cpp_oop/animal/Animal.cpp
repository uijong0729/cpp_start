#include "Animal.h"
#include <iostream>

Animal::Animal(int age) 
	:mAge(age)
{
	std::cout << mAge;
}
