#pragma once
#include "AddCitizenForm.h"
#include "FormForRedacting.h"
#include "StatisticsForm.h"
#include "SameSurnameSameCity.h"
namespace PopulationCensus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Runtime::Serialization::Formatters::Binary;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			isModified = false;
			dataGridView1->ContextMenuStrip = contextMenuStrip1;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ downloadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveAsToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ SaveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AddToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sortToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ SearchAllToolStripMenuItem;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BirthDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LivingPlace;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Education;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumberOfChildren;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Work;
	private: System::Windows::Forms::ToolStripMenuItem^ referenceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AboutProgrammToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ GuideToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ DateOfBirthToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ NumberAccendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ NumberDescedingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ NameAscendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ NameDescendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ OldFirstToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ YoungFirstToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ CityAscendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ CityDescendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ EducationAscendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ EducationDescendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ChildrenAscendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ChildrenDescendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBoxSearch;
	private: System::Windows::Forms::Button^ buttonSearch;
	private: System::Windows::Forms::ToolStripMenuItem^ StatisticsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ SameSurnameSameCityToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ CopyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ InputToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ delteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ redactingToolStripMenuItem1;
	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->downloadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AddToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->NumberAccendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->NumberDescedingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->NameAscendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->NameDescendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DateOfBirthToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OldFirstToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->YoungFirstToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CityAscendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CityDescendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EducationAscendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EducationDescendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ChildrenAscendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ChildrenDescendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SearchAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->StatisticsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SameSurnameSameCityToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->referenceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AboutProgrammToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GuideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BirthDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LivingPlace = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Education = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumberOfChildren = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Work = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->CopyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->InputToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->delteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redactingToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->����ToolStripMenuItem,
					this->�������������ToolStripMenuItem, this->�����ToolStripMenuItem, this->����������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1803, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->downloadToolStripMenuItem,
					this->SaveAsToolStripMenuItem, this->SaveToolStripMenuItem, this->closeToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(69, 29);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::����ToolStripMenuItem_Click);
			// 
			// downloadToolStripMenuItem
			// 
			this->downloadToolStripMenuItem->Name = L"downloadToolStripMenuItem";
			this->downloadToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->downloadToolStripMenuItem->Text = L"�������";
			this->downloadToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::downloadToolStripMenuItem_Click);
			// 
			// SaveAsToolStripMenuItem
			// 
			this->SaveAsToolStripMenuItem->Enabled = false;
			this->SaveAsToolStripMenuItem->Name = L"SaveAsToolStripMenuItem";
			this->SaveAsToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->SaveAsToolStripMenuItem->Text = L"��������� ���";
			this->SaveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::SaveAsToolStripMenuItem_Click);
			// 
			// SaveToolStripMenuItem
			// 
			this->SaveToolStripMenuItem->Enabled = false;
			this->SaveToolStripMenuItem->Name = L"SaveToolStripMenuItem";
			this->SaveToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->SaveToolStripMenuItem->Text = L"���������";
			this->SaveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::SaveToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->closeToolStripMenuItem->Text = L"�������";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::closeToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->AddToolStripMenuItem,
					this->deleteToolStripMenuItem, this->sortToolStripMenuItem
			});
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(149, 29);
			this->�������������ToolStripMenuItem->Text = L"�������������";
			// 
			// AddToolStripMenuItem
			// 
			this->AddToolStripMenuItem->Name = L"AddToolStripMenuItem";
			this->AddToolStripMenuItem->Size = System::Drawing::Size(221, 34);
			this->AddToolStripMenuItem->Text = L"��������";
			this->AddToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::AddToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Enabled = false;
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(221, 34);
			this->deleteToolStripMenuItem->Text = L"�������";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::deleteToolStripMenuItem_Click);
			// 
			// sortToolStripMenuItem
			// 
			this->sortToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->��������ToolStripMenuItem,
					this->���ToolStripMenuItem, this->DateOfBirthToolStripMenuItem, this->�����ToolStripMenuItem, this->�����������ToolStripMenuItem,
					this->���������������ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->sortToolStripMenuItem->Enabled = false;
			this->sortToolStripMenuItem->Name = L"sortToolStripMenuItem";
			this->sortToolStripMenuItem->Size = System::Drawing::Size(221, 34);
			this->sortToolStripMenuItem->Text = L"�����������";
			this->sortToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::sortToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->NumberAccendingToolStripMenuItem,
					this->NumberDescedingToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(259, 34);
			this->��������ToolStripMenuItem->Text = L"�����";
			// 
			// NumberAccendingToolStripMenuItem
			// 
			this->NumberAccendingToolStripMenuItem->Name = L"NumberAccendingToolStripMenuItem";
			this->NumberAccendingToolStripMenuItem->Size = System::Drawing::Size(251, 34);
			this->NumberAccendingToolStripMenuItem->Text = L"�� �����������";
			this->NumberAccendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::NumberAccendingToolStripMenuItem_Click);
			// 
			// NumberDescedingToolStripMenuItem
			// 
			this->NumberDescedingToolStripMenuItem->Name = L"NumberDescedingToolStripMenuItem";
			this->NumberDescedingToolStripMenuItem->Size = System::Drawing::Size(251, 34);
			this->NumberDescedingToolStripMenuItem->Text = L"�� ��������";
			this->NumberDescedingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::NumberDescedingToolStripMenuItem_Click);
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->NameAscendingToolStripMenuItem,
					this->NameDescendingToolStripMenuItem
			});
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->Size = System::Drawing::Size(259, 34);
			this->���ToolStripMenuItem->Text = L"�.�.�";
			// 
			// NameAscendingToolStripMenuItem
			// 
			this->NameAscendingToolStripMenuItem->Name = L"NameAscendingToolStripMenuItem";
			this->NameAscendingToolStripMenuItem->Size = System::Drawing::Size(314, 34);
			this->NameAscendingToolStripMenuItem->Text = L"�� ��������";
			this->NameAscendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::NameAscendingToolStripMenuItem_Click);
			// 
			// NameDescendingToolStripMenuItem
			// 
			this->NameDescendingToolStripMenuItem->Name = L"NameDescendingToolStripMenuItem";
			this->NameDescendingToolStripMenuItem->Size = System::Drawing::Size(314, 34);
			this->NameDescendingToolStripMenuItem->Text = L"�� ��������� ��������";
			this->NameDescendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::NameDescendingToolStripMenuItem_Click);
			// 
			// DateOfBirthToolStripMenuItem
			// 
			this->DateOfBirthToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->OldFirstToolStripMenuItem,
					this->YoungFirstToolStripMenuItem
			});
			this->DateOfBirthToolStripMenuItem->Name = L"DateOfBirthToolStripMenuItem";
			this->DateOfBirthToolStripMenuItem->Size = System::Drawing::Size(259, 34);
			this->DateOfBirthToolStripMenuItem->Text = L"���� ��������";
			this->DateOfBirthToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::DateOfBirthToolStripMenuItem_Click);
			// 
			// OldFirstToolStripMenuItem
			// 
			this->OldFirstToolStripMenuItem->Name = L"OldFirstToolStripMenuItem";
			this->OldFirstToolStripMenuItem->Size = System::Drawing::Size(277, 34);
			this->OldFirstToolStripMenuItem->Text = L"������� �� ������";
			this->OldFirstToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::OldFirstToolStripMenuItem_Click);
			// 
			// YoungFirstToolStripMenuItem
			// 
			this->YoungFirstToolStripMenuItem->Name = L"YoungFirstToolStripMenuItem";
			this->YoungFirstToolStripMenuItem->Size = System::Drawing::Size(277, 34);
			this->YoungFirstToolStripMenuItem->Text = L"������� � �������";
			this->YoungFirstToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::YoungFirstToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->CityAscendingToolStripMenuItem,
					this->CityDescendingToolStripMenuItem
			});
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(259, 34);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�����ToolStripMenuItem_Click);
			// 
			// CityAscendingToolStripMenuItem
			// 
			this->CityAscendingToolStripMenuItem->Name = L"CityAscendingToolStripMenuItem";
			this->CityAscendingToolStripMenuItem->Size = System::Drawing::Size(314, 34);
			this->CityAscendingToolStripMenuItem->Text = L"�� ��������";
			this->CityAscendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::CityAscendingToolStripMenuItem_Click);
			// 
			// CityDescendingToolStripMenuItem
			// 
			this->CityDescendingToolStripMenuItem->Name = L"CityDescendingToolStripMenuItem";
			this->CityDescendingToolStripMenuItem->Size = System::Drawing::Size(314, 34);
			this->CityDescendingToolStripMenuItem->Text = L"�� ��������� ��������";
			this->CityDescendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::CityDescendingToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->EducationAscendingToolStripMenuItem,
					this->EducationDescendingToolStripMenuItem
			});
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(259, 34);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�����������ToolStripMenuItem_Click);
			// 
			// EducationAscendingToolStripMenuItem
			// 
			this->EducationAscendingToolStripMenuItem->Name = L"EducationAscendingToolStripMenuItem";
			this->EducationAscendingToolStripMenuItem->Size = System::Drawing::Size(314, 34);
			this->EducationAscendingToolStripMenuItem->Text = L"�� ��������";
			this->EducationAscendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::EducationAscendingToolStripMenuItem_Click);
			// 
			// EducationDescendingToolStripMenuItem
			// 
			this->EducationDescendingToolStripMenuItem->Name = L"EducationDescendingToolStripMenuItem";
			this->EducationDescendingToolStripMenuItem->Size = System::Drawing::Size(314, 34);
			this->EducationDescendingToolStripMenuItem->Text = L"�� ��������� ��������";
			this->EducationDescendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::EducationDescendingToolStripMenuItem_Click);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ChildrenAscendingToolStripMenuItem,
					this->ChildrenDescendingToolStripMenuItem
			});
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(259, 34);
			this->���������������ToolStripMenuItem->Text = L"���������� �����";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::���������������ToolStripMenuItem_Click);
			// 
			// ChildrenAscendingToolStripMenuItem
			// 
			this->ChildrenAscendingToolStripMenuItem->Name = L"ChildrenAscendingToolStripMenuItem";
			this->ChildrenAscendingToolStripMenuItem->Size = System::Drawing::Size(251, 34);
			this->ChildrenAscendingToolStripMenuItem->Text = L"�� �����������";
			this->ChildrenAscendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ChildrenAscendingToolStripMenuItem_Click);
			// 
			// ChildrenDescendingToolStripMenuItem
			// 
			this->ChildrenDescendingToolStripMenuItem->Name = L"ChildrenDescendingToolStripMenuItem";
			this->ChildrenDescendingToolStripMenuItem->Size = System::Drawing::Size(251, 34);
			this->ChildrenDescendingToolStripMenuItem->Text = L"�� ��������";
			this->ChildrenDescendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ChildrenDescendingToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->������ToolStripMenuItem,
					this->������ToolStripMenuItem
			});
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(259, 34);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(314, 34);
			this->������ToolStripMenuItem->Text = L"�� ��������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::WorkAscendingToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(314, 34);
			this->������ToolStripMenuItem->Text = L"�� ��������� ��������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::WorkDescendingToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->SearchAllToolStripMenuItem,
					this->StatisticsToolStripMenuItem, this->SameSurnameSameCityToolStripMenuItem
			});
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(79, 29);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::SearchAllToolStripMenuItem_Click);
			// 
			// SearchAllToolStripMenuItem
			// 
			this->SearchAllToolStripMenuItem->Enabled = false;
			this->SearchAllToolStripMenuItem->Name = L"SearchAllToolStripMenuItem";
			this->SearchAllToolStripMenuItem->Size = System::Drawing::Size(384, 34);
			this->SearchAllToolStripMenuItem->Text = L"�����";
			this->SearchAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::SearchAllToolStripMenuItem_Click);
			// 
			// StatisticsToolStripMenuItem
			// 
			this->StatisticsToolStripMenuItem->Enabled = false;
			this->StatisticsToolStripMenuItem->Name = L"StatisticsToolStripMenuItem";
			this->StatisticsToolStripMenuItem->Size = System::Drawing::Size(384, 34);
			this->StatisticsToolStripMenuItem->Text = L"����������";
			this->StatisticsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::StatisticsToolStripMenuItem_Click);
			// 
			// SameSurnameSameCityToolStripMenuItem
			// 
			this->SameSurnameSameCityToolStripMenuItem->Enabled = false;
			this->SameSurnameSameCityToolStripMenuItem->Name = L"SameSurnameSameCityToolStripMenuItem";
			this->SameSurnameSameCityToolStripMenuItem->Size = System::Drawing::Size(384, 34);
			this->SameSurnameSameCityToolStripMenuItem->Text = L"������������ � ����� ������";
			this->SameSurnameSameCityToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::SameSurnameSameCityToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->referenceToolStripMenuItem,
					this->AboutProgrammToolStripMenuItem1, this->GuideToolStripMenuItem
			});
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(141, 29);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			// 
			// referenceToolStripMenuItem
			// 
			this->referenceToolStripMenuItem->Name = L"referenceToolStripMenuItem";
			this->referenceToolStripMenuItem->Size = System::Drawing::Size(336, 34);
			this->referenceToolStripMenuItem->Text = L"�������";
			this->referenceToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::referenceToolStripMenuItem_Click);
			// 
			// AboutProgrammToolStripMenuItem1
			// 
			this->AboutProgrammToolStripMenuItem1->Name = L"AboutProgrammToolStripMenuItem1";
			this->AboutProgrammToolStripMenuItem1->Size = System::Drawing::Size(336, 34);
			this->AboutProgrammToolStripMenuItem1->Text = L"� ���������";
			this->AboutProgrammToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::AboutProgrammToolStripMenuItem1_Click);
			// 
			// GuideToolStripMenuItem
			// 
			this->GuideToolStripMenuItem->Name = L"GuideToolStripMenuItem";
			this->GuideToolStripMenuItem->Size = System::Drawing::Size(336, 34);
			this->GuideToolStripMenuItem->Text = L"����������� ������������";
			this->GuideToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::GuideToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::MenuBar;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Number,
					this->Name, this->BirthDate, this->Gender, this->LivingPlace, this->Education, this->NumberOfChildren, this->Work
			});
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Location = System::Drawing::Point(0, 39);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1791, 808);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellContentClick);
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellValueChanged);
			this->dataGridView1->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &MainForm::dataGridView1_RowsAdded);
			// 
			// Number
			// 
			this->Number->HeaderText = L"�����";
			this->Number->MinimumWidth = 6;
			this->Number->Name = L"Number";
			this->Number->Width = 125;
			// 
			// Name
			// 
			this->Name->HeaderText = L"�.�.�";
			this->Name->MinimumWidth = 6;
			this->Name->Name = L"Name";
			this->Name->Width = 125;
			// 
			// BirthDate
			// 
			this->BirthDate->HeaderText = L"���� ��������";
			this->BirthDate->MinimumWidth = 6;
			this->BirthDate->Name = L"BirthDate";
			this->BirthDate->Width = 125;
			// 
			// Gender
			// 
			this->Gender->HeaderText = L"���";
			this->Gender->MinimumWidth = 6;
			this->Gender->Name = L"Gender";
			this->Gender->Width = 125;
			// 
			// LivingPlace
			// 
			this->LivingPlace->HeaderText = L"�����";
			this->LivingPlace->MinimumWidth = 6;
			this->LivingPlace->Name = L"LivingPlace";
			this->LivingPlace->Width = 125;
			// 
			// Education
			// 
			this->Education->HeaderText = L"�����������";
			this->Education->MinimumWidth = 6;
			this->Education->Name = L"Education";
			this->Education->Width = 125;
			// 
			// NumberOfChildren
			// 
			this->NumberOfChildren->HeaderText = L"���������� �����";
			this->NumberOfChildren->MinimumWidth = 6;
			this->NumberOfChildren->Name = L"NumberOfChildren";
			this->NumberOfChildren->Width = 125;
			// 
			// Work
			// 
			this->Work->HeaderText = L"������";
			this->Work->MinimumWidth = 6;
			this->Work->Name = L"Work";
			this->Work->Width = 125;
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Location = System::Drawing::Point(1523, 52);
			this->textBoxSearch->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(240, 26);
			this->textBoxSearch->TabIndex = 2;
			this->textBoxSearch->Visible = false;
			this->textBoxSearch->TextChanged += gcnew System::EventHandler(this, &MainForm::textBoxSearch_TextChanged);
			// 
			// buttonSearch
			// 
			this->buttonSearch->Location = System::Drawing::Point(1632, 88);
			this->buttonSearch->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(132, 29);
			this->buttonSearch->TabIndex = 3;
			this->buttonSearch->Text = L"������";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Visible = false;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &MainForm::buttonSearch_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->CopyToolStripMenuItem,
					this->InputToolStripMenuItem, this->delteToolStripMenuItem, this->redactingToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(206, 132);
			// 
			// CopyToolStripMenuItem
			// 
			this->CopyToolStripMenuItem->Name = L"CopyToolStripMenuItem";
			this->CopyToolStripMenuItem->Size = System::Drawing::Size(205, 32);
			this->CopyToolStripMenuItem->Text = L"����������";
			this->CopyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::CopyToolStripMenuItem_Click);
			// 
			// InputToolStripMenuItem
			// 
			this->InputToolStripMenuItem->Name = L"InputToolStripMenuItem";
			this->InputToolStripMenuItem->Size = System::Drawing::Size(205, 32);
			this->InputToolStripMenuItem->Text = L"��������";
			this->InputToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::InputToolStripMenuItem_Click);
			// 
			// delteToolStripMenuItem
			// 
			this->delteToolStripMenuItem->Name = L"delteToolStripMenuItem";
			this->delteToolStripMenuItem->Size = System::Drawing::Size(205, 32);
			this->delteToolStripMenuItem->Text = L"�������";
			this->delteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::delteToolStripMenuItem_Click);
			// 
			// redactingToolStripMenuItem1
			// 
			this->redactingToolStripMenuItem1->Name = L"redactingToolStripMenuItem1";
			this->redactingToolStripMenuItem1->Size = System::Drawing::Size(205, 32);
			this->redactingToolStripMenuItem1->Text = L"�������������";
			this->redactingToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::redactingToolStripMenuItem1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1803, 800);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->textBoxSearch);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�������� ���������";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void AddToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // ������ ��������
	AddCitizenForm^ addCitizen = gcnew AddCitizenForm;
	addCitizen->Show();
	addCitizen->Visible = false;
	if (addCitizen->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		dataGridView1->Rows->Add(addCitizen->InputData);
	}
	else {
		MessageBox::Show("������ �� ��� ��������", "���������� ������", MessageBoxButtons::OK);
	}
}
private: System::Void dataGridView1_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e) { // ����������� ��������������� �����
	for (int i = 0; i < e->RowCount; i++) {
		int rowIndex = e->RowIndex + i;
		this->dataGridView1->Rows[rowIndex]->Cells[0]->Value = (rowIndex + 1).ToString();
	}
}
private:
	String^ currentFile;
