#pragma once
#include<iostream>
using namespace std;
template<class T>
class Stack
{
private:
	T* stack;
	int total; // to track number of items
	int size;
public:
	Stack();
	Stack(int size);
	~Stack();
	bool push(T);	//add an item to the array 
	T pop();		//remove an item by obeying LIFO rule
	bool isEmpty();	//checks if array is empty 
	bool isFull();	//checks if array is full 
	T getItem(int);	//returns the item at index i 
	int getTotal();	//return the number of items in the array 
};

