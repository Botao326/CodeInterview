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
/*	if(this == &str)
		return *this;

	delete []m_pData;
	m_pData = NULL;

	m_pData = new char[strlen(str.m_pData) + 1];
	strcpy(m_pData, str.m_pData);

	return *this;
	*/
/*
 * The second method, use temporary instance to make a swap.
 * Because the memory is applied in construction method, when an exception 
 * is threw out, the instance would be kept unchanged, which gurrantee the 
 * safety 
 */
 	if (this != &str)
 	{
 		CMystring strTemp(str);

 		char *pTemp = strTemp.m_pData;
 		strTemp.m_pData = m_pData;
 		m_pData = pTemp;
 	}

 	return *this;
}

void CMystring::Print()
{
	printf("%s\n", m_pData);
}