void saveData(String^ fileName) { // ������� ��� ������ ������ � ����
	FileStream^ fs = gcnew FileStream(fileName, FileMode::Create);
	BinaryWriter^ bw = gcnew BinaryWriter(fs);
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		for (int j = 0; j < dataGridView1->Columns->Count; j++) {
			if (dataGridView1->Rows[i]->Cells[j]->Value != nullptr) {
			String^ value = dataGridView1->Rows[i]->Cells[j]->Value->ToString();
			bw->Write(value);
			}
		}
	}
	isDataSaved = true;
}
private: System::Void SaveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // ������ ��������� ���
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Binary files (*.bin)|*.bin";
	saveFileDialog1->Title = "Save data to binary file";
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		currentFile = saveFileDialog1->FileName;
		saveData(currentFile);
	}
}
private:
	bool isModified = false;
private:
	bool isDataSaved;
private: System::Void SaveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // ������ ���������
	if (isModified) {
		saveData(currentFile);
	}
	else {
		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
		saveFileDialog->Filter = "Binary files (*.bin)|*.bin";
		saveFileDialog->Title = "Save data to binary file";

		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
			saveFileDialog1->Filter = "Binary files (*.bin)|*.bin";
			saveFileDialog1->Title = "Save data to binary file";
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				currentFile = saveFileDialog1->FileName;
				saveData(currentFile);
			}
		}
	}
}
private: System::Void downloadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // ������ �������
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Title = "Open binary file";
	openFileDialog->Filter = "Binary files (*.bin)|*.bin";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ fileName = openFileDialog->FileName;
		currentFile = fileName;
		FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);
		BinaryReader^ br = gcnew BinaryReader(fs);

		int i = 0;
		while (br->PeekChar() != -1) {
			if (i >= dataGridView1->Rows->Count) {
				dataGridView1->Rows->Add();
			}
			for (int j = 0; j < dataGridView1->Columns->Count; j++) {
				String^ value = br->ReadString();
				dataGridView1->Rows[i]->Cells[j]->Value = value;
			}
			i++;
		}

		br->Close();
		fs->Close();
	}
}
private: System::Void redactToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedCells->Count == 1) {
		int rowIndex = dataGridView1->SelectedCells[0]->RowIndex; // ��������� ������� ���������� ������
		int colIndex = dataGridView1->SelectedCells[0]->ColumnIndex; // ��������� ������� ����������� �������

		// �������� � ����������� ����� ��� ����� ������ ��������
		FormForRedacting^ editForm = gcnew FormForRedacting();

		// ��������� ���������� �������� �� TextBox �� ������ �����
		if (colIndex == 1) {
			editForm->label1->Text = "�.�.�";
			editForm->textBox1->Text = dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value->ToString();
		}
		if (colIndex == 2) {
			editForm->label1->Text = "���� ��������";
			editForm->textBox1->Text = dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value->ToString();
		}
		if (colIndex == 3) {
			editForm->label1->Text = "���";
			editForm->textBox1->Text = dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value->ToString();
		}
		if (colIndex == 4) {
			editForm->label1->Text = "�����";
			editForm->textBox1->Text = dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value->ToString();
		}
		if (colIndex == 5) {
			editForm->label1->Text = "�����������";
			editForm->textBox1->Text = dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value->ToString();
		}
		if (colIndex == 6) {
			editForm->label1->Text = "���������� �����";
			editForm->textBox1->Text = dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value->ToString();
		}
		if (colIndex == 7) {
			editForm->label1->Text = "������";
			editForm->textBox1->Text = dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value->ToString();
		}
		// ���������� �������� � ������
		if (editForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ newValue = editForm->GetNewValue();
			dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value = newValue;
		}
	}
}
private: System::Void deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedCells->Count > 0) { // ��������, ��� ���� ���������� ������
		int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
		if (MessageBox::Show("�� ������������� ������ ������� ������ " + dataGridView1->Rows[rowIndex]->Cells[1]->Value->ToString() + "?", "������������� ��������", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			int rowIndex = dataGridView1->SelectedCells[0]->RowIndex; // ��������� ������� ���������� ������
			dataGridView1->Rows->RemoveAt(rowIndex); // �������� ������ �� �������
		}
	}
}
private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

