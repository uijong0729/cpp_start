#include "Vector4.h"
#include <iostream>

// �� �ڽ�(Vector)�� �ٸ� Vector�� +�� �� �� ����Ǵ� ����
// ������ �����ε� (��ȣ�� ������ �������� ������ ����)
Vector4 Vector4::operator+(const Vector4& rhs) const
{
    Vector4 sum;
    sum.mX = mX + rhs.mX;
    sum.mY = mY + rhs.mY;
    return sum;
}

// ���� : Vector4���� �� ������ �ƴϴ�.
std::ostream& operator<<(std::ostream& os, const Vector4& rhs)
{
    return os << rhs.mX << ", " << rhs.mY;
}

// ���� : Vector4���� �� ������ �ƴϴ�.
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
