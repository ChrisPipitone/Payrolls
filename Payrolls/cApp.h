#pragma once
#include "wx/wx.h"
#include "cApp.h"
class cApp : public wxApp
{
public:
	cApp();
	~cApp();
private:
	cApp* m_frame1 = nullptr;

public:
	virtual bool OnInit();
};