//����������
private: System::Void NumberAccendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Number"], ListSortDirection::Ascending);
}
private: System::Void NumberDescedingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Number"], ListSortDirection::Descending);
}
private: System::Void NameAscendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Name"], ListSortDirection::Ascending);
}
private: System::Void NameDescendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Name"], ListSortDirection::Descending);
}
private: System::Void OldFirstToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < dataGridView1->Rows->Count; i++)
	{
		Object^ value = dataGridView1->Rows[i]->Cells["BirthDate"]->Value;
		if (value != nullptr)
		{
			DateTime dateOfBirth = Convert::ToDateTime(value);
			dataGridView1->Rows[i]->Cells["BirthDate"]->Value = dateOfBirth;
		}
	}
	dataGridView1->Columns["BirthDate"]->DefaultCellStyle->Format = "d";
	dataGridView1->Sort(dataGridView1->Columns["BirthDate"], ListSortDirection::Ascending);
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		Object^ value = dataGridView1->Rows[i]->Cells["BirthDate"]->Value;
		if (value != nullptr) {
			DateTime dateValue = safe_cast<DateTime>(value);
			String^ dateString = dateValue.ToString("d");
			dataGridView1->Rows[i]->Cells["BirthDate"]->Value = dateString;
		}
	}
}
private: System::Void YoungFirstToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < dataGridView1->Rows->Count; i++)
	{
		Object^ value = dataGridView1->Rows[i]->Cells["BirthDate"]->Value;
		if (value != nullptr)
		{
			DateTime dateOfBirth = Convert::ToDateTime(value);
			dataGridView1->Rows[i]->Cells["BirthDate"]->Value = dateOfBirth;
		}
	}
	dataGridView1->Columns["BirthDate"]->DefaultCellStyle->Format = "d";
	dataGridView1->Sort(dataGridView1->Columns["BirthDate"], ListSortDirection::Descending);
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		Object^ value = dataGridView1->Rows[i]->Cells["BirthDate"]->Value;
		if (value != nullptr) {
			DateTime dateValue = safe_cast<DateTime>(value);
			String^ dateString = dateValue.ToString("d");
			dataGridView1->Rows[i]->Cells["BirthDate"]->Value = dateString;
		}
	}
}
private: System::Void CityAscendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["LivingPlace"], ListSortDirection::Ascending);
}
private: System::Void CityDescendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["LivingPlace"], ListSortDirection::Descending);
}
private: System::Void EducationAscendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Education"], ListSortDirection::Ascending);
}
private: System::Void EducationDescendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Education"], ListSortDirection::Descending);
}
private: System::Void ChildrenAscendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["NumberOfChildren"], ListSortDirection::Ascending);
}
private: System::Void ChildrenDescendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["NumberOfChildren"], ListSortDirection::Descending);
}
private: System::Void WorkAscendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Work"], ListSortDirection::Ascending);
}
private: System::Void WorkDescendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Work"], ListSortDirection::Descending);
}


