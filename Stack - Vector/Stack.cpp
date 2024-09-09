#include "Stack.h"

template <class T>
Stack<T>::Stack() {
	size = 0;
	capacity = 1;
	arr = new T[capacity];
}
template <class T>
int Stack<T>::getSize() {
	return size;
}
template <class T>
void Stack<T>::expand() {
	capacity *= 2;
	T* tmp = new T[capacity];
	for (int i = 0; i < size; i++) {
		tmp[i] = arr[i];
	}
	delete[]arr;
	arr = tmp;
}


template<class T>
void Stack<T>::push(T element) {
	if (size == capacity) {
		expand();
	}
	arr[size] = element;
	size++;
}

template <class T>
void Stack<T>::pop() {
	
	size--;
}

template <class T>
T Stack<T>::top() {
	return arr[size-1];
}
template <class T>
bool Stack<T>::empty() {
	return (size == 0);
}



template <class T>
Stack<T>::~Stack() {
	delete[]arr;
}

template class Stack<int>;
template class Stack<char>;
template class Stack<float>;