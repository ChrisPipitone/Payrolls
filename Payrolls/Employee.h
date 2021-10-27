#include<ctime>
#include "Login.h"

enum class HireType { PartTime, FullTime };
enum class WageType { Salary, Hourly };


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;


class Employee : public Login
{
public:
	Employee(std::string lastName, std::string firstName);
	Employee();

	static Employee* CreateEmp(std::string lastName, std::string firstName, WageType type);





	std::string lastName;
	std::string firstName;

	//Company details
	int id;
	std::string department;
	std::string jobTitle;
	std::string location;
	time_t hireDate;
	void changeAccessLevel(AccessLevel level); //unnecessary but more intuitive

	//TimeSheet timeSheet;

	/*
	
	std::string dateOfHire;


	//metrics
	int hoursWorked;
	int numSickDays;
	int numVacationDays;



	int yearsWorked();

	//
	void getBenefits();
	void assignBenefit();

	*/
	//Benefits
	//Benefits benefits;

	//utility
	virtual std::string toString();

private:
	//Personal
	std::string SSN;
	std::string dateOfBirth;
	std::string homeAddress;
	//std::string marriageStatus;
};
/*
//assume all emps are salaried?
class Salaried_Emp : public Employee
{
public:
	Salaried_Emp(std::string lastName, std::string firstName) : Employee(lastName, firstName) { type = HireType::FullTime; }
	HireType type;

	//Benefits

};
*/


class Hourly_Emp : public Employee
{
public:
	//hmmmmmmmm have to make a desicion on how to do this 
	Hourly_Emp(std::string lastName, std::string firstName) : Employee (lastName, firstName) { type = HireType::FullTime; }

	//can be treated like full time at times depending on hours worked
	//bool eligibleBenefits(TimeSheet timeSheet);
	
	void purchaseBenefits();

	//can be full time or part time
	void setHireType(HireType type);
	
	void setWage(double newWage);
	double getWage();

private:
	double wage;
	HireType type;
};	


