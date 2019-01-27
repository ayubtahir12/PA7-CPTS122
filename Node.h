#pragma once

#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fstream;
using std::ifstream;
using std::ofstream;

template <class T>
class Node
{

public:
	// constructor
	Node(T newData = NULL);

	// destructor
	~Node();

	// getter
	T getData();
	Node<T> getpNext();

	// setter
	void setData(T newData);
	void setpNext(Node<T> *newpNext);


private:
	T mData;
	Node<T> *mpNext;
};


// template functions

template<class T>
Node<T>::Node(T newData)
{
	this->mData = newData;
	this->mpNext = nullptr;
}

template<class T>
Node<T>::~Node()
{

}

template<class T>
T Node<T>::getData()
{
	return this->mData;
}

template<class T>
Node<T> Node<T>::getpNext()
{
	return this->mpNext;
}

template<class T>
void Node<T>::setData(T newData)
{
	this->mData = newData;
}

template<class T>
void Node<T>::setpNext(Node<T> *newpNext)
{
	this->mpNext = newpNext;
}
