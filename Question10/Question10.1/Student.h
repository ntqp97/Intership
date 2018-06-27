#pragma once
#include"People.h"
class Student : public People
{
private:
	int Grade;
	int NumOfProject;
	float* ScoreOfEachProject;
	int CalAvgScore(float*);
	static int countStudent;
public:
	static int getCountStudent();
	void Output();
	void Input();
	int getGrade();
	void setGrade(int Grade);
	int getNumOfProject();
	void setNumOfProject(int NumOfProject);
	float* getScoreOfEachProject();
	void setScoreOfEachProject(float* ScoreOfEachProject);
	int getAvgScore();
	Student();
	Student(char* Name, Date Birthday, int IDcode, int Grade, int NumOfProject);
	~Student();
	void WtoF(ofstream &f);
	void RfromF(ifstream &f);
};

