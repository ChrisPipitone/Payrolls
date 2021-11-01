#pragma once

namespace Payrolls {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EmployeeDetailAdmin
	/// </summary>
	public ref class EmployeeDetailAdmin : public System::Windows::Forms::Form
	{
	private:
		String^ word;
	public:
		EmployeeDetailAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		EmployeeDetailAdmin(System::Windows::Forms::Form^ Admin, System::Windows::Forms::Form^ AdminMenu, String^ text)
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
		~EmployeeDetailAdmin()
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
	private: System::Windows::Forms::LinkLabel^ linkPrev;
	private: System::Windows::Forms::LinkLabel^ linkLogout;
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
			this->linkPrev = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLogout = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name Employee";
			this->label1->Click += gcnew System::EventHandler(this, &EmployeeDetailAdmin::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(62, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Position:";
			this->label2->Click += gcnew System::EventHandler(this, &EmployeeDetailAdmin::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(62, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Hired date:";
			this->label3->Click += gcnew System::EventHandler(this, &EmployeeDetailAdmin::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(62, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Aditional details";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(216, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Dont know yet";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(216, 124);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Date";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(216, 172);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"details";
			this->label7->Click += gcnew System::EventHandler(this, &EmployeeDetailAdmin::label7_Click);
			// 
			// linkPrev
			// 
			this->linkPrev->AutoSize = true;
			this->linkPrev->Location = System::Drawing::Point(236, 17);
			this->linkPrev->Name = L"linkPrev";
			this->linkPrev->Size = System::Drawing::Size(76, 13);
			this->linkPrev->TabIndex = 11;
			this->linkPrev->TabStop = true;
			this->linkPrev->Text = L"Previous Page";
			this->linkPrev->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &EmployeeDetailAdmin::linkPrev_LinkClicked);
			// 
			// linkLogout
			// 
			this->linkLogout->AutoSize = true;
			this->linkLogout->Location = System::Drawing::Point(337, 17);
			this->linkLogout->Name = L"linkLogout";
			this->linkLogout->Size = System::Drawing::Size(42, 13);
			this->linkLogout->TabIndex = 10;
			this->linkLogout->TabStop = true;
			this->linkLogout->Text = L"LogOut";
			this->linkLogout->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &EmployeeDetailAdmin::linkLogout_LinkClicked);
			// 
			// EmployeeDetailAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(391, 344);
			this->Controls->Add(this->linkPrev);
			this->Controls->Add(this->linkLogout);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EmployeeDetailAdmin";
			this->Text = L"Employee Details";
			this->Load += gcnew System::EventHandler(this, &EmployeeDetailAdmin::EmployeeDetailAdmin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EmployeeDetailAdmin_Load(System::Object^ sender, System::EventArgs^ e) {

		label1->Text = word;
		label4->Hide();
		label7->Hide();


	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkPrev_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	this->Hide();

	otherform->Show();
}
private: System::Void linkLogout_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Hide();

	AdminMenu10->Show();
}
};
}