private: System::Void referenceToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // ������ �������
	MessageBox::Show("���������� �������� ��������� �������� � �����, ������� ��������� ��������� : �.�.�.������, ��� ��� ��������, ���, ����� ���������������(�����), �����������, ���������� �����, ����� ������.�������� ���������,�������������� ��� �������� � ����������� ���������� : ������� ��������������(�������, �������)"
		"������� �������, ������� ������ �����������; ����� ���������� �����.������������ ������ �������������, ����������� � ����� ������.������������ ����� �������� � �������� �� ��� ������� � ���� ��������",
		"� ������� ", MessageBoxButtons::OK);
}
private: System::Void AboutProgrammToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) { // ������ � ���������
	MessageBox::Show("������ ��������-1.2.\n"
		"���� �������� ��������� ���������-10.05.2023. \n"
		"����� ������: masha.gruzdeva2016@ya.ru \n",
		"� ���������", MessageBoxButtons::OK);
}
private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (isModified && !isDataSaved) {
		if (MessageBox::Show("�� ������ ��������� ��������� ��������� ����� �������?", "�������� �����", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
			saveFileDialog->Filter = "Binary files (*.bin)|*.bin";
			saveFileDialog->Title = "Save data to binary file";

			if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				currentFile = saveFileDialog->FileName;
				saveData(currentFile);
				isDataSaved = true;
			}
		}
		else {
			e->Cancel = false;
			isModified = false;
			isDataSaved = false;
			this->Close();

			
		}
		
	}
}
private: System::Void SearchAllToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	bool isVisible = this->buttonSearch->Visible;
	this->buttonSearch->Visible = !isVisible;
	this->textBoxSearch->Visible = !isVisible;
	
}
private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->ClearSelection();
	String^ searchText = this->textBoxSearch->Text->ToLower();
	for each (DataGridViewRow ^ row in this->dataGridView1->Rows) {
		for each (DataGridViewCell ^ cell in row->Cells) {
			if (cell->Value != nullptr && cell->Value->ToString()->ToLower()->Contains(searchText)) {
				cell->Selected = true;
			}
		}
	}
}
private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	isModified = true;
	isDataSaved = false;
	if (dataGridView1->Rows->Count == 0) {
		SaveAsToolStripMenuItem->Enabled = false;
		SaveToolStripMenuItem->Enabled = false;
		
		deleteToolStripMenuItem->Enabled = false;
		sortToolStripMenuItem->Enabled = false;
		SearchAllToolStripMenuItem->Enabled = false;
		StatisticsToolStripMenuItem->Enabled = false;
		SameSurnameSameCityToolStripMenuItem->Enabled = false;
	}
	else {
		SaveAsToolStripMenuItem->Enabled = true;
		SaveToolStripMenuItem->Enabled = true;
		
		deleteToolStripMenuItem->Enabled = true;
		sortToolStripMenuItem->Enabled = true;
		SearchAllToolStripMenuItem->Enabled = true;
		StatisticsToolStripMenuItem->Enabled = true;
		SameSurnameSameCityToolStripMenuItem->Enabled = true;
	}
}
private: System::Void StatisticsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	StatisticsForm^ statistics = gcnew StatisticsForm;
	statistics->Show();
	double totalAge = 0;
	int maleCount = 0;
	int maleAgeCount = 0;
	int femaleCount = 0;
	int femaleAgeCount = 0;
	int higherEducation = 0;
	int rowCount = dataGridView1->Rows->Count;
	for (int i = 0; i < rowCount; i++)
	{
		String^ gender = dataGridView1->Rows[i]->Cells[3]->Value->ToString();
		DateTime dob = Convert::ToDateTime(dataGridView1->Rows[i]->Cells[2]->Value);
		int age = DateTime::Now.Year - dob.Year;
		if (DateTime::Now.DayOfYear < dob.DayOfYear)
			age -= 1;
		if (gender == "�") {
			DateTime dob = Convert::ToDateTime(dataGridView1->Rows[i]->Cells[2]->Value);
			int age = DateTime::Now.Year - dob.Year;
			if (DateTime::Now.DayOfYear < dob.DayOfYear) {
				age -= 1;
			}
			maleCount++;
			maleAgeCount += age;
		}
		if (gender == "�") {
			DateTime dob = Convert::ToDateTime(dataGridView1->Rows[i]->Cells[2]->Value);
			int age = DateTime::Now.Year - dob.Year;
			if (DateTime::Now.DayOfYear < dob.DayOfYear) {
				age -= 1;
			}
			femaleCount++;
			femaleAgeCount += age;
		}
		totalAge += age;
	}
	for (int i = 0; i < rowCount; i++)
	{
		String^ education = dataGridView1->Rows[i]->Cells[5]->Value->ToString();
		if (education == "������")
		{
			higherEducation++;
		}
	}
	System::Collections::Generic::Dictionary<String^, int>^ cityCount = gcnew System::Collections::Generic::Dictionary<String^, int>();
	for (int i = 0; i < rowCount; i++)
	{
		String^ city = dataGridView1->Rows[i]->Cells[4]->Value->ToString();
		if (cityCount->ContainsKey(city))
		{
			cityCount[city]++;
		}
		else
		{
			cityCount[city] = 1;
		}
	}

	String^ mostPopulatedCity = "";
	int maxCount = 0;
	for each (System::Collections::Generic::KeyValuePair<String^, int> kvp in cityCount)
	{
		if (kvp.Value > maxCount)
		{
			mostPopulatedCity = kvp.Key;
			maxCount = kvp.Value;
		}
	}
	double averageAge = totalAge / static_cast<double>(rowCount);
	statistics->textBoxAverageAge->Text = averageAge.ToString("F2");
	double averageMaleAge = maleCount > 0 ? maleAgeCount / static_cast<double>(maleCount) : 0;
	statistics->textBoxAverageAgeMale->Text = averageMaleAge.ToString("F2");
	double averageFemaleAge = femaleCount > 0 ? femaleAgeCount / static_cast<double>(femaleCount) : 0;
	statistics->textBoxAverageAgeFemale->Text = averageFemaleAge.ToString("F2");
	
	double higherEducationPercentage = rowCount > 0 ? (double)higherEducation / (double)rowCount * 100.0 : 0.0;

	statistics->textBoxHighEducation->Text = higherEducationPercentage.ToString("N1") + "%";
	statistics->textBoxMostPopulatedCity->Text = mostPopulatedCity;
}
private: System::Void SameSurnameSameCityToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SameSurnameSameCity^ same = gcnew SameSurnameSameCity;
	same->Show();
	for (int i = 0; i < dataGridView1->Rows->Count; i++)
	{
		String^ fullName = dataGridView1->Rows[i]->Cells[1]->Value->ToString();
		array<String^>^ nameParts = fullName->Split(' ');
		String^ lastName = nameParts[0];
		String^ city = dataGridView1->Rows[i]->Cells[4]->Value->ToString();
		bool alreadyAdded = false;

		for (int j = 0; j < i; j++)
		{
			String^ prevFullName = dataGridView1->Rows[j]->Cells[1]->Value->ToString();
			array<String^>^ prevNameParts = prevFullName->Split(' ');
			String^ prevLastName = prevNameParts[0];
			String^ prevCity = dataGridView1->Rows[j]->Cells[4]->Value->ToString();

			if (lastName == prevLastName && city == prevCity)
			{
				alreadyAdded = true;
				break;
			}
		}

		if (!alreadyAdded)
		{
			for (int j = i + 1; j < dataGridView1->Rows->Count; j++)
			{
				String^ nextFullName = dataGridView1->Rows[j]->Cells[1]->Value->ToString();
				array<String^>^ nextNameParts = nextFullName->Split(' ');
				String^ nextLastName = nextNameParts[0];
				String^ nextCity = dataGridView1->Rows[j]->Cells[4]->Value->ToString();

				if (lastName == nextLastName && city == nextCity)
				{
					array<Object^>^ values = gcnew array<Object^>(dataGridView1->Columns->Count);
					for (int k = 0; k < dataGridView1->Columns->Count; k++)
						values[k] = dataGridView1->Rows[i]->Cells[k]->Value;
					same->AddRowToDataGridView(values);

					values = gcnew array<Object^>(dataGridView1->Columns->Count);
					for (int k = 0; k < dataGridView1->Columns->Count; k++)
						values[k] = dataGridView1->Rows[j]->Cells[k]->Value;
					same->AddRowToDataGridView(values);
				}
			}
		}
	}
}
private: System::Void CopyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedCells->Count > 0) {
		Clipboard::SetText(dataGridView1->SelectedCells[0]->Value->ToString());
	}
}
private: System::Void InputToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ pasteText = Clipboard::GetText();

	if (dataGridView1->SelectedCells->Count > 0)
	{
		int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
		int colIndex = dataGridView1->SelectedCells[0]->ColumnIndex;

		dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value = pasteText;
	}
}
private: System::Void delteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedCells->Count > 0) { 
		int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
		if (MessageBox::Show("�� ������������� ������ ������� ������ " + dataGridView1->Rows[rowIndex]->Cells[1]->Value->ToString() + "?", "������������� ��������", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
			dataGridView1->Rows->RemoveAt(rowIndex);
		}
	}
}
private: System::Void redactingToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedCells->Count == 1) {
		int rowIndex = dataGridView1->SelectedCells[0]->RowIndex; // ��������� ������� ���������� ������
		int colIndex = dataGridView1->SelectedCells[0]->ColumnIndex; // ��������� ������� ����������� �������

		// �������� � ����������� ����� ��� ����� ������ ��������
		FormForRedacting^ editForm = gcnew FormForRedacting();

		// ��������� ���������� �������� �� TextBox �� ������ �����
		if (colIndex == 1) {
			editForm->label1->Text = "�.�.�";
			editForm->textBox1->Text = dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value->ToString();
		}
		if (colIndex == 2) {
			editForm->label1->Text = "���� ��������";
			editForm->textBox1->Text = dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value->ToString();
		}
		if (colIndex == 3) {
			editForm->label1->Text = "���";
			editForm->textBox1->Text = dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value->ToString();
		}
		if (colIndex == 4) {
			editForm->label1->Text = "�����";
			editForm->textBox1->Text = dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value->ToString();
		}
		if (colIndex == 5) {
			editForm->label1->Text = "�����������";
			editForm->textBox1->Text = dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value->ToString();
		}
		if (colIndex == 6) {
			editForm->label1->Text = "���������� �����";
			editForm->textBox1->Text = dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value->ToString();
		}
		if (colIndex == 7) {
			editForm->label1->Text = "������";
			editForm->textBox1->Text = dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value->ToString();
		}
		// ���������� �������� � ������
		if (editForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ newValue = editForm->GetNewValue();
			dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value = newValue;
		}
	}
}
private: System::Void GuideToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("����������� ������������.txt");
}
private: System::Void sortToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void DateOfBirthToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
