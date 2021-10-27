#pragma once

#include <fstream>	// 파일 입출력
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
	// 스트림에서 레코드를 읽음 (&는 참조형)
	Record ReadRecord(std::istream& stream, bool bPrompt);

	// 파일스트림에 레코드를 씀 (&는 참조형)
	void WriteFileRecord(std::fstream& outputStream, const Record& record);

	// 파일스트림에 있는 모든 레코드를 화면에 보여줌
	void DisplayRecords(std::fstream& fileStream);

	// 엔트리 포인트(진입점)
	void ManageRecordsExample();
}