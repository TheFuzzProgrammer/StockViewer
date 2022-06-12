#pragma once
#include <string>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "userslib.h"
#include "DataBase.h"

namespace StockViewer {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class CreateUser : public System::Windows::Forms::Form
	{
	public:
		CreateUser(void)
		{
			InitializeComponent();
			database_data = gcnew DataBase("datasource=localhost; username=root; password=""; database=svlocal;");
		}

	protected:
		~CreateUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ info_panel;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ preview_btn;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ gendre;
	private: System::Windows::Forms::DateTimePicker^ birth;
	private: System::Windows::Forms::TextBox^ document;
	private: System::Windows::Forms::TextBox^ surname;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::Button^ create_user;
	private: DataBase^ database_data;
	protected:
	private:
		System::ComponentModel::Container ^components;

#pragma region
		void InitializeComponent(void)
		{
			this->info_panel = (gcnew System::Windows::Forms::Panel());
			this->create_user = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->gendre = (gcnew System::Windows::Forms::ComboBox());
			this->birth = (gcnew System::Windows::Forms::DateTimePicker());
			this->document = (gcnew System::Windows::Forms::TextBox());
			this->surname = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->preview_btn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->info_panel->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// info_panel
			// 
			this->info_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->info_panel->Controls->Add(this->create_user);
			this->info_panel->Controls->Add(this->result_label);
			this->info_panel->Controls->Add(this->gendre);
			this->info_panel->Controls->Add(this->birth);
			this->info_panel->Controls->Add(this->document);
			this->info_panel->Controls->Add(this->surname);
			this->info_panel->Controls->Add(this->name);
			this->info_panel->Controls->Add(this->panel3);
			this->info_panel->Controls->Add(this->panel1);
			this->info_panel->Location = System::Drawing::Point(1, 0);
			this->info_panel->Name = L"info_panel";
			this->info_panel->Size = System::Drawing::Size(719, 630);
			this->info_panel->TabIndex = 4;
			this->info_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CreateUser::info_panel_Paint);
			// 
			// create_user
			// 
			this->create_user->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->create_user->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->create_user->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->create_user->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->create_user->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->create_user->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->create_user->Location = System::Drawing::Point(532, 536);
			this->create_user->Name = L"create_user";
			this->create_user->Size = System::Drawing::Size(175, 70);
			this->create_user->TabIndex = 6;
			this->create_user->Text = L"Create user";
			this->create_user->UseVisualStyleBackColor = true;
			this->create_user->Click += gcnew System::EventHandler(this, &CreateUser::button1_Click);
			// 
			// result_label
			// 
			this->result_label->AutoSize = true;
			this->result_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result_label->Location = System::Drawing::Point(279, 412);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(30, 21);
			this->result_label->TabIndex = 14;
			this->result_label->Text = L"     ";
			// 
			// gendre
			// 
			this->gendre->BackColor = System::Drawing::SystemColors::MenuBar;
			this->gendre->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->gendre->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->gendre->FormattingEnabled = true;
			this->gendre->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"MALE", L"FEMALE", L"NON BIN" });
			this->gendre->Location = System::Drawing::Point(283, 340);
			this->gendre->Name = L"gendre";
			this->gendre->Size = System::Drawing::Size(121, 21);
			this->gendre->TabIndex = 11;
			this->gendre->Text = L"Gendre";
			// 
			// birth
			// 
			this->birth->CalendarFont = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->birth->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->birth->CalendarMonthBackground = System::Drawing::SystemColors::GrayText;
			this->birth->CalendarTitleBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->birth->CalendarTitleForeColor = System::Drawing::SystemColors::GrayText;
			this->birth->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->birth->Location = System::Drawing::Point(283, 300);
			this->birth->Name = L"birth";
			this->birth->Size = System::Drawing::Size(275, 23);
			this->birth->TabIndex = 10;
			// 
			// document
			// 
			this->document->BackColor = System::Drawing::SystemColors::MenuBar;
			this->document->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->document->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->document->Location = System::Drawing::Point(282, 259);
			this->document->Name = L"document";
			this->document->Size = System::Drawing::Size(327, 23);
			this->document->TabIndex = 9;
			// 
			// surname
			// 
			this->surname->BackColor = System::Drawing::SystemColors::MenuBar;
			this->surname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->surname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->surname->Location = System::Drawing::Point(282, 221);
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(327, 23);
			this->surname->TabIndex = 8;
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::SystemColors::MenuBar;
			this->name->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(283, 180);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(327, 23);
			this->name->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel3->Controls->Add(this->preview_btn);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 140);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(213, 490);
			this->panel3->TabIndex = 7;
			// 
			// preview_btn
			// 
			this->preview_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->preview_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->preview_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->preview_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->preview_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->preview_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->preview_btn->Location = System::Drawing::Point(16, 396);
			this->preview_btn->Name = L"preview_btn";
			this->preview_btn->Size = System::Drawing::Size(175, 70);
			this->preview_btn->TabIndex = 5;
			this->preview_btn->Text = L"Preview";
			this->preview_btn->UseVisualStyleBackColor = true;
			this->preview_btn->Click += gcnew System::EventHandler(this, &CreateUser::preview_btn_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(69, 198);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 24);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Gendre";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(69, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 24);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Date of birth ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(69, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Document";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(69, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Surame   ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(69, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name   ";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(719, 140);
			this->panel1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(278, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Create new user";
			// 
			// CreateUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->ClientSize = System::Drawing::Size(720, 629);
			this->Controls->Add(this->info_panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CreateUser";
			this->Text = L"CreateUser";
			this->info_panel->ResumeLayout(false);
			this->info_panel->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

public: users::Person get_person() {
	std::string user_name = msclr::interop::marshal_as<std::string>(this->name->Text);
	std::string user_surname = msclr::interop::marshal_as<std::string>(this->surname->Text);
	std::string user_document = msclr::interop::marshal_as<std::string>(this->document->Text);
	std::string user_birth = msclr::interop::marshal_as<std::string>(this->birth->Value.ToLongDateString());
	std::string user_gendre = msclr::interop::marshal_as<std::string>(this->gendre->Text);

	using namespace users;
	Person new_person(user_name, user_surname, user_birth, 12);
	if (user_gendre == "MALE") {
		new_person.set_gendre(1);
	}
	else if (user_gendre == "FEMALE") {
		new_person.set_gendre(2);
	}
	else {
		new_person.set_gendre(3);
	}
	new_person.set_document(user_document);
	return new_person;
}

private: System::Void cancel_sale_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void info_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void preview_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ temp_name = this->name->Text;
	String^ temp_surname = this->surname->Text;
	String^ temp_doc = this->document->Text;
	String^ temp_birth = this->birth->Value.ToLongDateString();

	this->result_label->Text = temp_name + "\n" + temp_surname + "\n" + temp_doc + "\n" + temp_birth;
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	users::Person new_user = get_person();
	String^ c = ",";
	String^ a = "'";
	String^ q_str = a + this->name->Text+a+c+a+this->surname->Text+a+c+a+this->document->Text+a
		+c+a+"FEMALE"+a+c+"false";

	this->database_data->open_session();	 
	String^ results = this->database_data->dump_to_database("users (Name, Surname, Document, Gendre, Admin)", q_str);
	this->database_data->close_session();
	this->result_label->Text = results;
}
};
}