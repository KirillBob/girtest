#pragma once

namespace PractikaWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Add;
	protected:
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::TextBox^ textId;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textProducer;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textGenre;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ textName;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::TextBox^ textYear;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::TextBox^ textActor;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::TextBox^ textCost;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::TextBox^ textBoxOffice;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::TextBox^ textCountry;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::TextBox^ textRating;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;









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
			this->Add = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->textId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textProducer = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textGenre = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textYear = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->textActor = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->textCost = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxOffice = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->textCountry = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->textRating = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->SuspendLayout();
			// 
			// Add
			// 
			this->Add->Location = System::Drawing::Point(689, 444);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(175, 30);
			this->Add->TabIndex = 0;
			this->Add->Text = L"Добавить данные";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &MyForm1::Add_Click);
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(12, 444);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(175, 30);
			this->Exit->TabIndex = 1;
			this->Exit->Text = L"Отмена";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm1::Exit_Click);
			// 
			// textId
			// 
			this->textId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textId->Location = System::Drawing::Point(6, 54);
			this->textId->Name = L"textId";
			this->textId->Size = System::Drawing::Size(188, 30);
			this->textId->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(84, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 25);
			this->label1->TabIndex = 11;
			this->label1->Text = L"ID";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textId);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(110, 80);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 90);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textProducer);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->Location = System::Drawing::Point(110, 182);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 90);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			// 
			// textProducer
			// 
			this->textProducer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textProducer->Location = System::Drawing::Point(6, 54);
			this->textProducer->Name = L"textProducer";
			this->textProducer->Size = System::Drawing::Size(188, 30);
			this->textProducer->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(49, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 25);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Режиссёр";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textGenre);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox3->Location = System::Drawing::Point(325, 80);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 90);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			// 
			// textGenre
			// 
			this->textGenre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textGenre->Location = System::Drawing::Point(6, 54);
			this->textGenre->Name = L"textGenre";
			this->textGenre->Size = System::Drawing::Size(188, 30);
			this->textGenre->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(65, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 25);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Жанр";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textName);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox4->Location = System::Drawing::Point(540, 80);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 90);
			this->groupBox4->TabIndex = 13;
			this->groupBox4->TabStop = false;
			// 
			// textName
			// 
			this->textName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textName->Location = System::Drawing::Point(6, 54);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(188, 30);
			this->textName->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(53, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 25);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Название";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textYear);
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox5->Location = System::Drawing::Point(540, 182);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(200, 90);
			this->groupBox5->TabIndex = 13;
			this->groupBox5->TabStop = false;
			// 
			// textYear
			// 
			this->textYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textYear->Location = System::Drawing::Point(6, 54);
			this->textYear->Name = L"textYear";
			this->textYear->Size = System::Drawing::Size(188, 30);
			this->textYear->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(76, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 25);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Год";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->textActor);
			this->groupBox6->Controls->Add(this->label6);
			this->groupBox6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox6->Location = System::Drawing::Point(325, 284);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(200, 90);
			this->groupBox6->TabIndex = 13;
			this->groupBox6->TabStop = false;
			// 
			// textActor
			// 
			this->textActor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textActor->Location = System::Drawing::Point(6, 54);
			this->textActor->Name = L"textActor";
			this->textActor->Size = System::Drawing::Size(188, 30);
			this->textActor->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(27, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(151, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Главный актёр";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->textCost);
			this->groupBox7->Controls->Add(this->label7);
			this->groupBox7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox7->Location = System::Drawing::Point(540, 284);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(200, 90);
			this->groupBox7->TabIndex = 13;
			this->groupBox7->TabStop = false;
			// 
			// textCost
			// 
			this->textCost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textCost->Location = System::Drawing::Point(6, 54);
			this->textCost->Name = L"textCost";
			this->textCost->Size = System::Drawing::Size(188, 30);
			this->textCost->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(40, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 25);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Стоимость";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->textBoxOffice);
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox8->Location = System::Drawing::Point(325, 380);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(200, 90);
			this->groupBox8->TabIndex = 14;
			this->groupBox8->TabStop = false;
			// 
			// textBoxOffice
			// 
			this->textBoxOffice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxOffice->Location = System::Drawing::Point(6, 54);
			this->textBoxOffice->Name = L"textBoxOffice";
			this->textBoxOffice->Size = System::Drawing::Size(188, 30);
			this->textBoxOffice->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(20, 18);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(162, 25);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Кассовые сборы";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->textCountry);
			this->groupBox9->Controls->Add(this->label9);
			this->groupBox9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox9->Location = System::Drawing::Point(325, 182);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(200, 90);
			this->groupBox9->TabIndex = 14;
			this->groupBox9->TabStop = false;
			// 
			// textCountry
			// 
			this->textCountry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textCountry->Location = System::Drawing::Point(6, 54);
			this->textCountry->Name = L"textCountry";
			this->textCountry->Size = System::Drawing::Size(188, 30);
			this->textCountry->TabIndex = 2;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(63, 18);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 25);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Страна";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->textRating);
			this->groupBox10->Controls->Add(this->label10);
			this->groupBox10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox10->Location = System::Drawing::Point(110, 284);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(200, 90);
			this->groupBox10->TabIndex = 14;
			this->groupBox10->TabStop = false;
			// 
			// textRating
			// 
			this->textRating->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textRating->Location = System::Drawing::Point(6, 54);
			this->textRating->Name = L"textRating";
			this->textRating->Size = System::Drawing::Size(188, 30);
			this->textRating->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(60, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 25);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Рейтинг";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->CausesValidation = false;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(280, 29);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(292, 32);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Добавление фильма";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(876, 486);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->groupBox10);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Add);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e);
};
}
