#include<stdio.h>
#include<string.h>
using namespace std;

int main(){

	CMystring TestStr("Hello!");
	TestStr.Print();
	CMystring TestCpy(TestStr);
	TestCpy.Print();

	printf("Helo, World!");
	return 0;
}