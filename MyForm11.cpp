#include "MyForm11.h"
#include "Practika_S2.h"

using namespace System;
using namespace System::Windows::Forms;

void MarshalString(String^ s, string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

System::Void PractikaWinForms::MyForm1::Exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm1::Hide();
}

System::Void PractikaWinForms::MyForm1::Add_Click(System::Object^ sender, System::EventArgs^ e)
{
	string temp;
	bool answer = (textId->Text == "") || (textGenre->Text == "") || (textName->Text == "") || (textProducer->Text == "") || (textCountry->Text == "") 
		|| (textYear->Text == "") || (textRating->Text == "") || (textActor->Text == "") || (textCost->Text == "") || (textBoxOffice->Text == "");
	bool num = true;
	
	MarshalString(textId->Text, temp);
	if (textId->Text == "")
	{
		MessageBox::Show("Поле id пустое");
	}
	else if (NumInString(temp))
	{
		MessageBox::Show("Поле id должно быть число");
		num = false;
	}
	else
	{
		film[LEN].id = System::Convert::ToInt32(textId->Text);
	}
	
	MarshalString(textGenre->Text, temp);
	if (textGenre->Text == "")
	{
		MessageBox::Show("Поле Жанр пустое");
	}
	else if (answer == false)
	{
		MarshalString(textGenre->Text, temp);
		film[LEN].genre = temp;
	}

	if (textName->Text == "")
	{
		MessageBox::Show("Поля Название пустое");
	}
	else if (answer == false)
	{
		MarshalString(textName->Text, temp);
		film[LEN].name = temp;
	}

	if (textProducer->Text == "")
	{
		MessageBox::Show("Поля Режиссёр пустое");
	}
	else if (answer == false)
	{
		MarshalString(textProducer->Text, temp);
		film[LEN].producer = temp;
	}
	
	
	if (textCountry->Text == "")
	{
		MessageBox::Show("Поля Страна пустое");
	}
	else if (answer == false)
	{
		MarshalString(textCountry->Text, temp);
		film[LEN].country = temp;
	}

	MarshalString(textYear->Text, temp);
	if (textYear->Text == "")
	{
		MessageBox::Show("Поле Год пустое");
	}
	else if (NumInString(temp))
	{
		MessageBox::Show("Поле Год должно быть число");
		num = false;
	}
	else
	{
		film[LEN].year = System::Convert::ToInt32(textYear->Text);
	}
	
	MarshalString(textRating->Text, temp);
	if (textRating->Text == "")
	{
		MessageBox::Show("Поля Рейтинг пустое");
	}
	else if (NumInString(temp))
	{
		MessageBox::Show("Поле Рейтинг должно быть число");
		num = false;
	}
	else
	{
		film[LEN].rating = System::Convert::ToInt16(textRating->Text);
	}
	
	if (textActor->Text == "")
	{
		MessageBox::Show("Поля Главный Актёр пустое");
	}
	else if (answer == false)
	{
		MarshalString(textActor->Text, temp);
		film[LEN].actor = temp;
	}
	
	MarshalString(textCost->Text, temp);
	if (textCost->Text == "")
	{
		MessageBox::Show("Поля Стоимость пустое");
	}
	else if (NumInString(temp))
	{
		MessageBox::Show("Поле Стоимость должно быть число");
		num = false;
	}
	else
	{
		film[LEN].cost = System::Convert::ToInt32(textCost->Text);
	}

	MarshalString(textBoxOffice->Text, temp);
	if (textBoxOffice->Text == "")
	{
		MessageBox::Show("Поля Классовые сборы пустое");
	}
	else if (NumInString(temp))
	{
		MessageBox::Show("Поле Кассовые сборы должно быть число");
		num = false;
	}
	else
	{
		film[LEN].boxOffice = System::Convert::ToInt32(textBoxOffice->Text);
	}


	if ((answer == false) && num)
	{
		LEN++;
		MyForm1::Hide();
	}
}
