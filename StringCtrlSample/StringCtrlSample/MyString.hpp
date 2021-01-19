//
//  CMyString.hpp
//  StringCtrlSample
//
//  Created by 이준석 on 2021/01/19.
//

#ifndef MyString_hpp
#define MyString_hpp

#include <iostream>
#include <string>
using namespace std;

class CMyString
{
public:
    CMyString();
    ~CMyString();
private:
    char* m_pszData;
    int   m_nLength;
public:
    int SetString(const char* pszParam);
    const char* GetString();
    void Release();
};

#endif /* CMyString_hpp */
