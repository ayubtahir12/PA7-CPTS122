#include "AttendanceApp.h"

Menu::Menu()
{

}

Menu::~Menu()
{

}

void Menu::printMenu()
{
	cout << "1) Import course list" << endl;
	cout << "2) Load master list" << endl;
	cout << "3) Store master list" << endl;
	cout << "4) Mark absences" << endl;
	cout << "5) Generate report" << endl;
	cout << "6) Exit" << endl;
}

int Menu::menuOption()
{
	int option;

	do
	{
		system("cls");
		printMenu();
		cout << "\nSelection: ";
		cin >> option;
	} while (option < 1 || option > 6);

	return option;
}

void Menu::runOperation(int option)
{
	switch (option)
	{
	// 1) Import course list
	case 1:
	{
		fstream input("classList.csv");

		if (input.is_open())
		{
			importCourseList(input);

			cout << "Class List read in successfully!" << endl;
			system("pause");
		}

		else
		{
			cout << "Error: Unable to open file" << endl;
			system("pause");
		}

		input.close();

		break;
	}
	// 2) Load master list
	case 2:
	{
		fstream input("master.txt");

		if (input.is_open())
		{
			loadMasterList(input);

			cout << "Master List read in successfully!" << endl;
			system("pause");
		}
		else
		{
			cout << "Error: Unable to open file" << endl;
			system("pause");
		}

		input.close();
		
		break;
	}
	// 3) Store master list
	case 3:
	{
		fstream output("master.txt");

		if (output.is_open())
		{
			storeMasterList(output);

			cout << "List recorded successfully!" << endl;
			system("pause");
		}
		else
		{
			cout << "Error: Unable to read file" << endl;
			system("pause");
		}

		break;
	}
	// 4) Mark absences
	case 4:
	{
		markAbsences();

		break;
	}
	// 5) Generate report
	case 5:
	{
		generateReport();

		break;
	}
	// 6) Exit
	case 6:
	{
		break;
	}
	default:
	{
		cout << "Error. Please re-run program." << endl;
		option = 6;
	}
	}
}

void Menu::importCourseList(fstream &courseList)
{
	
}

void Menu::loadMasterList(fstream &masterList)
{
	
}

void Menu::storeMasterList(fstream &masterList)
{

}

void Menu::markAbsences()
{

}

void Menu::generateReport()
{

}
