#include<iostream>
using namespace std;

extern void sort_cpp(int *arr, int count, int(*order) (int, int));
extern "C"
{
	void sort_c(int *arr, int count, int(*order) (int, int));
}
int CheckBigger(int a, int b)
{
	return a>b;
}
int CheckSmaller(int a, int b)
{
	return a<b;
}
int main(int n, char **args)
{
	int *arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

	sort_c(arr, 10, CheckBigger	);

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}