#include<iostream>
#include<time.h>
#include<Windows.h>
#pragma warning(disable : 4996)
#define MAX1 10
#define MAX2 100
#define MAX3 1000
#define MAX4 10000
using namespace std;
int namhientai, giohientai, phuthientai, giayhientai;
const int xyz = 0;

void calculate(int val)
{
	static int count = 10;
	static int value;
	printf("%d %d\n", value, count++);
	value = val;
}
int main(int n, char **args)
{
#pragma region Q2.1

	/*clock_t t, t1, t2;
	t = clock();
	cout << t << endl;
	for (register int i = 0; i < MAX3; i++)
	{
		for (register int j = 0; j < MAX3; j++)
		{
			for (register int k = 0; k < MAX3; k++)
			{
			}
		}
	}
	t1 = clock();
	t2 = t1 - t;
	cout << t1 << endl;
	cout << (float)t2 / CLOCKS_PER_SEC;*/
#pragma endregion 
#pragma region Q2.2

	/*int i = 10;
	int j = 15;
	calculate(i);
	calculate(j);*/
#pragma endregion 
#pragma region Q2.5

	/*printf("%d", xyz);*/
#pragma endregion 

	system("pause");
	return 0;

}