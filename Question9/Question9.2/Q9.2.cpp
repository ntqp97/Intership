#include <iostream>
#include<string>
#include <ctype.h>
using namespace std;


//No parameter
void SayHello() {
	cout << "Hello World" << endl;
}

//A string, print to screen “hello world” and that string
void SayHello(string s) 
{
	cout << "Hello World" << endl;
	cout << s << endl;
}


//A string, print to screen “hello world” and that string
void SayHello(string s, bool T = false) {
	if (T) {
		for (int i = 0; i < s.length(); i++) {
			s[i] = toupper(s[i]);
		}
	}
	cout << "Hello World" << endl;
	cout << s << endl;
}

int main() {
	string s = "Hi World";

	SayHello();
	//SayHello(s);
	//SayHello(s, true);

	system("pause");
}