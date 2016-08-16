#include<string.h>

class CMystring
{
public:
	CMystring(char* pData = NULL);
	CMystring(const CMystring& str);
	~CMystring(void);

CMystring& operator =(const CMystring &str);

private:
	char* m_pData;
};