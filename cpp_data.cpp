// cpp_data.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
#include "hello.h"

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
        std::cout << "hello " << "world\n" << std::endl;
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

    return 0;
}

