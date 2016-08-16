#include<stdio.h>
#include<string.h>

class CMystring
{
public:
	CMystring(const char* pData){
		m_pData = pData;
	}
	CMystring(const CMystring& str);
	~CMystring(void);

CMystring& operator =(const CMystring &str);

private:
	char* m_pData;
};



CMystring& CMystring::operator =(const CMystring &str)
{
	if(this == &str)
		return *this;

	delete []m_pData;
	m_pData = NULL;

	m_pData = new char[strlen(str.m_pData) + 1];
	strcpy(m_pData, str.m_pData);

	return *this;
}


using namespace std;

int main(){

	CMystring TestStr("Hello!");

	return 0;
}