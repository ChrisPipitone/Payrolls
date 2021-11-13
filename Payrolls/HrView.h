#pragma once
#include "AdminMenu.h"
#include "AddEmployee.h"
#include "UpdateEmployee.h"
#include "ViewPaystub.h"

namespace Payrolls {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for HrView
    /// </summary>
    public ref class HrView : public System::Windows::Forms::Form
    {
    public:
        Form^ otherPage;
        HrView(void)
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
        ~HrView()
        {
            if (components)
            {
                delete components;
            }
        }

    protected:
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;

    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::LinkLabel^ linkLabel1;

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HrView::typeid));
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
            this->SuspendLayout();
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(50, 198);
            this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(138, 47);
            this->button2->TabIndex = 1;
            this->button2->Text = L"Add Employee";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &HrView::button2_Click);
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(321, 198);
            this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(138, 47);
            this->button3->TabIndex = 2;
            this->button3->Text = L"Update/Remove Employee";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &HrView::button3_Click);
            // 
            // button5
            // 
            this->button5->Location = System::Drawing::Point(166, 109);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(177, 52);
            this->button5->TabIndex = 4;
            this->button5->Text = L"View Pay Stub";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &HrView::button5_Click);
            // 
            // linkLabel1
            // 
            this->linkLabel1->AutoSize = true;
            this->linkLabel1->Location = System::Drawing::Point(466, 21);
            this->linkLabel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->linkLabel1->Name = L"linkLabel1";
            this->linkLabel1->Size = System::Drawing::Size(40, 13);
            this->linkLabel1->TabIndex = 5;
            this->linkLabel1->TabStop = true;
            this->linkLabel1->Text = L"Logout";
            this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &HrView::linkLabel1_LinkClicked);
            // 
            // HrView
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(544, 400);
            this->Controls->Add(this->linkLabel1);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->Name = L"HrView";
            this->Text = L"HrView";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

        AddEmployee^ addEmp = gcnew AddEmployee();
        addEmp->otherPage = this;
        this->Hide();
        addEmp->ShowDialog();
    }

    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        UpdateEmployee^ updateEmp = gcnew UpdateEmployee();
        updateEmp->otherPage = this;
        this->Hide();
        updateEmp->ShowDialog();
    }

    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        UpdateEmployee^ updateEmp = gcnew UpdateEmployee();
        updateEmp->otherPage = this;
        this->Hide();
        updateEmp->ShowDialog();
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
        ViewPaystub^ viewPay = gcnew ViewPaystub();
        // this->Hide();
        viewPay->ShowDialog();
    }
    private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
        this->Hide();
        otherPage->Show();
    }
};
}