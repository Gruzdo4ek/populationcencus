#pragma once

namespace PopulationCensus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddCitizenForm
	/// </summary>
	public ref class AddCitizenForm : public System::Windows::Forms::Form
	{
	public:
		AddCitizenForm(void)
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
		~AddCitizenForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
		property array<System::String^>^ InputData {
			array<System::String^>^ get() {
				array<System::String^>^ values = gcnew array<System::String^>(8);
				values[1] = textBoxName->Text;
				values[2] = dateTimePicker1->Text;
				values[3] = comboBox1->Text;
				values[4] = textBoxCity->Text;
				values[5] = comboBoxEducation->Text;
				values[6] = textBoxNumberOfChildren->Text;
				values[7] = textBoxWork->Text;
				return values;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBoxCity;

	private: System::Windows::Forms::TextBox^ textBoxNumberOfChildren;
	private: System::Windows::Forms::TextBox^ textBoxWork;
	private: System::Windows::Forms::Button^ buttonAdd;

	private: System::Windows::Forms::ComboBox^ comboBoxEducation;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxCity = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNumberOfChildren = (gcnew System::Windows::Forms::TextBox());
			this->textBoxWork = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->comboBoxEducation = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(14, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ф.И.О";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(14, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Дата рождения";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(14, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Пол";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(15, 195);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 23);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Город";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(14, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 23);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Образование";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(14, 298);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(169, 23);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Количество детей";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(14, 336);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 23);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Работа";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(174, 51);
			this->textBoxName->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(249, 26);
			this->textBoxName->TabIndex = 7;
			this->textBoxName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddCitizenForm::textBoxName_TextChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(174, 95);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(133, 26);
			this->dateTimePicker1->TabIndex = 8;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"М", L"Ж" });
			this->comboBox1->Location = System::Drawing::Point(174, 145);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(61, 28);
			this->comboBox1->TabIndex = 9;
			// 
			// textBoxCity
			// 
			this->textBoxCity->Location = System::Drawing::Point(174, 195);
			this->textBoxCity->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxCity->Name = L"textBoxCity";
			this->textBoxCity->Size = System::Drawing::Size(252, 26);
			this->textBoxCity->TabIndex = 10;
			this->textBoxCity->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddCitizenForm::textBoxCity_TextChanged);
			// 
			// textBoxNumberOfChildren
			// 
			this->textBoxNumberOfChildren->Location = System::Drawing::Point(174, 294);
			this->textBoxNumberOfChildren->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxNumberOfChildren->Name = L"textBoxNumberOfChildren";
			this->textBoxNumberOfChildren->Size = System::Drawing::Size(252, 26);
			this->textBoxNumberOfChildren->TabIndex = 12;
			this->textBoxNumberOfChildren->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddCitizenForm::textBoxNumberOfChildren_TextChanged);
			// 
			// textBoxWork
			// 
			this->textBoxWork->Location = System::Drawing::Point(174, 336);
			this->textBoxWork->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxWork->Name = L"textBoxWork";
			this->textBoxWork->Size = System::Drawing::Size(252, 26);
			this->textBoxWork->TabIndex = 13;
			this->textBoxWork->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddCitizenForm::textBoxWork_TextChanged);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(404, 414);
			this->buttonAdd->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(108, 29);
			this->buttonAdd->TabIndex = 14;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &AddCitizenForm::buttonAdd_Click);
			// 
			// comboBoxEducation
			// 
			this->comboBoxEducation->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxEducation->FormattingEnabled = true;
			this->comboBoxEducation->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Среднее общее", L"Среднее профессиональное",
					L"Высшее"
			});
			this->comboBoxEducation->Location = System::Drawing::Point(174, 244);
			this->comboBoxEducation->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBoxEducation->Name = L"comboBoxEducation";
			this->comboBoxEducation->Size = System::Drawing::Size(249, 28);
			this->comboBoxEducation->TabIndex = 16;
			// 
			// AddCitizenForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 460);
			this->Controls->Add(this->comboBoxEducation);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->textBoxWork);
			this->Controls->Add(this->textBoxNumberOfChildren);
			this->Controls->Add(this->textBoxCity);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"AddCitizenForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавление жителя";
			this->Load += gcnew System::EventHandler(this, &AddCitizenForm::AddCitizenForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->textBoxName->Text;
	String^ dateOfBirth = this->dateTimePicker1->Text;
	String^ gender = this->comboBox1->Text;
	String^ city = this->textBoxCity->Text;
	String^ education = this->comboBoxEducation->Text;
	String^ children = this->textBoxNumberOfChildren->Text;
	String^ work = this->textBoxWork->Text;
	if (name->Length == 0 || dateOfBirth->Length == 0 || gender->Length == 0 || city->Length == 0 || education->Length == 0 || children->Length == 0 || work->Length == 0) {
		MessageBox::Show("Заполните все поля", "Нужно заполнить все поля!", MessageBoxButtons::OK);
	}
	else {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		
	}
}
private: System::Void AddCitizenForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxName_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (textBoxName->Text->Length > 0) {
		textBoxName->Text = textBoxName->Text->Substring(0, 1)->ToUpper() + textBoxName->Text->Substring(1);
		textBoxName->SelectionStart = textBoxName->Text->Length;
	}
	if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar) && !Char::IsWhiteSpace(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}
	if (e->KeyChar == (char)Keys::Enter) {
		textBoxCity->Focus();
		e->Handled = true;
	}
}
private: System::Void textBoxCity_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (textBoxCity->Text->Length > 0) {
		textBoxCity->Text = textBoxCity->Text->Substring(0, 1)->ToUpper() + textBoxCity->Text->Substring(1);
		textBoxCity->SelectionStart = textBoxCity->Text->Length;
	}
	if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar) && !Char::IsWhiteSpace(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}
	if (e->KeyChar == (char)Keys::Enter) {
		textBoxNumberOfChildren->Focus();
		e->Handled = true;
	}
}
private: System::Void textBoxNumberOfChildren_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}
	if (e->KeyChar == (char)Keys::Enter) {
		textBoxWork->Focus();
		e->Handled = true;
	}
}
private: System::Void textBoxWork_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (textBoxWork->Text->Length > 0) {
		textBoxWork->Text = textBoxWork->Text->Substring(0, 1)->ToUpper() + textBoxWork->Text->Substring(1);
		textBoxWork->SelectionStart = textBoxWork->Text->Length;
	}
	if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar) && !Char::IsWhiteSpace(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}
	if (e->KeyChar == (char)Keys::Enter) {
		buttonAdd->Focus();
		e->Handled = true;
	}
}
};
}
