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

private:
	int mX;
	int mY;
}; // Ŭ���� ���� ������ ;�� ����