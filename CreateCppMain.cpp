#include <iostream>
#include <fstream>	

using namespace std;

void convChar(int* i, char*  result) {
	cout << "input : " << *i << endl;
	char tmp = *i + '0';
	result = &tmp;

	cout << "output" << *result << endl;
}

// 메인함수있는 cpp파일 만들기
int main() {
	const size_t FULL_SIZE = 12;
	const size_t PREFIX_SIZE = 7;

	cout << "----create cpp template----" << endl;
	char fileName[FULL_SIZE] = "Template";
	char path[3] = "./";
	
	
	//ifstream fin;
	//for (int i = 0; fin.good(); i++) {
	//	char c[3] = i + '0';

	//	strcat_s(fileName, FULL_SIZE, i+'0');
	//	fileName[PREFIX_SIZE + 1] = i;
	//	cout << "file name : " << fileName;
	//	fin.open(fileName);
	//}
	//fin.clear();
	int a = 5;
	char b = 'a';
	convChar(&a, &b);

	cout << b;
	return 0;
}