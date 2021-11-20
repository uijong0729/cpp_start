#include <iostream>
#include <fstream>	// ���� �����
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
	// ������ �������� ���ڵ带 �߰���
	fileStream.seekp(0, ios_base::end);

	fileStream << record.FirstName << " "
		<< record.LastName << " "
		<< record.StudentID << " "
		<< record.Score << endl;
	
	// ��� ��Ʈ���� ��Ȯ�ϰ� �÷���
	fileStream.flush();
}

void samples::DisplayRecords(std::fstream& fileStream)
{
	// ó�� ��ġ�� ���� ����
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

	// �б�/�����
	fileStream.open("studentRecord.dat", ios_base::in | ios_base::out);

	bool bExit = false;
	while (!bExit)
	{
		// command ������ ù ���ڸ� �о ó����
		char command = ' ';
		cout << "a : add" << endl
			<< "d : display" << endl
			<< "x : exit" << endl;
		cin >> command;

		// ���� �ϳ��� ������ ���๮�� ������ ��� ���ڸ� ����
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