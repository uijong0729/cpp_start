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

	// ���� ������ : ���� �Ȱ��� Ŭ������ �μ��� �޴� ������
	Vector1(const Vector1& other);

	bool IsEqual(const Vector1& v) const;

	// �Լ� �����ε� 1 (�� ���� ��ȯ)
	//	- ��Һ� ����
	Vector1 Multiply(const Vector1& v) const;	// const �޼���. �ش� ��ü ���� ��� �͵� �ٲ��� ����
	//	- ��ҿ� ����
	Vector1 Multiply(int multiplier) const;		// const �޼���. �ش� ��ü ���� ��� �͵� �ٲ��� ����

	// �Լ� �����ε� 2
	void Scale(const Vector1& v);	// const Ű���尡 �����Ƿ� �� �ڽ��� Ȯ��/��� �ϴ� �޼ҵ����� �� �� ����
	void Scale(int multiplier);		// const Ű���尡 �����Ƿ� �� �ڽ��� Ȯ��/��� �ϴ� �޼ҵ����� �� �� ����

private:
	int mX;
	int mY;
}; // Ŭ���� ���� ������ ;�� ����