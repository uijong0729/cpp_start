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
