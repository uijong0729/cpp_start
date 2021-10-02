// cpp_data.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// cpp의 include는 .h를 쓰지않는다.
#include <iostream>
#include "hello.h"
#include <iomanip>

// using : using을 맨 위에 선언해두면 std를 생략할 수 있다.
using namespace std;

// 네임스페이스
/*
*  1. 네임스페이스는 함수, 클래스 등의 이름 충돌을 피하기 위해 그룹을 지은 것
*  2. 네임스페이스는 소문자 쓰는 것이 관례
*/
namespace hello
{
    void PrintHelloWorld()
    {
        std::cout << "hello " << "world\n" << std::endl;
    }
}

namespace hello2
{
    void PrintHelloWorld()
    {
        // std::endl : 개행문자
        std::cout << "hello " << "world" << std::endl;
    }
}

int main()
{
    // using namepase를 생략하고 return까지 생략하면 아래로 줄일 수 있음
    // std::cout << "Hello World!\n";
    cout << "hello " << "world " << 123; // 출력 결과 : hello world 123
    std::cout << "hello " << "world " << 123 << std::endl;

    // 같은 함수명이라도 이름충돌없이 네임스페이스로 구분된다.
    hello::PrintHelloWorld();
    hello2::PrintHelloWorld();

    // << 출력하는 연산자, 푸시 연산자, 밀어넣는 연산자
    std::cout << "hello" << std::endl;
    
    ////////////////////////////////////////
    // 모든 것을 프린트 해보자
    ////////////////////////////////////////
    int integer = 10;
    float decimal = 1.5f;
    char letter = 'A';
    char string[] = "hello world";

    // 정수, 소수도 가능
    cout << integer << endl;
    cout << decimal << endl;

    // 여러 줄을 출력
    cout << letter << endl << string << endl;

    // 출력 형식 지정
    // 16진수 출력 (조정자 : Manipulator)
    int number = 10;
    // showbase : 뒤에서 오는 진법의 형태로 보고싶어
    // hex : 16진수로
    cout << showbase << hex << number << endl;
    
    // 조정자의 종류
    // 1.showpos (positive)
    cout << showpos << number; // +10
    cout << noshowpos << number; // 10

    // dec/hex/oct (10,16,8 진수)
    cout << dec << number;
    cout << hex << number;
    cout << oct << number;

    // uppercase
    cout << uppercase << hex << number;     // 7B
    cout << nouppercase << hex << number;;  // 7b

    // showbase 진법형태 표시
    cout << showbase << hex << number << endl;     //0x7b
    cout << noshowbase << hex << number << endl;   //7b

    // left/right/internal (setw는 iomanip 헤더 필요)
    number = 123;
    cout << setw(6) << left << number; //       |-123     |
    cout << setw(6) << right << number; //      |-     123|
    cout << setw(6) << internal << number; //   |     -123|

    // showpoint : 소수점을 표시
    float decimal1 = 100.0;
    float decimal2 = 100.1;
    cout << showpoint << decimal1;
    cout << noshowpoint << decimal2;

    // fixed/scientific
    double num = 123.456789;
    cout << scientific << num;  //1.234568E+02
    cout << fixed << num;       // 123.456789
    
    
    // boolalpha/noboolalpha : bool형을 true/false(alpha)로 표기할 건가, 0,1(noalpha)로 표기할 것인가
    cout << boolalpha << true;      //true
    cout << noboolalpha << true << endl << endl;    //1

    // setw() 컬럼수를 정해준다
    cout << setw(5) << 123;

    // setfill() 빈 공간 남았을때 다른 문자로 채운다.
    cout << setfill('0') << setw(5) << 123;

    // setprecision() 소수점 유효자릿수 한정(반올림)
    cout << setprecision(4) << 123.456789; //123.4568

    return 0;
}

