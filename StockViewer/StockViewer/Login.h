#pragma once
#include "SVMainUI.h"
#include "database_manager.h"

namespace StockViewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{	
			database_data = gcnew DataBase("datasource=localhost; username=root; password=""; database=svlocal;");
			InitializeComponent();
		}

	protected:
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ key_input;

	private: System::Windows::Forms::TextBox^ id_input;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ tittle_label;

	private: System::Windows::Forms::Button^ log_in_btn;
	private: DataBase^ database_data;
	private: System::Windows::Forms::Button^ cancel_sale_btn;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->log_in_btn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->key_input = (gcnew System::Windows::Forms::TextBox());
			this->id_input = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->cancel_sale_btn = (gcnew System::Windows::Forms::Button());
			this->tittle_label = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->log_in_btn);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->key_input);
			this->panel1->Controls->Add(this->id_input);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(344, 527);
			this->panel1->TabIndex = 0;
			// 
			// log_in_btn
			// 
			this->log_in_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->log_in_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SpringGreen;
			this->log_in_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aquamarine;
			this->log_in_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->log_in_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->log_in_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->log_in_btn->Location = System::Drawing::Point(121, 341);
			this->log_in_btn->Name = L"log_in_btn";
			this->log_in_btn->Size = System::Drawing::Size(102, 38);
			this->log_in_btn->TabIndex = 10;
			this->log_in_btn->Text = L"Log In";
			this->log_in_btn->UseVisualStyleBackColor = true;
			this->log_in_btn->Click += gcnew System::EventHandler(this, &Login::log_in_btn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(83, 251);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Key";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(83, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"ID";
			// 
			// key_input
			// 
			this->key_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->key_input->Location = System::Drawing::Point(86, 283);
			this->key_input->Name = L"key_input";
			this->key_input->PasswordChar = '*';
			this->key_input->Size = System::Drawing::Size(175, 16);
			this->key_input->TabIndex = 7;
			this->key_input->UseSystemPasswordChar = true;
			// 
			// id_input
			// 
			this->id_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->id_input->Location = System::Drawing::Point(86, 202);
			this->id_input->Name = L"id_input";
			this->id_input->Size = System::Drawing::Size(175, 16);
			this->id_input->TabIndex = 6;
			this->id_input->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::id_input_KeyDown);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 427);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(344, 100);
			this->panel3->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(208, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"v DELTA 1 (testing)";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->cancel_sale_btn);
			this->panel2->Controls->Add(this->tittle_label);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(344, 116);
			this->panel2->TabIndex = 0;
			// 
			// cancel_sale_btn
			// 
			this->cancel_sale_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->cancel_sale_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->cancel_sale_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->cancel_sale_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel_sale_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_sale_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cancel_sale_btn->Location = System::Drawing::Point(305, 0);
			this->cancel_sale_btn->Name = L"cancel_sale_btn";
			this->cancel_sale_btn->Size = System::Drawing::Size(39, 35);
			this->cancel_sale_btn->TabIndex = 11;
			this->cancel_sale_btn->Text = L"X";
			this->cancel_sale_btn->UseVisualStyleBackColor = true;
			this->cancel_sale_btn->Click += gcnew System::EventHandler(this, &Login::cancel_sale_btn_Click);
			// 
			// tittle_label
			// 
			this->tittle_label->AutoSize = true;
			this->tittle_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tittle_label->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tittle_label->Location = System::Drawing::Point(103, 53);
			this->tittle_label->Name = L"tittle_label";
			this->tittle_label->Size = System::Drawing::Size(142, 24);
			this->tittle_label->TabIndex = 10;
			this->tittle_label->Text = L"ControlStock";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(344, 527);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: bool check_key(String^ _Key, String^ _user) {
		//not finished yet
		return true;
	}
	private: void open_ui(bool _admin) {
		SVMainUI^ MUDIALOG = gcnew SVMainUI();
		MUDIALOG->check_admin(_admin);
		this->Hide();
		MUDIALOG->ShowDialog();
		this->Close();
	}
	private: void start_main() {
		database_data->open_session();
		try {
			this->tittle_label->Text = database_data->get_data(get_query_users(this->id_input->Text))->Rows[0]->ItemArray[4]->ToString();
			if (this->database_data->get_data(get_query_users(this->id_input->Text))->Rows[0]->ItemArray[4]->ToString() == "True") {
				if (check_key(this->id_input->Text, this->key_input->Text)) {
					open_ui(true);
				}
				else {
					MessageBox::Show("Incorrect key");
				}
			}
			else {
				open_ui(false);
			}
		}
		catch (Exception^ exc) {
			delete exc;
			MessageBox::Show("User does not exists");
		}
		database_data->close_session();
	}
	private: System::Void log_in_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		start_main();
	}
	private: System::Void cancel_sale_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void id_input_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == 13) {
			delete e;
			start_main();
		}
	}
};
}
