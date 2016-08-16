#include<string.h>

class CMystring
{
public:
	CMystring(char* pData = NULL);
	CMystring(const CMystring& str);
	~CMystring(void);

	CMystring& operator =(const CMystring &str);

	void Print();

private:
	char* m_pData;
};