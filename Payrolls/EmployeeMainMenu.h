#pragma once

#include"ConnectionPath.h"

namespace Payrolls {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	public ref class EmployeeMainMenu : public System::Windows::Forms::Form
	{
	private:
		void fillData(System::String^ empID);
		void init(System::String^ empID);

	public: EmployeeMainMenu(System::Windows::Forms::Form^ loginMenu, System::String^ empID) 
		{ 
			InitializeComponent(); 
			orignalMenu = loginMenu;
			init(empID);  
		}

	protected:
		~EmployeeMainMenu(){
			if (components)
			{
				delete components;
			}
		}
	//used on logout to bring user back to login menu
	private: System::Windows::Forms::Form^ orignalMenu;

	private: System::Windows::Forms::Label^ mainMenuLeft_title;
	private: System::Windows::Forms::Label^ id_glance_label;
	private: System::Windows::Forms::Label^ firstName_glance_label;
	private: System::Windows::Forms::Label^ dept_glance_label;
	private: System::Windows::Forms::Label^ currBenefit_label;
	private: System::Windows::Forms::Panel^ editPersonal_panel;


	private: System::Windows::Forms::Panel^ ViewPaystubs_panel;
	private: System::Windows::Forms::Panel^ ViewTimesheet_panel;


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












	private: System::Windows::Forms::Label^ label17;


private: System::Windows::Forms::Label^ Emp_currBenefit_glance;

private: System::Windows::Forms::Label^ Emp_dept_glance;

private: System::Windows::Forms::Label^ Emp_firstName_glance;
private: System::Windows::Forms::Label^ Emp_id_glance;
private: System::Windows::Forms::Label^ Emp_lastName_glance;
private: System::Windows::Forms::Label^ lastName_glance_label;
	private: System::Windows::Forms::Button^ persInfoSubmit_button;
	private: System::Windows::Forms::TextBox^ phoneNumber_textBox;
	private: System::Windows::Forms::TextBox^ prefEmail_textbox;
	private: System::Windows::Forms::Label^ preferedPhoneNumber_label;
	private: System::Windows::Forms::Label^ preferedEmail_label;
	private: System::Windows::Forms::Label^ Emp_ID;
	private: System::Windows::Forms::Label^ id_label;








	private: System::Windows::Forms::Label^ Emp_department;
	private: System::Windows::Forms::Label^ department_label;
	private: System::Windows::Forms::Label^ Emp_sex;
	private: System::Windows::Forms::Label^ sex_label;
	private: System::Windows::Forms::Label^ Emp_dob;
	private: System::Windows::Forms::Label^ dateOfBirth_label;
	private: System::Windows::Forms::Label^ Emp_lastName;
	private: System::Windows::Forms::Label^ Emp_firstName;
	private: System::Windows::Forms::Label^ lastName_label;
	private: System::Windows::Forms::Label^ firstName_label;
private: System::Windows::Forms::Panel^ viewBenefits_panel;
	private: System::Windows::Forms::Panel^ infoGlance_panel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ viewPaystub_panel;
	private: System::Windows::Forms::Label^ payStub_title_label;






private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Label^ benefitName_label3;


private: System::Windows::Forms::Label^ benefitName_label2;

private: System::Windows::Forms::Label^ benefitName_label1;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ visionCost_label;

private: System::Windows::Forms::Label^ empVisionPackage_label;


private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ dentalCost_label;

private: System::Windows::Forms::Label^ empDentalPackage_label;



private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ healthTitle_label;
private: System::Windows::Forms::Label^ benefitCost_label;
private: System::Windows::Forms::Label^ healthCost_label;

private: System::Windows::Forms::Label^ empHealthPackage_label;


private: System::Windows::Forms::Label^ benefitPackage_label;
private: System::Windows::Forms::Label^ benefitName_label;
private: System::Windows::Forms::Label^ visionTitle_label;
private: System::Windows::Forms::Label^ dentalTitle_label;





	private:
		System::ComponentModel::Container^ components;
		//this code it auto generated by visual studio
		

