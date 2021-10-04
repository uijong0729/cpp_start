#include <iostream>
#include <iomanip>

using namespace std;

// 입력 스트림
int main() {
	// cin : scanf()를 어느정도 대체한다.
	char firstName[20];
	// >> : 뽑아오는 연산자 (Extraction)
	cin >> firstName;

	// 정수형 읽기
	int hours;
	cin >> hours;
	cout << "Today I studied for " << hours << " hours" << endl;

	// 부동소수점형 읽기
	float price;
	cin >> price;
	cout << "the price of this green tea is " << price << " " << endl;

	// 4글자를 넘으면 문자 마지막에 널문자가 덮어씌워지기 때문에
	// 문자의 구분자가 사라져 문자의 길이를 가늠할 수 없게된다.
	char secondName[5];
	cin >> secondName;

	// 캐릭터를 입력받을 때 안전한 방법 setw() -> 4글자가 넘으면 잘린다.
	char lastName[4];
	cin >> setw(4) >> firstName;

	// "                      hello                 123"
	// 위 데이터가 들어오면 공백은 무시된다.
	char firstData[512];
	int secondData;
	cin >> firstData >> secondData;

	////////////////////////////
	// 스트림 상태 예
	////////////////////////////
	// 456abc → fafilbit 미설정, , eofbit 미설정
	// 456 → fafilbit 설정, eofbit 미설정(텍스트 파일에서 읽어 리다이렉션 할 떄 eof비트가 알아서 세트되는 경우 있으니 테스트 해봐야함)
	// abc → fafilbit 설정, eofbit 미설정
	// eof → fafilbit 설정, eofbit 설정
	int number;
	cin >> number;
	cout << number;

	//////////////////////////
	// 입력 버리기
	//////////////////////////
	// 스트림 상태를 good state로 돌려줌
	cin.clear();

	// 파일 끝에 도달하거나 지정한 수 만큼 문자를 버리면 멈춤
	cin.ignore();				 // 문자 1개를 버림
	cin.ignore(10);				 // 문자 10개를 버림
	cin.ignore(10, '\n');		 // 문자 10개를 버림. 단 버린 문자 중 개행문자가 포함되면 곧바로 멈춤
	cin.ignore(LLONG_MAX, '\n'); // 최대 문자 수를 버리기 때문에. 이렇게 하면 한 줄을 다 버릴 수 있다.

	// get()
	// 개행문자를 만나기 직전까지의 모든 문자를 가져옴 (개행문자는 입력 스트림에 남아있음)
	char name[100] = "abcd";
	cin.get(name, 100); // 99개 문자를 가져오거나 뉴 라인 문자가 나올때까지 문자를 가져오고 가져온 문자들을 char배열에 배치함
	cin.get(name, 100, '#'); // 99개 문자를 가져오거나 '#' 문자가 나올때까지 문자를 가져오고 가져온 문자들을 char배열에 배치함

	// getline()
	// 개행문자를 만나기 직전까지의 모든 문자를 가져옴
	// 개행문자는 입력스트림에서 버림. 외에는 get()과 스펙동일
	cin.getline(name, 100);
	cin.getline(name, 100, '#');

	return 0;
}