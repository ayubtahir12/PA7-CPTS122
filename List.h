#pragma once

#include "Node.h"

void printMenu();

template <class T>
class List
{
public:
	// constructor
	List(T *newpHead = nullptr);
	// destructor
	~List();

	// setter
	void setpHead(T *newpHead);
	// getter
	T *getpHead();

	// inserts
	void insertAtFront(Data newData);
	void insertAtEnd(Data newData);

	// deletes
	void deleteAtFront();
	void deleteAtEnd();

private:
	T *mpHead;
};

template<class T>
List<T>::List(T *newpHead)
{
	this->mpHead = newpHead;
}

template<class T>
List<T>::~List()
{

}

template<class T>
void List<T>::setpHead(T *newpHead)
{
	this->mpHead = newpHead;
}

template<class T>
T * List<T>::getpHead()
{
	return this->mpHead;
}



template<class T>
void List<T>::insertAtFront(Data newData)
{
	// create a new node with the given data
	Node<Data> *pMem = new Node<Data>(newData);

	// set the new node's next ptr to the head ptr
	pMem->setpNext(this->getpHead());

	// set the head ptr to the new node
	this->setpHead(pMem);

}

template<class T>
void List<T>::insertAtEnd(Data newData)
{

}

template<class T>
void List<T>::deleteAtFront()
{

}

template<class T>
void List<T>::deleteAtEnd()
{

}
