#include<iostream>
#include<string>
using namespace std;

struct Student
{
	int ID;
	string Name;
	float Score;
	Student *Next;
	Student(int ID = 1, string Name = "", float Score = 0);
	~Student();
	void Input();
	void Output1();
};
Student::Student(int ID, string Name, float Score)
{
	this->ID = ID;
	this->Name = Name;
	this->Score = Score;
	this->Next = NULL;
}

Student::~Student()
{

}

void Student::Input()
{
	cout << "---------Nhap Thong Tin Hoc Sinh--------" << endl;
	cout << "ID: ";
	cin >> ID;

	fflush(stdin);
	cout << "Name: ";
	getline(cin, Name);

	do
	{
		cout << "Score: ";
		cin >> Score;
		if (Score < 0 || Score > 10)
			cout << "\nInput error! Input again!";
	} while (Score < 0 || Score > 10);
}
void Student::Output1()
{
	cout << "--------Xuat Thong Tin Hoc Sinh--------" << endl;
	cout << "ID: " << ID << endl;
	cout << "Name: " << Name << endl;
	cout << "Score: " << Score << endl;
}

struct ListStudent
{
	Student *Head;
	ListStudent();
	ListStudent(const ListStudent&);
	~ListStudent();
	void Output2();
	ListStudent& AddStudent(Student);
	ListStudent& RemoveStudent(Student);
	void Remove(ListStudent &);
};
ListStudent::ListStudent()
{
	this->Head = NULL;
}
ListStudent::~ListStudent()
{
	while (Head != NULL)
	{
		Student *p = Head;
		Head = Head->Next;
		delete p;
	}
}
void ListStudent::Output2()
{
	if (!Head)
	{
		cout << "DANH SACH RONG!!!\n";
	}
	else
	{
		cout << "\n============== DANH SACH HOC SINH =================\n" << endl;
		Student *p = Head;
		for (; p; p = p->Next)
		{
			p->Output1();
		}
	}
}
ListStudent& ListStudent::AddStudent(Student st)
{
	Student *p = Head;
	Student *NewStudent = new Student();
	NewStudent->ID = st.ID;
	NewStudent->Name = st.Name;
	NewStudent->Score = st.Score;
	NewStudent->Next = NULL;
	if (!p)
	{
		Head = new Student();
		Head->ID = st.ID;
		Head->Name = st.Name;
		Head->Score = st.Score;
		Head->Next = NULL;
		return *this;
	}
	if (NewStudent->Score < Head->Score)
	{
		NewStudent->Next = p;
		Head = NewStudent;
		return *this;
	}

	if (NewStudent->ID == Head->ID)
	{
		cout << "ID TRUNG KO THEM DUOC!" << endl;
		return *this;
	}
	if (Head->Next == NULL)
	{
		Head->Next = NewStudent;
		return *this;
	}
	for (; p->Next && NewStudent->Score > p->Next->Score; p = p->Next);
	if (p->Next && NewStudent->ID == p->Next->ID)
	{
		cout << "ID TRUNG KO THEM DUOC!" << endl;
		return *this;
	}
	NewStudent->Next = p->Next;
	p->Next = NewStudent;
	return *this;
}
void ListStudent::Remove(ListStudent &l)
{
	if (!Head)
	{
		cout << "DANH SACH RONG KHONG THE XOA!" << endl;
		l.Head = NULL;
	}
	Student *p = l.Head;
	while (p != NULL)
	{
		if (p->Score < 5)
		{
			Student *temp = p; 
			p = p->Next;
			delete temp;
		}
		else break;
	}
	if (!p)
	{
		l.Head = NULL;
	}
	else
	{
		l.Head = p;
	}
}
int main(int n, char **args)
{
	ListStudent List;
	Student a;

	//// Theo đề nhập đến 0 thì dừng
	//while (a.ID != 0)
	//{
	//	a.Input();
	//	List.AddStudent(a);
	//}

	int choice;
	do
	{
		cout << "=======Lua Chon=======" << endl;
		cout << "0.Thoat" << endl;
		cout << "1.Them Hoc Sinh" << endl;
		cout << "2.Xoa Hoc Sinh Score < 5" << endl;
		cout << "3.Danh Sach Hoc Sinh Sap Xep Theo Score" << endl;
		do
		{
			cout << "Chon Chuc Nang: "; cin >> choice;
			if (choice < 0 || choice > 3)
			{
				cout << " Sai Nhap Lai!" << endl;
			}
		} while (choice < 0 || choice > 3);
		Student a;
		int Score;
		switch (choice)
		{
		case 1:
			a.Input();
			List.AddStudent(a);
			break;
		case 2:
			List.Remove(List);
			break;
		case 3:
			List.Output2();
			break;
		default:
			break;
		}
	} while (choice != 0);
	
	system("pause");
	return 0;
}