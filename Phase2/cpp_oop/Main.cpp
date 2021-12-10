#include <iostream>
#include "animal\Cat.cpp"
#include "animal\Animal.cpp"

using namespace samples;

int main() {
	std::cout << "hello";
	
	Animal animal(15);
	animal.Move();

	Cat* myCat = new Cat(15, "navi");
	myCat->Move();
	delete myCat;
	
	return 0;
}