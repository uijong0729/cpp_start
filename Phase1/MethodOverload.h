#pragma once

class X
{
public:
	// �Լ� �����ε�
	// - �Ű����� ����� �����ϰ�� ��� �� ����
	// - ��ȯ���� ��� ����
	void Print(int score);
	void Print(const char* name);
	void Print(float gpa, const char* name);
	// int Print(int score); // NG
	int Print(float gpa);
};

