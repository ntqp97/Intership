#include"ListPeople.h"

int People::countPeople = 0;
int Staff::countStaff = 0;
int Teacher::countTeacher = 0;
int Student::countStudent = 0;

int main()
{
	int choice;
	ListPeople *a = new ListPeople();
	do
	{
		cout << "=======Lua Chon=======" << endl;
		cout << "0.Exit" << endl;
		cout << "1.Add to Node" << endl;
		cout << "2.Remove All" << endl;
		cout << "3.Modified" << endl;
		cout << "4.List of Peoples" << endl;
		do
		{
			cout << "Choice: "; cin >> choice;
			if (choice < 0 || choice > 4)
			{
				cout << " Input Error!" << endl;
			}
		} while (choice < 0 || choice > 4);
		switch (choice)
		{
		case 1:
			a->AddPeople(a);
			break;
		case 2:
			a->RemoveAll(a);
			break;
		case 3:
			int h;
			cout << "Input ID: ";
			cin >> h;
			a->Modified(a, h);
			break;
		case 4:
			a->Output();
		default:
			break;
		}
	} while (choice != 0);
	system("pause");
	return 0;
}