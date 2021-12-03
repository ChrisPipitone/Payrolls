#pragma once
using namespace System;

ref struct ConnectionPath {
	static System::String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:/Users/Chris/Desktop/Payroll_Info.accdb";
	static System::String^ connectionPrevious = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:/Users/chris/Desktop/PreviousEmployees.accdb";
};