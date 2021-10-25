#pragma once
#include "Admin2.h"

namespace Payrolls {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		String^ word;
	private: System::Windows::Forms::Label^ label5;
	public:
		String^ word1 = "dont know yet";

		MyForm(void)
		{
			InitializeComponent();
			//textBox1->EmplText = "A";
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
		MyForm(System::Windows::Forms::Form^ Admin, String ^text)
		{
			
			InitializeComponent();
			otherform = Admin;
			word = text;
			
		}


	protected:
		
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ Adm_txt;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::LinkLabel^ Logout;



	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Form^ otherform;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Adm_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Logout = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(44, 180);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Search Employee";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(44, 237);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(185, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Build/Modify Schedule";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Adm_txt
			// 
			this->Adm_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Adm_txt->Location = System::Drawing::Point(266, 187);
			this->Adm_txt->Name = L"Adm_txt";
			this->Adm_txt->Size = System::Drawing::Size(158, 23);
			this->Adm_txt->TabIndex = 2;
			this->Adm_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 31);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Welcome:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Manager of ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(184, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(215, 31);
			this->label3->TabIndex = 5;
			this->label3->Text = L" Employee name";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(448, 104);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(162, 212);
			this->listBox1->TabIndex = 6;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(445, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 18);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Alerts:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// Logout
			// 
			this->Logout->AutoSize = true;
			this->Logout->Location = System::Drawing::Point(533, 9);
			this->Logout->Name = L"Logout";
			this->Logout->Size = System::Drawing::Size(42, 13);
			this->Logout->TabIndex = 8;
			this->Logout->TabStop = true;
			this->Logout->Text = L"LogOut";
			this->Logout->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::Logout_LinkClicked);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(114, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 18);
			this->label5->TabIndex = 9;
			this->label5->Text = L" Position";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(622, 435);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Logout);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Adm_txt);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Admin2^ Admin = gcnew Admin2 (this, otherform, Adm_txt->Text);

		this->Hide();
		Admin->Show();


	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {

		

	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Logout_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		
		this->Hide();
		
		otherform->Show();
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	label3->Text = word;
	label5->Text = word1;
}
};
}