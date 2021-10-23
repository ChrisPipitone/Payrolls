#pragma once

namespace Payrolls {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for timeSheetAdmin
	/// </summary>
	public ref class timeSheetAdmin : public System::Windows::Forms::Form
	{
	private:
		String^ word;
	public:
		timeSheetAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		timeSheetAdmin(System::Windows::Forms::Form^ Admin, System::Windows::Forms::Form^ AdminMenu, String^ text)
		{
			InitializeComponent();
			otherform = Admin;
			AdminMenu10 = AdminMenu;
			word = text;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~timeSheetAdmin()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Form^ otherform;
	private: System::Windows::Forms::Form^ AdminMenu10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::LinkLabel^ linkPrev;
	private: System::Windows::Forms::LinkLabel^ linkLogout;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->linkPrev = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLogout = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name Employee";
			this->label1->Click += gcnew System::EventHandler(this, &timeSheetAdmin::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(93, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Week date";
			this->label2->Click += gcnew System::EventHandler(this, &timeSheetAdmin::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(136, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Hours:";
			this->label3->Click += gcnew System::EventHandler(this, &timeSheetAdmin::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(136, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Hours left:";
			this->label4->Click += gcnew System::EventHandler(this, &timeSheetAdmin::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(318, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 18);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Numer";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(318, 142);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 18);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Number";
			this->label6->Click += gcnew System::EventHandler(this, &timeSheetAdmin::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(103, 198);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(146, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Previous week date";
			this->label7->Click += gcnew System::EventHandler(this, &timeSheetAdmin::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(135, 242);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 20);
			this->label8->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(318, 273);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 18);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Number";
			this->label9->Click += gcnew System::EventHandler(this, &timeSheetAdmin::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(318, 236);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 18);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Numer";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(136, 273);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(179, 18);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Hours claim by employee:";
			this->label11->Click += gcnew System::EventHandler(this, &timeSheetAdmin::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(136, 236);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 18);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Hours:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(136, 308);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(107, 18);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Aprove Hours\?";
			this->label13->Click += gcnew System::EventHandler(this, &timeSheetAdmin::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(136, 344);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(64, 18);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Reason:";
			this->label14->Click += gcnew System::EventHandler(this, &timeSheetAdmin::label14_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(321, 311);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(44, 17);
			this->checkBox1->TabIndex = 14;
			this->checkBox1->Text = L"Yes";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(321, 344);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(169, 60);
			this->richTextBox1->TabIndex = 15;
			this->richTextBox1->Text = L"";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(410, 309);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(40, 17);
			this->checkBox2->TabIndex = 16;
			this->checkBox2->Text = L"No";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &timeSheetAdmin::checkBox2_CheckedChanged);
			// 
			// linkPrev
			// 
			this->linkPrev->AutoSize = true;
			this->linkPrev->Location = System::Drawing::Point(377, 21);
			this->linkPrev->Name = L"linkPrev";
			this->linkPrev->Size = System::Drawing::Size(76, 13);
			this->linkPrev->TabIndex = 18;
			this->linkPrev->TabStop = true;
			this->linkPrev->Text = L"Previous Page";
			this->linkPrev->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &timeSheetAdmin::linkPrev_LinkClicked);
			// 
			// linkLogout
			// 
			this->linkLogout->AutoSize = true;
			this->linkLogout->Location = System::Drawing::Point(478, 21);
			this->linkLogout->Name = L"linkLogout";
			this->linkLogout->Size = System::Drawing::Size(42, 13);
			this->linkLogout->TabIndex = 17;
			this->linkLogout->TabStop = true;
			this->linkLogout->Text = L"LogOut";
			this->linkLogout->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &timeSheetAdmin::linkLogout_LinkClicked);
			// 
			// timeSheetAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 453);
			this->Controls->Add(this->linkPrev);
			this->Controls->Add(this->linkLogout);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"timeSheetAdmin";
			this->Text = L"Time Sheet";
			this->Load += gcnew System::EventHandler(this, &timeSheetAdmin::timeSheetAdmin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timeSheetAdmin_Load(System::Object^ sender, System::EventArgs^ e) {

	label9->Hide();
	label11->Hide();
	label13->Hide();
	label14->Hide();
	richTextBox1->Hide();
	checkBox1->Hide();
	checkBox2->Hide();


	label1->Text = word;


}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLogout_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Hide();

	AdminMenu10->Show();
}
private: System::Void linkPrev_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	this->Hide();

	otherform->Show();
}
};
}
