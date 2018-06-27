#include "Student.h"


Student::Student()
{
	Grade = 0;
	NumOfProject = 0;
	ScoreOfEachProject = NULL;
	countStudent++;
}

Student::Student(char* Name, Date Birthday, int IDcode, int Grade, int NumOfProject) : People(Name, Birthday, IDcode)
{
	this->Grade = Grade;
	this->NumOfProject = NumOfProject;
	this->ScoreOfEachProject = new float[NumOfProject];
}
Student::~Student()
{
	cout << "Delete Student" << endl;
	countStudent--;
	delete[] ScoreOfEachProject;
}

int Student::getGrade()
{
	return Grade;
}
void Student::setGrade(int Grade)
{
	this->Grade = Grade;
}
int Student::getNumOfProject()
{
	return NumOfProject;
}
void Student::setNumOfProject(int NumOfProject)
{
	this->NumOfProject = NumOfProject;
}

float* Student::getScoreOfEachProject()
{
	return ScoreOfEachProject;
}
void Student::setScoreOfEachProject(float* ScoreOfEachProject)
{
	this->ScoreOfEachProject = new float[this->NumOfProject];
	for (int i = 0; i < this->NumOfProject; i++)
	{
		this->ScoreOfEachProject[i] = ScoreOfEachProject[i];
	}
}

int Student::CalAvgScore(float *ScoreOfEachProject)
{
	int ret = 0;
	for (int i = 0; i < NumOfProject; i++)
	{
		ret += ScoreOfEachProject[i];
	}
	ret /= NumOfProject;
	return ret;
}

int Student::getAvgScore()
{
	if (ScoreOfEachProject == NULL) return 0;
	return CalAvgScore(ScoreOfEachProject);
}

void Student::Output()
{
	cout << "======STUDENT====== " << endl;
	People::Output();
	cout << "Grade: " << Grade << "  " << "NumOfProject: " << NumOfProject << "  " << "ScoreOfEachProject: ";
	for (int i = 0; i < NumOfProject; i++)
	{
		cout << ScoreOfEachProject[i] << " ";
	}
	cout << endl;
	cout << "Calculate average score: " << CalAvgScore(ScoreOfEachProject) << endl;
	
}
void Student::Input()
{
	People::Input();
	cout << "Grade: ";
	cin >> Grade;
	cout << "NumOfProject: ";
	cin >> NumOfProject;
	cout << "ScoreOfEachProject: " << endl;
	ScoreOfEachProject = new float[NumOfProject];
	for (int i = 0; i < NumOfProject; i++)
	{
		cin >> ScoreOfEachProject[i];
	}
}

int Student::getCountStudent()
{
	return countStudent;
}

