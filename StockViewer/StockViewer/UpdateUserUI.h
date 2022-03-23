#pragma once
#include "DataBase.h"

namespace StockViewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class UpdateUserUI : public System::Windows::Forms::Form
	{
	public:
		UpdateUserUI(void)
		{
			InitializeComponent();
			database_data = gcnew DataBase("datasource=localhost; username=root; password=""; database=svlocal;");
			user_founded, user_selected = false;
			set_name, set_surname, set_gendre, set_admin = false;
		}
	protected:
		~UpdateUserUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ document;
	private: System::Windows::Forms::Button^ search_user;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: DataBase^ database_data;
	private: bool user_founded, user_selected;
	private: System::Windows::Forms::Label^ result_txt;
	private: System::Windows::Forms::Label^ gendre_txt;
	private: System::Windows::Forms::Label^ document_txt;
	private: System::Windows::Forms::Label^ surname_txt;
	private: System::Windows::Forms::Label^ name_txt;
	private: System::Windows::Forms::Label^ is_admin_txt;
	private: System::Windows::Forms::Label^ name_label;
	private: System::Windows::Forms::Label^ surname_label;
	private: System::Windows::Forms::Label^ document_label;
	private: System::Windows::Forms::Label^ gendre_label;
	private: System::Windows::Forms::Button^ edit_user_btn;
	private: System::Windows::Forms::TextBox^ name_in;
	private: System::Windows::Forms::TextBox^ surname_in;
	private: System::Windows::Forms::TextBox^ document_in;
	private: System::Windows::Forms::CheckBox^ admin_in;

	private: System::Windows::Forms::ComboBox^ gendre_in;

	private: System::Windows::Forms::Button^ cancel_query_btn;
	private: System::Windows::Forms::Button^ make_query_btn;
	private: System::Windows::Forms::Label^ is_admin_label;
	// QUERY MODIFIERS
	private: bool set_name, set_surname, set_gendre, set_admin;

#pragma region 
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->document = (gcnew System::Windows::Forms::TextBox());
			this->search_user = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->result_txt = (gcnew System::Windows::Forms::Label());
			this->gendre_txt = (gcnew System::Windows::Forms::Label());
			this->document_txt = (gcnew System::Windows::Forms::Label());
			this->surname_txt = (gcnew System::Windows::Forms::Label());
			this->name_txt = (gcnew System::Windows::Forms::Label());
			this->is_admin_txt = (gcnew System::Windows::Forms::Label());
			this->name_label = (gcnew System::Windows::Forms::Label());
			this->surname_label = (gcnew System::Windows::Forms::Label());
			this->document_label = (gcnew System::Windows::Forms::Label());
			this->gendre_label = (gcnew System::Windows::Forms::Label());
			this->is_admin_label = (gcnew System::Windows::Forms::Label());
			this->edit_user_btn = (gcnew System::Windows::Forms::Button());
			this->name_in = (gcnew System::Windows::Forms::TextBox());
			this->surname_in = (gcnew System::Windows::Forms::TextBox());
			this->document_in = (gcnew System::Windows::Forms::TextBox());
			this->admin_in = (gcnew System::Windows::Forms::CheckBox());
			this->gendre_in = (gcnew System::Windows::Forms::ComboBox());
			this->cancel_query_btn = (gcnew System::Windows::Forms::Button());
			this->make_query_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->dataGridView1->Location = System::Drawing::Point(0, 209);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(720, 67);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateUserUI::dataGridView1_MouseDoubleClick);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->document);
			this->panel3->Controls->Add(this->search_user);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 140);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(720, 69);
			this->panel3->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(47, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 24);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Document";
			// 
			// document
			// 
			this->document->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->document->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->document->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->document->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->document->Location = System::Drawing::Point(197, 24);
			this->document->Name = L"document";
			this->document->Size = System::Drawing::Size(327, 23);
			this->document->TabIndex = 3;
			this->document->TextChanged += gcnew System::EventHandler(this, &UpdateUserUI::document_TextChanged);
			// 
			// search_user
			// 
			this->search_user->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->search_user->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->search_user->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->search_user->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_user->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_user->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->search_user->Location = System::Drawing::Point(541, 12);
			this->search_user->Name = L"search_user";
			this->search_user->Size = System::Drawing::Size(167, 44);
			this->search_user->TabIndex = 0;
			this->search_user->Text = L"Search";
			this->search_user->UseVisualStyleBackColor = true;
			this->search_user->Click += gcnew System::EventHandler(this, &UpdateUserUI::search_user_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(720, 140);
			this->panel2->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(293, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Search user";
			// 
			// result_txt
			// 
			this->result_txt->AutoSize = true;
			this->result_txt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->result_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result_txt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->result_txt->Location = System::Drawing::Point(21, 304);
			this->result_txt->Name = L"result_txt";
			this->result_txt->Size = System::Drawing::Size(81, 24);
			this->result_txt->TabIndex = 12;
			this->result_txt->Text = L"Result: ";
			// 
			// gendre_txt
			// 
			this->gendre_txt->AutoSize = true;
			this->gendre_txt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gendre_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gendre_txt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->gendre_txt->Location = System::Drawing::Point(28, 467);
			this->gendre_txt->Name = L"gendre_txt";
			this->gendre_txt->Size = System::Drawing::Size(89, 24);
			this->gendre_txt->TabIndex = 13;
			this->gendre_txt->Text = L"Gendre";
			// 
			// document_txt
			// 
			this->document_txt->AutoSize = true;
			this->document_txt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->document_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->document_txt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->document_txt->Location = System::Drawing::Point(28, 434);
			this->document_txt->Name = L"document_txt";
			this->document_txt->Size = System::Drawing::Size(122, 24);
			this->document_txt->TabIndex = 14;
			this->document_txt->Text = L"Document";
			// 
			// surname_txt
			// 
			this->surname_txt->AutoSize = true;
			this->surname_txt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->surname_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->surname_txt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->surname_txt->Location = System::Drawing::Point(28, 400);
			this->surname_txt->Name = L"surname_txt";
			this->surname_txt->Size = System::Drawing::Size(101, 24);
			this->surname_txt->TabIndex = 15;
			this->surname_txt->Text = L"Surname";
			// 
			// name_txt
			// 
			this->name_txt->AutoSize = true;
			this->name_txt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->name_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_txt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->name_txt->Location = System::Drawing::Point(28, 370);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(75, 24);
			this->name_txt->TabIndex = 16;
			this->name_txt->Text = L"Name";
			// 
			// is_admin_txt
			// 
			this->is_admin_txt->AutoSize = true;
			this->is_admin_txt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->is_admin_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->is_admin_txt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->is_admin_txt->Location = System::Drawing::Point(28, 500);
			this->is_admin_txt->Name = L"is_admin_txt";
			this->is_admin_txt->Size = System::Drawing::Size(106, 24);
			this->is_admin_txt->TabIndex = 17;
			this->is_admin_txt->Text = L"Is admin\?";
			// 
			// name_label
			// 
			this->name_label->AutoSize = true;
			this->name_label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->name_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_label->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->name_label->Location = System::Drawing::Point(163, 368);
			this->name_label->Name = L"name_label";
			this->name_label->Size = System::Drawing::Size(0, 24);
			this->name_label->TabIndex = 18;
			// 
			// surname_label
			// 
			this->surname_label->AutoSize = true;
			this->surname_label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->surname_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->surname_label->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->surname_label->Location = System::Drawing::Point(163, 399);
			this->surname_label->Name = L"surname_label";
			this->surname_label->Size = System::Drawing::Size(0, 24);
			this->surname_label->TabIndex = 19;
			// 
			// document_label
			// 
			this->document_label->AutoSize = true;
			this->document_label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->document_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->document_label->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->document_label->Location = System::Drawing::Point(163, 433);
			this->document_label->Name = L"document_label";
			this->document_label->Size = System::Drawing::Size(0, 24);
			this->document_label->TabIndex = 20;
			// 
			// gendre_label
			// 
			this->gendre_label->AutoSize = true;
			this->gendre_label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gendre_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gendre_label->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->gendre_label->Location = System::Drawing::Point(163, 466);
			this->gendre_label->Name = L"gendre_label";
			this->gendre_label->Size = System::Drawing::Size(0, 24);
			this->gendre_label->TabIndex = 21;
			// 
			// is_admin_label
			// 
			this->is_admin_label->AutoSize = true;
			this->is_admin_label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->is_admin_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->is_admin_label->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->is_admin_label->Location = System::Drawing::Point(163, 499);
			this->is_admin_label->Name = L"is_admin_label";
			this->is_admin_label->Size = System::Drawing::Size(0, 24);
			this->is_admin_label->TabIndex = 22;
			// 
			// edit_user_btn
			// 
			this->edit_user_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->edit_user_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->edit_user_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->edit_user_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->edit_user_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_user_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->edit_user_btn->Location = System::Drawing::Point(25, 556);
			this->edit_user_btn->Name = L"edit_user_btn";
			this->edit_user_btn->Size = System::Drawing::Size(175, 70);
			this->edit_user_btn->TabIndex = 23;
			this->edit_user_btn->Text = L"Edit";
			this->edit_user_btn->UseVisualStyleBackColor = true;
			this->edit_user_btn->Visible = false;
			this->edit_user_btn->Click += gcnew System::EventHandler(this, &UpdateUserUI::edit_user_btn_Click);
			// 
			// name_in
			// 
			this->name_in->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->name_in->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->name_in->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_in->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->name_in->Location = System::Drawing::Point(381, 367);
			this->name_in->Name = L"name_in";
			this->name_in->Size = System::Drawing::Size(327, 23);
			this->name_in->TabIndex = 24;
			this->name_in->Visible = false;
			this->name_in->TextChanged += gcnew System::EventHandler(this, &UpdateUserUI::name_in_TextChanged);
			// 
			// surname_in
			// 
			this->surname_in->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->surname_in->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->surname_in->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->surname_in->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->surname_in->Location = System::Drawing::Point(381, 401);
			this->surname_in->Name = L"surname_in";
			this->surname_in->Size = System::Drawing::Size(327, 23);
			this->surname_in->TabIndex = 25;
			this->surname_in->Visible = false;
			this->surname_in->TextChanged += gcnew System::EventHandler(this, &UpdateUserUI::surname_in_TextChanged);
			// 
			// document_in
			// 
			this->document_in->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->document_in->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->document_in->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->document_in->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->document_in->Location = System::Drawing::Point(381, 435);
			this->document_in->Name = L"document_in";
			this->document_in->ReadOnly = true;
			this->document_in->Size = System::Drawing::Size(327, 23);
			this->document_in->TabIndex = 26;
			this->document_in->Visible = false;
			// 
			// admin_in
			// 
			this->admin_in->AutoSize = true;
			this->admin_in->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admin_in->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->admin_in->Location = System::Drawing::Point(380, 506);
			this->admin_in->Name = L"admin_in";
			this->admin_in->Size = System::Drawing::Size(89, 21);
			this->admin_in->TabIndex = 28;
			this->admin_in->Text = L"Is admin\?";
			this->admin_in->UseVisualStyleBackColor = true;
			this->admin_in->Visible = false;
			// 
			// gendre_in
			// 
			this->gendre_in->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->gendre_in->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gendre_in->FormattingEnabled = true;
			this->gendre_in->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"Not bin" });
			this->gendre_in->Location = System::Drawing::Point(381, 474);
			this->gendre_in->Name = L"gendre_in";
			this->gendre_in->Size = System::Drawing::Size(121, 21);
			this->gendre_in->TabIndex = 29;
			this->gendre_in->Visible = false;
			// 
			// cancel_query_btn
			// 
			this->cancel_query_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->cancel_query_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->cancel_query_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->cancel_query_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel_query_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_query_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cancel_query_btn->Location = System::Drawing::Point(334, 556);
			this->cancel_query_btn->Name = L"cancel_query_btn";
			this->cancel_query_btn->Size = System::Drawing::Size(190, 70);
			this->cancel_query_btn->TabIndex = 30;
			this->cancel_query_btn->Text = L"Cancel update";
			this->cancel_query_btn->UseVisualStyleBackColor = true;
			this->cancel_query_btn->Visible = false;
			this->cancel_query_btn->Click += gcnew System::EventHandler(this, &UpdateUserUI::cancel_query_btn_Click);
			// 
			// make_query_btn
			// 
			this->make_query_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->make_query_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SpringGreen;
			this->make_query_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aquamarine;
			this->make_query_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->make_query_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->make_query_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->make_query_btn->Location = System::Drawing::Point(530, 556);
			this->make_query_btn->Name = L"make_query_btn";
			this->make_query_btn->Size = System::Drawing::Size(175, 70);
			this->make_query_btn->TabIndex = 31;
			this->make_query_btn->Text = L"Update user";
			this->make_query_btn->UseVisualStyleBackColor = true;
			this->make_query_btn->Visible = false;
			this->make_query_btn->Click += gcnew System::EventHandler(this, &UpdateUserUI::make_query_btn_Click);
			// 
			// UpdateUserUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(720, 629);
			this->Controls->Add(this->make_query_btn);
			this->Controls->Add(this->cancel_query_btn);
			this->Controls->Add(this->gendre_in);
			this->Controls->Add(this->admin_in);
			this->Controls->Add(this->document_in);
			this->Controls->Add(this->surname_in);
			this->Controls->Add(this->name_in);
			this->Controls->Add(this->edit_user_btn);
			this->Controls->Add(this->is_admin_label);
			this->Controls->Add(this->gendre_label);
			this->Controls->Add(this->document_label);
			this->Controls->Add(this->surname_label);
			this->Controls->Add(this->name_label);
			this->Controls->Add(this->is_admin_txt);
			this->Controls->Add(this->name_txt);
			this->Controls->Add(this->surname_txt);
			this->Controls->Add(this->document_txt);
			this->Controls->Add(this->gendre_txt);
			this->Controls->Add(this->result_txt);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UpdateUserUI";
			this->Text = L"UpdateUser";
			this->Load += gcnew System::EventHandler(this, &UpdateUserUI::UpdateUserUI_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: String^ get_update_query() {
		String^ query = "";
		String^ c = "'";
		String^ s = " ";
		String^ eq = "= ";
		String^ co = "";
		int conditions = 0;

		if (this->set_name && this->name_in->Text != "") {
			conditions += 1;
			query = query + "name " + eq + c + this->name_in->Text + c + s;
		}
		if (this->set_surname && this->surname_in->Text != "") {
			if (conditions > 0) {
				co = ",";
			}
			conditions += 1;
			query = query + co + " surname " + eq + c + this->surname_in->Text + c + s;
		}
		if (this->set_gendre) {
			if (conditions > 0) {
				co = ",";
			}
			conditions += 1;
			query = query + co +" gendre " + eq + c + this->gendre_in->Text + c + s;
		}
		if (this->set_admin) {
			if (conditions > 0) {
				co = ",";
			}
			conditions += 1;
			query = query + co + " admin " + eq + c + this->admin_in->Checked.ToString() + c + s;
		}

		query = query + "where document " + eq + c + this->dataGridView1->CurrentRow->Cells[2]->Value->ToString() + c + s;

		return query;
	}

	public: void to_grid() {
		this->database_data->open_session();
		this->dataGridView1->DataSource = this->database_data->get_data(get_query_users(this->document->Text));
		this->database_data->close_session();
	}
	public: void make_update() {
		if (user_founded && user_selected) {
			this->database_data->open_session();
			// query
			this->database_data->close_session();
		}
		else {
		}
	}
	public: void query_result() {
		this->result_txt->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
		this->name_txt->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
		this->surname_txt->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
		this->document_txt->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
		this->gendre_txt->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
		this->is_admin_txt->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
		this->edit_user_btn->Visible = true;
		this->edit_user_btn->Enabled = true;
		
	}
	private: System::Void search_user_Click(System::Object^ sender, System::EventArgs^ e) {
		to_grid();
		if (this->dataGridView1->RowCount == 1) {
			this->user_founded, this->user_selected = false;
			this->document->Text = L" Document not founded on database!";
			this->document->ForeColor = System::Drawing::Color::DarkRed;
		}
		else {
			
			try {
				if (this->dataGridView1->RowCount > 0) {
					query_result();
					this->user_founded = true;
					this->name_label->Text = dataGridView1->CurrentRow->Cells[0]->Value->ToString();
					this->surname_label->Text = dataGridView1->CurrentRow->Cells[1]->Value->ToString();
					this->document_label->Text = dataGridView1->CurrentRow->Cells[2]->Value->ToString();
					this->gendre_label->Text = dataGridView1->CurrentRow->Cells[3]->Value->ToString();
					this->is_admin_label->Text = dataGridView1->CurrentRow->Cells[4]->Value->ToString();
				}
				if (this->dataGridView1->RowCount > 2) {
					this->result_txt->Text = "More than one result found";
					this->result_txt->ForeColor = System::Drawing::Color::DarkRed;
				}
			}
			catch (Exception^ error) {
				MessageBox::Show(error->Message);
			}
		}


	}
	private: System::Void dataGridView1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		 
	}
	private: System::Void document_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->document->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
	}
	private: System::Void edit_user_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->dataGridView1->RowCount > 1) {
				this->cancel_query_btn->Visible = true;
				this->make_query_btn->Visible = true;
				this->document_in->Text = dataGridView1->CurrentRow->Cells[2]->Value->ToString();
				this->name_in->Visible = true;
				this->surname_in->Visible = true;
				this->gendre_in->Visible = true;
				this->document_in->Visible = true;
				this->admin_in->Visible = true;
				this->edit_user_btn->Enabled = false;
				this->edit_user_btn->Visible = true;
				this->document->Enabled = false;
				this->search_user->Enabled = false;
			}
	}
	private: System::Void cancel_query_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void make_query_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		//MAKE QUERY
		database_data->open_session();
		String^ error_db = database_data->update_database("users set ", get_update_query());
		MessageBox::Show(error_db);
		database_data->close_session();
	}
	private: System::Void UpdateUserUI_Load(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void name_in_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->set_name = true;
	}
	private: System::Void surname_in_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->set_surname = true;
	}
};
}
