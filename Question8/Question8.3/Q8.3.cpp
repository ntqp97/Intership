#include<iostream>
#include<time.h>
#pragma warning(disable : 4996)
using namespace std;



struct Date
{
	unsigned char DayOfWeak;
	unsigned char Day;
	unsigned char Month;
	unsigned int Year;
	Date(unsigned char a, unsigned char b, unsigned char c, unsigned int d);
};
bool KiemTra(unsigned char DayOfWeak, unsigned char Day, unsigned char Month, unsigned int Year){
	if (Year < 0)
		return false;
	if (Month < 1 || Month > 12)
		return false;
	if (Day < 1 || Day >31)
		return false;
	if (DayOfWeak < 1 || DayOfWeak > 7)
		return false;
	return true;
}
Date::Date(unsigned char a, unsigned char b, unsigned char c, unsigned int d)
{
	this->DayOfWeak = a;
	this->Day = b;
	this->Month = c;
	this->Year = d;
}
ostream &operator<<(ostream &output, Date date){
	if (!KiemTra((int)date.DayOfWeak, (int)date.Day, (int)date.Month, date.Year)) cout << "Date sai!!!" << endl;
	else
	output << (int)date.DayOfWeak << "," << (int)date.Day << "/" << (int)date.Month << "/" << date.Year << endl;
	return output;
}

int main(int n, char **agrs)
{
	unsigned char a, b, c;
	unsigned int d;
	time_t t = time(NULL);
	struct tm *Now = localtime(&t);
	a = Now->tm_wday + 1;
	b = Now->tm_mday;
	c = Now->tm_mon + 1;
	d = Now->tm_year + 1900;
	struct Date date(a, b, c, d);

	cout << date << endl;

	system("pause");
	return 0;
}