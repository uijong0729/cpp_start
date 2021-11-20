#include "Vector4.h"
#include <iostream>

// 나 자신(Vector)과 다른 Vector에 +를 할 때 적용되는 정의
// 연산자 오버로드 (부호는 같지만 여러가지 연산이 가능)
Vector4 Vector4::operator+(const Vector4& rhs) const
{
    Vector4 sum;
    sum.mX = mX + rhs.mX;
    sum.mY = mY + rhs.mY;
    return sum;
}

Vector4::Vector4(int x, int y)
    :mX(x)
    , mY(y)
{
}

Vector4::Vector4()
    :mX(0), mY(0)
{
}

void Vector4::Print()
{
    std::cout << mX << mY;
}