		//#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent()
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EmployeeMainMenu::typeid));
			this->mainMenuLeft_title = (gcnew System::Windows::Forms::Label());
			this->id_glance_label = (gcnew System::Windows::Forms::Label());
			this->firstName_glance_label = (gcnew System::Windows::Forms::Label());
			this->dept_glance_label = (gcnew System::Windows::Forms::Label());
			this->currBenefit_label = (gcnew System::Windows::Forms::Label());
			this->persInfoSubmit_button = (gcnew System::Windows::Forms::Button());
			this->phoneNumber_textBox = (gcnew System::Windows::Forms::TextBox());
			this->prefEmail_textbox = (gcnew System::Windows::Forms::TextBox());
			this->preferedPhoneNumber_label = (gcnew System::Windows::Forms::Label());
			this->preferedEmail_label = (gcnew System::Windows::Forms::Label());
			this->Emp_ID = (gcnew System::Windows::Forms::Label());
			this->id_label = (gcnew System::Windows::Forms::Label());
			this->Emp_department = (gcnew System::Windows::Forms::Label());
			this->department_label = (gcnew System::Windows::Forms::Label());
			this->Emp_sex = (gcnew System::Windows::Forms::Label());
			this->sex_label = (gcnew System::Windows::Forms::Label());
			this->Emp_dob = (gcnew System::Windows::Forms::Label());
			this->dateOfBirth_label = (gcnew System::Windows::Forms::Label());
			this->Emp_lastName = (gcnew System::Windows::Forms::Label());
			this->Emp_firstName = (gcnew System::Windows::Forms::Label());
			this->lastName_label = (gcnew System::Windows::Forms::Label());
			this->firstName_label = (gcnew System::Windows::Forms::Label());
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
			this->editPersonal_panel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->viewBenefits_panel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->visionCost_label = (gcnew System::Windows::Forms::Label());
			this->empVisionPackage_label = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dentalCost_label = (gcnew System::Windows::Forms::Label());
			this->empDentalPackage_label = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->healthTitle_label = (gcnew System::Windows::Forms::Label());
			this->benefitCost_label = (gcnew System::Windows::Forms::Label());
			this->healthCost_label = (gcnew System::Windows::Forms::Label());
			this->empHealthPackage_label = (gcnew System::Windows::Forms::Label());
			this->benefitPackage_label = (gcnew System::Windows::Forms::Label());
			this->benefitName_label = (gcnew System::Windows::Forms::Label());
			this->visionTitle_label = (gcnew System::Windows::Forms::Label());
			this->dentalTitle_label = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Emp_currBenefit_glance = (gcnew System::Windows::Forms::Label());
			this->Emp_dept_glance = (gcnew System::Windows::Forms::Label());
			this->Emp_firstName_glance = (gcnew System::Windows::Forms::Label());
			this->Emp_id_glance = (gcnew System::Windows::Forms::Label());
			this->Emp_lastName_glance = (gcnew System::Windows::Forms::Label());
			this->lastName_glance_label = (gcnew System::Windows::Forms::Label());
			this->infoGlance_panel = (gcnew System::Windows::Forms::Panel());
			this->benefitName_label3 = (gcnew System::Windows::Forms::Label());
			this->benefitName_label2 = (gcnew System::Windows::Forms::Label());
			this->benefitName_label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->viewPaystub_panel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->payStub_title_label = (gcnew System::Windows::Forms::Label());
			this->toolStrip1->SuspendLayout();
			this->editPersonal_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->viewBenefits_panel->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->infoGlance_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->viewPaystub_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// mainMenuLeft_title
			// 
			this->mainMenuLeft_title->AutoSize = true;
			this->mainMenuLeft_title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainMenuLeft_title->Location = System::Drawing::Point(295, 80);
			this->mainMenuLeft_title->Name = L"mainMenuLeft_title";
			this->mainMenuLeft_title->Size = System::Drawing::Size(437, 37);
			this->mainMenuLeft_title->TabIndex = 0;
			this->mainMenuLeft_title->Text = L"Your Information At A Glance";
			// 
			// id_glance_label
			// 
			this->id_glance_label->AutoSize = true;
			this->id_glance_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->id_glance_label->Location = System::Drawing::Point(202, 200);
			this->id_glance_label->Name = L"id_glance_label";
			this->id_glance_label->Size = System::Drawing::Size(38, 25);
			this->id_glance_label->TabIndex = 1;
			this->id_glance_label->Text = L"ID:";
			// 
			// firstName_glance_label
			// 
			this->firstName_glance_label->AutoSize = true;
			this->firstName_glance_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->firstName_glance_label->Location = System::Drawing::Point(202, 269);
			this->firstName_glance_label->Name = L"firstName_glance_label";
			this->firstName_glance_label->Size = System::Drawing::Size(122, 25);
			this->firstName_glance_label->TabIndex = 1;
			this->firstName_glance_label->Text = L"First Name:";
			// 
			// dept_glance_label
			// 
			this->dept_glance_label->AutoSize = true;
			this->dept_glance_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dept_glance_label->Location = System::Drawing::Point(202, 414);
			this->dept_glance_label->Name = L"dept_glance_label";
			this->dept_glance_label->Size = System::Drawing::Size(129, 25);
			this->dept_glance_label->TabIndex = 1;
			this->dept_glance_label->Text = L"Department:";
			// 
			// currBenefit_label
			// 
			this->currBenefit_label->AutoSize = true;
			this->currBenefit_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->currBenefit_label->Location = System::Drawing::Point(202, 488);
			this->currBenefit_label->Name = L"currBenefit_label";
			this->currBenefit_label->Size = System::Drawing::Size(267, 25);
			this->currBenefit_label->TabIndex = 1;
			this->currBenefit_label->Text = L"Current Benefit(s) Chosen:";
			// 
			// persInfoSubmit_button
			// 
			this->persInfoSubmit_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->persInfoSubmit_button->Location = System::Drawing::Point(708, 440);
			this->persInfoSubmit_button->Name = L"persInfoSubmit_button";
			this->persInfoSubmit_button->Size = System::Drawing::Size(174, 51);
			this->persInfoSubmit_button->TabIndex = 28;
			this->persInfoSubmit_button->Text = L"Submit Changes";
			this->persInfoSubmit_button->UseVisualStyleBackColor = true;
			// 
			// phoneNumber_textBox
			// 
			this->phoneNumber_textBox->Location = System::Drawing::Point(791, 281);
			this->phoneNumber_textBox->Name = L"phoneNumber_textBox";
			this->phoneNumber_textBox->Size = System::Drawing::Size(202, 20);
			this->phoneNumber_textBox->TabIndex = 26;
			// 
			// prefEmail_textbox
			// 
			this->prefEmail_textbox->Location = System::Drawing::Point(711, 214);
			this->prefEmail_textbox->Name = L"prefEmail_textbox";
			this->prefEmail_textbox->Size = System::Drawing::Size(282, 20);
			this->prefEmail_textbox->TabIndex = 27;
			// 
			// preferedPhoneNumber_label
			// 
			this->preferedPhoneNumber_label->AutoSize = true;
			this->preferedPhoneNumber_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->preferedPhoneNumber_label->Location = System::Drawing::Point(563, 277);
			this->preferedPhoneNumber_label->Name = L"preferedPhoneNumber_label";
			this->preferedPhoneNumber_label->Size = System::Drawing::Size(222, 24);
			this->preferedPhoneNumber_label->TabIndex = 24;
			this->preferedPhoneNumber_label->Text = L"Prefered Phone Number:";
			// 
			// preferedEmail_label
			// 
			this->preferedEmail_label->AutoSize = true;
			this->preferedEmail_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->preferedEmail_label->Location = System::Drawing::Point(563, 214);
			this->preferedEmail_label->Name = L"preferedEmail_label";
			this->preferedEmail_label->Size = System::Drawing::Size(139, 24);
			this->preferedEmail_label->TabIndex = 25;
			this->preferedEmail_label->Text = L"Prefered Email:";
			// 
			// Emp_ID
			// 
			this->Emp_ID->AutoSize = true;
			this->Emp_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_ID->Location = System::Drawing::Point(288, 138);
			this->Emp_ID->Name = L"Emp_ID";
			this->Emp_ID->Size = System::Drawing::Size(0, 24);
			this->Emp_ID->TabIndex = 4;
			// 
			// id_label
			// 
			this->id_label->AutoSize = true;
			this->id_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->id_label->Location = System::Drawing::Point(120, 138);
			this->id_label->Name = L"id_label";
			this->id_label->Size = System::Drawing::Size(32, 24);
			this->id_label->TabIndex = 21;
			this->id_label->Text = L"ID:";
			// 
			// Emp_department
			// 
			this->Emp_department->AutoSize = true;
			this->Emp_department->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_department->Location = System::Drawing::Point(288, 413);
			this->Emp_department->Name = L"Emp_department";
			this->Emp_department->Size = System::Drawing::Size(0, 24);
			this->Emp_department->TabIndex = 12;
			// 
			// department_label
			// 
			this->department_label->AutoSize = true;
			this->department_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->department_label->Location = System::Drawing::Point(120, 413);
			this->department_label->Name = L"department_label";
			this->department_label->Size = System::Drawing::Size(112, 24);
			this->department_label->TabIndex = 11;
			this->department_label->Text = L"Department:";
			// 
			// Emp_sex
			// 
			this->Emp_sex->AutoSize = true;
			this->Emp_sex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_sex->Location = System::Drawing::Point(287, 321);
			this->Emp_sex->Name = L"Emp_sex";
			this->Emp_sex->Size = System::Drawing::Size(0, 24);
			this->Emp_sex->TabIndex = 10;
			// 
			// sex_label
			// 
			this->sex_label->AutoSize = true;
			this->sex_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->sex_label->Location = System::Drawing::Point(119, 321);
			this->sex_label->Name = L"sex_label";
			this->sex_label->Size = System::Drawing::Size(48, 24);
			this->sex_label->TabIndex = 9;
			this->sex_label->Text = L"Sex:";
			// 
			// Emp_dob
			// 
			this->Emp_dob->AutoSize = true;
			this->Emp_dob->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_dob->Location = System::Drawing::Point(287, 277);
			this->Emp_dob->Name = L"Emp_dob";
			this->Emp_dob->Size = System::Drawing::Size(0, 24);
			this->Emp_dob->TabIndex = 8;
			// 
			// dateOfBirth_label
			// 
			this->dateOfBirth_label->AutoSize = true;
			this->dateOfBirth_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->dateOfBirth_label->Location = System::Drawing::Point(119, 277);
			this->dateOfBirth_label->Name = L"dateOfBirth_label";
			this->dateOfBirth_label->Size = System::Drawing::Size(119, 24);
			this->dateOfBirth_label->TabIndex = 7;
			this->dateOfBirth_label->Text = L"Date Of Birth:";
			// 
			// Emp_lastName
			// 
			this->Emp_lastName->AutoSize = true;
			this->Emp_lastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_lastName->Location = System::Drawing::Point(287, 227);
			this->Emp_lastName->Name = L"Emp_lastName";
			this->Emp_lastName->Size = System::Drawing::Size(0, 24);
			this->Emp_lastName->TabIndex = 6;
			// 
			// Emp_firstName
			// 
			this->Emp_firstName->AutoSize = true;
			this->Emp_firstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_firstName->Location = System::Drawing::Point(287, 178);
			this->Emp_firstName->Name = L"Emp_firstName";
			this->Emp_firstName->Size = System::Drawing::Size(0, 24);
			this->Emp_firstName->TabIndex = 5;
			// 
			// lastName_label
			// 
			this->lastName_label->AutoSize = true;
			this->lastName_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lastName_label->Location = System::Drawing::Point(119, 227);
			this->lastName_label->Name = L"lastName_label";
			this->lastName_label->Size = System::Drawing::Size(104, 24);
			this->lastName_label->TabIndex = 22;
			this->lastName_label->Text = L"Last Name:";
			// 
			// firstName_label
			// 
			this->firstName_label->AutoSize = true;
			this->firstName_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->firstName_label->Location = System::Drawing::Point(119, 178);
			this->firstName_label->Name = L"firstName_label";
			this->firstName_label->Size = System::Drawing::Size(106, 24);
			this->firstName_label->TabIndex = 23;
			this->firstName_label->Text = L"First Name:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(230, 48);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(313, 33);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Benefit(s) Provided By:";
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
			this->viewPaystub_botton->Size = System::Drawing::Size(160, 22);
			this->viewPaystub_botton->Text = L"View Paystub Coming Soon!";
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
			this->viewTimesheet_button->Size = System::Drawing::Size(172, 22);
			this->viewTimesheet_button->Text = L"View Timesheet Coming Soon!";
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
					this->toolStripSeparator1, this->viewBenefits_button, this->toolStripSeparator2, this->InfoAtGlance_button, this->toolStripSeparator4,
					this->viewPaystub_botton, this->toolStripSeparator3, this->viewTimesheet_button, this->toolStripSeparator5, this->logout_button
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1115, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// editPersonal_panel
			// 
			this->editPersonal_panel->Controls->Add(this->pictureBox3);
			this->editPersonal_panel->Controls->Add(this->preferedPhoneNumber_label);
			this->editPersonal_panel->Controls->Add(this->preferedEmail_label);
			this->editPersonal_panel->Controls->Add(this->Emp_ID);
			this->editPersonal_panel->Controls->Add(this->id_label);
			this->editPersonal_panel->Controls->Add(this->Emp_department);
			this->editPersonal_panel->Controls->Add(this->department_label);
			this->editPersonal_panel->Controls->Add(this->Emp_sex);
			this->editPersonal_panel->Controls->Add(this->sex_label);
			this->editPersonal_panel->Controls->Add(this->Emp_dob);
			this->editPersonal_panel->Controls->Add(this->dateOfBirth_label);
			this->editPersonal_panel->Controls->Add(this->Emp_lastName);
			this->editPersonal_panel->Controls->Add(this->Emp_firstName);
			this->editPersonal_panel->Controls->Add(this->lastName_label);
			this->editPersonal_panel->Controls->Add(this->firstName_label);
			this->editPersonal_panel->Controls->Add(this->prefEmail_textbox);
			this->editPersonal_panel->Controls->Add(this->phoneNumber_textBox);
			this->editPersonal_panel->Controls->Add(this->persInfoSubmit_button);
			this->editPersonal_panel->Location = System::Drawing::Point(0, 28);
			this->editPersonal_panel->Name = L"editPersonal_panel";
			this->editPersonal_panel->Size = System::Drawing::Size(1121, 652);
			this->editPersonal_panel->TabIndex = 3;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1069, 607);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(46, 45);
			this->pictureBox3->TabIndex = 29;
			this->pictureBox3->TabStop = false;
			// 
			// viewBenefits_panel
			// 
			this->viewBenefits_panel->Controls->Add(this->panel1);
			this->viewBenefits_panel->Location = System::Drawing::Point(15, 28);
			this->viewBenefits_panel->Name = L"viewBenefits_panel";
			this->viewBenefits_panel->Size = System::Drawing::Size(1106, 653);
			this->viewBenefits_panel->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->visionCost_label);
			this->panel1->Controls->Add(this->empVisionPackage_label);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->dentalCost_label);
			this->panel1->Controls->Add(this->empDentalPackage_label);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->healthTitle_label);
			this->panel1->Controls->Add(this->benefitCost_label);
			this->panel1->Controls->Add(this->healthCost_label);
			this->panel1->Controls->Add(this->empHealthPackage_label);
			this->panel1->Controls->Add(this->benefitPackage_label);
			this->panel1->Controls->Add(this->benefitName_label);
			this->panel1->Controls->Add(this->visionTitle_label);
			this->panel1->Controls->Add(this->dentalTitle_label);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Location = System::Drawing::Point(-12, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1112, 648);
			this->panel1->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(803, 398);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 25);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Cost:";
			// 
			// visionCost_label
			// 
			this->visionCost_label->AutoSize = true;
			this->visionCost_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->visionCost_label->Location = System::Drawing::Point(871, 404);
			this->visionCost_label->Name = L"visionCost_label";
			this->visionCost_label->Size = System::Drawing::Size(0, 20);
			this->visionCost_label->TabIndex = 23;
			// 
			// empVisionPackage_label
			// 
			this->empVisionPackage_label->AutoSize = true;
			this->empVisionPackage_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->empVisionPackage_label->Location = System::Drawing::Point(905, 324);
			this->empVisionPackage_label->Name = L"empVisionPackage_label";
			this->empVisionPackage_label->Size = System::Drawing::Size(0, 20);
			this->empVisionPackage_label->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(803, 319);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 25);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Package:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(66, 398);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 25);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Cost:";
			// 
			// dentalCost_label
			// 
			this->dentalCost_label->AutoSize = true;
			this->dentalCost_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dentalCost_label->Location = System::Drawing::Point(128, 404);
			this->dentalCost_label->Name = L"dentalCost_label";
			this->dentalCost_label->Size = System::Drawing::Size(0, 20);
			this->dentalCost_label->TabIndex = 19;
			// 
			// empDentalPackage_label
			// 
			this->empDentalPackage_label->AutoSize = true;
			this->empDentalPackage_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->empDentalPackage_label->Location = System::Drawing::Point(174, 324);
			this->empDentalPackage_label->Name = L"empDentalPackage_label";
			this->empDentalPackage_label->Size = System::Drawing::Size(0, 20);
			this->empDentalPackage_label->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(66, 319);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 25);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Package:";
			// 
			// healthTitle_label
			// 
			this->healthTitle_label->AutoSize = true;
			this->healthTitle_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->healthTitle_label->Location = System::Drawing::Point(422, 202);
			this->healthTitle_label->Name = L"healthTitle_label";
			this->healthTitle_label->Size = System::Drawing::Size(193, 29);
			this->healthTitle_label->TabIndex = 17;
			this->healthTitle_label->Text = L"Health Coverage";
			// 
			// benefitCost_label
			// 
			this->benefitCost_label->AutoSize = true;
			this->benefitCost_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->benefitCost_label->Location = System::Drawing::Point(422, 398);
			this->benefitCost_label->Name = L"benefitCost_label";
			this->benefitCost_label->Size = System::Drawing::Size(62, 25);
			this->benefitCost_label->TabIndex = 11;
			this->benefitCost_label->Text = L"Cost:";
			// 
			// healthCost_label
			// 
			this->healthCost_label->AutoSize = true;
			this->healthCost_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->healthCost_label->Location = System::Drawing::Point(490, 400);
			this->healthCost_label->Name = L"healthCost_label";
			this->healthCost_label->Size = System::Drawing::Size(0, 20);
			this->healthCost_label->TabIndex = 12;
			// 
			// empHealthPackage_label
			// 
			this->empHealthPackage_label->AutoSize = true;
			this->empHealthPackage_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->empHealthPackage_label->Location = System::Drawing::Point(530, 324);
			this->empHealthPackage_label->Name = L"empHealthPackage_label";
			this->empHealthPackage_label->Size = System::Drawing::Size(0, 20);
			this->empHealthPackage_label->TabIndex = 13;
			// 
			// benefitPackage_label
			// 
			this->benefitPackage_label->AutoSize = true;
			this->benefitPackage_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->benefitPackage_label->Location = System::Drawing::Point(422, 319);
			this->benefitPackage_label->Name = L"benefitPackage_label";
			this->benefitPackage_label->Size = System::Drawing::Size(102, 25);
			this->benefitPackage_label->TabIndex = 14;
			this->benefitPackage_label->Text = L"Package:";
			// 
			// benefitName_label
			// 
			this->benefitName_label->AutoSize = true;
			this->benefitName_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->benefitName_label->Location = System::Drawing::Point(549, 55);
			this->benefitName_label->Name = L"benefitName_label";
			this->benefitName_label->Size = System::Drawing::Size(291, 25);
			this->benefitName_label->TabIndex = 16;
			this->benefitName_label->Text = L"Anthem BlueCross/HealthNet";
			// 
			// visionTitle_label
			// 
			this->visionTitle_label->AutoSize = true;
			this->visionTitle_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->visionTitle_label->Location = System::Drawing::Point(803, 202);
			this->visionTitle_label->Name = L"visionTitle_label";
			this->visionTitle_label->Size = System::Drawing::Size(190, 29);
			this->visionTitle_label->TabIndex = 10;
			this->visionTitle_label->Text = L"Vision Coverage";
			// 
			// dentalTitle_label
			// 
			this->dentalTitle_label->AutoSize = true;
			this->dentalTitle_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dentalTitle_label->Location = System::Drawing::Point(66, 202);
			this->dentalTitle_label->Name = L"dentalTitle_label";
			this->dentalTitle_label->Size = System::Drawing::Size(193, 29);
			this->dentalTitle_label->TabIndex = 9;
			this->dentalTitle_label->Text = L"Dental Coverage";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1066, 604);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(46, 45);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// Emp_currBenefit_glance
			// 
			this->Emp_currBenefit_glance->AutoSize = true;
			this->Emp_currBenefit_glance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Emp_currBenefit_glance->Location = System::Drawing::Point(452, 499);
			this->Emp_currBenefit_glance->Name = L"Emp_currBenefit_glance";
			this->Emp_currBenefit_glance->Size = System::Drawing::Size(0, 25);
			this->Emp_currBenefit_glance->TabIndex = 4;
			// 
			// Emp_dept_glance
			// 
			this->Emp_dept_glance->AutoSize = true;
			this->Emp_dept_glance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Emp_dept_glance->Location = System::Drawing::Point(361, 414);
			this->Emp_dept_glance->Name = L"Emp_dept_glance";
			this->Emp_dept_glance->Size = System::Drawing::Size(0, 25);
			this->Emp_dept_glance->TabIndex = 5;
			// 
			// Emp_firstName_glance
			// 
			this->Emp_firstName_glance->AutoSize = true;
			this->Emp_firstName_glance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Emp_firstName_glance->Location = System::Drawing::Point(361, 269);
			this->Emp_firstName_glance->Name = L"Emp_firstName_glance";
			this->Emp_firstName_glance->Size = System::Drawing::Size(0, 25);
			this->Emp_firstName_glance->TabIndex = 6;
			// 
			// Emp_id_glance
			// 
			this->Emp_id_glance->AutoSize = true;
			this->Emp_id_glance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Emp_id_glance->Location = System::Drawing::Point(361, 200);
			this->Emp_id_glance->Name = L"Emp_id_glance";
			this->Emp_id_glance->Size = System::Drawing::Size(0, 25);
			this->Emp_id_glance->TabIndex = 7;
			// 
			// Emp_lastName_glance
			// 
			this->Emp_lastName_glance->AutoSize = true;
			this->Emp_lastName_glance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Emp_lastName_glance->Location = System::Drawing::Point(361, 337);
			this->Emp_lastName_glance->Name = L"Emp_lastName_glance";
			this->Emp_lastName_glance->Size = System::Drawing::Size(0, 25);
			this->Emp_lastName_glance->TabIndex = 9;
			// 
			// lastName_glance_label
			// 
			this->lastName_glance_label->AutoSize = true;
			this->lastName_glance_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lastName_glance_label->Location = System::Drawing::Point(202, 337);
			this->lastName_glance_label->Name = L"lastName_glance_label";
			this->lastName_glance_label->Size = System::Drawing::Size(121, 25);
			this->lastName_glance_label->TabIndex = 8;
			this->lastName_glance_label->Text = L"Last Name:";
			// 
			// infoGlance_panel
			// 
			this->infoGlance_panel->Controls->Add(this->benefitName_label3);
			this->infoGlance_panel->Controls->Add(this->benefitName_label2);
			this->infoGlance_panel->Controls->Add(this->benefitName_label1);
			this->infoGlance_panel->Controls->Add(this->pictureBox4);
			this->infoGlance_panel->Controls->Add(this->Emp_id_glance);
			this->infoGlance_panel->Controls->Add(this->Emp_firstName_glance);
			this->infoGlance_panel->Controls->Add(this->Emp_lastName_glance);
			this->infoGlance_panel->Controls->Add(this->Emp_dept_glance);
			this->infoGlance_panel->Controls->Add(this->firstName_glance_label);
			this->infoGlance_panel->Controls->Add(this->mainMenuLeft_title);
			this->infoGlance_panel->Controls->Add(this->lastName_glance_label);
			this->infoGlance_panel->Controls->Add(this->id_glance_label);
			this->infoGlance_panel->Controls->Add(this->dept_glance_label);
			this->infoGlance_panel->Controls->Add(this->currBenefit_label);
			this->infoGlance_panel->Location = System::Drawing::Point(0, 28);
			this->infoGlance_panel->Name = L"infoGlance_panel";
			this->infoGlance_panel->Size = System::Drawing::Size(1116, 652);
			this->infoGlance_panel->TabIndex = 10;
			// 
			// benefitName_label3
			// 
			this->benefitName_label3->AutoSize = true;
			this->benefitName_label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->benefitName_label3->Location = System::Drawing::Point(512, 590);
			this->benefitName_label3->Name = L"benefitName_label3";
			this->benefitName_label3->Size = System::Drawing::Size(0, 25);
			this->benefitName_label3->TabIndex = 98;
			// 
			// benefitName_label2
			// 
			this->benefitName_label2->AutoSize = true;
			this->benefitName_label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->benefitName_label2->Location = System::Drawing::Point(512, 540);
			this->benefitName_label2->Name = L"benefitName_label2";
			this->benefitName_label2->Size = System::Drawing::Size(0, 25);
			this->benefitName_label2->TabIndex = 97;
			// 
			// benefitName_label1
			// 
			this->benefitName_label1->AutoSize = true;
			this->benefitName_label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->benefitName_label1->Location = System::Drawing::Point(512, 488);
			this->benefitName_label1->Name = L"benefitName_label1";
			this->benefitName_label1->Size = System::Drawing::Size(0, 25);
			this->benefitName_label1->TabIndex = 96;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1070, 607);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(46, 45);
			this->pictureBox4->TabIndex = 95;
			this->pictureBox4->TabStop = false;
			// 
			// viewPaystub_panel
			// 
			this->viewPaystub_panel->BackColor = System::Drawing::Color::White;
			this->viewPaystub_panel->Controls->Add(this->pictureBox1);
			this->viewPaystub_panel->Controls->Add(this->payStub_title_label);
			this->viewPaystub_panel->Location = System::Drawing::Point(0, 28);
			this->viewPaystub_panel->Name = L"viewPaystub_panel";
			this->viewPaystub_panel->Size = System::Drawing::Size(1112, 650);
			this->viewPaystub_panel->TabIndex = 11;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1070, 607);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(46, 45);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// payStub_title_label
			// 
			this->payStub_title_label->AutoSize = true;
			this->payStub_title_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->payStub_title_label->Location = System::Drawing::Point(377, 31);
			this->payStub_title_label->Name = L"payStub_title_label";
			this->payStub_title_label->Size = System::Drawing::Size(318, 37);
			this->payStub_title_label->TabIndex = 0;
			this->payStub_title_label->Text = L"Most Recent Paystub";
			// 
			// EmployeeMainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1115, 679);
			this->Controls->Add(this->viewPaystub_panel);
			this->Controls->Add(this->viewBenefits_panel);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->Emp_currBenefit_glance);
			this->Controls->Add(this->editPersonal_panel);
			this->Controls->Add(this->infoGlance_panel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->ImeMode = System::Windows::Forms::ImeMode::On;
			this->Name = L"EmployeeMainMenu";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->editPersonal_panel->ResumeLayout(false);
			this->editPersonal_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->viewBenefits_panel->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->infoGlance_panel->ResumeLayout(false);
			this->infoGlance_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->viewPaystub_panel->ResumeLayout(false);
			this->viewPaystub_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void viewBenefits_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->infoGlance_panel->Hide();
		this->editPersonal_panel->Hide();
		this->viewPaystub_panel->Hide();
		this->viewBenefits_panel->Show();
	}

	private: System::Void viewPaystub_botton_Click(System::Object^ sender, System::EventArgs^ e) {

		/*
		this->infoGlance_panel->Hide();
		this->viewBenefits_panel->Hide();
		this->editPersonal_panel->Hide();

		this->viewPaystub_panel->Show();
		*/
	}

	private: System::Void viewTimesheet_button_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
		this->infoGlance_panel->Hide();
		this->viewBenefits_panel->Hide();
		this->editPersonal_panel->Hide();
		this->viewPaystub_panel->Hide();
		*/
	}

	private: System::Void logout_button_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		orignalMenu->Show();
	}

	private: System::Void editPersonalInfo_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->infoGlance_panel->Hide();
		this->viewBenefits_panel->Hide();
		this->viewPaystub_panel->Hide();
		this->editPersonal_panel->Show();
	}
	private: System::Void InfoAtGlance_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->viewBenefits_panel->Hide();
		this->editPersonal_panel->Hide();
		this->viewPaystub_panel->Hide();
		this->infoGlance_panel->Show();
	}

	private: System::Void persInfoSubmit_button_Click(System::Object^ sender, System::EventArgs^ e) {
		//update database with changes

		OleDbConnection^ conn = gcnew OleDbConnection(ConnectionPath::connectionString);
		conn->Open();
		OleDbCommand^ cmd = conn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "UPDATE EmployeeInfo SET [Email] = @Email, [PhoneNumber] = @PhoneNumber";
		cmd->Parameters->AddWithValue("@Email", prefEmail_textbox->Text);
		cmd->Parameters->AddWithValue("@PhoneNumber", phoneNumber_textBox->Text);

		cmd->ExecuteNonQuery();
		conn->Close();
		MessageBox::Show("Update Succeed");

	}
};
}