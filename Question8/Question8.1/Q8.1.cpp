#include<iostream>
#include<time.h>
#pragma warning(disable : 4996)
using namespace std;

char* DOW[8] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
struct Date
{
	unsigned char DayOfWeak;
	unsigned char Day;
	unsigned char Month;
	unsigned int Year;
};
Date setDate(unsigned char a, unsigned char b, unsigned char c, unsigned int d)
{
	struct Date date;
	date.DayOfWeak = a;
	date.Day = b;
	date.Month = c;
	date.Year = d;
	return date;
}

void Output(Date date)
{ 
		cout << DOW[(int)date.DayOfWeak] << "," << (int)date.Day << "/" << (int)date.Month << "/" << date.Year << endl;
}
int main(int n, char **agrs)
{
	
	struct Date date;
	unsigned char a, b, c;
	unsigned int d;
	time_t t = time(NULL);
	struct tm *Now = localtime(&t);
	a = Now->tm_wday;
	b = Now->tm_mday;
	c = Now->tm_mon + 1;
	d = Now->tm_year + 1900;
	date = setDate(a, b, c, d);
	Output(date);
	cout << endl;

	system("pause");
	return 0;
}