#include "MethodOverload.h"

void X::Print(int score)
{
}

void X::Print(const char* name)
{
}

void X::Print(float gpa, const char* name)
{
}

int X::Print(float gpa)
{
	return 0;
}
