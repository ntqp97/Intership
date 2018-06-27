#include<iostream>
#include<time.h>
#include<Windows.h>
using namespace std;

int Floor(float x)
{
	return (int)x;
}
int Ceil(float x)
{
	return (int)(x + 1);
}
int Round(float x)
{
	return (int)(x + 0.5);
}
int main(int n, char **args)
{
#pragma region Q3.1
	//// Vì unsigned char 1 byte chứa giá trị từ 0 - 255 và char chưa giá trị từ -128 - 127 
	//// Nên giá trị của i năm ngoài vùng chứa của nó nó sẽ lấy i - size
	//int i = 240;
	//char c = i;
	//int j = c + 256; // giải pháp: c + size
	//cout << j << endl;
#pragma endregion 

#pragma region Q3.2
	//// i == 5 thì sẽ thực hiện vòng lặp while 
	//// kết quả bị lặp vô hạn vì t dùng phép gán i = 5 nên cứ sau mỗi vòng lặp nó sẽ gán lại i = 5
	////nên lặp vô hạn.
	//int i = 5;
	//while (i = 5)
	//{
	//	printf("Inside loop\n");
	//	i--;
	//}
#pragma endregion 

#pragma region Q3.3
	//float val = 6.3;
	//cout << Ceil(val) << endl; //Returns the next highest integer value
	//cout << Round(val) << endl; // return the round value
	//cout << Floor(val) << endl; //  Returns the next lowest integer value 
#pragma endregion 

	system("pause");
	return 0;

}