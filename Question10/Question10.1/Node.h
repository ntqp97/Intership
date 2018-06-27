#pragma once
#include"Teacher.h"
#include"Student.h"
#include <fstream>
class Node
{
public:
	People* Data;
	Node* Next;
	Node *Head;
public:
	Node();
	Node(const Node&);
	~Node();
	void Output();
	static void Input(Node*);
	static void Remove(Node* , int);
	void AddPeople(People*);
	void PrintAvgSMT5();
	void swap(Node *a, Node *b);
	void bubbleSort();
	//void WriteToFile(ofstream& )
};


