#include <iostream>
#include <iomanip>

using namespace std;

// �Է� ��Ʈ��
int main() {
	// cin : scanf()�� ������� ��ü�Ѵ�.
	char firstName[20];
	// >> : �̾ƿ��� ������ (Extraction)
	cin >> firstName;

	// ������ �б�
	int hours;
	cin >> hours;
	cout << "Today I studied for " << hours << " hours" << endl;

	// �ε��Ҽ����� �б�
	float price;
	cin >> price;
	cout << "the price of this green tea is " << price << " " << endl;

	// 4���ڸ� ������ ���� �������� �ι��ڰ� ��������� ������
	// ������ �����ڰ� ����� ������ ���̸� ������ �� ���Եȴ�.
	char secondName[5];
	cin >> secondName;

	// ĳ���͸� �Է¹��� �� ������ ��� setw() -> 4���ڰ� ������ �߸���.
	char lastName[4];
	cin >> setw(4) >> firstName;

	// "                      hello                 123"
	// �� �����Ͱ� ������ ������ ���õȴ�.
	char firstData[512];
	int secondData;
	cin >> firstData >> secondData;

	////////////////////////////
	// ��Ʈ�� ���� ��
	////////////////////////////
	// 456abc �� fafilbit �̼���, , eofbit �̼���
	// 456 �� fafilbit ����, eofbit �̼���(�ؽ�Ʈ ���Ͽ��� �о� �����̷��� �� �� eof��Ʈ�� �˾Ƽ� ��Ʈ�Ǵ� ��� ������ �׽�Ʈ �غ�����)
	// abc �� fafilbit ����, eofbit �̼���
	// eof �� fafilbit ����, eofbit ����
	int number;
	cin >> number;
	cout << number;

	//////////////////////////
	// �Է� ������
	//////////////////////////
	// ��Ʈ�� ���¸� good state�� ������
	cin.clear();

	// ���� ���� �����ϰų� ������ �� ��ŭ ���ڸ� ������ ����
	cin.ignore();				 // ���� 1���� ����
	cin.ignore(10);				 // ���� 10���� ����
	cin.ignore(10, '\n');		 // ���� 10���� ����. �� ���� ���� �� ���๮�ڰ� ���ԵǸ� ��ٷ� ����
	cin.ignore(LLONG_MAX, '\n'); // �ִ� ���� ���� ������ ������. �̷��� �ϸ� �� ���� �� ���� �� �ִ�.

	// get()
	// ���๮�ڸ� ������ ���������� ��� ���ڸ� ������ (���๮�ڴ� �Է� ��Ʈ���� ��������)
	char name[100] = "abcd";
	cin.get(name, 100); // 99�� ���ڸ� �������ų� �� ���� ���ڰ� ���ö����� ���ڸ� �������� ������ ���ڵ��� char�迭�� ��ġ��
	cin.get(name, 100, '#'); // 99�� ���ڸ� �������ų� '#' ���ڰ� ���ö����� ���ڸ� �������� ������ ���ڵ��� char�迭�� ��ġ��

	// getline()
	// ���๮�ڸ� ������ ���������� ��� ���ڸ� ������
	// ���๮�ڴ� �Է½�Ʈ������ ����. �ܿ��� get()�� ���嵿��
	cin.getline(name, 100);
	cin.getline(name, 100, '#');

	return 0;
}