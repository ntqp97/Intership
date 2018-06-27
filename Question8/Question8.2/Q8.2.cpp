#include<iostream>
using namespace std;



struct Date
{
	unsigned char DayOfWeak;
	unsigned char Day;
	unsigned char Month;
	unsigned int Year;
};

struct Date1
{
	unsigned char DayOfWeak;
	unsigned char Day;
	unsigned char Month;
	unsigned int Year;
};

int main(int n, char **agrs)
{
	//Date date;
	cout << sizeof(Date) << endl;
	cout << sizeof(Date1) << endl;
	system("pause");
	return 0;
}