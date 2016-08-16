#include "CMystring.h"
#include <memory.h>
#include <string.h>
using namespace std;

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