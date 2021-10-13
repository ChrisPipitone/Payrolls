#include "HR Menu.h"

/*HR Menu
1. Search Employee
2. Remove Employee (Move removed employee details to terminated employee database)
3. View Benefits
4. View Information
5. View Timesheet
6. View Schedule
7. View Vacation/Sick Days
8. View Pay Stub
*/

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "HR Menu", wxPoint(30, 30), wxSize(800, 600)) {

	m_btn1 = new wxButton(this, wxID_ANY, "Search Employee", wxPoint(10, 10), wxSize(150, 50));
	m_btn2 = new wxButton(this, wxID_ANY, "Remove Employee", wxPoint(10, 10), wxSize(150, 50));
	m_btn3 = new wxButton(this, wxID_ANY, "View Benefits", wxPoint(10, 10), wxSize(150, 50));
	m_btn4 = new wxButton(this, wxID_ANY, "View Information", wxPoint(10, 10), wxSize(150, 50));
	m_btn5 = new wxButton(this, wxID_ANY, "View Timesheet", wxPoint(10, 10), wxSize(150, 50));
	m_btn6 = new wxButton(this, wxID_ANY, "View Schedule", wxPoint(10, 10), wxSize(150, 50));
	m_btn7 = new wxButton(this, wxID_ANY, "View Vacation/Sick Days", wxPoint(10, 10), wxSize(150, 50));
	m_btn8 = new wxButton(this, wxID_ANY, "View Pay Stub", wxPoint(10, 10), wxSize(150, 50));

	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 70), wxSize(300, 30));
	m_list1 = new wxListBox(this, wxID_ANY, wxPoint(10, 110), wxSize(300, 300));

}

cMain::~cMain() {

}

/*void cMain::OnButtonClicked() {

}*/