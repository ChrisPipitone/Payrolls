#pragma once
#include "Employee.h"

namespace Payrolls {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EmployeeMainMenu
	/// </summary>
	public ref class EmployeeMainMenu : public System::Windows::Forms::Form
	{
	public:
		void init()
		{
			//this->empName->Text = "should display this text on start up";
		}
		EmployeeMainMenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			init();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EmployeeMainMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	protected:
	private: System::Windows::Forms::ToolStripButton^ editPersonalInfo_button;
	private: System::Windows::Forms::ToolStripButton^ viewBenefits_button;
	private: System::Windows::Forms::ToolStripButton^ viewPaystub_botton;
	private: System::Windows::Forms::ToolStripButton^ viewTimesheet_button;
	private: System::Windows::Forms::ToolStripButton^ logout_button;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::Label^ mainMenuLeft_title;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ editPersonal_panel;
	private: System::Windows::Forms::Label^ label5;












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
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->editPersonalInfo_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->viewBenefits_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->viewPaystub_botton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->viewTimesheet_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->logout_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->mainMenuLeft_title = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->editPersonal_panel = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->toolStrip1->SuspendLayout();
			this->editPersonal_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->editPersonalInfo_button,
					this->toolStripSeparator1, this->viewBenefits_button, this->toolStripSeparator2, this->viewPaystub_botton, this->toolStripSeparator3,
					this->viewTimesheet_button, this->toolStripSeparator4, this->logout_button
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1072, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// editPersonalInfo_button
			// 
			this->editPersonalInfo_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->editPersonalInfo_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->editPersonalInfo_button->Name = L"editPersonalInfo_button";
			this->editPersonalInfo_button->Size = System::Drawing::Size(145, 22);
			this->editPersonalInfo_button->Text = L"Edit Personal Information";
			this->editPersonalInfo_button->Click += gcnew System::EventHandler(this, &EmployeeMainMenu::editPersonalInfo_button_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// viewBenefits_button
			// 
			this->viewBenefits_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->viewBenefits_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->viewBenefits_button->Name = L"viewBenefits_button";
			this->viewBenefits_button->Size = System::Drawing::Size(81, 22);
			this->viewBenefits_button->Text = L"View Benefits";
			this->viewBenefits_button->Click += gcnew System::EventHandler(this, &EmployeeMainMenu::viewBenefits_button_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// viewPaystub_botton
			// 
			this->viewPaystub_botton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->viewPaystub_botton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->viewPaystub_botton->Name = L"viewPaystub_botton";
			this->viewPaystub_botton->Size = System::Drawing::Size(86, 22);
			this->viewPaystub_botton->Text = L"View Paystubs";
			this->viewPaystub_botton->Click += gcnew System::EventHandler(this, &EmployeeMainMenu::viewPaystub_botton_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// viewTimesheet_button
			// 
			this->viewTimesheet_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->viewTimesheet_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->viewTimesheet_button->Name = L"viewTimesheet_button";
			this->viewTimesheet_button->Size = System::Drawing::Size(93, 22);
			this->viewTimesheet_button->Text = L"View Timesheet";
			this->viewTimesheet_button->Click += gcnew System::EventHandler(this, &EmployeeMainMenu::viewTimesheet_button_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// logout_button
			// 
			this->logout_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->logout_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->logout_button->Name = L"logout_button";
			this->logout_button->Size = System::Drawing::Size(49, 22);
			this->logout_button->Text = L"Logout";
			this->logout_button->Click += gcnew System::EventHandler(this, &EmployeeMainMenu::logout_button_Click);
			// 
			// mainMenuLeft_title
			// 
			this->mainMenuLeft_title->AutoSize = true;
			this->mainMenuLeft_title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainMenuLeft_title->Location = System::Drawing::Point(23, 42);
			this->mainMenuLeft_title->Name = L"mainMenuLeft_title";
			this->mainMenuLeft_title->Size = System::Drawing::Size(437, 37);
			this->mainMenuLeft_title->TabIndex = 0;
			this->mainMenuLeft_title->Text = L"Your Information At A Glance";
			this->mainMenuLeft_title->Click += gcnew System::EventHandler(this, &EmployeeMainMenu::mainMenuLeft_title_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(55, 156);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(55, 243);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(55, 323);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Department:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(55, 420);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(242, 25);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Current Benefit Chosen:";
			// 
			// editPersonal_panel
			// 
			this->editPersonal_panel->Controls->Add(this->label5);
			this->editPersonal_panel->Location = System::Drawing::Point(0, 28);
			this->editPersonal_panel->Name = L"editPersonal_panel";
			this->editPersonal_panel->Size = System::Drawing::Size(1072, 661);
			this->editPersonal_panel->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(57, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"label5";
			// 
			// EmployeeMainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1072, 704);
			this->Controls->Add(this->editPersonal_panel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->mainMenuLeft_title);
			this->Controls->Add(this->label1);
			this->Name = L"EmployeeMainMenu";
			this->Text = L"EmployeeMainMenu";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->editPersonal_panel->ResumeLayout(false);
			this->editPersonal_panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void viewBenefits_button_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void viewPaystub_botton_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void viewTimesheet_button_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void logout_button_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void editPersonalInfo_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->editPersonal_panel->Show();
	}


private: System::Void mainMenuLeft_title_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
