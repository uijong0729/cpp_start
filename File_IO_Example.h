#pragma once

#include <fstream>	// ���� �����
#include <string>

struct Record
{
	std::string FirstName;
	std::string LastName;
	std::string StudentID;
	std::string Score;
};

namespace samples
{
	// ��Ʈ������ ���ڵ带 ���� (&�� ������)
	Record ReadRecord(std::istream& stream, bool bPrompt);

	// ���Ͻ�Ʈ���� ���ڵ带 �� (&�� ������)
	void WriteFileRecord(std::fstream& outputStream, const Record& record);

	// ���Ͻ�Ʈ���� �ִ� ��� ���ڵ带 ȭ�鿡 ������
	void DisplayRecords(std::fstream& fileStream);

	// ��Ʈ�� ����Ʈ(������)
	void ManageRecordsExample();
}