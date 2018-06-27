#include "Stack.h"

template<class T>
Stack<T>::Stack()
{
	this->stack = NULL;
	this->total = 0;
	this->size = 0;
}
template<class T>
Stack<T>::Stack(int n)
{
	this->size = n;
	stack = new T[size]; // create array
	total = 0;
}
template<class T>
Stack<T>::~Stack()
{
	delete stack;
}
template<class T>
bool Stack<T>::push(T t)
{ 
	if (isFull() == false) // checks if space in stack
	{
		stack[total] = t; // add item
		total++; // increment item counter
		return true; // to indicate success
	}
	else
	{
		return false; // to indicate failure
	}
}
template<class T>
T Stack<T>::pop()
{
	if (isEmpty() == false) // check stack is not empty
	{
		// reduce counter by one
		T t = stack[total - 1]; // get last item
		stack[total - 1] = NULL; // remove item from array
		total--; // update total
		return t; // return item
	}
	else
	{
		return NULL; // to indicate failure
	}
}
template<class T>
bool Stack<T>::isEmpty()
{
	if (total == 0) {
		return true;
	}
	else
	{
		return false;
	}
}
template<class T>
bool Stack<T>::isFull()
{
	if (total == size) {
		return true;
	}
	else
	{
		return false;
	}
}
template<class T>
T Stack<T>::getItem(int i)
{
	return stack[i - 1]; // ith item at position i-1

}
template<class T>
int Stack<T>::getTotal()
{
	return total;
}


