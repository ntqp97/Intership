#include "ListPeople.h"

ListPeople::ListPeople()
{
	Data = NULL;
}
ListPeople::~ListPeople()
{
	for (list<People*>::iterator it = listPeo.begin(); it != listPeo.end(); it++)
	{
		delete *it;
	}
	cout << "List deleted!" << endl;
}

void ListPeople::AddPeople(ListPeople* Lpeo)
{
	int choice;
	do
	{
		cout << "=============Lua chon=============" << endl;
		cout << "1: Staff " << endl;
		cout << "2: Teacher " << endl;
		cout << "3: Student " << endl;
		cout << "0: Exit " << endl;
		do
		{
			cout << "Choice: ";
			cin >> choice;
			if (choice < 0 || choice > 3)
			{
				cout << " Input Error!" << endl;
			}
		} while (choice < 0 || choice > 3);
		switch (choice)
		{
		case 1:
		{
				  Lpeo->Data = new Staff();
				  Lpeo->Data->Input();
				  Lpeo->listPeo.push_back(Data);
		}
			break;
		case 2:
		{
				  Lpeo->Data = new Teacher();
				  Lpeo->Data->Input();
				  Lpeo->listPeo.push_back(Data);

		}
			break;
		case 3:
		{
				  Lpeo->Data = new Student();
				  Lpeo->Data->Input();
				  Lpeo->listPeo.push_back(Data);
		}
			break;
		default:
			break;
		}
		cout << endl;
	} while (choice != 0);
}
void ListPeople::Output()
{
	cout << "================ List! ================ " << endl;
	list<People*>::iterator it = listPeo.begin(); // Lấy vị trí con trỏ đầu
	for (; it != listPeo.end(); it++) // duyệt đến vịt trí con trỏ cuối
	{
		(*it)->Output();
		cout << endl;
	}
}

void ListPeople::Modified(ListPeople* Lpeo, int id)
{
	for (list<People*>::iterator it = Lpeo->listPeo.begin(); it != Lpeo->listPeo.end(); it++)
	{
		int x = (*it)->getIDcode();
		if (x == id)
		{
			(*it)->Input();
		}
	}
}
void ListPeople::RemoveAll(ListPeople* Lpeo)
{
	for (list<People*>::iterator it = Lpeo->listPeo.begin(); it != Lpeo->listPeo.end(); it++)
	{
			delete *it;
	}
}



