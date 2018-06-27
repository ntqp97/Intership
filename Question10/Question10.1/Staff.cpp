#include "Staff.h"


Staff::Staff()
{
	countStaff++;
}

Staff::Staff(char* Name, Date Birthday, int IDcode, int IDdepartment, Date JoinedDate, int Level) : People(Name, Birthday, IDcode)
{
	this->IDdepartment = IDdepartment;
	this->JoinedDate = JoinedDate;
	this->Level = Level;
	
}

Staff::~Staff()
{
	cout << "Delete Staff" << endl;
	countStaff--;
}
int Staff::getIDdepartment()
{
	return IDdepartment;
}
void Staff::setIDdepartment(int IDdepartment)
{ 
	this->IDdepartment = IDdepartment;
}
Date Staff::getJoinedDate()
{
	return JoinedDate;
}
void Staff::setJoinedDate(Date JoinedDate)
{
	this->JoinedDate = JoinedDate;
}
int Staff::getLevel()
{
	return Level;
}
void Staff::setLevel(int Level)
{
	this->Level = Level;
}
void Staff::Output()
{
	cout << "======STAFF====== " << endl;
	People::Output();
	cout  << "IDdepartment: " << IDdepartment << "  " <<"Level: " << Level << "  " << "JoinedDate: ";
	JoinedDate.Output();
}

void Staff::Input()
{
	People::Input();
	cout << "IDdepartment: ";
	cin >> IDdepartment;
	cout << "Level: ";
	cin >> Level;
	cout << "JoinedDate!!!";
	JoinedDate.Input();
}

int Staff::getCountStaff()
{
	return countStaff;
}




