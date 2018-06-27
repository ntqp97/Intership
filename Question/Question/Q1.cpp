#include<iostream>
#include<time.h>
#include<Windows.h>
#pragma warning(disable : 4996)
#define MAX1 10
#define MAX2 100
#define MAX3 1000
#define MAX4 10000
using namespace std;
int namhientai, giohientai, phuthientai, giayhientai;
int main(int n, char **args) // tham so dong lenh
{
#pragma region Q1.1
	/*cout << "hello C / C++" << endl;*/
#pragma endregion 

#pragma region Q1.4
	/*cout << "Number of Param " << n << endl;
	for (int i = 0; i < n; i++)
	{
	cout << "param[" << i << "]" << "= "  << args[i] << endl;
	}*/
#pragma endregion 

#pragma region Q1.6
	/*while (true)
	{
		time_t t = time(NULL);
		struct tm *Now = localtime(&t);
		giohientai = Now->tm_hour;
		phuthientai = Now->tm_min;
		giayhientai = Now->tm_sec;
		cout << "Hien tai la: " << giohientai << "h" << phuthientai << "'" << giayhientai << "s" << endl;
		Sleep(5000);
	}*/
#pragma endregion 
	system("pause");
	return 0;

}