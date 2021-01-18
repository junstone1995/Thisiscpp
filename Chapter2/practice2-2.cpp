#include <iostream>

using namespace std;

void TestFunc(int a)
{
	cout << "TestFunc(int)" << endl;
}

void	TestFunc(int a,int b = 10)
{
	cout << "TestFunc(int,int)" << endl;
}

// 함수를 TestFunc(10)이라고 호출을 한다면 첫번째 함수를 호출한건지 두번쨰 함수를 호출한건지 헷갈려하면서 오류를 발생한다.
