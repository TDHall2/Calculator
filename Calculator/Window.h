#pragma once
#include "wx/wx.h"


class Window : public wxFrame
{
private:
	int width = 4;
	int height = 5;
	wxTextCtrl* textBox = nullptr;
	wxButton* btn0 = nullptr;
	wxButton* btn1 = nullptr;
	wxButton* btn2 = nullptr;
	wxButton* btn3 = nullptr;
	wxButton* btn4 = nullptr;
	wxButton* btn5 = nullptr;
	wxButton* btn6 = nullptr;
	wxButton* btn7 = nullptr;
	wxButton* btn8 = nullptr;
	wxButton* btn9 = nullptr;
	wxButton* btnPlus = nullptr;
	wxButton* btnMinus = nullptr;
	wxButton* btnDivide = nullptr;
	wxButton* btnMulti = nullptr;
	wxButton* btnEqual = nullptr;
	wxButton* btnClear = nullptr;
	wxButton* btnMod = nullptr;
	wxButton* btnMode = nullptr;
	wxButton* btnNegative = nullptr;
	wxButton* pI = nullptr;
	char function = '/0';
	int first = 0;
	int second = 0;




	wxDECLARE_EVENT_TABLE();



public:
	Window();
	void OnButttonClickPi(wxCommandEvent& evt);
	void OnButttonClick0(wxCommandEvent& evt);
	void OnButttonClick1(wxCommandEvent& evt);

	void OnButttonClick2(wxCommandEvent& evt);

	void OnButttonClick3(wxCommandEvent& evt);

	void OnButttonClick4(wxCommandEvent& evt);

	void OnButttonClick5(wxCommandEvent& evt);

	void OnButttonClick6(wxCommandEvent& evt);

	void OnButttonClick7(wxCommandEvent& evt);

	void OnButttonClick8(wxCommandEvent& evt);

	void OnButttonClick9(wxCommandEvent& evt);

	void OnButttonClickPlus(wxCommandEvent& evt);

	void OnButttonClickMinus(wxCommandEvent& evt);
	void OnButttonClickDivide(wxCommandEvent& evt);
	void OnButttonClickMulti(wxCommandEvent& evt);
	void OnButttonClickClear(wxCommandEvent& evt);

	void OnButttonClickMod(wxCommandEvent& evt);
	void OnButttonClickMode(wxCommandEvent& evt);

	void OnButttonClickEqual(wxCommandEvent& evt);

	void OnButttonClickNegative(wxCommandEvent& evt);


};
