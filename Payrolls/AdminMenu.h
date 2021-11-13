#pragma once

#include"ConnectionPath.h"
#include"CheckID.h"

namespace Payrolls {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class AdminMenu : public System::Windows::Forms::Form
	{
	public:		AdminMenu(void)
	{
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
	}

	public:
		AdminMenu(System::Windows::Forms::Form^ Admin, String^ text)
		{

			InitializeComponent();
			otherform = Admin;
			word = text;
			ID = Int32::Parse(text);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ otherform;

	private:
		String^ word;
	private:
		String^ Name;
	private:
		String^ LastName;
	private:
		String^ email;
	private:
		String^ phone;
	private:
		String^ pay;
	private:
		String^ Department;
	private:
		String^ NameE;
	private:
		String^ LastNameE;
	private:
		String^ emailE;
	private:
		String^ DepartmentE;
	private:
		String^ phoneE;
	private:
		String^ payE;
	public:
		String^ word1;
	private:
		String^ DOB;
	private:
		Int32^ ID;
	private:
		String^ CurrHours;
	private: System::Windows::Forms::TabPage^ tab2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tab1Page2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::LinkLabel^ LogOut2;
	private: System::Windows::Forms::Button^ buttonNo;
	private: System::Windows::Forms::Button^ buttonYes;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::LinkLabel^ linkResign;
	private: System::Windows::Forms::Label^ lbl12;
	private: System::Windows::Forms::Label^ lbl11;
	private: System::Windows::Forms::Label^ lbl10;
	private: System::Windows::Forms::Label^ lbl9;
	private: System::Windows::Forms::Label^ lbl8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lbl7;
	private: System::Windows::Forms::Button^ buttonReset;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ buttonSearch;
	private: System::Windows::Forms::TabPage^ tab2Page2;
	private: System::Windows::Forms::Label^ lbl14;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ lbl18;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ lbl17;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ lbl16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ lbl15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::LinkLabel^ linkedit2;
	private: System::Windows::Forms::LinkLabel^ linkedit1;
	private: System::Windows::Forms::LinkLabel^ logout;
	private: System::Windows::Forms::Button^ buttonNoShow;
	private: System::Windows::Forms::Button^ ButtonShow;
	private: System::Windows::Forms::Label^ lbl6;
	private: System::Windows::Forms::Label^ lbl5;
	private: System::Windows::Forms::Label^ lbl4;
	private: System::Windows::Forms::Label^ lbl3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tab1;
	private: System::Windows::Forms::TabPage^ tabPage3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminMenu::typeid));
			this->tab2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tab1Page2 = (gcnew System::Windows::Forms::TabPage());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->LogOut2 = (gcnew System::Windows::Forms::LinkLabel());
			this->buttonNo = (gcnew System::Windows::Forms::Button());
			this->buttonYes = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->linkResign = (gcnew System::Windows::Forms::LinkLabel());
			this->lbl12 = (gcnew System::Windows::Forms::Label());
			this->lbl11 = (gcnew System::Windows::Forms::Label());
			this->lbl10 = (gcnew System::Windows::Forms::Label());
			this->lbl9 = (gcnew System::Windows::Forms::Label());
			this->lbl8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->tab2Page2 = (gcnew System::Windows::Forms::TabPage());
			this->lbl14 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->lbl18 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->lbl17 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->lbl16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->lbl15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->linkedit2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkedit1 = (gcnew System::Windows::Forms::LinkLabel());
			this->logout = (gcnew System::Windows::Forms::LinkLabel());
			this->buttonNoShow = (gcnew System::Windows::Forms::Button());
			this->ButtonShow = (gcnew System::Windows::Forms::Button());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tab1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tab2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tab1Page2->SuspendLayout();
			this->tab2Page2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tab1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tab2
			// 
			this->tab2->BackColor = System::Drawing::SystemColors::Control;
			this->tab2->Controls->Add(this->tabControl1);
			this->tab2->Location = System::Drawing::Point(4, 22);
			this->tab2->Name = L"tab2";
			this->tab2->Padding = System::Windows::Forms::Padding(3);
			this->tab2->Size = System::Drawing::Size(818, 593);
			this->tab2->TabIndex = 1;
			this->tab2->Text = L"Search Employees";
			this->tab2->Click += gcnew System::EventHandler(this, &AdminMenu::tab2_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tab1Page2);
			this->tabControl1->Controls->Add(this->tab2Page2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(818, 593);
			this->tabControl1->TabIndex = 0;
			// 
			// tab1Page2
			// 
			this->tab1Page2->BackColor = System::Drawing::SystemColors::Control;
			this->tab1Page2->Controls->Add(this->label13);
			this->tab1Page2->Controls->Add(this->LogOut2);
			this->tab1Page2->Controls->Add(this->buttonNo);
			this->tab1Page2->Controls->Add(this->buttonYes);
			this->tab1Page2->Controls->Add(this->label12);
			this->tab1Page2->Controls->Add(this->linkResign);
			this->tab1Page2->Controls->Add(this->lbl12);
			this->tab1Page2->Controls->Add(this->lbl11);
			this->tab1Page2->Controls->Add(this->lbl10);
			this->tab1Page2->Controls->Add(this->lbl9);
			this->tab1Page2->Controls->Add(this->lbl8);
			this->tab1Page2->Controls->Add(this->label11);
			this->tab1Page2->Controls->Add(this->label10);
			this->tab1Page2->Controls->Add(this->label9);
			this->tab1Page2->Controls->Add(this->label8);
			this->tab1Page2->Controls->Add(this->label7);
			this->tab1Page2->Controls->Add(this->lbl7);
			this->tab1Page2->Controls->Add(this->buttonReset);
			this->tab1Page2->Controls->Add(this->textBox1);
			this->tab1Page2->Controls->Add(this->buttonSearch);
			this->tab1Page2->Location = System::Drawing::Point(4, 22);
			this->tab1Page2->Name = L"tab1Page2";
			this->tab1Page2->Padding = System::Windows::Forms::Padding(3);
			this->tab1Page2->Size = System::Drawing::Size(810, 567);
			this->tab1Page2->TabIndex = 0;
			this->tab1Page2->Text = L"Employee Detail";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(147, 424);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(201, 24);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Resignation sent to HR";
			this->label13->Click += gcnew System::EventHandler(this, &AdminMenu::label13_Click);
			// 
			// LogOut2
			// 
			this->LogOut2->AutoSize = true;
			this->LogOut2->Location = System::Drawing::Point(747, 3);
			this->LogOut2->Name = L"LogOut2";
			this->LogOut2->Size = System::Drawing::Size(42, 13);
			this->LogOut2->TabIndex = 1;
			this->LogOut2->TabStop = true;
			this->LogOut2->Text = L"LogOut";
			this->LogOut2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminMenu::LogOut2_LinkClicked);
			// 
			// buttonNo
			// 
			this->buttonNo->Location = System::Drawing::Point(294, 453);
			this->buttonNo->Name = L"buttonNo";
			this->buttonNo->Size = System::Drawing::Size(75, 23);
			this->buttonNo->TabIndex = 16;
			this->buttonNo->Text = L"No";
			this->buttonNo->UseVisualStyleBackColor = true;
			this->buttonNo->Click += gcnew System::EventHandler(this, &AdminMenu::buttonNo_Click);
			// 
			// buttonYes
			// 
			this->buttonYes->Location = System::Drawing::Point(197, 453);
			this->buttonYes->Name = L"buttonYes";
			this->buttonYes->Size = System::Drawing::Size(75, 23);
			this->buttonYes->TabIndex = 15;
			this->buttonYes->Text = L"Yes";
			this->buttonYes->UseVisualStyleBackColor = true;
			this->buttonYes->Click += gcnew System::EventHandler(this, &AdminMenu::buttonYes_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(95, 453);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(64, 20);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Confirm";
			// 
			// linkResign
			// 
			this->linkResign->AutoSize = true;
			this->linkResign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkResign->ForeColor = System::Drawing::Color::Red;
			this->linkResign->LinkColor = System::Drawing::Color::Red;
			this->linkResign->Location = System::Drawing::Point(95, 404);
			this->linkResign->Name = L"linkResign";
			this->linkResign->Size = System::Drawing::Size(177, 20);
			this->linkResign->TabIndex = 13;
			this->linkResign->TabStop = true;
			this->linkResign->Text = L"Notify resignation to HR";
			this->linkResign->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminMenu::linkResign_LinkClicked);
			// 
			// lbl12
			// 
			this->lbl12->AutoSize = true;
			this->lbl12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl12->Location = System::Drawing::Point(254, 339);
			this->lbl12->Name = L"lbl12";
			this->lbl12->Size = System::Drawing::Size(44, 20);
			this->lbl12->TabIndex = 12;
			this->lbl12->Text = L"Date";
			// 
			// lbl11
			// 
			this->lbl11->AutoSize = true;
			this->lbl11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl11->Location = System::Drawing::Point(254, 291);
			this->lbl11->Name = L"lbl11";
			this->lbl11->Size = System::Drawing::Size(86, 20);
			this->lbl11->TabIndex = 11;
			this->lbl11->Text = L"DOLLAR!!!";
			// 
			// lbl10
			// 
			this->lbl10->AutoSize = true;
			this->lbl10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl10->Location = System::Drawing::Point(254, 250);
			this->lbl10->Name = L"lbl10";
			this->lbl10->Size = System::Drawing::Size(55, 20);
			this->lbl10->TabIndex = 10;
			this->lbl10->Text = L"Phone";
			// 
			// lbl9
			// 
			this->lbl9->AutoSize = true;
			this->lbl9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl9->Location = System::Drawing::Point(254, 206);
			this->lbl9->Name = L"lbl9";
			this->lbl9->Size = System::Drawing::Size(46, 20);
			this->lbl9->TabIndex = 9;
			this->lbl9->Text = L"email";
			// 
			// lbl8
			// 
			this->lbl8->AutoSize = true;
			this->lbl8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl8->Location = System::Drawing::Point(254, 157);
			this->lbl8->Name = L"lbl8";
			this->lbl8->Size = System::Drawing::Size(94, 20);
			this->lbl8->TabIndex = 8;
			this->lbl8->Text = L"Department";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(95, 339);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 20);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Hired date:";
			this->label11->Click += gcnew System::EventHandler(this, &AdminMenu::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(95, 291);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 20);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Hourly Pay:";
			this->label10->Click += gcnew System::EventHandler(this, &AdminMenu::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(95, 250);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 20);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Phone:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(95, 206);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 20);
			this->label8->TabIndex = 4;
			this->label8->Text = L"email:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(95, 157);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 20);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Position:";
			// 
			// lbl7
			// 
			this->lbl7->AutoSize = true;
			this->lbl7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl7->Location = System::Drawing::Point(49, 103);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(152, 24);
			this->lbl7->TabIndex = 1;
			this->lbl7->Text = L"Employee Name";
			this->lbl7->Click += gcnew System::EventHandler(this, &AdminMenu::lbl7_Click);
			// 
			// buttonReset
			// 
			this->buttonReset->Location = System::Drawing::Point(609, 44);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(75, 23);
			this->buttonReset->TabIndex = 2;
			this->buttonReset->Text = L"Reset";
			this->buttonReset->UseVisualStyleBackColor = true;
			this->buttonReset->Click += gcnew System::EventHandler(this, &AdminMenu::buttonReset_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(294, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(250, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AdminMenu::textBox1_TextChanged);
			// 
			// buttonSearch
			// 
			this->buttonSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSearch->Location = System::Drawing::Point(52, 34);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(187, 33);
			this->buttonSearch->TabIndex = 0;
			this->buttonSearch->Text = L"Search Employee";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &AdminMenu::button1_Click);
			// 
			// tab2Page2
			// 
			this->tab2Page2->BackColor = System::Drawing::SystemColors::Control;
			this->tab2Page2->Controls->Add(this->lbl14);
			this->tab2Page2->Controls->Add(this->richTextBox1);
			this->tab2Page2->Controls->Add(this->textBox3);
			this->tab2Page2->Controls->Add(this->textBox2);
			this->tab2Page2->Controls->Add(this->label22);
			this->tab2Page2->Controls->Add(this->label21);
			this->tab2Page2->Controls->Add(this->label20);
			this->tab2Page2->Controls->Add(this->label19);
			this->tab2Page2->Controls->Add(this->lbl18);
			this->tab2Page2->Controls->Add(this->label18);
			this->tab2Page2->Controls->Add(this->lbl17);
			this->tab2Page2->Controls->Add(this->label17);
			this->tab2Page2->Controls->Add(this->label16);
			this->tab2Page2->Controls->Add(this->lbl16);
			this->tab2Page2->Controls->Add(this->label15);
			this->tab2Page2->Controls->Add(this->lbl15);
			this->tab2Page2->Controls->Add(this->label14);
			this->tab2Page2->Location = System::Drawing::Point(4, 22);
			this->tab2Page2->Name = L"tab2Page2";
			this->tab2Page2->Padding = System::Windows::Forms::Padding(3);
			this->tab2Page2->Size = System::Drawing::Size(810, 567);
			this->tab2Page2->TabIndex = 1;
			this->tab2Page2->Text = L"Time Sheet (Soon)";
			this->tab2Page2->Click += gcnew System::EventHandler(this, &AdminMenu::tab2Page2_Click);
			// 
			// lbl14
			// 
			this->lbl14->AutoSize = true;
			this->lbl14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl14->Location = System::Drawing::Point(28, 19);
			this->lbl14->Name = L"lbl14";
			this->lbl14->Size = System::Drawing::Size(149, 24);
			this->lbl14->TabIndex = 16;
			this->lbl14->Text = L"Employee name";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(283, 434);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(199, 96);
			this->richTextBox1->TabIndex = 15;
			this->richTextBox1->Text = L"";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(283, 389);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(199, 26);
			this->textBox3->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(283, 351);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(199, 26);
			this->textBox2->TabIndex = 13;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(142, 432);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(77, 22);
			this->label22->TabIndex = 12;
			this->label22->Text = L"Reason:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(68, 389);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(160, 22);
			this->label21->TabIndex = 11;
			this->label21->Text = L"Aprove extra time\?";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(98, 351);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(130, 22);
			this->label20->TabIndex = 10;
			this->label20->Text = L"Aprove Hours\?";
			this->label20->Click += gcnew System::EventHandler(this, &AdminMenu::label20_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(28, 291);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(215, 22);
			this->label19->TabIndex = 9;
			this->label19->Text = L"Hours claim by employee:";
			// 
			// lbl18
			// 
			this->lbl18->AutoSize = true;
			this->lbl18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl18->Location = System::Drawing::Point(290, 291);
			this->lbl18->Name = L"lbl18";
			this->lbl18->Size = System::Drawing::Size(73, 22);
			this->lbl18->TabIndex = 8;
			this->lbl18->Text = L"# Hours";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(180, 247);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(63, 22);
			this->label18->TabIndex = 7;
			this->label18->Text = L"Hours:";
			// 
			// lbl17
			// 
			this->lbl17->AutoSize = true;
			this->lbl17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl17->Location = System::Drawing::Point(290, 247);
			this->lbl17->Name = L"lbl17";
			this->lbl17->Size = System::Drawing::Size(73, 22);
			this->lbl17->TabIndex = 6;
			this->lbl17->Text = L"# Hours";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(98, 202);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(131, 22);
			this->label17->TabIndex = 5;
			this->label17->Text = L"Previous Week";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(156, 157);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(92, 22);
			this->label16->TabIndex = 4;
			this->label16->Text = L"Hours left:";
			this->label16->Click += gcnew System::EventHandler(this, &AdminMenu::label14_Click);
			// 
			// lbl16
			// 
			this->lbl16->AutoSize = true;
			this->lbl16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl16->Location = System::Drawing::Point(290, 157);
			this->lbl16->Name = L"lbl16";
			this->lbl16->Size = System::Drawing::Size(73, 22);
			this->lbl16->TabIndex = 3;
			this->lbl16->Text = L"# Hours";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(180, 109);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(63, 22);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Hours:";
			this->label15->Click += gcnew System::EventHandler(this, &AdminMenu::label15_Click);
			// 
			// lbl15
			// 
			this->lbl15->AutoSize = true;
			this->lbl15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl15->Location = System::Drawing::Point(290, 109);
			this->lbl15->Name = L"lbl15";
			this->lbl15->Size = System::Drawing::Size(73, 22);
			this->lbl15->TabIndex = 1;
			this->lbl15->Text = L"# Hours";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(98, 64);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(121, 22);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Current Week";
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->linkedit2);
			this->tabPage1->Controls->Add(this->linkedit1);
			this->tabPage1->Controls->Add(this->logout);
			this->tabPage1->Controls->Add(this->buttonNoShow);
			this->tabPage1->Controls->Add(this->ButtonShow);
			this->tabPage1->Controls->Add(this->lbl6);
			this->tabPage1->Controls->Add(this->lbl5);
			this->tabPage1->Controls->Add(this->lbl4);
			this->tabPage1->Controls->Add(this->lbl3);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->lbl2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->lbl1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(818, 593);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Admin Home Page";
			this->tabPage1->Click += gcnew System::EventHandler(this, &AdminMenu::tabPage1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(683, 335);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 34;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminMenu::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(683, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminMenu::button1_Click_1);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(494, 337);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(183, 20);
			this->textBox5->TabIndex = 32;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(494, 270);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(183, 20);
			this->textBox4->TabIndex = 31;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &AdminMenu::textBox4_TextChanged);
			// 
			// linkedit2
			// 
			this->linkedit2->AutoSize = true;
			this->linkedit2->Location = System::Drawing::Point(118, 332);
			this->linkedit2->Name = L"linkedit2";
			this->linkedit2->Size = System::Drawing::Size(24, 13);
			this->linkedit2->TabIndex = 30;
			this->linkedit2->TabStop = true;
			this->linkedit2->Text = L"edit";
			this->linkedit2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminMenu::linkedit2_LinkClicked);
			// 
			// linkedit1
			// 
			this->linkedit1->AutoSize = true;
			this->linkedit1->Location = System::Drawing::Point(118, 270);
			this->linkedit1->Name = L"linkedit1";
			this->linkedit1->Size = System::Drawing::Size(24, 13);
			this->linkedit1->TabIndex = 29;
			this->linkedit1->TabStop = true;
			this->linkedit1->Text = L"edit";
			this->linkedit1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminMenu::linkedit1_LinkClicked);
			// 
			// logout
			// 
			this->logout->AutoSize = true;
			this->logout->Location = System::Drawing::Point(751, 3);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(42, 13);
			this->logout->TabIndex = 28;
			this->logout->TabStop = true;
			this->logout->Text = L"LogOut";
			this->logout->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminMenu::logout_LinkClicked);
			// 
			// buttonNoShow
			// 
			this->buttonNoShow->Location = System::Drawing::Point(346, 387);
			this->buttonNoShow->Name = L"buttonNoShow";
			this->buttonNoShow->Size = System::Drawing::Size(75, 23);
			this->buttonNoShow->TabIndex = 27;
			this->buttonNoShow->Text = L"No Show";
			this->buttonNoShow->UseVisualStyleBackColor = true;
			this->buttonNoShow->Click += gcnew System::EventHandler(this, &AdminMenu::buttonNoShow_Click);
			// 
			// ButtonShow
			// 
			this->ButtonShow->Location = System::Drawing::Point(346, 387);
			this->ButtonShow->Name = L"ButtonShow";
			this->ButtonShow->Size = System::Drawing::Size(75, 23);
			this->ButtonShow->TabIndex = 26;
			this->ButtonShow->Text = L"Show";
			this->ButtonShow->UseVisualStyleBackColor = true;
			this->ButtonShow->Click += gcnew System::EventHandler(this, &AdminMenu::ButtonShow_Click);
			// 
			// lbl6
			// 
			this->lbl6->AutoSize = true;
			this->lbl6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl6->Location = System::Drawing::Point(234, 387);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(35, 20);
			this->lbl6->TabIndex = 25;
			this->lbl6->Text = L"Pay";
			// 
			// lbl5
			// 
			this->lbl5->AutoSize = true;
			this->lbl5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl5->Location = System::Drawing::Point(233, 329);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(55, 20);
			this->lbl5->TabIndex = 24;
			this->lbl5->Text = L"Phone";
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl4->Location = System::Drawing::Point(234, 267);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(46, 20);
			this->lbl4->TabIndex = 23;
			this->lbl4->Text = L"email";
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl3->Location = System::Drawing::Point(234, 204);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(26, 20);
			this->lbl3->TabIndex = 22;
			this->lbl3->Text = L"ID";
			this->lbl3->Click += gcnew System::EventHandler(this, &AdminMenu::lbl3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(141, 387);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 20);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Pay:           $";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(141, 329);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 20);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Phone:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(141, 267);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 20);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Email:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(141, 204);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 20);
			this->label3->TabIndex = 18;
			this->label3->Text = L"ID:";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2->Location = System::Drawing::Point(117, 115);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(94, 20);
			this->lbl2->TabIndex = 17;
			this->lbl2->Text = L"Department";
			this->lbl2->Click += gcnew System::EventHandler(this, &AdminMenu::lbl2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(117, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 20);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Manager of ";
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->Location = System::Drawing::Point(285, 66);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(188, 29);
			this->lbl1->TabIndex = 15;
			this->lbl1->Text = L"Employee name";
			this->lbl1->Click += gcnew System::EventHandler(this, &AdminMenu::lbl1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(115, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 29);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Welcome:";
			// 
			// tab1
			// 
			this->tab1->Controls->Add(this->tabPage1);
			this->tab1->Controls->Add(this->tab2);
			this->tab1->Controls->Add(this->tabPage3);
			this->tab1->Location = System::Drawing::Point(0, 0);
			this->tab1->Name = L"tab1";
			this->tab1->SelectedIndex = 0;
			this->tab1->Size = System::Drawing::Size(826, 619);
			this->tab1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(818, 593);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"Alert (Soon)";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(822, 615);
			this->Controls->Add(this->tab1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->Text = L"Admin Main Menu";
			this->Load += gcnew System::EventHandler(this, &AdminMenu::AminMenu_Load);
			this->tab2->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tab1Page2->ResumeLayout(false);
			this->tab1Page2->PerformLayout();
			this->tab2Page2->ResumeLayout(false);
			this->tab2Page2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tab1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tab2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AminMenu_Load(System::Object^ sender, System::EventArgs^ e) {

		textBox4->Hide();
		textBox5->Hide();
		button1->Hide();
		button2->Hide();
		buttonNoShow->Hide();

		label2->Hide();
		linkedit1->Hide();
		linkedit2->Hide();

		label7->Hide();
		label8->Hide();
		label9->Hide();
		label10->Hide();
		label11->Hide();
		lbl6->Hide();
		lbl7->Hide();
		lbl8->Hide();
		lbl9->Hide();
		lbl10->Hide();
		lbl11->Hide();
		lbl12->Hide();

		linkResign->Hide();
		label12->Hide();
		buttonNo->Hide();
		buttonYes->Hide();
		label13->Hide();

		label14->Hide();
		label15->Hide();
		label16->Hide();
		label17->Hide();
		label18->Hide();
		label19->Hide();
		label20->Hide();
		label21->Hide();
		label22->Hide();
		lbl14->Hide();
		lbl15->Hide();
		lbl16->Hide();
		lbl17->Hide();
		lbl18->Hide();
		textBox2->Hide();
		textBox3->Hide();
		richTextBox1->Hide();

		OleDbConnection^ conn = gcnew OleDbConnection(ConnectionPath::connectionString);
		conn->Open();

		OleDbCommand^ cmd = conn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "select [Firstname],[Lastname], [Email], [PhoneNumber], [HourlyPay], [Position] from EmployeeInfo where ([ID] = @ID)  ";
		cmd->Parameters->AddWithValue("@ID", ID);

		OleDbDataReader^ myReader = cmd->ExecuteReader();

		while (myReader->Read()) {

			Name = myReader["Firstname"]->ToString();
			LastName = myReader["Lastname"]->ToString();
			email = myReader["Email"]->ToString();
			phone = myReader["PhoneNumber"]->ToString();
			pay = myReader["HourlyPay"]->ToString();
			Department = myReader["Position"]->ToString();
		}

		lbl1->Text = Name + ", " + LastName;
		lbl2->Text = Department;
		lbl3->Text = word;
		lbl4->Text = email;
		lbl5->Text = phone;
		lbl6->Text = pay;
	}
	private: System::Void ButtonShow_Click(System::Object^ sender, System::EventArgs^ e) {
		lbl6->Show();
		ButtonShow->Hide();
		buttonNoShow->Show();
	}
	private: System::Void buttonNoShow_Click(System::Object^ sender, System::EventArgs^ e) {
		lbl6->Hide();
		buttonNoShow->Hide();
		ButtonShow->Show();
	}
	private: System::Void logout_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Hide();
		otherform->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		OleDbConnection^ conn2 = gcnew OleDbConnection(ConnectionPath::connectionString);
		conn2->Open();
		OleDbCommand^ cmd2 = conn2->CreateCommand();
		cmd2->CommandType = CommandType::Text;
		cmd2->CommandText = "select [ID],[Firstname],[Lastname], [Position], [Email], [DateofBirth], [PhoneNumber],[HourlyPay] , [Hours] from EmployeeInfo where  ([ID] = @ID) and ([Position] = 'Employee' or [Position] = 'employee' or [Position] = 'EMPLOYEE')  ";

		//error checking
		if (textBox1->Text == "")
		{
			MessageBox::Show("Enter An Employee Id.");
			return;
		}
		if (!checkID(textBox1->Text))
		{
			MessageBox::Show("This ID does not exist within the Database");
			return;
		}


		cmd2->Parameters->AddWithValue("@ID", Int32::Parse(textBox1->Text));
		OleDbDataReader^ myReader = cmd2->ExecuteReader();

		if (myReader->HasRows) {

			while (myReader->Read()) {

				word1 = myReader["ID"]->ToString();
				NameE = myReader["Firstname"]->ToString();
				LastNameE = myReader["Lastname"]->ToString();
				emailE = myReader["Email"]->ToString();
				phoneE = myReader["PhoneNumber"]->ToString();
				payE = myReader["HourlyPay"]->ToString();
				DepartmentE = myReader["Position"]->ToString();
				DOB = myReader["DateofBirth"]->ToString();
				CurrHours = myReader["Hours"]->ToString();
			}

			lbl8->Text = DepartmentE;
			lbl7->Text = NameE + "," + LastNameE;
			lbl9->Text = emailE;
			lbl10->Text = phoneE;
			lbl11->Text = payE;
			lbl12->Text = DOB;
			lbl14->Text = NameE + "," + LastNameE;
			lbl15->Text = CurrHours;
			lbl16->Text = word;

			lbl8->Show();
			lbl9->Show();
			lbl10->Show();
			lbl11->Show();
			lbl12->Show();

			label7->Show();
			label8->Show();
			label9->Show();
			label10->Show();
			label11->Show();
			//linkResign->Show();

			label14->Show();
			label15->Show();
			//label16->Show();
			label17->Show();
			label18->Show();
			label19->Show();
			lbl14->Show();
			lbl15->Show();
			//lbl16->Show();
			//lbl17->Show();
			//lbl18->Show();
		}
	}

	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LogOut2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Hide();
		otherform->Show();
	}
	private: System::Void linkResign_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		label12->Show();
		buttonNo->Show();
		buttonYes->Show();
	}
	private: System::Void buttonYes_Click(System::Object^ sender, System::EventArgs^ e) {
		linkResign->Hide();
		label12->Hide();
		buttonNo->Hide();
		buttonYes->Hide();
		label13->Show();
	}
	private: System::Void buttonNo_Click(System::Object^ sender, System::EventArgs^ e) {
		label12->Hide();
		buttonNo->Hide();
		buttonYes->Hide();
	}
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonReset_Click(System::Object^ sender, System::EventArgs^ e) {
		label7->Hide();
		label8->Hide();
		label9->Hide();
		label10->Hide();
		label11->Hide();

		lbl7->Hide();
		lbl8->Hide();
		lbl9->Hide();
		lbl10->Hide();
		lbl11->Hide();
		lbl12->Hide();

		linkResign->Hide();
		label12->Hide();
		buttonNo->Hide();
		buttonYes->Hide();
		label13->Hide();

		label14->Hide();
		label15->Hide();
		label16->Hide();
		label17->Hide();
		label18->Hide();
		label19->Hide();
		label20->Hide();
		label21->Hide();
		label22->Hide();
		lbl14->Hide();
		lbl15->Hide();
		lbl16->Hide();
		lbl17->Hide();
		lbl18->Hide();
		textBox2->Hide();
		textBox3->Hide();
		richTextBox1->Hide();
	}
	private: System::Void tab2Page2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		OleDbConnection^ conn = gcnew OleDbConnection(ConnectionPath::connectionString);
		conn->Open();
		OleDbCommand^ cmd = conn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "UPDATE EmployeeInfo SET [PhoneNumber] = @PhoneNumber WHERE [ID] = @ID";
		cmd->Parameters->AddWithValue("@ID", 6);  //ID);
		cmd->Parameters->AddWithValue("@PhoneNumber", textBox5->Text);

		textBox5->Hide();
		button2->Hide();

		cmd->ExecuteNonQuery();
		conn->Close();
		MessageBox::Show("Change Succeed!");
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		OleDbConnection^ conn = gcnew OleDbConnection(ConnectionPath::connectionString);
		conn->Open();
		OleDbCommand^ cmd = conn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "UPDATE EmployeeInfo SET [Email] = @Email WHERE [ID] = @ID";
		cmd->Parameters->AddWithValue("@ID", 6); // Int32::Parse(lbl3->Text));
		cmd->Parameters->AddWithValue("@Email", textBox4->Text);

		textBox4->Hide();
		button1->Hide();

		cmd->ExecuteNonQuery();
		conn->Close();
		MessageBox::Show("Change Succeed!");

	}
	private: System::Void linkedit1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		textBox4->Show();
		button1->Show();
	}
	private: System::Void linkedit2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		textBox5->Show();
		button2->Show();
	}
	private: System::Void lbl1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbl2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbl7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbl3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}