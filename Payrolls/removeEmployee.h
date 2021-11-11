#pragma once
#include"ConnectionPath.h"

namespace Payrolls {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for removeEmployee
	/// </summary>
	public ref class removeEmployee : public System::Windows::Forms::Form
	{
	private:
		void init(System::String^ empID);
		void deleteEmployee(System::String^ empID);
		int employeeID;
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
		
	//log out to login screen
	private: System::Windows::Forms::Form^ orignalMenu;

	System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox1;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(removeEmployee::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(135, 27);
			   this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(286, 36);
			   this->label1->TabIndex = 6;
			   this->label1->Text = L"Employee Removal";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(352, 186);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(150, 20);
			   this->label2->TabIndex = 7;
			   this->label2->Text = L"Input Employee ID";
			   this->label2->Click += gcnew System::EventHandler(this, &removeEmployee::label2_Click_1);
				// 
				// textBox1
				//
			  /*this->textBox1->Location = System::Drawing::Point(150, 49);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(120, 26);
			   this->textBox1->TabIndex = 8;*/
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(25, 216);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(146, 23);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Terminated";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &removeEmployee::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->Location = System::Drawing::Point(25, 175);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(146, 24);
			   this->button2->TabIndex = 1;
			   this->button2->Text = L"Deceased";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &removeEmployee::button2_Click);
			   // 
			   // button3
			   // 
			   this->button3->Location = System::Drawing::Point(25, 259);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(146, 25);
			   this->button3->TabIndex = 2;
			   this->button3->Text = L"Quit";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &removeEmployee::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->Location = System::Drawing::Point(25, 306);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(146, 25);
			   this->button4->TabIndex = 3;
			   this->button4->Text = L"Removed Employees";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &removeEmployee::button4_Click);
			   // 
			   // button5
			   // 
			   this->button5->Location = System::Drawing::Point(25, 350);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(146, 25);
			   this->button5->TabIndex = 4;
			   this->button5->Text = L"Log out";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &removeEmployee::button5_Click);
			   // 
			   // button6
			   // 
			   this->button6->Location = System::Drawing::Point(319, 306);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(176, 25);
			   this->button6->TabIndex = 5;
			   this->button6->Text = L"Remove Employee";
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &removeEmployee::button6_Click);
			   // 
			   // removeEmployee
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(600, 400);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button5);
//<<<<<<< HEAD
			   this->Controls->Add(this->button6);
//=======
			   this->Controls->Add(this->label1);
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
//>>>>>>> 308eaa3e5daa60a9a7362a76ac240e86cbf8d9a6
			   this->Name = L"removeEmployee";
			   this->Text = L"Remove Employee";
			   this->Load += gcnew System::EventHandler(this, &removeEmployee::removeEmployee_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }

#pragma endregion
	private: System::Void removeEmployee_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	//private: System::Void textBox1(System::Object^ sender, System::EventArgs^ e) {
	//}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		orignalMenu->Show();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		
		OleDbConnection^ conn = gcnew OleDbConnection(ConnectionPath::connectionString);
		conn->Open();
		OleDbCommand^ cmd = conn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "DELETE FROM EmployeeInfo WHERE @ID = employeeID";
		cmd->Parameters->AddWithValue("@ID", employeeID);

		cmd->ExecuteNonQuery();
		conn->Close();
		MessageBox::Show("Employee Sucessfully Removed");
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
};
}


