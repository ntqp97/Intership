#include<iostream>
#include<cstring>
#pragma warning(disable : 4996)
#define Min(m,n) m>n?n:m
using namespace std;
void clone(char *input, char *output)
{
	while (*output != NULL || *input != NULL)
	{
		*output = *input;
		output++;
		input++;
	}
}
void Swap(char &a, char &b)
{
	char temp = a;
	a = b;
	b = temp;
}
void copyString_memcpy(char * input, int offset, int lenght, bool invert, char * output, int output_offset)
{
	if (invert) {
		//copy phan cuoi cua chuoi
		int n = (strlen(output) - output_offset);
		n = (Min(n, lenght));
		int m = (strlen(input) - offset);
		memcpy(output + output_offset, input + offset + m - (Min(m, n)), Min(m, n));
		// dao chuoi
		for (int i = 0; i <= (Min(m, n)) / 2; i++) {
			Swap(output[output_offset + i], output[output_offset + n - i - 1]);
		}
	}
	else {
		// số byte cần copy phải nhỏ hơn số byte tính từ output_offset đến kí tự '/0'
		int n = (strlen(output) - output_offset);
		n = n > lenght ? lenght : n;
		int m = (strlen(input) - offset);
		memcpy(output + output_offset, input + offset, Min(m, n));
	}
}

void copyString_strcpy(char * input, int offset, int lenght, bool invert, char *output, int output_offset)
{
	if (invert) {
		//copy phan cuoi cua chuoi
		int n = (strlen(output) - output_offset);
		n = (Min(n, lenght));
		int m = (strlen(input) - offset);
		strncpy(output + output_offset, input + offset + m - (Min(m, n)), Min(m, n));
		// dao chuoi
		for (int i = 0; i <= (Min(m, n)) / 2; i++) {
			Swap(output[output_offset + i], output[output_offset + n - i - 1]);
		}
	}
	else {
		int n = strlen(output) - output_offset;
		n = (Min(n, lenght));
		int m = strlen(input) - offset;
		cout << strlen(output) << endl;
		strncpy(output + output_offset, input + offset, Min(m, n));
	}
}
void copyString(char * input, int offset, int lenght, bool invert, char * output, int output_offset)
{
	if (invert) {
		for (register int i = 0; i < lenght; i++) {
			if (output[output_offset + lenght - 1 - i] && input[offset + i])
				output[output_offset + lenght - 1 - i] = input[offset + i];
			else
				break;
		}
	}
	else {
		for (register int i = 0; i < lenght; i++) {
			if (output[output_offset + i] && input[offset + i])
				output[output_offset + i] = input[offset + i];
			else
				break;
		}
	}
}



int main(int n, char **args)
{

#pragma region Q6.1
	/*char *st = "Hello World";
	char st1[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0' };
	char *st2 = new char[];
	strcpy_s(st2, strlen(st2) , "Hello World");
	cout << st2 << endl;*/
#pragma endregion 

#pragma region Q6.2
	/*char *st = "Hello World";
	char *st2 = new char[];
	clone(st, st2);
	cout << st2 << endl;*/
#pragma endregion 

#pragma region Q6.3
	/*char st[] = "Hello world";
	char st2[] = "My name is C++";
	copyString_strcpy(st, 6, 5, true, st2, 11);
	cout << st2 << endl;*/
#pragma endregion 
	system("pause");
	return 0;
}