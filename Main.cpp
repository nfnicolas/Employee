#include<iostream>
#include<assert.h>
#include"Employee.h"
#include"Database.h"
using namespace std;
int displayMenu();
void doFire(Database&kl);
void doHire(Database&kl);
void doPromote(Database&kl);
void doDemote(Database&kl);
int main(int argc, char*argv[])
{
	Database ob;
	bool done = false;
	while (!done) {
		int y = displayMenu();
		switch (y)
		{
		case 1:
			doHire(ob); break;
		case 2:
			doFire(ob); break;
		case 3:
			doPromote(ob); break;
		case 4:
			ob.displayAll(); break;
		case 5:
			ob.displayCurrent(); break;
		case 6:
			ob.displayFormer(); break;
		case 0:
			done = true;
		default:
			cerr << "Unknow komand\n";
		}
	}
	return 0;
}

int displayMenu()
{
	int selection;
	cout << "\nEmployee Database\n";
	cout << "-----------------\n";
	cout << "1) Hire a new Employee\n";
	cout << "2) Fire an employee\n";
	cout << "3) Promote an employee\n";
	cout << "4) List all employees\n";
	cout << "5) List all current employees\n ";
	cout << "6) List all former employees\n";
	cout << "0) Quit\n ";
	cin >> selection;
	return selection;
}

void doFire(Database & kl)
{
	int EmployeeNum;
	cout << "What employee number?\n";
	cin >> EmployeeNum;
}

void doHire(Database & kl)
{
	string FirstName;
	string LastName;
	cout << "Enter First Name\n";
	cin >> FirstName;
	cout << "\nEnter last name\n";
	cin >> LastName;
}

void doPromote(Database & kl)
{
	int EmployeeNum;
	int raiceAmount;
	cout << "Employee number?\n";
	cin >> EmployeeNum;
	cout << "How much of a raice?\n";
}

void doDemote(Database & kl)
{
	int EmployeeNum;
	int demoteAmount;
	cout << "Employee number?\n";
	cin >> EmployeeNum;
	cout << "How much of a demote\n";
	cin >> demoteAmount;
}
