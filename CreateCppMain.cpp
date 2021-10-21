#include <iostream>
#include <fstream>	

using namespace std;

// 메인함수있는 cpp파일 만들기
int main() {
	const size_t NAME_SIZE = 14;
	const size_t PREFIX_SIZE = 7;

	cout << "----create cpp template----" << endl;
	char fileName[NAME_SIZE] = "Template.cpp";
	ofstream fin;
	fin.open(fileName);

	fin << "#include <iostream>" << endl << endl
		<< "using namespace std;" << endl << endl
		<< "int main() {" << endl << endl
		<< "\treturn 0;" << endl
		<< "}";

	fin.close();

	return 0;
}