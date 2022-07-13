#include "Window.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)

 EVT_BUTTON(0, OnButttonClick0)
	EVT_BUTTON(1, OnButttonClick1)
	EVT_BUTTON(2, OnButttonClick2)
	EVT_BUTTON(3, OnButttonClick3)
	EVT_BUTTON(4, OnButttonClick4)
	EVT_BUTTON(5, OnButttonClick5)
	EVT_BUTTON(6, OnButttonClick6)
	EVT_BUTTON(7, OnButttonClick7)
	EVT_BUTTON(8, OnButttonClick8)
	EVT_BUTTON(9, OnButttonClick9)
	EVT_BUTTON(10, OnButttonClickPlus)
	EVT_BUTTON(11, OnButttonClickMinus)
	EVT_BUTTON(12, OnButttonClickDivide)
	EVT_BUTTON(13, OnButttonClickClear)
	EVT_BUTTON(14, OnButttonClickMod)
	EVT_BUTTON(15, OnButttonClickMode)
	EVT_BUTTON(16, OnButttonClickNegative)
	EVT_BUTTON(17, OnButttonClickEqual)
	EVT_BUTTON(18, OnButttonClickMulti)
	EVT_BUTTON(19, OnButttonClickPi)


wxEND_EVENT_TABLE()

Window::Window() : wxFrame(nullptr, wxID_ANY, "SWE Calculator", wxPoint(200, 200), wxSize(500, 500)) {
	wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
	wxGridSizer* grid = new wxGridSizer(4, 5, 2);
	textBox = new wxTextCtrl(this, wxID_ANY);
	mainSizer->Add(textBox, -1, wxEXPAND | wxALL);
	btn0 = new wxButton(this, 0, "0");
	btn1 = new wxButton(this, 1, "1");
	btn2 = new wxButton(this, 2, "2");
	btn3 = new wxButton(this, 3, "3");
	btn4 = new wxButton(this, 4, "4");
	btn5 = new wxButton(this, 5, "5");
	btn6 = new wxButton(this, 6, "6");
	btn7 = new wxButton(this, 7, "7");
	btn8 = new wxButton(this, 8, "8");
	btn9 = new wxButton(this, 9, "9");
	btnPlus = new wxButton(this, 10, "+");
	btnMinus = new wxButton(this, 11, "-");
	btnDivide = new wxButton(this, 12, "/");
	btnClear = new wxButton(this, 13, "C");
	btnMod = new wxButton(this, 14, "%");
	btnMode = new wxButton(this, 15, "Mode");
	btnNegative = new wxButton(this, 16, "+/-");
	btnEqual = new wxButton(this, 17, "=");
	btnMulti = new wxButton(this, 18, "X");
	pI = new wxButton(this, 19, "Pi");


	grid->Add(btn0, 1, wxEXPAND | wxALL);
	grid->Add(btn1, 1, wxEXPAND | wxALL);
	grid->Add(btn2, 1, wxEXPAND | wxALL);
	grid->Add(btn3, 1, wxEXPAND | wxALL);
	grid->Add(btn4, 1, wxEXPAND | wxALL);
	grid->Add(btn5, 1, wxEXPAND | wxALL);
	grid->Add(btn6, 1, wxEXPAND | wxALL);
	grid->Add(btn7, 1, wxEXPAND | wxALL);
	grid->Add(btn8, 1, wxEXPAND | wxALL);
	grid->Add(btn9, 1, wxEXPAND | wxALL);
	grid->Add(btnPlus, 1, wxEXPAND | wxALL);
	grid->Add(btnMinus, 1, wxEXPAND | wxALL);
	grid->Add(btnDivide, 1, wxEXPAND | wxALL);
	grid->Add(btnClear, 1, wxEXPAND | wxALL);
	grid->Add(btnMod, 1, wxEXPAND | wxALL);
	grid->Add(btnMode, 1, wxEXPAND | wxALL);
	grid->Add(btnNegative, 1, wxEXPAND | wxALL);
	grid->Add(btnMulti, 1, wxEXPAND | wxALL);
	grid->Add(btnEqual, 1,wxEXPAND | wxALL );
	grid->Add(pI, 1, wxEXPAND | wxALL);


	
	mainSizer->Add(grid,-1,wxEXPAND| wxALL
	);
	this->SetSizer(mainSizer);
	grid->Layout();





}
void Window::OnButttonClick0(wxCommandEvent& evt) {
	textBox->AppendText(btn0->GetLabel());
	evt.Skip();
	


}
void Window::OnButttonClick1(wxCommandEvent& evt) {
	textBox->AppendText(btn1->GetLabel());



}

void Window::OnButttonClick2(wxCommandEvent& evt) {
	textBox->AppendText(btn2->GetLabel());




}

void Window::OnButttonClick3(wxCommandEvent& evt) {
	textBox->AppendText(btn3->GetLabel());



}

void Window::OnButttonClick4(wxCommandEvent& evt) {
	textBox->AppendText(btn4->GetLabel());




}

void Window::OnButttonClick5(wxCommandEvent& evt) {
	textBox->AppendText(btn5->GetLabel());




}

void Window::OnButttonClick6(wxCommandEvent& evt) {
	textBox->AppendText(btn6->GetLabel());




}

void Window::OnButttonClick7(wxCommandEvent& evt) {
	textBox->AppendText(btn7->GetLabel());




}

void Window::OnButttonClick8(wxCommandEvent& evt) {
	textBox->AppendText(btn8->GetLabel());




}

void Window::OnButttonClick9(wxCommandEvent& evt) {
	textBox->AppendText(btn9->GetLabel());




}

void Window::OnButttonClickPlus(wxCommandEvent& evt) {
	function = '+';
	textBox->AppendText(btnPlus->GetLabel());





}

void Window::OnButttonClickMinus(wxCommandEvent& evt) {
	function = '-';
	textBox->AppendText(btnMinus->GetLabel());




}

void Window::OnButttonClickDivide(wxCommandEvent& evt) {
	function = '/';
	textBox->AppendText(btnDivide->GetLabel());




}

void Window::OnButttonClickMulti(wxCommandEvent& evt) {
	function = '*';
	textBox->AppendText(btnMulti->GetLabel());




}

void Window::OnButttonClickClear(wxCommandEvent& evt) {
	textBox->AppendText(btnClear->GetLabel());




}

void Window::OnButttonClickMod(wxCommandEvent& evt) {
	textBox->AppendText(btnMod->GetLabel());




}

void Window::OnButttonClickMode(wxCommandEvent& evt) {
	textBox->AppendText(btnMode->GetLabel());




}

void Window::OnButttonClickEqual(wxCommandEvent& evt) {
	textBox->AppendText(btnEqual->GetLabel());




}

void Window::OnButttonClickNegative(wxCommandEvent& evt) {
	textBox->AppendText(btnNegative->GetLabel());




}

void Window::OnButttonClickPi(wxCommandEvent& evt) {
	textBox->AppendText(btn7->GetLabel());




}

