#pragma once
#include "Practika_S2.h"

namespace PractikaWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Exist;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private: System::Windows::Forms::Button^ Creat;
	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->Exist = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Creat = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// Exist
			// 
			this->Exist->Location = System::Drawing::Point(467, 524);
			this->Exist->Name = L"Exist";
			this->Exist->Size = System::Drawing::Size(200, 30);
			this->Exist->TabIndex = 0;
			this->Exist->Text = L"Выход в меню";
			this->Exist->UseVisualStyleBackColor = true;
			this->Exist->Click += gcnew System::EventHandler(this, &MyForm2::Exist_Click);
			// 
			// chart1
			// 
			chartArea1->CursorX->AutoScroll = false;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Кассовые сборы";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(655, 506);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// Creat
			// 
			this->Creat->Location = System::Drawing::Point(12, 524);
			this->Creat->Name = L"Creat";
			this->Creat->Size = System::Drawing::Size(200, 30);
			this->Creat->TabIndex = 2;
			this->Creat->Text = L"Создать";
			this->Creat->UseVisualStyleBackColor = true;
			this->Creat->Click += gcnew System::EventHandler(this, &MyForm2::Creat_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(679, 566);
			this->Controls->Add(this->Creat);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->Exist);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void Exist_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Creat_Click(System::Object^ sender, System::EventArgs^ e) {
	int* num = TopNum(film);
	string* name = TopName(film);
	cli::array <System::String^>^ x = gcnew cli::array <String^>
	{
			gcnew String(name[0].c_str()),
			gcnew String(name[1].c_str()),
			gcnew String(name[2].c_str()),
			gcnew String(name[3].c_str()),
			gcnew String(name[4].c_str())
	};
	cli::array <double^>^ y = gcnew cli::array <double^>
	{
			gcnew double(num[0]),
			gcnew double(num[1]),
			gcnew double(num[2]),
			gcnew double(num[3]),
			gcnew double(num[4])
	};
	delete[] num;
	delete[] name;
	this->chart1->Series["Кассовые сборы"]->Points->DataBindXY(x, y);
}
};
}
