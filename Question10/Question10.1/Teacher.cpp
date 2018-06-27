#include "Teacher.h"


Teacher::Teacher()
{
	countTeacher++;
}

Teacher::Teacher(char* Name, Date Birthday, int IDcode, int IDdepartment, Date JoinedDate, int Level, int Class) : Staff(Name, Birthday, IDcode, IDdepartment, JoinedDate, Level)
{
	this->Class = Class;
	
}

Teacher::~Teacher()
{
	cout << "Delete Teacher" << endl;
	countTeacher--;
}

int Teacher::getClass()
{
	return Class;
}
void Teacher::setClass(int Class)
{
	this->Class = Class;
}
int Teacher::getSubject1() const
{
	return Subject1;
}
void Teacher::setSubject1(Subject Subject1)
{
	this->Subject1 = Subject1;
}

int Teacher::getSubject2() const
{
	return Subject2;
}
void Teacher::setSubject2(Subject Subject2)
{
	this->Subject2 = Subject2;
}

void Teacher::Output()
{
	
	Staff::Output();
	cout << "Class: " << Class << "  " << "Subject1: ";
	switch (Subject1)
	{
	case MATHS:
		cout << "MATHS" << "  " << "Subject2: ";
		break;
	case PHYS:
		cout << "PHYS" << "  " << "Subject2: ";
		break;
	case ENGLISH:
		cout << "ENGLISH" << "  " << "Subject2: " ;
		break;
	default:
		break;
	}
	
	switch (Subject2)
	{
	case MATHS:
		cout << "MATHS" ;
		break;
	case PHYS:
		cout << "PHYS";
		break;
	case ENGLISH:
		cout << "ENGLISH";
		break;
	default:
		break;
	}
	cout << endl;

}
void Teacher::Input()
{
	Staff::Input();
	cout << "Class: ";
	cin >> Class;
	int choice1;
		cout << "Subject1: 0: MATHS  1: PHYS  2: ENGLISH!!! " << endl;
		do
		{
			cout << "Choice Subject1: "; cin >> choice1;
			if (choice1 < 0 || choice1 > 2)
			{
				cout << "Error!!!" << endl;
			}
		} while (choice1 < 0 || choice1 > 2);
		switch (choice1)
		{
		case 0:
			Subject1 = MATHS;
			break;
		case 1:
			Subject1 = PHYS;
			break;
		case 2:
			Subject1 = ENGLISH;
			break;
		default:
			break;
		}

	int choice2;
		cout << "Subject2: 0: MATHS  1: PHYS  2: ENGLISH!!! ";
		do
		{
			cout << "Choice Subject2: "; cin >> choice2;
			if (choice2 < 0 || choice2 > 2)
			{
				cout << "Error!!!" << endl;
			}
		} while (choice2 < 0 || choice2 > 2);
		switch (choice2)
		{
		case 0:
			Subject2 = MATHS;
			break;
		case 1:
			Subject2 = PHYS;
			break;
		case 2:
			Subject2 = ENGLISH;
			break;
		default:
			break;
		}
}

int Teacher::getCountTeacher()
{
	return countTeacher;
}
