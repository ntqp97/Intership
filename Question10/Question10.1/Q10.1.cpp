#include"Node.h"

int People::countPeople = 0;
int Staff::countStaff = 0;
int Teacher::countTeacher = 0;
int Student::countStudent = 0;

int main()
{
	Node* a = new Node();
	ifstream file;
	file.open("ouput.txt", ios::in);
	if (file) 
	{
		a->ReadfromFile(file,a);
	}
	ofstream fileout;
	fileout.open("ouput.txt", ios::out);
	int choice;
	do
	{
		cout << "=======Lua Chon=======" << endl;
		cout << "0.Exit" << endl;
		cout << "1.Add to People" << endl;
		cout << "2.List of Student have average score more than 5" << endl;
		cout << "3.Sort list" << endl;
		cout << "4.Number of Peoples" << endl;
		cout << "5.Clone current list" << endl;
		cout << "6.Remove Node K" << endl;
		cout << "7.List of Peoples" << endl;
		do
		{
			cout << "Choice: "; cin >> choice;
			if (choice < 0 || choice > 7)
			{
				cout << " Input Error!" << endl;
			}
		} while (choice < 0 || choice > 7);
		switch (choice)
		{
		case 1:
			a->Input(a);
			break;
		case 2:
			a->PrintAvgSMT5();
			break;
		case 3:
			a->bubbleSort();
			break;
		case 4:
			cout << "total number of People  :  " << People::getCountPeople() << endl;
			cout << "total number of Staff   :  " << Staff::getCountStaff() - Teacher::getCountTeacher() << endl;
			cout << "total number of Teacher :  " << Teacher::getCountTeacher() << endl;
			cout << "total number of Student :  " << Student::getCountStudent() << endl;
			break;
		case 5:
		{
				  Node *b(a);
				  cout << "List Clone:" << endl;
				  b->Output();
		}
			break;
		case 6:
			int k;
			cout << "Input Location: ";
			cin >> k;
			a->Remove(a,k);
			break;
		case 7:
		{
			a->Output();
			a->WritetoFile(fileout);
			fileout.close();
		}
			break;
		default:
			break;
		}
	} while (choice != 0);



	system("pause");
	return 0;
}