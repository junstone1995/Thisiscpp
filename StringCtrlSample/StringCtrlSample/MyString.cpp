//
//  CMyString.cpp
//  StringCtrlSample
//
//  Created by 이준석 on 2021/01/19.
//

#include "MyString.hpp"

CMyString::CMyString()
    :m_pszData(NULL)
    ,m_nLength(0)
{
}

int CMyString::SetString(const char *pszParam)
{
    Release();
    if (pszParam == NULL)
        return (0);
    size_t nLength = strlen(pszParam);
    
    if (nLength == 0)
        return (0);
    m_pszData = new char[nLength + 1];
    strlcpy(m_pszData,pszParam, sizeof(char) * (nLength + 1));
    m_nLength = (int)nLength;
    return ((int)nLength);
}

const char* CMyString::GetString()
{
    return m_pszData;
}

void CMyString::Release()
{
    if(m_pszData != NULL)
        delete[] m_pszData;
    m_pszData = NULL;
    m_nLength = 0;
}

CMyString::~CMyString()
{
    Release();
}


