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

// 주의 : Vector4에서 온 연산자 아니다.
std::ostream& operator<<(std::ostream& os, const Vector4& rhs)
{
    return os << rhs.mX << ", " << rhs.mY;
}

// 주의 : Vector4에서 온 연산자 아니다.
Vector4 operator*(int multiplier, const Vector4 rhs)
{
    Vector4 result(rhs.mX * multiplier, rhs.mY * multiplier);
    return result;
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

bool Vector4::operator==(const Vector4& rhs) const
{
    return mX == rhs.mX && mY == rhs.mY;
}
