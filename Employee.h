#pragma once
#include<string>
#include<iostream>
using namespace std;
//namespace Record {}
	const int StartSalary{ 30000 };

	class Employee
	{
		 string FisrtName;
		string LastName;
		int EmployeeNum;
		int salary;
		int hired;
	public:
		Employee();
		Employee(string FirstName,string LastName,int EmployeeNum,int salary,int hired);
		void promote(int raiseAmount = 1000);
		void demote(int demeritAmount = 1000);
		void hire();
		void fire();//dismisses
		void display()const;   //output employee

		void setFirstName(const string&mFirstName);
		const string&getFirstName()const;

		void setLastName(const string&mLastName);
		const string& getLastName()const;

		void setEmployee(int mEmployeeNum);
		int getEmployee()const;

		void setSalary(int msalary);
		int getSalary()const;

		bool getisHired()const;
		~Employee();
	};

