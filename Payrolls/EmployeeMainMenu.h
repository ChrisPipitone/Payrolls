#pragma once
#include "Employee.h"
#include<string>


namespace Payrolls {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	//used to convert  System::String^ to std::string 
	using System::Runtime::InteropServices::Marshal;
	static std::string toStandardString(System::String^ string)
	{
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);

		return returnString;
	}

	/// <summary>
	/// Summary for EmployeeMainMenu
	/// </summary>
	public ref class EmployeeMainMenu : public System::Windows::Forms::Form
	{
	public:
		void fillData(System::String^ connectionString, System::String^ empID);
		void init(System::String^ empID);

		EmployeeMainMenu(System::String^ empID)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EmployeeMainMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Label^ mainMenuLeft_title;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ editPersonal_panel;
	private: System::Windows::Forms::Panel^ viewBenefits_panel;
	private: System::Windows::Forms::Panel^ ViewPaystubs_panel;
	private: System::Windows::Forms::Panel^ ViewTimesheet_panel;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Label^ sex_label;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ preferedPhoneNumber_label;

	private: System::Windows::Forms::Label^ preferedEmail_label;
	private: System::Windows::Forms::Label^ username_label;


	private: System::Windows::Forms::Label^ department_label;
	private: System::Windows::Forms::Label^ Emp_ID;
	private: System::Windows::Forms::Label^ id_label;
	private: System::Windows::Forms::Label^ Emp_jobtitle;

	private: System::Windows::Forms::Label^ jobTitle_label;
	private: System::Windows::Forms::Label^ Emp_department;
	private: System::Windows::Forms::Label^ Emp_sex;
	private: System::Windows::Forms::Label^ Emp_dob;
	private: System::Windows::Forms::Label^ Emp_lastName;


	private: System::Windows::Forms::Label^ Emp_firstName;
	private: System::Windows::Forms::Button^ persInfoSubmit_button;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ homeAddress_label;

	private: System::Windows::Forms::ToolStripButton^ editPersonalInfo_button;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ viewBenefits_button;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ viewPaystub_botton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripButton^ viewTimesheet_button;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripButton^ InfoAtGlance_button;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator5;
	private: System::Windows::Forms::ToolStripButton^ logout_button;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ Emp_grossIncome;
	private: System::Windows::Forms::Label^ grossIncome_label;


	private: System::Windows::Forms::Label^ Emp_payRate;

	private: System::Windows::Forms::Label^ Emp_incomeType;





	private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Button^ button2;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent()
		{
			this->mainMenuLeft_title = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->editPersonal_panel = (gcnew System::Windows::Forms::Panel());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Emp_ID = (gcnew System::Windows::Forms::Label());
			this->id_label = (gcnew System::Windows::Forms::Label());
			this->Emp_jobtitle = (gcnew System::Windows::Forms::Label());
			this->Emp_grossIncome = (gcnew System::Windows::Forms::Label());
			this->grossIncome_label = (gcnew System::Windows::Forms::Label());
			this->Emp_payRate = (gcnew System::Windows::Forms::Label());
			this->Emp_incomeType = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->jobTitle_label = (gcnew System::Windows::Forms::Label());
			this->Emp_department = (gcnew System::Windows::Forms::Label());
			this->department_label = (gcnew System::Windows::Forms::Label());
			this->Emp_sex = (gcnew System::Windows::Forms::Label());
			this->sex_label = (gcnew System::Windows::Forms::Label());
			this->Emp_dob = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Emp_lastName = (gcnew System::Windows::Forms::Label());
			this->Emp_firstName = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->persInfoSubmit_button = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->preferedPhoneNumber_label = (gcnew System::Windows::Forms::Label());
			this->preferedEmail_label = (gcnew System::Windows::Forms::Label());
			this->homeAddress_label = (gcnew System::Windows::Forms::Label());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->viewBenefits_panel = (gcnew System::Windows::Forms::Panel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->editPersonalInfo_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->viewBenefits_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->viewPaystub_botton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->viewTimesheet_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->InfoAtGlance_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->logout_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->editPersonal_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->viewBenefits_panel->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// mainMenuLeft_title
			// 
			this->mainMenuLeft_title->AutoSize = true;
			this->mainMenuLeft_title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainMenuLeft_title->Location = System::Drawing::Point(278, 91);
			this->mainMenuLeft_title->Name = L"mainMenuLeft_title";
			this->mainMenuLeft_title->Size = System::Drawing::Size(437, 37);
			this->mainMenuLeft_title->TabIndex = 0;
			this->mainMenuLeft_title->Text = L"Your Information At A Glance";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(84, 208);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(84, 295);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(84, 388);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Department:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(84, 472);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(242, 25);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Current Benefit Chosen:";
			// 
			// editPersonal_panel
			// 
			this->editPersonal_panel->Controls->Add(this->splitContainer1);
			this->editPersonal_panel->Location = System::Drawing::Point(0, 28);
			this->editPersonal_panel->Name = L"editPersonal_panel";
			this->editPersonal_panel->Size = System::Drawing::Size(1072, 661);
			this->editPersonal_panel->TabIndex = 2;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->button2);
			this->splitContainer1->Panel1->Controls->Add(this->Emp_ID);
			this->splitContainer1->Panel1->Controls->Add(this->id_label);
			this->splitContainer1->Panel1->Controls->Add(this->Emp_jobtitle);
			this->splitContainer1->Panel1->Controls->Add(this->Emp_grossIncome);
			this->splitContainer1->Panel1->Controls->Add(this->grossIncome_label);
			this->splitContainer1->Panel1->Controls->Add(this->Emp_payRate);
			this->splitContainer1->Panel1->Controls->Add(this->Emp_incomeType);
			this->splitContainer1->Panel1->Controls->Add(this->label8);
			this->splitContainer1->Panel1->Controls->Add(this->label35);
			this->splitContainer1->Panel1->Controls->Add(this->jobTitle_label);
			this->splitContainer1->Panel1->Controls->Add(this->Emp_department);
			this->splitContainer1->Panel1->Controls->Add(this->department_label);
			this->splitContainer1->Panel1->Controls->Add(this->Emp_sex);
			this->splitContainer1->Panel1->Controls->Add(this->sex_label);
			this->splitContainer1->Panel1->Controls->Add(this->Emp_dob);
			this->splitContainer1->Panel1->Controls->Add(this->label11);
			this->splitContainer1->Panel1->Controls->Add(this->Emp_lastName);
			this->splitContainer1->Panel1->Controls->Add(this->Emp_firstName);
			this->splitContainer1->Panel1->Controls->Add(this->label10);
			this->splitContainer1->Panel1->Controls->Add(this->label9);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->persInfoSubmit_button);
			this->splitContainer1->Panel2->Controls->Add(this->textBox4);
			this->splitContainer1->Panel2->Controls->Add(this->textBox3);
			this->splitContainer1->Panel2->Controls->Add(this->textBox1);
			this->splitContainer1->Panel2->Controls->Add(this->textBox2);
			this->splitContainer1->Panel2->Controls->Add(this->preferedPhoneNumber_label);
			this->splitContainer1->Panel2->Controls->Add(this->preferedEmail_label);
			this->splitContainer1->Panel2->Controls->Add(this->homeAddress_label);
			this->splitContainer1->Panel2->Controls->Add(this->username_label);
			this->splitContainer1->Size = System::Drawing::Size(1072, 661);
			this->splitContainer1->SplitterDistance = 541;
			this->splitContainer1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(377, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(45, 31);
			this->button2->TabIndex = 4;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EmployeeMainMenu::button2_Click_1);
			// 
			// Emp_ID
			// 
			this->Emp_ID->AutoSize = true;
			this->Emp_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_ID->Location = System::Drawing::Point(224, 45);
			this->Emp_ID->Name = L"Emp_ID";
			this->Emp_ID->Size = System::Drawing::Size(0, 24);
			this->Emp_ID->TabIndex = 3;
			// 
			// id_label
			// 
			this->id_label->AutoSize = true;
			this->id_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->id_label->Location = System::Drawing::Point(56, 45);
			this->id_label->Name = L"id_label";
			this->id_label->Size = System::Drawing::Size(32, 24);
			this->id_label->TabIndex = 3;
			this->id_label->Text = L"ID:";
			// 
			// Emp_jobtitle
			// 
			this->Emp_jobtitle->AutoSize = true;
			this->Emp_jobtitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_jobtitle->Location = System::Drawing::Point(224, 368);
			this->Emp_jobtitle->Name = L"Emp_jobtitle";
			this->Emp_jobtitle->Size = System::Drawing::Size(0, 24);
			this->Emp_jobtitle->TabIndex = 3;
			// 
			// Emp_grossIncome
			// 
			this->Emp_grossIncome->AutoSize = true;
			this->Emp_grossIncome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_grossIncome->Location = System::Drawing::Point(224, 556);
			this->Emp_grossIncome->Name = L"Emp_grossIncome";
			this->Emp_grossIncome->Size = System::Drawing::Size(0, 24);
			this->Emp_grossIncome->TabIndex = 3;
			// 
			// grossIncome_label
			// 
			this->grossIncome_label->AutoSize = true;
			this->grossIncome_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->grossIncome_label->Location = System::Drawing::Point(55, 557);
			this->grossIncome_label->Name = L"grossIncome_label";
			this->grossIncome_label->Size = System::Drawing::Size(132, 24);
			this->grossIncome_label->TabIndex = 3;
			this->grossIncome_label->Text = L"Gross Income:";
			// 
			// Emp_payRate
			// 
			this->Emp_payRate->AutoSize = true;
			this->Emp_payRate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_payRate->Location = System::Drawing::Point(224, 510);
			this->Emp_payRate->Name = L"Emp_payRate";
			this->Emp_payRate->Size = System::Drawing::Size(0, 24);
			this->Emp_payRate->TabIndex = 3;
			// 
			// Emp_incomeType
			// 
			this->Emp_incomeType->AutoSize = true;
			this->Emp_incomeType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_incomeType->Location = System::Drawing::Point(222, 459);
			this->Emp_incomeType->Name = L"Emp_incomeType";
			this->Emp_incomeType->Size = System::Drawing::Size(0, 24);
			this->Emp_incomeType->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label8->Location = System::Drawing::Point(55, 459);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(126, 24);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Income Type:";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label35->Location = System::Drawing::Point(55, 511);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(89, 24);
			this->label35->TabIndex = 3;
			this->label35->Text = L"Pay Rate:";
			// 
			// jobTitle_label
			// 
			this->jobTitle_label->AutoSize = true;
			this->jobTitle_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->jobTitle_label->Location = System::Drawing::Point(56, 368);
			this->jobTitle_label->Name = L"jobTitle_label";
			this->jobTitle_label->Size = System::Drawing::Size(86, 24);
			this->jobTitle_label->TabIndex = 3;
			this->jobTitle_label->Text = L"Job Title:";
			// 
			// Emp_department
			// 
			this->Emp_department->AutoSize = true;
			this->Emp_department->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_department->Location = System::Drawing::Point(224, 320);
			this->Emp_department->Name = L"Emp_department";
			this->Emp_department->Size = System::Drawing::Size(0, 24);
			this->Emp_department->TabIndex = 3;
			// 
			// department_label
			// 
			this->department_label->AutoSize = true;
			this->department_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->department_label->Location = System::Drawing::Point(56, 320);
			this->department_label->Name = L"department_label";
			this->department_label->Size = System::Drawing::Size(112, 24);
			this->department_label->TabIndex = 3;
			this->department_label->Text = L"Department:";
			// 
			// Emp_sex
			// 
			this->Emp_sex->AutoSize = true;
			this->Emp_sex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_sex->Location = System::Drawing::Point(223, 228);
			this->Emp_sex->Name = L"Emp_sex";
			this->Emp_sex->Size = System::Drawing::Size(0, 24);
			this->Emp_sex->TabIndex = 3;
			// 
			// sex_label
			// 
			this->sex_label->AutoSize = true;
			this->sex_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->sex_label->Location = System::Drawing::Point(55, 228);
			this->sex_label->Name = L"sex_label";
			this->sex_label->Size = System::Drawing::Size(48, 24);
			this->sex_label->TabIndex = 3;
			this->sex_label->Text = L"Sex:";
			// 
			// Emp_dob
			// 
			this->Emp_dob->AutoSize = true;
			this->Emp_dob->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_dob->Location = System::Drawing::Point(223, 184);
			this->Emp_dob->Name = L"Emp_dob";
			this->Emp_dob->Size = System::Drawing::Size(0, 24);
			this->Emp_dob->TabIndex = 3;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label11->Location = System::Drawing::Point(55, 184);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(119, 24);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Date Of Birth:";
			// 
			// Emp_lastName
			// 
			this->Emp_lastName->AutoSize = true;
			this->Emp_lastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_lastName->Location = System::Drawing::Point(223, 134);
			this->Emp_lastName->Name = L"Emp_lastName";
			this->Emp_lastName->Size = System::Drawing::Size(0, 24);
			this->Emp_lastName->TabIndex = 3;
			// 
			// Emp_firstName
			// 
			this->Emp_firstName->AutoSize = true;
			this->Emp_firstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_firstName->Location = System::Drawing::Point(223, 85);
			this->Emp_firstName->Name = L"Emp_firstName";
			this->Emp_firstName->Size = System::Drawing::Size(0, 24);
			this->Emp_firstName->TabIndex = 3;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label10->Location = System::Drawing::Point(55, 134);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 24);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Last Name:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label9->Location = System::Drawing::Point(55, 85);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(106, 24);
			this->label9->TabIndex = 3;
			this->label9->Text = L"First Name:";
			// 
			// persInfoSubmit_button
			// 
			this->persInfoSubmit_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->persInfoSubmit_button->Location = System::Drawing::Point(176, 478);
			this->persInfoSubmit_button->Name = L"persInfoSubmit_button";
			this->persInfoSubmit_button->Size = System::Drawing::Size(174, 51);
			this->persInfoSubmit_button->TabIndex = 9;
			this->persInfoSubmit_button->Text = L"Submit Changes";
			this->persInfoSubmit_button->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(269, 264);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(202, 20);
			this->textBox4->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(189, 197);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(282, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(186, 136);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(285, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(152, 320);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(319, 20);
			this->textBox2->TabIndex = 8;
			// 
			// preferedPhoneNumber_label
			// 
			this->preferedPhoneNumber_label->AutoSize = true;
			this->preferedPhoneNumber_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->preferedPhoneNumber_label->Location = System::Drawing::Point(41, 260);
			this->preferedPhoneNumber_label->Name = L"preferedPhoneNumber_label";
			this->preferedPhoneNumber_label->Size = System::Drawing::Size(222, 24);
			this->preferedPhoneNumber_label->TabIndex = 3;
			this->preferedPhoneNumber_label->Text = L"Prefered Phone Number:";
			// 
			// preferedEmail_label
			// 
			this->preferedEmail_label->AutoSize = true;
			this->preferedEmail_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->preferedEmail_label->Location = System::Drawing::Point(41, 197);
			this->preferedEmail_label->Name = L"preferedEmail_label";
			this->preferedEmail_label->Size = System::Drawing::Size(139, 24);
			this->preferedEmail_label->TabIndex = 4;
			this->preferedEmail_label->Text = L"Prefered Email:";
			// 
			// homeAddress_label
			// 
			this->homeAddress_label->AutoSize = true;
			this->homeAddress_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->homeAddress_label->Location = System::Drawing::Point(38, 132);
			this->homeAddress_label->Name = L"homeAddress_label";
			this->homeAddress_label->Size = System::Drawing::Size(142, 24);
			this->homeAddress_label->TabIndex = 5;
			this->homeAddress_label->Text = L"Home Address:";
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label->Location = System::Drawing::Point(44, 315);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(102, 24);
			this->username_label->TabIndex = 5;
			this->username_label->Text = L"Username:";
			// 
			// viewBenefits_panel
			// 
			this->viewBenefits_panel->Controls->Add(this->label34);
			this->viewBenefits_panel->Controls->Add(this->label28);
			this->viewBenefits_panel->Controls->Add(this->label33);
			this->viewBenefits_panel->Controls->Add(this->label27);
			this->viewBenefits_panel->Controls->Add(this->label32);
			this->viewBenefits_panel->Controls->Add(this->label25);
			this->viewBenefits_panel->Controls->Add(this->label31);
			this->viewBenefits_panel->Controls->Add(this->label26);
			this->viewBenefits_panel->Controls->Add(this->label30);
			this->viewBenefits_panel->Controls->Add(this->label24);
			this->viewBenefits_panel->Controls->Add(this->label29);
			this->viewBenefits_panel->Controls->Add(this->label23);
			this->viewBenefits_panel->Controls->Add(this->label17);
			this->viewBenefits_panel->Location = System::Drawing::Point(0, 28);
			this->viewBenefits_panel->Name = L"viewBenefits_panel";
			this->viewBenefits_panel->Size = System::Drawing::Size(1072, 677);
			this->viewBenefits_panel->TabIndex = 3;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(790, 274);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(184, 25);
			this->label34->TabIndex = 0;
			this->label34->Text = L"Benefit Coverage:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(261, 274);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(184, 25);
			this->label28->TabIndex = 0;
			this->label28->Text = L"Benefit Coverage:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(790, 354);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(135, 25);
			this->label33->TabIndex = 0;
			this->label33->Text = L"Benefit Cost:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(261, 354);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(135, 25);
			this->label27->TabIndex = 0;
			this->label27->Text = L"Benefit Cost:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(600, 274);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(184, 25);
			this->label32->TabIndex = 0;
			this->label32->Text = L"Benefit Coverage:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(71, 274);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(184, 25);
			this->label25->TabIndex = 0;
			this->label25->Text = L"Benefit Coverage:";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(790, 190);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(147, 25);
			this->label31->TabIndex = 0;
			this->label31->Text = L"Benefit Name:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(261, 190);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(147, 25);
			this->label26->TabIndex = 0;
			this->label26->Text = L"Benefit Name:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(600, 354);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(135, 25);
			this->label30->TabIndex = 0;
			this->label30->Text = L"Benefit Cost:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(71, 354);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(135, 25);
			this->label24->TabIndex = 0;
			this->label24->Text = L"Benefit Cost:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(600, 190);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(147, 25);
			this->label29->TabIndex = 0;
			this->label29->Text = L"Benefit Name:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(71, 190);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(147, 25);
			this->label23->TabIndex = 0;
			this->label23->Text = L"Benefit Name:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(425, 51);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(140, 33);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Benefit(s)";
			// 
			// editPersonalInfo_button
			// 
			this->editPersonalInfo_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->editPersonalInfo_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->editPersonalInfo_button->Name = L"editPersonalInfo_button";
			this->editPersonalInfo_button->Size = System::Drawing::Size(145, 22);
			this->editPersonalInfo_button->Text = L"Edit Personal Information";
			this->editPersonalInfo_button->Click += gcnew System::EventHandler(this, &EmployeeMainMenu::editPersonalInfo_button_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// viewBenefits_button
			// 
			this->viewBenefits_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->viewBenefits_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->viewBenefits_button->Name = L"viewBenefits_button";
			this->viewBenefits_button->Size = System::Drawing::Size(81, 22);
			this->viewBenefits_button->Text = L"View Benefits";
			this->viewBenefits_button->Click += gcnew System::EventHandler(this, &EmployeeMainMenu::viewBenefits_button_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// viewPaystub_botton
			// 
			this->viewPaystub_botton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->viewPaystub_botton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->viewPaystub_botton->Name = L"viewPaystub_botton";
			this->viewPaystub_botton->Size = System::Drawing::Size(86, 22);
			this->viewPaystub_botton->Text = L"View Paystubs";
			this->viewPaystub_botton->Click += gcnew System::EventHandler(this, &EmployeeMainMenu::viewPaystub_botton_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// viewTimesheet_button
			// 
			this->viewTimesheet_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->viewTimesheet_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->viewTimesheet_button->Name = L"viewTimesheet_button";
			this->viewTimesheet_button->Size = System::Drawing::Size(93, 22);
			this->viewTimesheet_button->Text = L"View Timesheet";
			this->viewTimesheet_button->Click += gcnew System::EventHandler(this, &EmployeeMainMenu::viewTimesheet_button_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// InfoAtGlance_button
			// 
			this->InfoAtGlance_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->InfoAtGlance_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->InfoAtGlance_button->Name = L"InfoAtGlance_button";
			this->InfoAtGlance_button->Size = System::Drawing::Size(139, 22);
			this->InfoAtGlance_button->Text = L"Information At A Glance";
			this->InfoAtGlance_button->Click += gcnew System::EventHandler(this, &EmployeeMainMenu::InfoAtGlance_button_Click);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(6, 25);
			// 
			// logout_button
			// 
			this->logout_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->logout_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->logout_button->Name = L"logout_button";
			this->logout_button->Size = System::Drawing::Size(49, 22);
			this->logout_button->Text = L"Logout";
			this->logout_button->Click += gcnew System::EventHandler(this, &EmployeeMainMenu::logout_button_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {
				this->editPersonalInfo_button,
					this->toolStripSeparator1, this->viewBenefits_button, this->toolStripSeparator2, this->viewPaystub_botton, this->toolStripSeparator3,
					this->viewTimesheet_button, this->toolStripSeparator4, this->InfoAtGlance_button, this->toolStripSeparator5, this->logout_button
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1072, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// EmployeeMainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1072, 704);
			this->Controls->Add(this->editPersonal_panel);
			this->Controls->Add(this->viewBenefits_panel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->mainMenuLeft_title);
			this->Controls->Add(this->label1);
			this->Name = L"EmployeeMainMenu";
			this->Text = L"EmployeeMainMenu";
			this->editPersonal_panel->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->viewBenefits_panel->ResumeLayout(false);
			this->viewBenefits_panel->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void viewBenefits_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->editPersonal_panel->Hide();
		this->viewBenefits_panel->Show();
	}

	private: System::Void viewPaystub_botton_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void viewTimesheet_button_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void logout_button_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void editPersonalInfo_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->viewBenefits_panel->Hide();
		this->editPersonal_panel->Show();
	}
	private: System::Void InfoAtGlance_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->viewBenefits_panel->Hide();
		this->editPersonal_panel->Hide();
	}


	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		System::String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:/Users/Chris/Desktop/Payroll_Info.accdb";
		fillData(connectionString, "1");
	}
};
}