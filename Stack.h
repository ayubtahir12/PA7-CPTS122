#pragma once

#include <vector>

#include "Node.h"

using std::vector;

class Stack
{
public:
	// constructor
	Stack(vector<string> newAbsences);
	Stack(int num);

	// destructor
	~Stack();

	// stack operations
	bool isEmpty();
	string pop();
	string peek();
	void push(string newString);

private:
	vector<string> mAbsences;

};