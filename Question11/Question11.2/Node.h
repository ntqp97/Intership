#pragma once
#include"Teacher.h"
#include"Student.h"
#include <fstream>
template<class T>
class Node
{
public:
	T* Data;
	Node* Next;
	Node* Head;
public:
	Node();
	Node(const Node&);
	~Node();
	void AddPeople(T*);
	void AddNode(Node*);
	void Remove(Node*, int);
	void Output();

};


