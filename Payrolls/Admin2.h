#pragma once
#include "EmployeeDetailAdmin.h"
#include "timeSheetAdmin.h"

namespace Payrolls {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin2
	/// </summary>
	public ref class Admin2 : public System::Windows::Forms::Form
	{
	private:
		String^ word;

	public:
		Admin2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Admin2(System::Windows::Forms::Form^ Admin, System::Windows::Forms::Form^ AdminMenu, String^ text)
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
		~Admin2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::Button^ buttonTimeSheet;
	private: System::Windows::Forms::Button^ buttonEmpDetails;

	private: System::Windows::Forms::Label^ labelConfirm;
	private: System::Windows::Forms::Button^ buttonYes;

	private: System::Windows::Forms::Button^ buttonNo;
	private: System::Windows::Forms::LinkLabel^ linkLabel;

	private: System::Windows::Forms::Form^ otherform;
	private: System::Windows::Forms::Form^ AdminMenu10;
	private: System::Windows::Forms::LinkLabel^ linkLogout;

	private: System::Windows::Forms::LinkLabel^ linkPrev;
	private: System::Windows::Forms::Label^ label1;




	protected:

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
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->buttonTimeSheet = (gcnew System::Windows::Forms::Button());
			this->buttonEmpDetails = (gcnew System::Windows::Forms::Button());
			this->labelConfirm = (gcnew System::Windows::Forms::Label());
			this->buttonYes = (gcnew System::Windows::Forms::Button());
			this->buttonNo = (gcnew System::Windows::Forms::Button());
			this->linkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLogout = (gcnew System::Windows::Forms::LinkLabel());
			this->linkPrev = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelName->Location = System::Drawing::Point(42, 28);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(152, 24);
			this->labelName->TabIndex = 0;
			this->labelName->Text = L"Name Employee";
			// 
			// buttonTimeSheet
			// 
			this->buttonTimeSheet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTimeSheet->Location = System::Drawing::Point(223, 111);
			this->buttonTimeSheet->Name = L"buttonTimeSheet";
			this->buttonTimeSheet->Size = System::Drawing::Size(142, 43);
			this->buttonTimeSheet->TabIndex = 1;
			this->buttonTimeSheet->Text = L"Time Sheet";
			this->buttonTimeSheet->UseVisualStyleBackColor = true;
			this->buttonTimeSheet->Click += gcnew System::EventHandler(this, &Admin2::buttonTimeSheet_Click);
			// 
			// buttonEmpDetails
			// 
			this->buttonEmpDetails->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEmpDetails->Location = System::Drawing::Point(223, 192);
			this->buttonEmpDetails->Name = L"buttonEmpDetails";
			this->buttonEmpDetails->Size = System::Drawing::Size(142, 43);
			this->buttonEmpDetails->TabIndex = 2;
			this->buttonEmpDetails->Text = L"Employee Details";
			this->buttonEmpDetails->UseVisualStyleBackColor = true;
			this->buttonEmpDetails->Click += gcnew System::EventHandler(this, &Admin2::button1_Click);
			// 
			// labelConfirm
			// 
			this->labelConfirm->AutoSize = true;
			this->labelConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelConfirm->Location = System::Drawing::Point(219, 306);
			this->labelConfirm->Name = L"labelConfirm";
			this->labelConfirm->Size = System::Drawing::Size(68, 20);
			this->labelConfirm->TabIndex = 4;
			this->labelConfirm->Text = L"Confirm:";
			this->labelConfirm->Click += gcnew System::EventHandler(this, &Admin2::label1_Click);
			// 
			// buttonYes
			// 
			this->buttonYes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonYes->Location = System::Drawing::Point(307, 306);
			this->buttonYes->Name = L"buttonYes";
			this->buttonYes->Size = System::Drawing::Size(58, 30);
			this->buttonYes->TabIndex = 5;
			this->buttonYes->Text = L"Yes";
			this->buttonYes->UseVisualStyleBackColor = true;
			this->buttonYes->Click += gcnew System::EventHandler(this, &Admin2::buttonYes_Click);
			// 
			// buttonNo
			// 
			this->buttonNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNo->Location = System::Drawing::Point(392, 306);
			this->buttonNo->Name = L"buttonNo";
			this->buttonNo->Size = System::Drawing::Size(58, 30);
			this->buttonNo->TabIndex = 6;
			this->buttonNo->Text = L"No";
			this->buttonNo->UseVisualStyleBackColor = true;
			this->buttonNo->Click += gcnew System::EventHandler(this, &Admin2::button2_Click);
			// 
			// linkLabel
			// 
			this->linkLabel->ActiveLinkColor = System::Drawing::Color::Red;
			this->linkLabel->AutoSize = true;
			this->linkLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel->LinkColor = System::Drawing::Color::Red;
			this->linkLabel->Location = System::Drawing::Point(219, 262);
			this->linkLabel->Name = L"linkLabel";
			this->linkLabel->Size = System::Drawing::Size(201, 20);
			this->linkLabel->TabIndex = 7;
			this->linkLabel->TabStop = true;
			this->linkLabel->Text = L"Notify resignation to HR";
			this->linkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Admin2::linkLabel1_LinkClicked);
			// 
			// linkLogout
			// 
			this->linkLogout->AutoSize = true;
			this->linkLogout->Location = System::Drawing::Point(522, 9);
			this->linkLogout->Name = L"linkLogout";
			this->linkLogout->Size = System::Drawing::Size(42, 13);
			this->linkLogout->TabIndex = 8;
			this->linkLogout->TabStop = true;
			this->linkLogout->Text = L"LogOut";
			this->linkLogout->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Admin2::linkLogout_LinkClicked);
			// 
			// linkPrev
			// 
			this->linkPrev->AutoSize = true;
			this->linkPrev->Location = System::Drawing::Point(421, 9);
			this->linkPrev->Name = L"linkPrev";
			this->linkPrev->Size = System::Drawing::Size(76, 13);
			this->linkPrev->TabIndex = 9;
			this->linkPrev->TabStop = true;
			this->linkPrev->Text = L"Previous Page";
			this->linkPrev->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Admin2::linkPrev_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkRed;
			this->label1->Location = System::Drawing::Point(245, 361);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Resignation sent to HR";
			this->label1->Click += gcnew System::EventHandler(this, &Admin2::label1_Click_1);
			// 
			// Admin2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(598, 507);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->linkPrev);
			this->Controls->Add(this->linkLogout);
			this->Controls->Add(this->linkLabel);
			this->Controls->Add(this->buttonNo);
			this->Controls->Add(this->buttonYes);
			this->Controls->Add(this->labelConfirm);
			this->Controls->Add(this->buttonEmpDetails);
			this->Controls->Add(this->buttonTimeSheet);
			this->Controls->Add(this->labelName);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Admin2";
			this->Text = L"Employee Sheet";
			this->Load += gcnew System::EventHandler(this, &Admin2::Admin2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		EmployeeDetailAdmin^ Detail = gcnew EmployeeDetailAdmin(this, AdminMenu10, word);

		this->Hide();
		Detail->Show();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	buttonNo->Hide();
	buttonYes->Hide();
	labelConfirm->Hide();
}
private: System::Void Admin2_Load(System::Object^ sender, System::EventArgs^ e) {

	buttonNo->Hide();
	buttonYes->Hide();
	labelConfirm->Hide();
	label1->Hide();

	labelName->Text = word;
	
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	buttonNo->Show();
	buttonYes->Show();
	labelConfirm->Show();

}
private: System::Void linkPrev_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Hide();

	otherform->Show();

}
private: System::Void linkLogout_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	this->Hide();

	AdminMenu10->Show();
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonYes_Click(System::Object^ sender, System::EventArgs^ e) {
	buttonNo->Hide();
	buttonYes->Hide();
	labelConfirm->Hide();
	label1->Show();

}
private: System::Void buttonTimeSheet_Click(System::Object^ sender, System::EventArgs^ e) {

	timeSheetAdmin^ Sheet = gcnew timeSheetAdmin(this, AdminMenu10, word);

	this->Hide();
	Sheet->Show();
}
};
}
