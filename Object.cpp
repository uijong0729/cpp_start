#include <iostream>

using namespace std;

// public ������ ���� ���� �����ְ� private�� ���� �Ʒ� �����ش�.
class Vector
{

	// ��������� �Ǿտ� m �� ����
	// Ű���带 ������ �⺻ ���ٱ����� private
public:
	int mX = 0;
	int mY = 0;

	// ����������
public:int mA;		// ������ ���� ����
protected:int mB;	// �ڽ� Ŭ�������� ���� ����
private:int mC;		// �ش� Ŭ���������� ���� ���� (��ü������ ���� �Ұ���)

// ǥ�� : �����ں��� ������� �׷�����
public:
	// ��������� ���� �ʱ�ȭ ���� ����
	// �ʱ�ȭ�� ���ϸ� ����� �����Ⱚ�� ��
	int mD;
	int mE;

	// �Ű����� ���� ������. �� ��������� 0���� �ʱ�ȭ.
	// �ʱ�ȭ ����Ʈ
	// - ������Ʈ�� ������� �� �ʱ�ȭ
	// - ��������� ���Ծ��� �ʱ�ȭ, ����� ���������� �ʱ�ȭ ����
	Vector(): mX(0), mY(0), mH(5), mI(10)
	{
		// ������ ���ϸ� �ʱ�ȭ�� �� ���Ŀ� ����Ǵ� �����̱⿡ �ʱ�ȭ�� �ƴ� (�����)
		mF = 0;
		mG = 0;
		mA = 0;
		mB = 0;
		mC = 0;
		mD = 0;
		mE = 0;
	}
protected:
	int mF;
	int mG;
private:
	// const ������ �ʱ�ȭ ���� (�������δ� �Ұ���)
	const int mH;
	const int mI;
};

// a�� b�� ������������ �� ���� ���� �ٲ��� �ʵ��� const�� �����Ѵ�.
Vector AddVector(const Vector& a, const Vector& b)
{
	Vector result;
	result.mX = a.mX + b.mX;
	result.mY = a.mY + b.mY;
	return result;
}

void Foo()
{
	Vector a;
	Vector b;
	Vector c = AddVector(a, b);
}

void PrintVectors(const Vector& a, const Vector& b)
{
	// �Լ� �ȿ��� new�ϴ°� ���� ���� �ƴ�
	// ���ú����� ���ÿ� �����ϰ� �����°� ����
	Vector* result = new Vector;
	result->mA = a.mA + b.mA;
	result->mD = a.mD + b.mD;

	cout << result->mA;
	cout << result->mD;

	// �޸� ����
	delete result;
}

int main() {
	// ��ü ����
	// 1. ���� �޸𸮿� ����� (����)
	Vector a;

	// 2. �� �޸𸮿� ����� (����)
	Vector* b = new Vector();

	// ��ü �迭 
	// ����1 : �ڹ��� ��ü�� Vector������ 10���̰� ���� Vector�� ũ�⸸ŭ�� �Ҵ��� ���� ����
	// ����2 : ���� Vector 10�� ��ŭ�� ������ ������ش�.
	Vector* list = new Vector[10];
	
	// �ڹ�ó�� 10���� �����͸� ���� ����
	Vector** pList = new Vector*[10];

	// ��ü �Ҹ� : �ڹٿ����� null�� �����ϸ� GC�� �������� ������
	delete b;		// ��ü
	delete[] list;	// ��ü�迭 : []�� �����ָ� ù��° ��������� ���� �Ҹ��ڸ� ȣ��ȴ�.
	delete[] pList;	// ��ü������ �迭
	
	// ���ص� ������, �ش� �޸𸮿� �����ؼ� NULL������ Ȯ���ϴ� ������ ������� 
	// NULL�� �־����� ������ ��ֹ߻� ����� ����
	b = NULL;
	list = NULL;
	pList = NULL;

	return 0;
}