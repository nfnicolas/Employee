#include "Employee.h"
Employee::Employee()
 {}

Employee::Employee(string FirstName, string LastName, int EmployeeNum, int salary, int hired)
{
	FirstName = ("");
	LastName=("");
	EmployeeNum = (-1);
	salary= StartSalary ;
	hired= false ;
}

void Employee::promote(int raiseAmount)
{
	setSalary(getSalary() + raiseAmount);
}

void Employee::demote(int demeritAmount)
{
	setSalary(getSalary() - demeritAmount);
}

void Employee::hire()
{
	hired = true;
}

void Employee::fire()
{
	hired = false;
}

void Employee::display() const
{
	cout << "Employee: " << getFirstName() <<" "<< getLastName() << "\n";
	cout << "---------------\n";
	cout << (hired ? "Current employee" : "Former employee") << endl;
	cout << "EmployeeNumber  " << getEmployee() << endl;
	cout << endl;
}

void Employee::setFirstName(const string & mFirstName)
{
	FisrtName = mFirstName;
}

const string & Employee::getFirstName() const
{
	return FisrtName;
}

void Employee::setLastName(const string & mLastName)
{
	LastName = mLastName;
}

const string & Employee::getLastName() const
{
	return LastName;
}

void Employee::setEmployee(int mEmployeeNum)
{
	EmployeeNum = mEmployeeNum;
}

int Employee::getEmployee() const
{
	return EmployeeNum;
}

void Employee::setSalary(int msalary)
{
	salary = msalary;
}

int Employee::getSalary() const
{
	return salary;
}


bool Employee::getisHired() const
{
	return false;
}

Employee::~Employee()
{
}
