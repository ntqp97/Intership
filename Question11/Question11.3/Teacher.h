#pragma once
#include"Staff.h"

enum Subject { MATHS, PHYS, ENGLISH };

class Teacher : public Staff
{
private:
	int Class;
	Subject Subject1;
	Subject Subject2;
	static int countTeacher;
public:
	static int getCountTeacher();
	void Output();
	void Input();
	int getClass();
	void setClass(int);
	int getSubject1() const;
	void setSubject1(Subject);
	int getSubject2() const;
	void setSubject2(Subject);
	Teacher();
	Teacher(char*, Date, int, int, Date, int, int);
	~Teacher();
};

