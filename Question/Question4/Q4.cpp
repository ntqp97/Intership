#include<iostream>
#include<string>
using namespace std;

void BubbleSort(int arr[], int offset, int count)
{
	int j;
	for (; offset < count ; offset++)
	{
		for (j = offset + 1; j <= count; j++)
		{

			if (arr[offset] > arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[offset];
				arr[offset] = temp;
			}
		}
	}
}

#pragma region Q4.6
//int x = 11;
//int y = 12;
//int a[5] = { 21, 22, 23, 24, 25 };
//int u = 31;
//int v = 32;
#pragma endregion

void Invert1(int input[], int num_element)
{
	for (int i = 0; i<num_element / 2; i++)
	{
		int temp = input[i];
		input[i] = input[num_element - 1 - i];
		input[num_element - 1 - i] = temp;
	}
}

void Invert2(int input[], int num_element, int output[])
{
	int count = 0;
	for (int i = num_element - 1; i >= 0; i--,count++)
	{
		output[count] = input[i];
	}
}

int main(int n, char **args)
{

#pragma region Q4.1
	/*int *p = new int[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "Nhap vao phan tu[" << i + 1 << "] : ";
		cin >> p[i];
	}
	delete[] p;*/
#pragma endregion 

#pragma region Q4.2
	
	/*int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int b[10] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int c[20];*/
#pragma region using memcpy
	/*memcpy(c, a, sizeof(int)*10);
	memcpy(c + 10, b, sizeof(int)*10);
	for (int i = 0; i < 20; i++)
	{
		cout << c[i] << " ";
	}*/
#pragma endregion

#pragma region without memcpy
	/*for (int i = 0; i < 10; i++)
	{
		c[i] = a[i];
	}
	for (int i = 0; i < 10; i++)
	{
		c[i+ 10] = b[i];
	}
	for (int i = 0; i < 20; i++)
	{
		cout << c[i] << " ";
	}*/
#pragma endregion

#pragma endregion 

#pragma region Q4.3
	//// a sẽ chứa địa chỉ đầu tiên của phần tử đầu tiên Và 
	////*a sẽ chứa giá trị của phần tử đầu tiên của mảng và
	////&a cũng sẽ tham chiếu đến địa chỉ của phân tử đầu tiên của mảng
	//// a + 1 thì sẽ chưa địa chỉ của phần tử thứ 2 ( địa chỉ phần tử 1 + 4 (int 4 byte))
	//// *(a + 1) chưa giá trị của phàn tử thứ 2 trong mảng đó là giá trị 10
	//// *a + 1 chưa giá trị của phần tử đầu tiên trong mảng và sau đó + 1 = 1
	//// 
	//int a[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	a[i] = i * 10;
	//}
	//printf("0x%x 0x%x 0x%x\n", a, *a, &a);
	//printf("0x%x 0x%x 0x%x 0x%x\n", (a + 1), *(a + 1), *a + 1, &a + 1);

#pragma endregion 

#pragma region Q4.4
	/*int a[5] = { 100, 4, 2, 6, 3 };
	BubbleSort(a, 1, 4);
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}*/
#pragma endregion 

#pragma region Q4.5
#pragma region Invert1
	/*int a[5] = { 2, 3, 5, 1, 6 };
	Invert1(a, 5);
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";*/
#pragma endregion

#pragma region Invert2
	/*int a[5] = { 2, 3, 5, 1, 6 };
	int b[5];
	Invert2(a, 5, b);
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
	cout << endl;
	for (int i = 0; i < 5; i++)
		cout << b[i] << " ";*/
#pragma endregion
#pragma endregion 

#pragma region Q4.6
	/*for (int i = -2; i < 7; i++)
		cout << i << " " << a[i] << endl;*/
#pragma endregion 
	system("pause");
	return 0;

}