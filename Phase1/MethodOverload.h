#pragma once

class X
{
public:
	// 함수 오버로딩
	// - 매개변수 목록을 제외하고는 모든 게 동일
	// - 반환형은 상관 없음
	void Print(int score);
	void Print(const char* name);
	void Print(float gpa, const char* name);
	// int Print(int score); // NG
	int Print(float gpa);
};

