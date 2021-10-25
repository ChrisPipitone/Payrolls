#pragma once
#include "Employee.h"

namespace Payrolls {
	//pls work
	int a;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EmployeeMainMenu
	/// </summary>
	public ref class EmployeeMainMenu : public System::Windows::Forms::Form
	{
	public:
		void init()
		{
			//this->empName->Text = "should display this text on start up";
			this->editPersonal_panel->Hide();
			this->viewBenefits_panel->Hide();
		}
		EmployeeMainMenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			init();
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
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ Emp_ID;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ Emp;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label16;
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
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label8;









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
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EmployeeMainMenu::typeid));
			this->mainMenuLeft_title = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->editPersonal_panel = (gcnew System::Windows::Forms::Panel());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->Emp_ID = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Emp = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			this->editPersonal_panel->Hide();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->Emp_ID);
			this->splitContainer1->Panel1->Controls->Add(this->label14);
			this->splitContainer1->Panel1->Controls->Add(this->label22);
			this->splitContainer1->Panel1->Controls->Add(this->label38);
			this->splitContainer1->Panel1->Controls->Add(this->label36);
			this->splitContainer1->Panel1->Controls->Add(this->label37);
			this->splitContainer1->Panel1->Controls->Add(this->label39);
			this->splitContainer1->Panel1->Controls->Add(this->label8);
			this->splitContainer1->Panel1->Controls->Add(this->label35);
			this->splitContainer1->Panel1->Controls->Add(this->label15);
			this->splitContainer1->Panel1->Controls->Add(this->label21);
			this->splitContainer1->Panel1->Controls->Add(this->label13);
			this->splitContainer1->Panel1->Controls->Add(this->label20);
			this->splitContainer1->Panel1->Controls->Add(this->label12);
			this->splitContainer1->Panel1->Controls->Add(this->label19);
			this->splitContainer1->Panel1->Controls->Add(this->label11);
			this->splitContainer1->Panel1->Controls->Add(this->label18);
			this->splitContainer1->Panel1->Controls->Add(this->Emp);
			this->splitContainer1->Panel1->Controls->Add(this->label10);
			this->splitContainer1->Panel1->Controls->Add(this->label9);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->button1);
			this->splitContainer1->Panel2->Controls->Add(this->textBox4);
			this->splitContainer1->Panel2->Controls->Add(this->textBox3);
			this->splitContainer1->Panel2->Controls->Add(this->textBox1);
			this->splitContainer1->Panel2->Controls->Add(this->textBox2);
			this->splitContainer1->Panel2->Controls->Add(this->label7);
			this->splitContainer1->Panel2->Controls->Add(this->label6);
			this->splitContainer1->Panel2->Controls->Add(this->label16);
			this->splitContainer1->Panel2->Controls->Add(this->label5);
			this->splitContainer1->Size = System::Drawing::Size(1072, 661);
			this->splitContainer1->SplitterDistance = 541;
			this->splitContainer1->TabIndex = 0;
			// 
			// Emp_ID
			// 
			this->Emp_ID->AutoSize = true;
			this->Emp_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp_ID->Location = System::Drawing::Point(224, 45);
			this->Emp_ID->Name = L"Emp_ID";
			this->Emp_ID->Size = System::Drawing::Size(32, 24);
			this->Emp_ID->TabIndex = 3;
			this->Emp_ID->Text = L"ID:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label14->Location = System::Drawing::Point(56, 45);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(32, 24);
			this->label14->TabIndex = 3;
			this->label14->Text = L"ID:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label22->Location = System::Drawing::Point(224, 368);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(86, 24);
			this->label22->TabIndex = 3;
			this->label22->Text = L"Job Title:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label38->Location = System::Drawing::Point(224, 556);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(132, 24);
			this->label38->TabIndex = 3;
			this->label38->Text = L"Gross Income:";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label36->Location = System::Drawing::Point(55, 557);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(132, 24);
			this->label36->TabIndex = 3;
			this->label36->Text = L"Gross Income:";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label37->Location = System::Drawing::Point(224, 510);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(89, 24);
			this->label37->TabIndex = 3;
			this->label37->Text = L"Pay Rate:";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label39->Location = System::Drawing::Point(222, 459);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(126, 24);
			this->label39->TabIndex = 3;
			this->label39->Text = L"Income Type:";
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
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label15->Location = System::Drawing::Point(56, 368);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(86, 24);
			this->label15->TabIndex = 3;
			this->label15->Text = L"Job Title:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label21->Location = System::Drawing::Point(224, 320);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(112, 24);
			this->label21->TabIndex = 3;
			this->label21->Text = L"Department:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label13->Location = System::Drawing::Point(56, 320);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(112, 24);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Department:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label20->Location = System::Drawing::Point(223, 228);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(48, 24);
			this->label20->TabIndex = 3;
			this->label20->Text = L"Sex:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label12->Location = System::Drawing::Point(55, 228);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 24);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Sex:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label19->Location = System::Drawing::Point(223, 184);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(119, 24);
			this->label19->TabIndex = 3;
			this->label19->Text = L"Date Of Birth:";
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
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label18->Location = System::Drawing::Point(223, 134);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(104, 24);
			this->label18->TabIndex = 3;
			this->label18->Text = L"Last Name:";
			// 
			// Emp
			// 
			this->Emp->AutoSize = true;
			this->Emp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Emp->Location = System::Drawing::Point(223, 85);
			this->Emp->Name = L"Emp";
			this->Emp->Size = System::Drawing::Size(106, 24);
			this->Emp->TabIndex = 3;
			this->Emp->Text = L"First Name:";
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
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button1->Location = System::Drawing::Point(176, 478);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 51);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Submit Changes";
			this->button1->UseVisualStyleBackColor = true;
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
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(41, 260);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(222, 24);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Prefered Phone Number:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(41, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 24);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Prefered Email:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(38, 132);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(142, 24);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Home Address:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(44, 315);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 24);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Username:";
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
			this->InfoAtGlance_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"InfoAtGlance_button.Image")));
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
			this->editPersonal_panel->Hide();
			this->viewBenefits_panel->Hide();

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

	};
}