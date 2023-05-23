#pragma once

namespace PopulationCensus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SameSurnameSameCity
	/// </summary>
	public ref class SameSurnameSameCity : public System::Windows::Forms::Form
	{
	public:
		SameSurnameSameCity(void)
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
		~SameSurnameSameCity()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateOfBrith;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ City;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Education;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumberOfChildren;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Work;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateOfBrith = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->City = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Education = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumberOfChildren = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Work = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Number,
					this->Name, this->DateOfBrith, this->Gender, this->City, this->Education, this->NumberOfChildren, this->Work
			});
			this->dataGridView1->Location = System::Drawing::Point(-2, -2);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1439, 580);
			this->dataGridView1->TabIndex = 0;
			// 
			// Number
			// 
			this->Number->HeaderText = L"Номер";
			this->Number->MinimumWidth = 6;
			this->Number->Name = L"Number";
			this->Number->Width = 125;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Ф.И.О";
			this->Name->MinimumWidth = 6;
			this->Name->Name = L"Name";
			this->Name->Width = 125;
			// 
			// DateOfBrith
			// 
			this->DateOfBrith->HeaderText = L"Дата рождения";
			this->DateOfBrith->MinimumWidth = 6;
			this->DateOfBrith->Name = L"DateOfBrith";
			this->DateOfBrith->Width = 125;
			// 
			// Gender
			// 
			this->Gender->HeaderText = L"Пол";
			this->Gender->MinimumWidth = 6;
			this->Gender->Name = L"Gender";
			this->Gender->Width = 125;
			// 
			// City
			// 
			this->City->HeaderText = L"Город";
			this->City->MinimumWidth = 6;
			this->City->Name = L"City";
			this->City->Width = 125;
			// 
			// Education
			// 
			this->Education->HeaderText = L"Образование";
			this->Education->MinimumWidth = 6;
			this->Education->Name = L"Education";
			this->Education->Width = 125;
			// 
			// NumberOfChildren
			// 
			this->NumberOfChildren->HeaderText = L"Количество детей";
			this->NumberOfChildren->MinimumWidth = 6;
			this->NumberOfChildren->Name = L"NumberOfChildren";
			this->NumberOfChildren->Width = 125;
			// 
			// Work
			// 
			this->Work->HeaderText = L"Работа";
			this->Work->MinimumWidth = 6;
			this->Work->Name = L"Work";
			this->Work->Width = 125;
			// 
			// SameSurnameSameCity
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1450, 574);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Однофамильцы из одного города";
			this->Load += gcnew System::EventHandler(this, &SameSurnameSameCity::SameSurnameSameCity_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
			public:
				void AddRowToDataGridView(array<Object^>^ values)
				{
					dataGridView1->Rows->Add(values);
				}
	private: System::Void SameSurnameSameCity_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
