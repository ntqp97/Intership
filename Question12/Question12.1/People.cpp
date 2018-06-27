#include "People.h"

int SoNgayCuaThang(int month, int year)
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return 31;
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	if (month == 2){
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			return 29;
		else
			return 28;
	}
}
bool KiemTra(int day, int month, int year){
	if (year < 0)
		return false;
	if (month < 1 || month > 12)
		return false;
	if (day < 1 || day > SoNgayCuaThang(month, year))
		return false;
	return true;

}
void Date::Input()
{
	bool kt = false;
	do{
		int h;
		cout << "\nDay: ";
		cin >> h;
		Day = h;
		cout << "Month: ";
		cin >> h;
		Month = h;
		cout << "Year: ";
		cin >> h;
		Year = h;
		kt = KiemTra(Day, Month, Year);
		if ((kt == false))
			cout << "Input Erorr!";
	} while (kt == false);
}
void Date::Output()
{
	cout << Day << "-";
	cout << Month << "-";
	cout << Year << endl;
}
Date::Date(int Day, int Month, int Year)
{
	this->Day = Day;
	this->Month = Month;
	this->Year = Year;
}
Date::~Date()
{

}

People::People()
{
	countPeople++;
}

People::People(char* name, Date birthday, int idCode)
{
	int len = strlen(name) + 1;
	Name = new char[len];
	strcpy_s(Name, len, name);
	this->Birthday = birthday;
	this->IDcode = idCode;

}

People::~People()
{
	cout << "Delete People" << endl;
	countPeople--;
}

Date People::getBirthday()
{
	return Birthday;
}
void People::setBirthday(Date birthday)
{
	Birthday = birthday;
}

int People::getIDcode()
{
	return IDcode;
}
void People::setIDcode(int idCode)
{
	IDcode = idCode;
}

char* People::getName()
{
	return Name;
}
void People::setName(char* name)
{
	int len = strlen(name) + 1;
	Name = new char[len];
	strcpy_s(Name, len, name);
}

void People::Output()
{
	cout << "Name: " << Name << "  " << "IDcode: " << IDcode << "  " << "Birthday: ";
	Birthday.Output();
}

void People::Input()
{
	fflush(stdin);
	cout << "Name: ";
	char name[50];
	gets_s(name, 50);
	Name = new char[strlen(name) + 1];
	strcpy_s(Name, strlen(name) + 1, name);

	cout << "ID: ";
	cin >> IDcode;

	cout << "Birthday!!! ";
	Birthday.Input();
}

int People::getCountPeople()
{
	return countPeople;
}

