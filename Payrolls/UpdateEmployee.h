#pragma once

#include "GrossIncome.h"
#include "FedTax.h"
#include "NYTax.h"
#include "Benfits.h"
#include "ConnectionPath.h"
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
	/// Summary for UpdateForm
	/// </summary>
	public ref class UpdateEmployee : public System::Windows::Forms::Form
	{
	public:
		Form^ otherPage;
		UpdateEmployee(void)
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
		~UpdateEmployee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label19;

	private: System::Windows::Forms::Label^ label21;



	private: System::Windows::Forms::Button^ button4;





	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UpdateEmployee::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 29);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Employee ID: ";
			this->label1->Click += gcnew System::EventHandler(this, &UpdateEmployee::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(124, 30);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(146, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &UpdateEmployee::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(64, 64);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 36);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Retrieve Info";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UpdateEmployee::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 123);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"First Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(114, 123);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"----";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(22, 158);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Last Name:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(114, 158);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 18);
			this->label5->TabIndex = 6;
			this->label5->Text = L"----";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 192);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 18);
			this->label6->TabIndex = 7;
			this->label6->Text = L"DOB:";
			this->label6->Click += gcnew System::EventHandler(this, &UpdateEmployee::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(114, 192);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 18);
			this->label7->TabIndex = 8;
			this->label7->Text = L"----";
			this->label7->Click += gcnew System::EventHandler(this, &UpdateEmployee::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(24, 265);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 18);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Email:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(92, 265);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(178, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(24, 305);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 18);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Phone #:";
			this->label9->Click += gcnew System::EventHandler(this, &UpdateEmployee::label9_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(92, 307);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(178, 20);
			this->textBox3->TabIndex = 4;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(24, 343);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(66, 18);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Address:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(92, 345);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(178, 20);
			this->textBox4->TabIndex = 5;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(22, 380);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 18);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Zipcode:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(92, 381);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(178, 20);
			this->textBox5->TabIndex = 6;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(336, 241);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(66, 18);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Position:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(404, 242);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(178, 20);
			this->textBox6->TabIndex = 11;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(336, 271);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 18);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Hours:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(404, 273);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(69, 20);
			this->textBox7->TabIndex = 12;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(336, 305);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(98, 18);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Hourly Wage:";
			this->label14->Click += gcnew System::EventHandler(this, &UpdateEmployee::label14_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(436, 307);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(142, 20);
			this->textBox8->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(200, 423);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 36);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Update Changes";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UpdateEmployee::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(508, 423);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 36);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &UpdateEmployee::button3_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(336, 337);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(79, 18);
			this->label15->TabIndex = 25;
			this->label15->Text = L"Password:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(416, 339);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(142, 20);
			this->textBox9->TabIndex = 14;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &UpdateEmployee::textBox9_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(24, 227);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(61, 18);
			this->label16->TabIndex = 27;
			this->label16->Text = L"Gender:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(114, 227);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(28, 18);
			this->label17->TabIndex = 28;
			this->label17->Text = L"----";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(336, 209);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(37, 18);
			this->label18->TabIndex = 29;
			this->label18->Text = L"Age:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(385, 211);
			this->textBox10->Margin = System::Windows::Forms::Padding(2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(69, 20);
			this->textBox10->TabIndex = 10;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(336, 123);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(126, 18);
			this->label19->TabIndex = 31;
			this->label19->Text = L"Health Coverage: ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(336, 149);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(126, 18);
			this->label21->TabIndex = 33;
			this->label21->Text = L"Dental Coverage: ";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(354, 423);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 36);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Delete Record";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &UpdateEmployee::button4_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(336, 178);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(124, 18);
			this->label27->TabIndex = 43;
			this->label27->Text = L"Vision Coverage: ";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"None/Purchase Later", L"Premium Package", L"Gold Package",
					L"Silver Package"
			});
			this->comboBox1->Location = System::Drawing::Point(464, 180);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(142, 21);
			this->comboBox1->TabIndex = 9;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"None/Purchase Later", L"Premium Package", L"Gold Package",
					L"Silver Package"
			});
			this->comboBox2->Location = System::Drawing::Point(464, 151);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(142, 21);
			this->comboBox2->TabIndex = 8;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"None/Purchase Later", L"Premium Package", L"Gold Package",
					L"Silver Package"
			});
			this->comboBox3->Location = System::Drawing::Point(464, 123);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(142, 21);
			this->comboBox3->TabIndex = 7;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(656, 472);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(54, 44);
			this->pictureBox1->TabIndex = 47;
			this->pictureBox1->TabStop = false;
			// 
			// UpdateEmployee
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(710, 514);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UpdateEmployee";
			this->Text = L"UpdateEmployee";
			this->Load += gcnew System::EventHandler(this, &UpdateEmployee::UpdateForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void UpdateForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

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


		OleDbConnection^ conn = gcnew OleDbConnection(ConnectionPath::connectionString);
		conn->Open();
		OleDbCommand^ cmd = conn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "select * from EmployeeInfo where ID = @ID";
		cmd->Parameters->AddWithValue("@ID", Int32::Parse(textBox1->Text));
		OleDbDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read()) {
			label3->Text = reader["Firstname"]->ToString();
			label5->Text = reader["Lastname"]->ToString();
			label7->Text = reader["DateofBirth"]->ToString();
			label17->Text = reader["Gender"]->ToString();
			comboBox1->Text = reader["HealthCoverage"]->ToString();
			comboBox2->Text = reader["DentalCoverage"]->ToString();
			comboBox3->Text = reader["VisionCoverage"]->ToString();
			textBox2->Text = reader["Email"]->ToString();
			textBox3->Text = reader["PhoneNumber"]->ToString();
			textBox4->Text = reader["Address1"]->ToString();
			textBox5->Text = reader["Zipcode"]->ToString();
			textBox6->Text = reader["Position"]->ToString();
			textBox7->Text = reader["Hours"]->ToString();
			textBox8->Text = reader["HourlyPay"]->ToString();
			textBox9->Text = reader["Password"]->ToString();
			textBox10->Text = reader["Age"]->ToString();
		}
		conn->Close();
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		otherPage->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		GrossIncome gross;
		FedTax fTax;
		NYTax nTax;
		Benfits benfit;

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


		int overtimeHours = gross.calculateOvertimeHour(Int32::Parse(textBox7->Text));
		double overtimePay = gross.CalculateOvertimePay(overtimeHours, Convert::ToDouble(textBox8->Text));
		double grossIncome = gross.CalculateGrossIncome(Int32::Parse(textBox7->Text), overtimePay, Convert::ToDouble(textBox8->Text));
		double fedTax = fTax.FedTaxRate(grossIncome);
		double nyTax = nTax.NYTaxRate(grossIncome);
		double health = benfit.CalculateHealthCoverage(grossIncome, comboBox1->Text);
		double dental = benfit.CalculateDentalCoverage(grossIncome, comboBox2->Text);
		double vision = benfit.CalculateVisionCoverage(grossIncome, comboBox3->Text);
		double deduction = fedTax + nyTax + health + dental + vision;
		double netPay = grossIncome - deduction;

		try
		{
			OleDbConnection^ conn = gcnew OleDbConnection(ConnectionPath::connectionString);
			conn->Open();
			OleDbCommand^ cmd = conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "UPDATE EmployeeInfo SET [Email] = @Email, [PhoneNumber] = @PhoneNumber, [Address1] = @Address, [Zipcode] = @Zipcode, [Position] = @Position, " +
				"[Hours] = @Hours, [HourlyPay] = @HourlyPay, [Password] = @Password, [OvertimeHours] = @OvertimeHours, [OvertimePay] = @OvertimePay, " +
				"[Weeklygrosspay] = @Weeklygrosspay, [Age] = @Age, [FederalTax] = @FederalTax, [NYTax] = @NYTax, [HealthCost] = @HealthCost, [DentalCost] = @DentalCost, " +
				"[VisionCost] = @VisionCost, [Netpay] = @Netpay, [HealthCoverage] = @HealthCoverage, [DentalCoverage] = @DentalCoverage, [VisionCoverage] = @VisionCoverage  WHERE ID = @ID";
			cmd->Parameters->AddWithValue("@Email", textBox2->Text);
			cmd->Parameters->AddWithValue("@PhoneNumber", textBox3->Text);
			cmd->Parameters->AddWithValue("@Address", textBox4->Text);
			cmd->Parameters->AddWithValue("@Zipcode", textBox5->Text);
			cmd->Parameters->AddWithValue("@Position", textBox6->Text);
			cmd->Parameters->AddWithValue("@Hours", Int32::Parse(textBox7->Text) - overtimeHours);
			cmd->Parameters->AddWithValue("@HourlyPay", Convert::ToDouble(textBox8->Text));
			cmd->Parameters->AddWithValue("@Password", textBox9->Text);
			cmd->Parameters->AddWithValue("@OvertimeHours", overtimeHours);
			cmd->Parameters->AddWithValue("@OvertimePay", overtimePay);
			cmd->Parameters->AddWithValue("@Weeklygrosspay", grossIncome);
			cmd->Parameters->AddWithValue("@Age", Int32::Parse(textBox10->Text));
			cmd->Parameters->AddWithValue("@FederalTax", fedTax);
			cmd->Parameters->AddWithValue("@NYTax", nyTax);
			cmd->Parameters->AddWithValue("@HealthCost", health);
			cmd->Parameters->AddWithValue("@DentalCost", dental);
			cmd->Parameters->AddWithValue("@VisionCost", vision);
			cmd->Parameters->AddWithValue("@Netpay", netPay);
			cmd->Parameters->AddWithValue("@HealthCoverage", comboBox1->Text);
			cmd->Parameters->AddWithValue("@DentalCoverage", comboBox2->Text);
			cmd->Parameters->AddWithValue("@VisionCoverage", comboBox3->Text);
			cmd->Parameters->AddWithValue("@ID", Int32::Parse(textBox1->Text));
			cmd->ExecuteNonQuery();
			conn->Close();
			MessageBox::Show("Update Employee Succeed");
			this->Close();
			otherPage->Show();
		}
		catch (System::FormatException^ e)
		{
			return;
		}
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

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

		String^ message = "Confirm Deleting Employee Record";
		String^ title = "Delete Record";
		MessageBoxButtons buttons = MessageBoxButtons::YesNo;
		Windows::Forms::DialogResult result = MessageBox::Show(message, title, buttons);
		if (result == Windows::Forms::DialogResult::Yes) {
			OleDbConnection^ conn = gcnew OleDbConnection(ConnectionPath::connectionString);
			conn->Open();
			OleDbCommand^ cmd = conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "DELETE FROM EmployeeInfo WHERE [ID] = @ID";
			cmd->Parameters->AddWithValue("@ID", Int32::Parse(textBox1->Text));
			cmd->ExecuteNonQuery();
			conn->Close();
			MessageBox::Show("Delete Employee Succeed");
			this->Close();
			otherPage->Show();
		}
		else {
			this->Close();
			otherPage->Show();
		}
	}
	private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
