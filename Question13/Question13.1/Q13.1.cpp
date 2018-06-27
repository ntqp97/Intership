#include"Stack.h"
#include"Stack.cpp"
int main()
{
	Stack<int> S(5);

	S.push(19);
	S.push(10);
	S.push(1997);
	S.push(3);
	S.push(5);
	S.push(1997);
	S.push(1000);

	cout << S.getItem(3) << endl;
	cout << S.getTotal() << endl;

	cout << S.pop() << endl;
	cout << S.pop() << endl;
	cout << S.pop() << endl;
	cout << S.pop() << endl;
	cout << S.pop() << endl;
	cout << S.pop() << endl;


	system("pause");
	return 0;
}