#include "CMystring.h"
#include <memory.h>
#include <string.h>
using namespace std;

CMystring::CMystring(char* pData)
{
	if (pData == NULL)
	{
		m_pData = new char[1];
		m_pData = '\0';
	}
	else
	{
		int length = strlen(pData);
		m_pData = new char[length+1];
		strcpy(m_pData, pData);
	}
}

CMystring::CMystring(const CMystring &str)
{
	int length = strlen(str);
	m_pData = new char[length+1];
	strcpy(m_pData, pData);
}

CMystring::~CMystring()
{
	delete[] m_pData;
}


CMystring& operator =(const CMystring &str)
{
	if(this == &str)
		return *this;

	delete []m_pData;
	m_pData = NULL;

	m_pData = new char[strlen(str.m_pData) + 1];
	strcpy(m_pData, str.m_pData);

	return *this;
}

void CMystring::Print()
{
	printf("%s", m_pData);
}