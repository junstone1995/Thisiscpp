#include <iostream>
#include <algorithm>

using namespace std;

bool	compare(int a,int b)
{
	return a > b;
}

int		main()
{
	int aList[5] = {10,20,30,40,50};
	sort(aList,aList + 5,compare);
	for (auto n : aList)
		cout << n << " ";
}
