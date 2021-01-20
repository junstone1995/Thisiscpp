//
//  main.cpp
//  StringCtrlSample
//
//  Created by 이준석 on 2021/01/19.
//

#include "MyString.hpp"

void TestFunc(const CMyString &param)
{
    cout << param.GetString() << endl;
}

int main(int argc, const char * argv[])
{
    CMyString strData;
    strData.SetString("Hello");
    cout << strData.GetString() << endl;
    
    return (0);
}
