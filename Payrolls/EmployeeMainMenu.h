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
			this->editPersonal_panel->Hide();
			this->viewBenefits_panel->Hide();
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

	protected:


	private: System::Windows::Forms::Label^ mainMenuLeft_title;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ editPersonal_panel;
	private: System::Windows::Forms::Panel^ viewBenefits_panel;
	private: System::Windows::Forms::Panel^ ViewPaystubs_panel;
	private: System::Windows::Forms::Panel^ ViewTimesheet_panel;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ Emp_ID;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ Emp;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ToolStripButton^ editPersonalInfo_button;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ viewBenefits_button;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ viewPaystub_botton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripButton^ viewTimesheet_button;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripButton^ InfoAtGlance_button;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator5;
	private: System::Windows::Forms::ToolStripButton^ logout_button;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label8;









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
			this->SuspendLayout();
			// 
			// EmployeeMainMenu
			// 
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"EmployeeMainMenu";
			this->Load += gcnew System::EventHandler(this, &EmployeeMainMenu::EmployeeMainMenu_Load);
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void viewBenefits_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->editPersonal_panel->Hide();
		this->viewBenefits_panel->Show();
	}

	private: System::Void viewPaystub_botton_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void viewTimesheet_button_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void logout_button_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void editPersonalInfo_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->viewBenefits_panel->Hide();
		this->editPersonal_panel->Show();
	}
	private: System::Void InfoAtGlance_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->viewBenefits_panel->Hide();
		this->editPersonal_panel->Hide();
	}

private: System::Void mainMenuLeft_title_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EmployeeMainMenu_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
