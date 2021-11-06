#include <iostream>
#include "Employee.h"

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

Employee::Employee()
{
    //default input values tbd
}

/*void Employee::deleteEmployee(std::string) {
    delete Employee.firstName;
    delete Employee.lastName;
    delete Employee.SSN;
    delete Employee.dateOfBirth;
    delete Employee.homeAddress;
}*/