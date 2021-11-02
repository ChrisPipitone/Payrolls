#include "EmployeeMainMenu.h"

void Payrolls::EmployeeMainMenu::init(System::String^ empID)
{
	//to be replaced hopfully
	System::String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:/Users/Chris/Desktop/Payroll_Info.accdb";

	//hide all panels
	this->editPersonal_panel->Hide();
	this->viewBenefits_panel->Hide();

	fillData(connectionString, empID);

}

void Payrolls::EmployeeMainMenu::fillData(System::String^ connectionString, System::String^ empID)
{
	//connect to database using string containing the path to the database file on the local disk
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	conn->Open();

	//create command using sql syntax to interact with the DB
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "SELECT * FROM EmployeeInfo WHERE [ID] = @id";
	cmd->Parameters->AddWithValue("@id", empID);

	//reader reads data from DB, Read() readers the next record returns true if there are more records to read
	OleDbDataReader^ reader = cmd->ExecuteReader();
	Employee emp;
	while (reader->Read())
	{
		this->Emp_ID->Text = reader["ID"]->ToString();
		this->Emp_id_glance->Text = this->Emp_ID->Text;

		this->Emp_firstName->Text = reader["Firstname"]->ToString();
		this->Emp_firstName_glance->Text = this->Emp_firstName->Text;

		this->Emp_lastName->Text = reader["Lastname"]->ToString();
		this->Emp_lastName_glance->Text = this->Emp_lastName->Text;

		this->Emp_dob->Text = reader["DateofBirth"]->ToString();


		this->Emp_sex->Text = reader["Gender"]->ToString();

		this->Emp_department->Text = reader["Position"]->ToString();
		this->Emp_dept_glance->Text = this->Emp_department->Text;

		/*
		emp.id = toStandardString(reader["ID"]->ToString());
		emp.firstName = toStandardString(reader["Firstname"]->ToString());
		emp.lastName = toStandardString(reader["Lastname"]->ToString());

		/*
		[Password]
		[SSN]

		[Age]
		[Gender]
		[Email]
		[PhoneNumber]
		[Address1]
		[Zipcode]

		[Position]
		[Hours]
		[OvertimeHours]
		[OvertimePay
		]
		[HourlyPay]
		[Weeklygrosspay]
		*/
	}
	conn->Close();

}
