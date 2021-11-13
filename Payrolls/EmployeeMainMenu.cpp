#include "EmployeeMainMenu.h"

void Payrolls::EmployeeMainMenu::init(System::String^ empID)
{

	//hide all panels
	this->editPersonal_panel->Hide();
	this->viewBenefits_panel->Hide();
	this->viewPaystub_panel->Hide();


	this->infoGlance_panel->Show();

	fillData(empID);

}

void Payrolls::EmployeeMainMenu::fillData(System::String^ empID)
{
	//connect to database using string containing the path to the database file on the local disk
	OleDbConnection^ conn = gcnew OleDbConnection(ConnectionPath::connectionString);
	conn->Open();

	//create command using sql syntax to interact with the DB
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "SELECT * FROM EmployeeInfo WHERE [ID] = @id";
	cmd->Parameters->AddWithValue("@id", empID);

	//reader reads data from DB, Read() readers the next record returns true if there are more records to read
	OleDbDataReader^ reader = cmd->ExecuteReader();
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


		//text box's in personal info user can edit and sumbit changes in that panel to these values 
		this->prefEmail_textbox->Text = reader["Email"]->ToString();
		this->phoneNumber_textBox->Text = reader["PhoneNumber"]->ToString();
	
		//Benefits
		empHealthPackage_label->Text = reader["HealthCoverage"]->ToString();
		empDentalPackage_label->Text = reader["DentalCoverage"]->ToString();
		empVisionPackage_label->Text = reader["VisionCoverage"]->ToString();


		if (empHealthPackage_label->Text == "None")
			benefitName_label1->Text = "None Chosen";
		else
			benefitName_label1->Text = "Health";

		if (empDentalPackage_label->Text == "None")
			benefitName_label3->Text = "None Chosen";
		else
			benefitName_label2->Text = "Dental";

		if (empVisionPackage_label->Text == "None")
			benefitName_label3->Text = "None Chosen";
		else
			benefitName_label3->Text = "Vision";

		System::String^ cost;
		if (empHealthPackage_label->Text == "None")
			cost = "0";
		else
			cost = "30";
		healthCost_label->Text = cost + "% of you gross income.";

		if (empDentalPackage_label->Text == "None")
			cost = "0";
		else
			cost = "30";
		dentalCost_label->Text = cost + "% of you gross income.";

		if (empVisionPackage_label->Text == "None")
			cost = "0";
		else
			cost = "30";
		visionCost_label->Text = cost + "% of you gross income.";

		//end benefits 


		/*
		emp.id = toStandardString(reader["ID"]->ToString());
		emp.firstName = toStandardString(reader["Firstname"]->ToString());
		emp.lastName = toStandardString(reader["Lastname"]->ToString());

		/*
		[Password]
		[SSN]

		[Age]
		[Gender]

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