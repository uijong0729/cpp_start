#pragma once

namespace samples
{
	class Animal
	{
	public:
		Animal(int age);
		void Move() const;
	private:
		int mAge;
	};
}