#include "Employee.h"

Employee::Employee()
{
    //default input values tbd
}

/*
System::String^ getFromDB(System::String^ id)
{

    /*
    OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:/Users/Chris/Desktop/Payroll_Info.accdb");
    conn->Open();
    OleDbCommand^ cmd = conn->CreateCommand();
    cmd->CommandType = CommandType::Text;
    cmd->CommandText = "SELECT * FROM EmployeeInfo WHERE [ID] = @id";
    cmd->Parameters->AddWithValue("@id", id);
    cmd->ExecuteNonQuery();
    cmd = conn->
    DataTable^ datatable = gcnew DataTable();
    OleDbDataAdapter^ dataAdapter = gcnew OleDbDataAdapter(cmd);
    dataAdapter->Fill(datatable);

    
    System::String^ test = datatable->ToString();

    return test;
    
        
}
/*
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
*/


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
