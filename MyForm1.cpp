#include "MyForm1.h"
#include "Practika_S2.h"

using namespace System;
using namespace System::Windows::Forms;

System::Void PractikaWinForms::MyForm11::Set_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (comboBox1->Text == "Году")
	{
		if (comboBox2->Text == "Возрастанию")
		{
			memcpy(film, SortYearUp(film), sizeof(Film));
			MyForm11::Hide();
		}
		else if(comboBox2->Text == "Убыванию")
		{
			memcpy(film, SortYearDown(film), sizeof(Film));
			MyForm11::Hide();
		}
		else
		{
			MessageBox::Show("Ошибка выбора направления сортировки");
		}
	}
	else if (comboBox1->Text == "Рейтингу")
	{
		if (comboBox2->Text == "Возрастанию")
		{
			memcpy(film, SortRatingUp(film), sizeof(Film));
			MyForm11::Hide();
		}
		else if (comboBox2->Text == "Убыванию")
		{
			memcpy(film, SortRatingDown(film), sizeof(Film));
			MyForm11::Hide();
		}
		else
		{
			MessageBox::Show("Ошибка выбора направления сортировки");
		}
	}
	else
	{
		MessageBox::Show("Ошибка выбора поля сортировки");
	}
	
}

System::Void PractikaWinForms::MyForm11::Exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm11::Hide();
}
