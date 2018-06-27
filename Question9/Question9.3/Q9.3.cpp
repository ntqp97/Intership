#include<iostream>

using namespace std;

void sort(int *arr, int count, int(*order) (int, int))
{
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (((*order) (arr[i], arr[j])))
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
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

	sort(arr, 10, CheckSmaller);

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}