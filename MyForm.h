#pragma once

namespace PractikaWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ add_film;
	private: System::Windows::Forms::Label^ Menu;

	protected:

	protected:

	protected:

	private: System::Windows::Forms::Button^ seach;
	private: System::Windows::Forms::Button^ sort;
	private: System::Windows::Forms::Button^ edit;




	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ Table;

	private: System::Windows::Forms::Button^ show_table;
	private: System::Windows::Forms::Button^ show_grafic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;


















	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->add_film = (gcnew System::Windows::Forms::Button());
			this->Menu = (gcnew System::Windows::Forms::Label());
			this->seach = (gcnew System::Windows::Forms::Button());
			this->sort = (gcnew System::Windows::Forms::Button());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Table = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->show_table = (gcnew System::Windows::Forms::Button());
			this->show_grafic = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table))->BeginInit();
			this->SuspendLayout();
			// 
			// add_film
			// 
			this->add_film->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->add_film->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_film->Location = System::Drawing::Point(33, 37);
			this->add_film->Name = L"add_film";
			this->add_film->Size = System::Drawing::Size(130, 30);
			this->add_film->TabIndex = 0;
			this->add_film->Text = L"Добавление";
			this->add_film->UseVisualStyleBackColor = false;
			this->add_film->Click += gcnew System::EventHandler(this, &MyForm::add_film_Click);
			// 
			// Menu
			// 
			this->Menu->AutoSize = true;
			this->Menu->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Menu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Menu->Location = System::Drawing::Point(103, 322);
			this->Menu->Name = L"Menu";
			this->Menu->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Menu->Size = System::Drawing::Size(165, 59);
			this->Menu->TabIndex = 1;
			this->Menu->Text = L"Меню";
			// 
			// seach
			// 
			this->seach->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->seach->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->seach->Location = System::Drawing::Point(33, 201);
			this->seach->Name = L"seach";
			this->seach->Size = System::Drawing::Size(130, 30);
			this->seach->TabIndex = 2;
			this->seach->Text = L"Поиск";
			this->seach->UseVisualStyleBackColor = false;
			this->seach->Click += gcnew System::EventHandler(this, &MyForm::seach_Click);
			// 
			// sort
			// 
			this->sort->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->sort->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sort->Location = System::Drawing::Point(33, 146);
			this->sort->Name = L"sort";
			this->sort->Size = System::Drawing::Size(130, 30);
			this->sort->TabIndex = 3;
			this->sort->Text = L"Сортировка";
			this->sort->UseVisualStyleBackColor = false;
			this->sort->Click += gcnew System::EventHandler(this, &MyForm::sort_Click);
			// 
			// edit
			// 
			this->edit->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->edit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->edit->Location = System::Drawing::Point(33, 93);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(130, 30);
			this->edit->TabIndex = 4;
			this->edit->Text = L"Редактирование";
			this->edit->UseVisualStyleBackColor = false;
			this->edit->Click += gcnew System::EventHandler(this, &MyForm::edit_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Location = System::Drawing::Point(33, 256);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(130, 30);
			this->Exit->TabIndex = 5;
			this->Exit->Text = L"Выход";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->add_film);
			this->groupBox1->Controls->Add(this->Exit);
			this->groupBox1->Controls->Add(this->seach);
			this->groupBox1->Controls->Add(this->edit);
			this->groupBox1->Controls->Add(this->sort);
			this->groupBox1->Location = System::Drawing::Point(93, 384);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 316);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			// 
			// Table
			// 
			this->Table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->Table->Location = System::Drawing::Point(361, 103);
			this->Table->Name = L"Table";
			this->Table->RowHeadersWidth = 4;
			this->Table->RowTemplate->Height = 24;
			this->Table->Size = System::Drawing::Size(1382, 763);
			this->Table->TabIndex = 7;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 30;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Жанр";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Название";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Режиссёр";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Страна";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Год";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 50;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Рейтинг";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Главный Актёр";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Стоимость";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 70;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Кассовые сборы";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 125;
			// 
			// show_table
			// 
			this->show_table->Location = System::Drawing::Point(831, 67);
			this->show_table->Name = L"show_table";
			this->show_table->Size = System::Drawing::Size(150, 30);
			this->show_table->TabIndex = 8;
			this->show_table->Text = L"Обновить Таблицу";
			this->show_table->UseVisualStyleBackColor = true;
			this->show_table->Click += gcnew System::EventHandler(this, &MyForm::show_table_Click);
			// 
			// show_grafic
			// 
			this->show_grafic->Location = System::Drawing::Point(1182, 67);
			this->show_grafic->Name = L"show_grafic";
			this->show_grafic->Size = System::Drawing::Size(150, 30);
			this->show_grafic->TabIndex = 9;
			this->show_grafic->Text = L"Вывести График";
			this->show_grafic->UseVisualStyleBackColor = true;
			this->show_grafic->Click += gcnew System::EventHandler(this, &MyForm::show_grafic_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1789, 878);
			this->Controls->Add(this->show_grafic);
			this->Controls->Add(this->show_table);
			this->Controls->Add(this->Table);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Menu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(1465, 750);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Практика";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void add_film_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void show_table_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void edit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void sort_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void seach_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void show_grafic_Click(System::Object^ sender, System::EventArgs^ e);
};
}
