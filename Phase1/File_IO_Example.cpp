#include <iostream>
#include <fstream>	// 파일 입출력
#include <string>
#include <iomanip>
#include "File_IO_Example.h"

using namespace std;

Record samples::ReadRecord(std::istream& stream, bool bPrompt)
{
	Record record;

	if (bPrompt)
	{
		cout << "First name : ";
	}
	stream >> record.FirstName;

	if (bPrompt)
	{
		cout << "Last name : ";
	}
	stream >> record.LastName;

	if (bPrompt)
	{
		cout << "student id : ";
	}
	stream >> record.StudentID;

	if (bPrompt)
	{
		cout << "score : ";
	}
	stream >> record.Score;

	return record;
}

void samples::WriteFileRecord(std::fstream& fileStream, const Record& record)
{
	// 파일의 마지막에 레코드를 추가함
	fileStream.seekp(0, ios_base::end);

	fileStream << record.FirstName << " "
		<< record.LastName << " "
		<< record.StudentID << " "
		<< record.Score << endl;
	
	// 출력 스트림을 명확하게 플러시
	fileStream.flush();
}

void samples::DisplayRecords(std::fstream& fileStream)
{
	// 처음 위치로 가서 읽음
	fileStream.seekg(0);

	string line;
	while (true)
	{
		getline(fileStream, line);
		if (fileStream.eof())
		{
			fileStream.clear();
			break;
		}
		cout << line << endl;
	}
}

void samples::ManageRecordsExample()
{
	fstream fileStream;

	// 읽기/쓰기용
	fileStream.open("studentRecord.dat", ios_base::in | ios_base::out);

	bool bExit = false;
	while (!bExit)
	{
		// command 변수의 첫 문자를 읽어서 처리함
		char command = ' ';
		cout << "a : add" << endl
			<< "d : display" << endl
			<< "x : exit" << endl;
		cin >> command;

		// 문자 하나를 읽으면 개행문자 전까지 모든 문자를 버림
		cin.ignore(LLONG_MAX, '\n');

		switch (command)
		{
		case 'a':
		{
			Record record = ReadRecord(cin, true);
			WriteFileRecord(fileStream, record);
			break;
		}
		case 'd':
		{
			DisplayRecords(fileStream);
			break;
		}
		case 'x':
		{
			bExit = true;
			break;
		}
		default:
			cout << "invalid input" << endl;
			break;
		}
	}

	fileStream.close();
}

int main() {
	samples::ManageRecordsExample();
	return 0;
}