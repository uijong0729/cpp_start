#pragma once

class Vector1
{
public:
	// ������
	Vector1();
	Vector1(int x, int y);
	
	// �Ҹ���
	// - �Ű����� ���� �� �ϳ��� �ִ�.
	// - ��ü�� ������ �� ȣ�� ��
	// - Ŭ���� �ȿ��� ���� �޸� �Ҵ��� ��� �Ҹ��ڿ��� ����
	~Vector1();

	// Ŭ������ ��� �Լ�
	// - �޼��� : OOP���� ������Ʈ �ȿ� ���ִ� �Լ�
	// - �Լ� : ������Ʈ �ٱ� ���� �Լ��� ���� �Լ�
	void SetX(int x);
	void SetY(int y);
	int GetX() const;	// const �޼���. �ش� ��ü ���� ��� �͵� �ٲ��� ����
	int GetY() const;	// const �޼���. �ش� ��ü ���� ��� �͵� �ٲ��� ����
	void Add(const Vector1& other);

private:
	int mX;
	int mY;
}; // Ŭ���� ���� ������ ;�� ����