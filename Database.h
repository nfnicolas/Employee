#pragma once
#include"Employee.h"
#include<vector>
#include<iostream>
#include<string>
using namespace std;
const int FirstEmployeeNumber = 100;
class Database
{
	vector<Employee>mEmployee;
	int nextEmployeesNumber;
public:
	Database();
	Employee&addEmployee(string FirstName, string LastName);
	void displayAll()const;
	void displayCurrent()const;
	void displayFormer()const;
	~Database();
};

