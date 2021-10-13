#pragma once
#include "wx/wx.h"
#include ".h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

	wxTextCtrl* m_txt1 = nullptr;
	wxListBox* m_list1 = nullptr;

	wxButton* m_btn1 = nullptr;
	wxButton* m_btn2 = nullptr;
	wxButton* m_btn3 = nullptr;
	wxButton* m_btn4 = nullptr;
	wxButton* m_btn5 = nullptr;
	wxButton* m_btn6 = nullptr;
	wxButton* m_btn7 = nullptr;
	wxButton* m_btn8 = nullptr;
};