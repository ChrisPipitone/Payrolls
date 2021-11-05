#pragma once
#include "GrossIncome.h"
#include "ConnectionPath.h"

namespace Payrolls {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for AddEmployee
	/// </summary>
	public ref class AddEmployee : public System::Windows::Forms::Form
	{
	public:
		Form^ otherPage;
		AddEmployee(void)
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
		~AddEmployee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox11;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox13;


	private: System::Windows::Forms::Label^ label14;


	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label16;




	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox10;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddEmployee::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 32);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Employee ID";
			this->label1->Click += gcnew System::EventHandler(this, &AddEmployee::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(100, 32);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(81, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(100, 64);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(81, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 92);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"SSN";
			this->label2->Click += gcnew System::EventHandler(this, &AddEmployee::label2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(100, 92);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(81, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 120);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 15);
			this->label3->TabIndex = 4;
			this->label3->Text = L"First Name";
			this->label3->Click += gcnew System::EventHandler(this, &AddEmployee::label3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(100, 120);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(81, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 157);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 15);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Last Name";
			this->label4->Click += gcnew System::EventHandler(this, &AddEmployee::label4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(100, 154);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(81, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 211);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 15);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Gender";
			this->label5->Click += gcnew System::EventHandler(this, &AddEmployee::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 185);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 15);
			this->label6->TabIndex = 10;
			this->label6->Text = L"DOB";
			this->label6->Click += gcnew System::EventHandler(this, &AddEmployee::label6_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(420, 96);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(165, 20);
			this->textBox7->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(349, 99);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 15);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Address";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(420, 126);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(165, 20);
			this->textBox8->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(349, 125);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 15);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Phone";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(420, 150);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(165, 20);
			this->textBox9->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(353, 150);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 15);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Email";
			this->label9->Click += gcnew System::EventHandler(this, &AddEmployee::label9_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(504, 24);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(67, 55);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(100, 239);
			this->textBox11->Margin = System::Windows::Forms::Padding(2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(81, 20);
			this->textBox11->TabIndex = 22;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox11_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(17, 273);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(51, 15);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Position";
			this->label12->Click += gcnew System::EventHandler(this, &AddEmployee::label12_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(98, 270);
			this->textBox13->Margin = System::Windows::Forms::Padding(2);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(81, 20);
			this->textBox13->TabIndex = 26;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox13_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(17, 306);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(77, 15);
			this->label14->TabIndex = 27;
			this->label14->Text = L"Hourly Wage";
			this->label14->Click += gcnew System::EventHandler(this, &AddEmployee::label14_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(98, 306);
			this->textBox14->Margin = System::Windows::Forms::Padding(2);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(81, 20);
			this->textBox14->TabIndex = 31;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox14_TextChanged_1);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(17, 341);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(40, 15);
			this->label15->TabIndex = 30;
			this->label15->Text = L"Hours";
			this->label15->Click += gcnew System::EventHandler(this, &AddEmployee::label15_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(98, 338);
			this->textBox15->Margin = System::Windows::Forms::Padding(2);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(81, 20);
			this->textBox15->TabIndex = 35;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox15_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(17, 64);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(61, 15);
			this->label16->TabIndex = 34;
			this->label16->Text = L"Password";
			this->label16->Click += gcnew System::EventHandler(this, &AddEmployee::label16_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(169, 492);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 32);
			this->button3->TabIndex = 38;
			this->button3->Text = L"Enter";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AddEmployee::addNewEmployee);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(352, 492);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 32);
			this->button4->TabIndex = 39;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AddEmployee::button4_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(100, 185);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(183, 20);
			this->dateTimePicker1->TabIndex = 41;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(353, 180);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 15);
			this->label10->TabIndex = 42;
			this->label10->Text = L"Zipcode";
			this->label10->Click += gcnew System::EventHandler(this, &AddEmployee::label10_Click_1);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(420, 180);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 43;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(17, 239);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(28, 15);
			this->label18->TabIndex = 44;
			this->label18->Text = L"Age";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(98, 211);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(83, 20);
			this->textBox10->TabIndex = 45;
			// 
			// AddEmployee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(621, 602);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AddEmployee";
			this->Text = L"AddEmployee";
			this->Load += gcnew System::EventHandler(this, &AddEmployee::AddEmployee_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox14_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox16_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox18_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		otherPage->Show();
	}
	private: System::Void AddEmployee_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void addNewEmployee(System::Object^ sender, System::EventArgs^ e) {
	GrossIncome gross;
	int overtimeHour = gross.calculateOvertimeHour(Int32::Parse(textBox15->Text));
	double overtimePay = gross.CalculateOvertimePay(overtimeHour, Convert::ToDouble(textBox14->Text));
	double grossIncome = gross.CalculateGrossIncome(Int32::Parse(textBox15->Text), overtimePay, Convert::ToDouble(textBox14->Text));
	OleDbConnection^ conn = gcnew OleDbConnection(ConnectionPath::connectionString);
	conn->Open();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "Insert into EmployeeInfo([ID], [Password], [SSN], [Firstname], [Lastname], [DateofBirth], [Age], [Gender], [Email], [PhoneNumber], [Address1], [Zipcode], [Position], [Hours], [OvertimeHours], " +
		"[OvertimePay], [HourlyPay], [Weeklygrosspay]) VALUES(@ID,@Password,@SSN,@Firstname,@Lastname,@DateofBirth,@Age,@Gender,@Email,@PhoneNumber,@Address1,@Zipcode,@Position,@Hours," +
		"@OvertimeHours, @OvertimePay, @HourlyPay, @Weeklygrosspay)";
	cmd->Parameters->AddWithValue("@ID", Int32::Parse(textBox1->Text));
	cmd->Parameters->AddWithValue("@Password", textBox2->Text);
	cmd->Parameters->AddWithValue("@SSN", textBox3->Text);
	cmd->Parameters->AddWithValue("@Firstname", textBox4->Text);
	cmd->Parameters->AddWithValue("@Lastname", textBox5->Text);
	cmd->Parameters->AddWithValue("@DateofBirth", dateTimePicker1->Value);
	cmd->Parameters->AddWithValue("@Age", Int32::Parse(textBox11->Text));
	cmd->Parameters->AddWithValue("@Gender", textBox10->Text);
	cmd->Parameters->AddWithValue("@Email", textBox9->Text);
	cmd->Parameters->AddWithValue("@PhoneNumber", textBox8->Text);
	cmd->Parameters->AddWithValue("@Address1", textBox7->Text);
	cmd->Parameters->AddWithValue("@Zipcode", textBox6->Text);
	cmd->Parameters->AddWithValue("@Position", textBox13->Text);
	cmd->Parameters->AddWithValue("@Hours", Int32::Parse(textBox15->Text) - overtimeHour);
	cmd->Parameters->AddWithValue("@OvertimeHours", overtimeHour);
	cmd->Parameters->AddWithValue("@OvertimePay", overtimePay);
	cmd->Parameters->AddWithValue("@HourlyPay", Convert::ToDouble(textBox14->Text));
	cmd->Parameters->AddWithValue("@Weeklygrosspay", grossIncome);
	cmd->ExecuteNonQuery();
	conn->Close();
	MessageBox::Show("Add New Employee Succeed!");
	this->Close();
	
}
private: System::Void label10_Click_1(System::Object^ sender, System::EventArgs^ e) {
}


};
}