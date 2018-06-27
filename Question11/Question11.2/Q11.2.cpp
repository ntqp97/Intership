#include"Node.h"
#include"Node.cpp"
int People::countPeople = 0;
int Staff::countStaff = 0;
int Teacher::countTeacher = 0;
int Student::countStudent = 0;

int main()
{

	Node<People> *a = new Node<People>();
	int choice;
	do
	{
		cout << "=======Lua Chon=======" << endl;
		cout << "0.Exit" << endl;
		cout << "1.Add to Node" << endl;
		cout << "2.Remove Node Have Location K" << endl;
		cout << "3.Remove All Node" << endl;
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
			a->AddNode(a);
			break;
		case 2:
			int k;
			cout << "Input Location: ";
			cin >> k;
			a->Remove(a, k);
			break;
		case 3:
			a->~Node();
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