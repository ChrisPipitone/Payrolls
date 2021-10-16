#include "Employee.h"

Employee::Employee()
{
    //default input values tbd
}

Employee* Employee::CreateEmp(std::string lastName, std::string firstName, WageType type)
{
    if (type == WageType::Hourly) 
    {
        return new Hourly_Emp(lastName, firstName);
    }
    else if (type == WageType::Salary)
    {
        return new Employee(lastName, firstName);
    }
    else
        return nullptr;
}

void Employee::changeAccessLevel(AccessLevel level)
{
    this->level = level;
}

Employee::Employee(std::string lastName, std::string firstName)
{
    //id assignment tbd based on database or csv

    this->lastName = lastName;
    this->firstName = firstName;

    //how to input these values using gui????

    //Time now
    hireDate = time(0);
}


std::string Employee::toString()
{
    return std::string();
}
