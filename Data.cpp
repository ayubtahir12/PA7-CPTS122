#include "Data.h"

Data::Data(int newRecordNumber, int newIDNumber, string newFirstName, string newLastName, string newEmail, int newUnits, string newMajor, string newClassStanding,
	Stack newAttendance)
{
	this->mRecordNumber = newRecordNumber;
	this->mIDNumber = newIDNumber;
	this->mFirstName = newFirstName;
	this->mLastName = newLastName;
	this->mEmail = newEmail;
	this->mUnits = newUnits;
	this->mMajor = newMajor;
	this->mClassStanding = newClassStanding;
	this->mAbsences = newAttendance;
}

Data::~Data()
{

}

int Data::getRecordNumber()
{
	int recordNumber = this->mRecordNumber;
	
	return recordNumber;
}

int Data::getIDNumber()
{
	int IDNumber = this->mIDNumber;

	return IDNumber;
}

string Data::getFirstName()
{
	string firstName = this->mFirstName;

	return firstName;
}

string Data::getLastName()
{
	string lastName = this->mLastName;

	return lastName;
}

string Data::getEmail()
{
	string email = this->mEmail;

	return email;
}

int Data::getUnits()
{
	int units = this->mUnits;

	return units;
}

string Data::getMajor()
{
	string major = this->mMajor;
	
	return major;
}

string Data::getClassStanding()
{
	string classStanding = this->mClassStanding;

	return classStanding;
}

void Data::setRecordNumber(int newRecordNumber)
{
	this->mRecordNumber = newRecordNumber;
}

void Data::setIDNumber(int newIDNumber)
{
	this->mIDNumber = newIDNumber;
}

void Data::setFirstName(string newFirstName)
{
	this->mFirstName = newFirstName;
}

void Data::setLastName(string newLastName)
{
	this->mLastName = newLastName;
}

void Data::setEmail(string newEmail)
{
	this->mEmail = newEmail;
}

void Data::setUnits(int newUnits)
{
	this->mUnits = newUnits;
}

void Data::setMajor(string newMajor)
{
	this->mMajor = newMajor;
}

void Data::setClassStanding(string newClassStanding)
{
	this->mClassStanding = newClassStanding;
}
