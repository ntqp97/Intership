#pragma once
#include<iostream>
#include <string>
using namespace std;

struct Date
{
	int Day;
	int Month;
	int Year;

	Date(int Day = 0, int Month = 0, int Year = 0);
	~Date();
	void Input();
	void Output();
};

class People
{
protected:
	char* Name;
	Date Birthday;
	int IDcode;
	static int countPeople;
public:
	static int getCountPeople();
	virtual void Output();
	virtual void Input();
	Date getBirthday();
	void setBirthday(Date Birthday);
	int getIDcode();
	void setIDcode(int IDcode);
	char* getName();
	void setName(char* Name);
	People();
	People(char*,Date,int);
	virtual ~People();
};

