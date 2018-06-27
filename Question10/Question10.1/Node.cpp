#include "Node.h"


Node::Node()
{
	Data = NULL;
	Next = NULL;
	Head = NULL;
}
Node::Node(const Node& list)
{
	for (Node *p = list.Head; p; p = p->Next)
	{
		this->Head->AddPeople(p->Data);
	}
}
Node::~Node()
{
	std::cout << "Delete List" << endl;
	while (Head != NULL)
	{
		Node* p = Head;
		Head = Head->Next;
		delete p;
	}
}

void Node::Output()
{
	
	if (!Head)
	{
		std::cout << "Empty List!!!" << endl;
	}
	else
	{
		std::cout << "================ List! ================ " << endl;
		Node* p = Head;
		for (; p; p = p->Next)
		{
			p->Data->Output();
		}
	}
}

void Node::AddPeople(People* data)
{
	Node *p = Head;
	Node *newNode = new Node();
	newNode->Data = data;
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

void Node::Input(Node* node)
{
	int choice;
	do
	{
		std::cout << "=============Lua chon=============" << endl;
		std::cout << "1: Staff " << endl;
		std::cout << "2: Teacher " << endl;
		std::cout << "3: Student " << endl;
		std::cout << "0: Exit " << endl;
		do
		{
			std::cout << "Choice: ";
			cin >> choice;
			if (choice < 0 || choice > 3)
			{
				std::cout << " Input Error!" << endl;
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
		std::cout << endl;
	} while (choice != 0);
}

/* Bubble sort the given linked list */
void Node::bubbleSort()
{/* Checking for empty list */
	if (!Head)
	{
		std::cout << "Empty List!!!" << endl;
		return;
	}

	Node *current = Head;
	Node *bcurrent = Head->Next;
	int count = Data->getCountPeople();
	for (int i = count - 1; i >= 0; i--)
	{
		current = Head;
		bcurrent = Head->Next;
		Staff* dataStaff = dynamic_cast<Staff*>(current->Data);
		Teacher* dataTeacher = dynamic_cast<Teacher*>(current->Data);
		Student* dataStudent = dynamic_cast<Student*>(current->Data);
		Staff* dataStaff1 = dynamic_cast<Staff*>(bcurrent->Data);
		Teacher* dataTeacher1 = dynamic_cast<Teacher*>(bcurrent->Data);
		Student* dataStudent1 = dynamic_cast<Student*>(bcurrent->Data);
		for (int j = 0; j < count - 1; j++)
		{
			if (current->Data == dataTeacher  && bcurrent->Data == dataStaff1)
				swap(current, bcurrent);
			if (current->Data == dataStudent  && bcurrent->Data == dataStaff1)
				swap(current, bcurrent);
			if (current->Data == dataStudent  && bcurrent->Data == dataTeacher1)
				swap(current, bcurrent);
			current = bcurrent;
			bcurrent = bcurrent->Next;
			if (bcurrent)
			{
				 dataStaff = dynamic_cast<Staff*>(current->Data);
				 dataTeacher = dynamic_cast<Teacher*>(current->Data);
				 dataStudent = dynamic_cast<Student*>(current->Data);
				 dataStaff1 = dynamic_cast<Staff*>(bcurrent->Data);
				 dataTeacher1 = dynamic_cast<Teacher*>(bcurrent->Data);
				 dataStudent1 = dynamic_cast<Student*>(bcurrent->Data);
			}
		}
	}
}
/* function to swap data of two nodes a and b*/
void Node::swap(Node *a, Node *b)
{
	People* temp = a->Data;
	a->Data = b->Data;
	b->Data = temp;
}

void Node::PrintAvgSMT5()
{

	if (!Head)
	{
		std::cout << "Empty List!!!" << endl;
	}
	else
	{
		std::cout << "================ List! ================ " << endl;
		Node* p = Head;
		for (; p; p = p->Next)
		{
			Student* dataStudent = dynamic_cast<Student*>(p->Data);
			if (p->Data == dataStudent && dataStudent->getAvgScore() > 5)
				p->Data->Output();
		}
	}

}

void Node::Remove(Node* node, int k)
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

void Node::WritetoFile(ofstream &f)
{
	if (!Head)
	{
		std::cout << "Empty List!!!" << endl;
	}
	else
	{
		Node* p = Head;
		Staff* dataStaff = dynamic_cast<Staff*>(p->Data);
		Teacher* dataTeacher = dynamic_cast<Teacher*>(p->Data);
		Student* dataStudent = dynamic_cast<Student*>(p->Data);
		for (; p; p = p->Next)
		{
			dataStaff = dynamic_cast<Staff*>(p->Data);
			dataTeacher = dynamic_cast<Teacher*>(p->Data);
			dataStudent = dynamic_cast<Student*>(p->Data);
			if (p->Data == dataTeacher)
			{
				f << 2 << " ";
				p->Data->WtoF(f);
				f << endl;
			}
			else if (p->Data == dataStaff)
			{
				f << 1 << " ";
				p->Data->WtoF(f);
				f << endl;
			}
			else if (p->Data == dataStudent)
			{
				f << 3 << " ";
				p->Data->WtoF(f);
				f << endl;
			}
		}
	}
}

void Node::ReadfromFile(ifstream & f,Node* node)
{
	int is;
	while (f >> is)
	{
		switch (is)
		{
		case 1:
		{
				  node->Data = new Staff();
				  node->Data->RfromF(f);
				  node->AddPeople(node->Data);
		}
			break;

		case 2:
		{
				  node->Data = new Teacher();
				  node->Data->RfromF(f);
				  node->AddPeople(node->Data);
		}
			break;
		case 3:
		{
				  node->Data = new Student();
				  node->Data->RfromF(f);
				  node->AddPeople(node->Data);
		}
			break;
		default:
			static int i = 0;
			std::cout << "loi doc thu " << ++i;
			delete node;
			break;
		}
	
		is = 0;
	}
}

