#pragma once

namespace Payrolls {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
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
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 32);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Employee ID";
			this->label1->Click += gcnew System::EventHandler(this, &AddEmployee::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(100, 32);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(81, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(100, 64);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(81, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 64);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"SSN";
			this->label2->Click += gcnew System::EventHandler(this, &AddEmployee::label2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(100, 92);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(81, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 92);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"First Name";
			this->label3->Click += gcnew System::EventHandler(this, &AddEmployee::label3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(100, 120);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(81, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 121);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Last Name";
			this->label4->Click += gcnew System::EventHandler(this, &AddEmployee::label4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(100, 154);
			this->textBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(81, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 155);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Gender";
			this->label5->Click += gcnew System::EventHandler(this, &AddEmployee::label5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(100, 185);
			this->textBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(81, 20);
			this->textBox6->TabIndex = 11;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox6_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 185);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"DOB";
			this->label6->Click += gcnew System::EventHandler(this, &AddEmployee::label6_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(315, 95);
			this->textBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(165, 20);
			this->textBox7->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(232, 96);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Address 2";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(315, 128);
			this->textBox8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(165, 20);
			this->textBox8->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(232, 129);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Phone";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(315, 158);
			this->textBox9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(81, 20);
			this->textBox9->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(232, 158);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"EMail";
			this->label9->Click += gcnew System::EventHandler(this, &AddEmployee::label9_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(315, 188);
			this->textBox10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(81, 20);
			this->textBox10->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(232, 188);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Cell Phone";
			this->label10->Click += gcnew System::EventHandler(this, &AddEmployee::label10_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(341, 23);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(67, 55);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(100, 239);
			this->textBox11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(81, 20);
			this->textBox11->TabIndex = 22;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox11_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(17, 240);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(62, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Department";
			this->label11->Click += gcnew System::EventHandler(this, &AddEmployee::label11_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(117, 272);
			this->textBox12->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(81, 20);
			this->textBox12->TabIndex = 24;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox12_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(17, 274);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(92, 13);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Position/ Job Title";
			this->label12->Click += gcnew System::EventHandler(this, &AddEmployee::label12_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(100, 309);
			this->textBox13->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(81, 20);
			this->textBox13->TabIndex = 26;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox13_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(17, 310);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 13);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Locaition";
			this->label13->Click += gcnew System::EventHandler(this, &AddEmployee::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(17, 348);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(97, 13);
			this->label14->TabIndex = 27;
			this->label14->Text = L"Employment Status";
			this->label14->Click += gcnew System::EventHandler(this, &AddEmployee::label14_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(148, 340);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 28);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Hourly";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(215, 340);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 28);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Salary";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddEmployee::button2_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(100, 379);
			this->textBox14->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(81, 20);
			this->textBox14->TabIndex = 31;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox14_TextChanged_1);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(17, 380);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(35, 13);
			this->label15->TabIndex = 30;
			this->label15->Text = L"Hours";
			this->label15->Click += gcnew System::EventHandler(this, &AddEmployee::label15_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(100, 456);
			this->textBox15->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(81, 20);
			this->textBox15->TabIndex = 35;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox15_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(17, 456);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(53, 13);
			this->label16->TabIndex = 34;
			this->label16->Text = L"Password";
			this->label16->Click += gcnew System::EventHandler(this, &AddEmployee::label16_Click);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(100, 425);
			this->textBox16->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(81, 20);
			this->textBox16->TabIndex = 33;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox16_TextChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(17, 426);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(58, 13);
			this->label17->TabIndex = 32;
			this->label17->Text = L"Username ";
			this->label17->Click += gcnew System::EventHandler(this, &AddEmployee::label17_Click);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(1, 214);
			this->textBox17->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(485, 20);
			this->textBox17->TabIndex = 36;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(1, 401);
			this->textBox18->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(485, 20);
			this->textBox18->TabIndex = 37;
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &AddEmployee::textBox18_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(169, 492);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 32);
			this->button3->TabIndex = 38;
			this->button3->Text = L"Enter";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(352, 492);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 32);
			this->button4->TabIndex = 39;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AddEmployee::button4_Click);
			// 
			// AddEmployee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(543, 389);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
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
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
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
};
}