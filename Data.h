#pragma once

#include "Stack.h"

class Data
{
public:
	// constructor
	Data(int newRecordNumber = 0, int newIDNumber = 0, string newFirstName = "", string newLastName = "", string newEmail = "", int newUnits = 0,
		string newMajor = "", string newClassStanding = "", Stack newAttendance = Stack(0));

	// destructor
	~Data();

	// getters
	int getRecordNumber();
	int getIDNumber();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getUnits();
	string getMajor();
	string getClassStanding();
	Stack getAttendance();

	// setters
	void setRecordNumber(int newRecordNumber);
	void setIDNumber(int newIDNumber);
	void setFirstName(string newFirstName);
	void setLastName(string newLastName);
	void setEmail(string newEmail);
	void setUnits(int newUnits);
	void setMajor(string newMajor);
	void setClassStanding(string newClassStanding);

private:
	int mRecordNumber;
	int mIDNumber;
	string mFirstName;
	string mLastName;
	string mEmail;
	int mUnits;
	string mMajor;
	string mClassStanding;
	int mNumAbsences;

	Stack mAbsences;
};