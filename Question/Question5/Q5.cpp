#include<iostream>
#include<string>
using namespace std;
#define COUNT 10
#define MAX(a, b) ((a) < (b) ? (b):(a))
typedef int *IntPtrType;

int main(int n, char **args)
{

#pragma region Q5.1
	//// *ptr : giá trị của con trỏ
	//
	//IntPtrType ptr_a, ptr_b, *ptr_c;
	//ptr_a = new int;
	//*ptr_a = 3;
	//ptr_b = ptr_a; // gán địa chỉ của ptr_a cho ptr_b
	//cout << *ptr_a << " " << *ptr_b << "\n";  
	//ptr_b = new int;	
	//*ptr_b = 9;
	//cout << *ptr_a << " " << *ptr_b << "\n";
	//*ptr_b = *ptr_a;
	//cout << *ptr_a << " " << *ptr_b << "\n";
	//delete ptr_a;
	//ptr_a = ptr_b;
	//cout << *ptr_a << " " << *&*&*&*&*ptr_b << "\n";
	//ptr_c = &ptr_a;
	//cout << *ptr_c << " " << **ptr_c << "\n"; // con trỏ cấp 2 nên *ptr_c sẽ là địa chỉ của con trỏ c và **ptr_c là giá trị của con trỏ c
	//delete ptr_a;
	//ptr_a = NULL;
#pragma endregion 

#pragma region Q5.2
	/*IntPtrType p = 0, q = 0;
	int x = 2, y = 8;
	p = &x;
	q = &y;

	cout << "x : " << x << " " << hex << &x << endl;
	cout << "p : " << *p << " " << hex << p << endl;
	cout << "y : " << y << " " << hex << &y << endl;
	cout << "q : " << *q << " " << hex << q << endl;
	cout << "&p: " << hex << &p << endl;
	cout << "&q: " << hex << &q << endl;*/
#pragma endregion 

#pragma region Q5.3
	//int x = 1, y = 2, z = 3;
	//IntPtrType p, q, r;	
	//p = &x;
	//q = &y;
	//r = &z;
	//cout << "x , y , z    : " << x << " " << y << " " << z << endl;
	//cout << "p , q ,r     : " << p << " " << q << " " << r << endl;
	//cout << "*p , *q , *r : " << *p << " " << *q << " " << *r << endl;
	//cout << "Swapping values !!!" << endl;
	//z = x;// z= 1 va x =1
	//x = y; // x = 2 va y =2
	//y = z; // y =1 va z =1 
	//// sau khi swap ta đc giá trị lần lược: x = 2 , y = 1 và z = 1
	//cout << "x , y , z    : " << x << " " << y << " " << z << endl;
	//cout << "p , q ,r     : " << p << " " << q << " " << r << endl;
	//cout << "*p , *q , *r : " << *p << " " << *q << " " << *r << endl;
#pragma endregion 

#pragma region Q5.4
	//int x = 1, y = 2, z = 3;
	//IntPtrType p, q, r;
	//p = &x;
	//q = &y;
	//r = &z;
	//cout << "x , y , z    : " << x << " " << y << " " << z << endl;
	//cout << "p , q ,r     : " << p << " " << q << " " << r << endl;
	//cout << "*p , *q , *r : " << *p << " " << *q << " " << *r << endl;
	//cout << "Swapping pointer !!!" << endl;
	//r = p; // p->x va r->x
	//p = q; // q->y và p->y
	//q = r; // r->x và q->x
	////sau khi swap ta đc  p->y , q->x và r->x
	//cout << "x , y , z    : " << x << " " << y << " " << z << endl;
	//cout << "p , q ,r     : " << p << " " << q << " " << r << endl;
	//cout << "*p , *q , *r : " << *p << " " << *q << " " << *r << endl;
#pragma endregion 

#pragma region Q5.5
	//int a[4] = { 1, 2, 3, 4 };
	//int *p = a;
	//printf("0x%x 0x%x 0x%x\n", a, *a, &a); // bản thân mảng a là 1 địa chỉ. nó lấy địa chỉ của phần tử đầu tiên a[0].
	//printf("0x%x 0x%x 0x%x\n", p, *p, &p); // con trỏ p chưa địa chỉ của phần tử đầu tiên mảng a và nó có địa chỉ riêng của nó.
	//printf("0x%x 0x%x 0x%x 0x%x\n", (a + 1), *(a + 1), *a + 1, &a + 1); // mỗi phần tử trong mảng số nguyên sẽ cách nhau 4 byte.
	//printf("0x%x 0x%x 0x%x 0x%x\n", (p + 1), *(p + 1), *p + 1, &p + 1); // &a + 1 chính là công khoản địa chỉ nguyên cả của mảng.
#pragma endregion 

#pragma region Q5.6
	/*int a[4] = { 1, 2, 3, 4 };
	int *p = a;
	int *p2 = new int;
	delete p2;*/
#pragma endregion 

#pragma region Q5.8
	//IntPtrType p = new int[COUNT];
	//int a[COUNT];
	//for (int i = 0; i < COUNT; i++)
	//{
	//	a[i] = i;
	//}
	//for (int i = 0; i < COUNT; i++)
	//{
	//	p[i] = i;
	//}
	//
	//for (int i = 0; i < MAX(sizeof(a)/sizeof(int), sizeof(p)); i++)
	//{
	//	printf("%d %d\n", a[i], p[i]);
	//}
#pragma endregion 

#pragma region Q5.9
//// vì đã giải phóng mem block đc trỏ bởi con trỏ a nên ko còn giá trị đc trỏ đến => lỗi
//IntPtrType a = new int;
//*a = 10;
//delete a;
//printf("%d", *a);
#pragma endregion
	system("pause");
	return 0;

}