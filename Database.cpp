#include "Database.h"



Database::Database():nextEmployeesNumber(FirstEmployeeNumber)
{
}

Employee & Database::addEmployee(string FirstName, string LastName)
{
	Employee theEmployee;
	theEmployee.setFirstName(FirstName);
	theEmployee.setLastName(LastName);
	theEmployee.setEmployee(nextEmployeesNumber++);
	theEmployee.hire();
	mEmployee.push_back(theEmployee);
	return mEmployee[mEmployee.size() - 1];
}

void Database::displayAll() const
{
	for (const auto&Employee : mEmployee)
		Employee.display();
}

void Database::displayCurrent() const
{
	for (const auto&Employee : mEmployee)
		if (Employee.getisHired())
			Employee.display();
}

void Database::displayFormer() const
{
	for (const auto&Employee : mEmployee)
		if (Employee.getisHired())
			Employee.display();
}


Database::~Database()
{
}
