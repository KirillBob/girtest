#include "MyForm.h"
#include "Practika_S2.h"
#include "MyForm11.h"
#include "MyForm1.h"
#include "MyForm2.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace System::Collections::Generic;

bool FLAG = true;

[STAThreadAttribute]
int main(cli::array<String^>^ args)
{
	FromTxt(film);
	
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	
	PractikaWinForms::MyForm form;
	Application::Run(% form);
	
	ToTxt(film);
}

System::Void PractikaWinForms::MyForm::add_film_Click(System::Object^ sender, System::EventArgs^ e)
{
	int len = LEN;
	MyForm::Hide();
	MyForm1^ form1 = gcnew MyForm1();
	form1->ShowDialog();
	MyForm::Show();
	if (LEN > len)
	{
		Table->Rows->Add();
	}
	return System::Void();
}

System::Void PractikaWinForms::MyForm::Exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	return System::Void();
}

System::Void PractikaWinForms::MyForm::show_table_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (FLAG)
	{
		for (int i = 0; i < LEN; i++)
		{
			Table->Rows->Add();
		}
		FLAG = false;
	}
	
	for (int i = 0; i < LEN; i++) {
		Table->Rows[i]->Cells[0]->Value = film[i].id;
		Table->Rows[i]->Cells[1]->Value = gcnew System::String(film[i].genre.c_str());
		Table->Rows[i]->Cells[2]->Value = gcnew System::String(film[i].name.c_str());
		Table->Rows[i]->Cells[3]->Value = gcnew System::String(film[i].producer.c_str());
		Table->Rows[i]->Cells[4]->Value = gcnew System::String(film[i].country.c_str());
		Table->Rows[i]->Cells[5]->Value = film[i].year;
		Table->Rows[i]->Cells[6]->Value = film[i].rating;
		Table->Rows[i]->Cells[7]->Value = gcnew System::String(film[i].actor.c_str());
		Table->Rows[i]->Cells[8]->Value = film[i].cost;
		Table->Rows[i]->Cells[9]->Value = film[i].boxOffice;
	}
}

System::Void PractikaWinForms::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void PractikaWinForms::MyForm::edit_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void PractikaWinForms::MyForm::sort_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm::Hide();
	MyForm11^ form11 = gcnew MyForm11();
	form11->ShowDialog();
	MyForm::Show();
	return System::Void();
}

System::Void PractikaWinForms::MyForm::seach_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void PractikaWinForms::MyForm::show_grafic_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm::Hide();
	MyForm2^ form2 = gcnew MyForm2();
	form2->ShowDialog();
	MyForm::Show();
	return System::Void();
}
