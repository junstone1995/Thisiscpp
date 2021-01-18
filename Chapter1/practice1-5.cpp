#include <iostream>

using namespace std;

int main()
{
	int value = 5 ;
	int &ref = value; // ref가 value 주소를 가진다.

	ref = 10;

	cout << value << " " << ref << endl; // 10 10 value 와 ref는 같은 주소를 가진다.

	int x = 5;
}
