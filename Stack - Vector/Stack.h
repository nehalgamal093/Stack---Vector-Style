#pragma once

template<class T>
class Stack
{
	int size;
	int capacity;
	T* arr;
	void expand();

public:
	Stack();
	int getSize();
	void push(T element);
	void pop();
	T top();
	bool empty();
	~Stack();
};

