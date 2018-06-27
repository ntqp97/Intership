#include <iostream>
using namespace std;

double Division(int a, int b)
{
	if (b == 0)
	{
		throw "Attention: You're dividing by zero!!!";
	}
	return (a / b);
}

float Average(int count, int offset, float *arr)
{
	if (count == 0)
		throw "Attention: You're dividing by zero!!!";
	if (offset > count)
		throw "Out of range value!!!";
	float res = 0;
	for (int i = offset; i < count; i++) {
		res += arr[i];
	}
	cout << "Avg: " << res / (count - offset) << endl;
	return (res / (count - offset));
}

int main(int n, char **args)
{
	int x = 15;
	int y = 0;
	double z = 0;
	float arr[5] = { 2.5, 5.5, 4, 6, 8 };

	try {
		z = Division(x, y);
		cout << z << endl;
	}
	catch (const char* msg) {
		cout << msg << endl;
	}

	try {
		z = Average(4, 3, arr);		// True ( 4 < count )
		//z = Average(2, 4, arr);	// False ( 4 > count) 				
		//z = Average(0, 4, arr);	// False (count = 0)	
	}
	catch (const char* msg) {
		cout << msg << endl;
	}
	system("pause");
	return 0;
}

