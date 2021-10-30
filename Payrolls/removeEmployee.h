#pragma once

namespace Payrolls {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for removeEmployee
	/// </summary>
	public ref class removeEmployee : public System::Windows::Forms::Form
	{
	public:
		removeEmployee(void)
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
		~removeEmployee()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::TextBox^ textBox1;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			// 
			// removeEmployee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"removeEmployee";
			this->Text = L"Remove Employee";
			this->Load += gcnew System::EventHandler(this, &removeEmployee::removeEmployee_Load);
			this->ResumeLayout(false);
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
		}
		// 
		// label1
		//
		/*
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->label1->Location = System::Drawing::Point(462, 53);
		this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(552, 44);
		this->label1->TabIndex = 0;
		this->label1->Text = L"Select reasons for employee removal";
		
		// 
		// button1 terminated
		//
		
		this->button1->Location = System::Drawing::Point(646, 452);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(207, 51);
		this->button1->TabIndex = 7;
		this->button1->Text = L"Terminate";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
		
		// button 2 Deceased
		this->button2->Location = System::Drawing::Point(646, 452);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(207, 51);
		this->button2->TabIndex = 7;
		this->button2->Text = L"Deceased";
		this->button2->UseVisualStyleBackColor = true;
		this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);

		//button 3 quit
		this->button3->Location = System::Drawing::Point(646, 452);
		this->button3->Name = L"button3";
		this->button3->Size = System::Drawing::Size(207, 51);
		this->button3->TabIndex = 7;
		this->button3->Text = L"Quit";
		this->button3->UseVisualStyleBackColor = true;
		this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
		*/
		//Textbox for description of removal

#pragma endregion
	private: System::Void removeEmployee_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		   }
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
				  }
	private: System::Void textBox1(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
