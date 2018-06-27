#include<iostream>
using namespace std;


template <class R, class T> R Average(int count, T* list)
{
	R res = 0;
	for (int i = 0; i < count; i++)
	{
		res += list[i];
	}
	res /= count;
	return res;
}

int main(int n, char **args)
{

	int count = 10;
	int *list = new int[count];
	for (int i = 0; i < count; i++)
	{
		list[i] = i;
	}
	int res = Average<int, int>(count, list);
	
	cout << res << endl;

	system("pause");
	return 0;
}