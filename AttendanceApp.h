#pragma once

#include "List.h"
#include "Data.h"

class Menu
{
public:
	// constructor
	Menu();
	// destructor
	~Menu();

	// menu
	void printMenu();
	int menuOption();
	void runOperation(int option);

	// operations
	void importCourseList(fstream &courseList);
	void loadMasterList(fstream &masterList);
	void storeMasterList(fstream &masterList);
	void markAbsences();
	void generateReport();
	


private:
	List<Node<Data>> masterList;

};