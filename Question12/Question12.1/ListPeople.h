#pragma once
#include"Teacher.h"
#include"Student.h"
#include<list>
class ListPeople
{
	People* Data;
	list<People*> listPeo;
public:
	ListPeople();
	~ListPeople();
	void AddPeople(ListPeople*);
	void Output();
	void Modified(ListPeople*,int);
	void RemoveAll(ListPeople*);



};

