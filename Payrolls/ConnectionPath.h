#pragma once
using namespace System;

ref struct ConnectionPath {
	static System::String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:/Users/Hmab/Desktop/Payroll_Info.accdb";
	static System::String^ connectionPrevious = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:/Users/Hmab/Desktop/PreviousEmployees.accdb";
};