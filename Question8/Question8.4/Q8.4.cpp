#include<iostream>
#include<string>
#define MAX 3
using namespace std;

struct Student
{
	string name;
	int id;
	float score;

	Student();
	Student(string, int, float);
	~Student();

};
Student::Student()
{
	this->name = "";
	this->id = 0;
	this->score = 0;
}
Student::Student(string n, int i, float s)
{
	this->name = n;
	this->id = i;
	this->score = s;
}
Student::~Student()
{

}
void Input(Student *listS, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\INPUT STUDENT " << i + 1 << endl;
		fflush(stdin);
		cout << "\nInput Student's name: ";
		getline(cin, listS[i].name);
		do
		{
			cout << "\nInput Student's id: ";
			cin >> listS[i].id;
			for (int j = 0; j < n; j++)
			{
				if (i != j && listS[i].id == listS[j].id)
				{
					listS[i].id = 100;
					cout << "Duplicated student ID! Input again!" << endl;
				}
			}
		} while (listS[i].id == 100 );
		do
		{
			cout << "\nInput Student's score: ";
			cin >> listS[i].score;
			if (listS[i].score < 0 || listS[i].score > 10)
				cout << "\nInput error! Input again!";
		} while (listS[i].score < 0 || listS[i].score > 10);
	}
}

void Sort(Student *listS)
{
	for (int i = 0; i < MAX; i++)
	{
		for (int j = i + 1; j <= MAX; j++)
		{
			if (listS[i].score < listS[j].score)
			{
				Student temp = listS[i];
				listS[i] = listS[j];
				listS[j] = temp;
			}
		}
	}
}
void Output(Student *listS, int n)
{
	cout << "============ OUTPUT =============" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\nINFORMATION'S STUDENT " << i + 1 << endl;
		cout << "\nStudent's name: " << listS[i].name;
		cout << "\nStudent's id:  " << listS[i].id;
		cout << "\nStudent's score: " << listS[i].score;
	}
}

int main(int n, char **args)
{
	Student *listS = new Student[MAX];

	Input(listS, MAX);
	Sort(listS);
	Output(listS, MAX);

	cout << endl;
	system("pause");
	return 0;
}