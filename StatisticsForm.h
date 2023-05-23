#pragma once

namespace PopulationCensus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StatisticsForm
	/// </summary>
	public ref class StatisticsForm : public System::Windows::Forms::Form
	{
	public:
		StatisticsForm(void)
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
		~StatisticsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	public: System::Windows::Forms::TextBox^ textBoxAverageAge;
	public: System::Windows::Forms::TextBox^ textBoxAverageAgeMale;
	public: System::Windows::Forms::TextBox^ textBoxAverageAgeFemale;
	public: System::Windows::Forms::TextBox^ textBoxHighEducation;
	public: System::Windows::Forms::TextBox^ textBoxMostPopulatedCity;






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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxAverageAge = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAverageAgeMale = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAverageAgeFemale = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHighEducation = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMostPopulatedCity = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Средний возраст";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(201, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Средний возраст мужчин";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(205, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Средний возраст женщин";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(226, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Имеют высшее образование";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(40, 235);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(205, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Самый населенный город";
			// 
			// textBoxAverageAge
			// 
			this->textBoxAverageAge->Location = System::Drawing::Point(279, 40);
			this->textBoxAverageAge->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxAverageAge->Name = L"textBoxAverageAge";
			this->textBoxAverageAge->ReadOnly = true;
			this->textBoxAverageAge->Size = System::Drawing::Size(136, 26);
			this->textBoxAverageAge->TabIndex = 6;
			this->textBoxAverageAge->TextChanged += gcnew System::EventHandler(this, &StatisticsForm::textBoxAverageAge_TextChanged);
			// 
			// textBoxAverageAgeMale
			// 
			this->textBoxAverageAgeMale->Location = System::Drawing::Point(279, 86);
			this->textBoxAverageAgeMale->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxAverageAgeMale->Name = L"textBoxAverageAgeMale";
			this->textBoxAverageAgeMale->ReadOnly = true;
			this->textBoxAverageAgeMale->Size = System::Drawing::Size(136, 26);
			this->textBoxAverageAgeMale->TabIndex = 7;
			// 
			// textBoxAverageAgeFemale
			// 
			this->textBoxAverageAgeFemale->Location = System::Drawing::Point(279, 138);
			this->textBoxAverageAgeFemale->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxAverageAgeFemale->Name = L"textBoxAverageAgeFemale";
			this->textBoxAverageAgeFemale->ReadOnly = true;
			this->textBoxAverageAgeFemale->Size = System::Drawing::Size(136, 26);
			this->textBoxAverageAgeFemale->TabIndex = 8;
			this->textBoxAverageAgeFemale->TextChanged += gcnew System::EventHandler(this, &StatisticsForm::textBox3_TextChanged);
			// 
			// textBoxHighEducation
			// 
			this->textBoxHighEducation->Location = System::Drawing::Point(279, 188);
			this->textBoxHighEducation->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxHighEducation->Name = L"textBoxHighEducation";
			this->textBoxHighEducation->ReadOnly = true;
			this->textBoxHighEducation->Size = System::Drawing::Size(136, 26);
			this->textBoxHighEducation->TabIndex = 9;
			// 
			// textBoxMostPopulatedCity
			// 
			this->textBoxMostPopulatedCity->Location = System::Drawing::Point(279, 235);
			this->textBoxMostPopulatedCity->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxMostPopulatedCity->Name = L"textBoxMostPopulatedCity";
			this->textBoxMostPopulatedCity->ReadOnly = true;
			this->textBoxMostPopulatedCity->Size = System::Drawing::Size(136, 26);
			this->textBoxMostPopulatedCity->TabIndex = 10;
			// 
			// StatisticsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(471, 341);
			this->Controls->Add(this->textBoxMostPopulatedCity);
			this->Controls->Add(this->textBoxHighEducation);
			this->Controls->Add(this->textBoxAverageAgeFemale);
			this->Controls->Add(this->textBoxAverageAgeMale);
			this->Controls->Add(this->textBoxAverageAge);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"StatisticsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Статистика";
			this->Load += gcnew System::EventHandler(this, &StatisticsForm::StatisticsForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void StatisticsForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void textBoxAverageAge_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
