#include "Cat.h"
#include <iostream>
#include <cstring> 
#include <string>

Cat::Cat(int age, std::string name) 
	: Animal(age) 
{
	mName = name;	
	std::cout << age << name;
}