#include "Stack.h"

Stack::Stack(vector<string> newAbsences)
{
	this->mAbsences = newAbsences;
}

Stack::Stack(int num)
{

}


Stack::~Stack()
{

}

bool Stack::isEmpty()
{
	bool empty = false;

	if (this->mAbsences.empty)
	{
		empty = true;
	}

	return empty;
}

string Stack::pop()
{
	string date = "";
	
	if (!isEmpty())
	{
		date = this->mAbsences.at(0);
		this->mAbsences.erase(this->mAbsences.begin());
	}

	return date;
}

string Stack::peek()
{
	string date = "";

	if (!isEmpty())
	{
		date = this->mAbsences.at(0);
	}

	return date;
}

void Stack::push(string newString)
{
	this->mAbsences.push_back(newString);
}
