#pragma once
using namespace System;

ref struct ConnectionPath {
//<<<<<<< HEAD
	//static System::String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:/Users/Ivan/Desktop/Payroll_Info.accdb";
//};
//=======

	static System::String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:/Users/Ivan/Desktop/Payroll_Info.accdb";

};



/*
//used to validate that its a proper emp id in the doc
using namespace System::Data;
using namespace System::Data::OleDb;
bool isValidID(System::String^ empID)
{
	//is a number
	Int32::Parse(empID);
	/*try
	{

	}
	catch (FormatException e)
	{
		return false;
	}

	
	//is valid id
OleDbConnection^ conn = gcnew OleDbConnection(ConnectionPath::connectionString);
conn->Open();

//create command using sql syntax to interact with the DB
OleDbCommand^ cmd = conn->CreateCommand();
cmd->CommandType = CommandType::Text;
cmd->CommandText = "SELECT [ID] FROM EmployeeInfo";

//reader reads data from DB, Read() readers the next record returns true if there are more records to read
OleDbDataReader^ reader = cmd->ExecuteReader();
while (reader->Read())
{
	if (reader["ID"]->Equals(Int32::Parse(empID)))
		return true;
}
conn->Close();

return false;
}

*/

//>>>>>>> 308eaa3e5daa60a9a7362a76ac240e86cbf8d9a6
