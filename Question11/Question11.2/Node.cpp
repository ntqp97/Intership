#include "Node.h"

template<class T>
Node<T>::Node()
{
	Data = NULL;
	Next = NULL;
	Head = NULL;
}
template<class T>
Node<T>::Node(const Node<T>& list)
{
	for (Node *p = list.Head; p; p = p->Next)
	{
		this->Head->AddPeople(p->Data);
	}
}
template<class T>
Node<T>::~Node()
{
	cout << "Delete List" << endl;
	while (Head != NULL)
	{
		Node* p = Head;
		Head = Head->Next;
		delete p;
	}
}
template<class T>
void Node<T>::AddPeople(T* t)
{ 
	Node *p = Head;
	Node *newNode = new Node();
	newNode->Data = t;
	newNode->Next = NULL;
	if (!Head)
	{
		Head = new Node();
		Head->Data = newNode->Data;
		Head->Next = NULL;
	}
	else if (Head->Next == NULL)
	{
		Head->Next = newNode;
	}
	else
	{
		for (; p->Next; p = p->Next);
		newNode->Next = p->Next;
		p->Next = newNode;
	}
}
template<class T>
void Node<T>::AddNode(Node<T>* node)
{
	int choice;
	do
	{
		cout << "=============Lua chon=============" << endl;
		cout << "1: Staff " << endl;
		cout << "2: Teacher " << endl;
		cout << "3: Student " << endl;
		cout << "0: Exit " << endl;
		do
		{
			cout << "Choice: ";
			cin >> choice;
			if (choice < 0 || choice > 3)
			{
				cout << " Input Error!" << endl;
			}
		} while (choice < 0 || choice > 3);
		switch (choice)
		{
		case 1:
		{
				  node->Data = new Staff();
				  node->Data->Input();
				  node->AddPeople(node->Data);
		}
			break;

		case 2:
		{
				  node->Data = new Teacher();
				  node->Data->Input();
				  node->AddPeople(node->Data);
		}
			break;
		case 3:
		{
				  node->Data = new Student();
				  node->Data->Input();
				  node->AddPeople(node->Data);
		}
			break;
		default:
			break;
		}
		cout << endl;
	} while (choice != 0);
}
template<class T>
void Node<T>::Output()
{
	if (!Head)
	{
		cout << "Empty List!!!" << endl;
	}
	else
	{
		cout << "================ List! ================ " << endl;
		Node* p = Head;
		for (; p; p = p->Next)
		{
			p->Data->Output();
		}
	}
}
template<class T>
void Node<T>::Remove(Node<T>* node, int k)
{
	if (!node->Head)// danh sách rổng thì không trừ
	{
		cout << "EMPTY LIST!" << endl;
	}
	Node *p = node->Head;
	int i = 1;
	if (k < 1 || k > node->Head->Data->getCountPeople())
		cout << "Location Error" << endl; //kiem tra dieu kien
	else
	{
		if (k == 1) //xoa vi tri dau tien
		{
			node->Head = node->Head->Next;
			delete p->Data;
		}
		else //xoa vi tri k != 1
		{
			while (p != NULL && i != k - 1) //duyet den vi tri k-1
			{
				p = p->Next;
				i++;
			}
			Node *temp = p->Next;
			p->Next = temp->Next; //cho P tro sang Node ke tiep vi tri k
			delete temp->Data;
		}
	}
}






