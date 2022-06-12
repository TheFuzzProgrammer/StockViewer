#pragma once
#include "SVMainUI.h"
#include "database_manager.h"

namespace userinterface {

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
			cursorPosition = false;
			CX = 0, CY = 0;
			pointer = Point();
		}
	protected:
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: DataBase^ database_data;
	private: System::ComponentModel::Container^ components;
	private: bool cursorPosition;
	private: System::Drawing::Point pointer;
	private: int CX, CY;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ MinimizeLabel;
	private: System::Windows::Forms::Label^ CloseLabel;
	private: System::Windows::Forms::Label^ tittle_label;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ log_in_btn;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::TextBox^ key_input;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panelCont;
	private: System::Windows::Forms::TextBox^ id_input;

#pragma region

		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->panel7 = (gcnew System::Windows::Forms::Panel());
			   this->MinimizeLabel = (gcnew System::Windows::Forms::Label());
			   this->CloseLabel = (gcnew System::Windows::Forms::Label());
			   this->tittle_label = (gcnew System::Windows::Forms::Label());
			   this->panel3 = (gcnew System::Windows::Forms::Panel());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->log_in_btn = (gcnew System::Windows::Forms::Button());
			   this->panel10 = (gcnew System::Windows::Forms::Panel());
			   this->key_input = (gcnew System::Windows::Forms::TextBox());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->panelCont = (gcnew System::Windows::Forms::Panel());
			   this->id_input = (gcnew System::Windows::Forms::TextBox());
			   this->panel2->SuspendLayout();
			   this->panel7->SuspendLayout();
			   this->panel3->SuspendLayout();
			   this->panel10->SuspendLayout();
			   this->panel1->SuspendLayout();
			   this->panelCont->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // panel2
			   // 
			   this->panel2->BackColor = System::Drawing::Color::Transparent;
			   this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panel2->Controls->Add(this->panel7);
			   this->panel2->Controls->Add(this->tittle_label);
			   this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			   this->panel2->Location = System::Drawing::Point(0, 0);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(360, 116);
			   this->panel2->TabIndex = 0;
			   // 
			   // panel7
			   // 
			   this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)));
			   this->panel7->Controls->Add(this->MinimizeLabel);
			   this->panel7->Controls->Add(this->CloseLabel);
			   this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			   this->panel7->Location = System::Drawing::Point(0, 0);
			   this->panel7->Name = L"panel7";
			   this->panel7->Size = System::Drawing::Size(360, 25);
			   this->panel7->TabIndex = 11;
			   this->panel7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::StartSetFormPosition);
			   this->panel7->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::SetFormPosition);
			   this->panel7->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::CancelFormPositionSet);
			   // 
			   // MinimizeLabel
			   // 
			   this->MinimizeLabel->AutoSize = true;
			   this->MinimizeLabel->BackColor = System::Drawing::Color::Transparent;
			   this->MinimizeLabel->Dock = System::Windows::Forms::DockStyle::Right;
			   this->MinimizeLabel->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->MinimizeLabel->ForeColor = System::Drawing::Color::DimGray;
			   this->MinimizeLabel->Location = System::Drawing::Point(320, 0);
			   this->MinimizeLabel->Name = L"MinimizeLabel";
			   this->MinimizeLabel->Size = System::Drawing::Size(18, 25);
			   this->MinimizeLabel->TabIndex = 2;
			   this->MinimizeLabel->Text = L"-";
			   this->MinimizeLabel->Click += gcnew System::EventHandler(this, &Login::MinimizeWindow);
			   this->MinimizeLabel->MouseEnter += gcnew System::EventHandler(this, &Login::MinimizeLabel_MouseEnter);
			   this->MinimizeLabel->MouseLeave += gcnew System::EventHandler(this, &Login::MinimzeLabel_MouseLeave);
			   // 
			   // CloseLabel
			   // 
			   this->CloseLabel->AutoSize = true;
			   this->CloseLabel->BackColor = System::Drawing::Color::Transparent;
			   this->CloseLabel->Dock = System::Windows::Forms::DockStyle::Right;
			   this->CloseLabel->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->CloseLabel->ForeColor = System::Drawing::Color::DimGray;
			   this->CloseLabel->Location = System::Drawing::Point(338, 0);
			   this->CloseLabel->Name = L"CloseLabel";
			   this->CloseLabel->Size = System::Drawing::Size(22, 23);
			   this->CloseLabel->TabIndex = 1;
			   this->CloseLabel->Text = L"X";
			   this->CloseLabel->Click += gcnew System::EventHandler(this, &Login::CloseLabel_Click);
			   this->CloseLabel->MouseEnter += gcnew System::EventHandler(this, &Login::CloseLabel_MouseEnter);
			   this->CloseLabel->MouseLeave += gcnew System::EventHandler(this, &Login::CloseLabel_MouseLeave);
			   // 
			   // tittle_label
			   // 
			   this->tittle_label->AutoSize = true;
			   this->tittle_label->Font = (gcnew System::Drawing::Font(L"Roboto", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->tittle_label->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->tittle_label->Location = System::Drawing::Point(117, 58);
			   this->tittle_label->Name = L"tittle_label";
			   this->tittle_label->Size = System::Drawing::Size(143, 29);
			   this->tittle_label->TabIndex = 10;
			   this->tittle_label->Text = L"StockViewer";
			   // 
			   // panel3
			   // 
			   this->panel3->BackColor = System::Drawing::Color::Transparent;
			   this->panel3->Controls->Add(this->label4);
			   this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->panel3->Location = System::Drawing::Point(0, 466);
			   this->panel3->Name = L"panel3";
			   this->panel3->Size = System::Drawing::Size(360, 100);
			   this->panel3->TabIndex = 1;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->label4->Location = System::Drawing::Point(182, 68);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(166, 23);
			   this->label4->TabIndex = 10;
			   this->label4->Text = L"v DELTA 1 (testing)";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->label1->Location = System::Drawing::Point(82, 193);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(27, 23);
			   this->label1->TabIndex = 8;
			   this->label1->Text = L"ID";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->label2->Location = System::Drawing::Point(82, 256);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(41, 23);
			   this->label2->TabIndex = 9;
			   this->label2->Text = L"Key";
			   // 
			   // log_in_btn
			   // 
			   this->log_in_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->log_in_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SpringGreen;
			   this->log_in_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aquamarine;
			   this->log_in_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->log_in_btn->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
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
			   // panel10
			   // 
			   this->panel10->BackColor = System::Drawing::Color::Transparent;
			   this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			   this->panel10->Controls->Add(this->key_input);
			   this->panel10->Location = System::Drawing::Point(85, 287);
			   this->panel10->Name = L"panel10";
			   this->panel10->Size = System::Drawing::Size(191, 26);
			   this->panel10->TabIndex = 12;
			   // 
			   // key_input
			   // 
			   this->key_input->BackColor = System::Drawing::SystemColors::HighlightText;
			   this->key_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->key_input->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->key_input->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			   this->key_input->Location = System::Drawing::Point(16, 3);
			   this->key_input->Name = L"key_input";
			   this->key_input->Size = System::Drawing::Size(159, 20);
			   this->key_input->TabIndex = 1;
			   this->key_input->UseSystemPasswordChar = true;
			   this->key_input->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::id_input_KeyDown);
			   // 
			   // panel1
			   // 
			   this->panel1->Controls->Add(this->panel10);
			   this->panel1->Controls->Add(this->panelCont);
			   this->panel1->Controls->Add(this->log_in_btn);
			   this->panel1->Controls->Add(this->label2);
			   this->panel1->Controls->Add(this->label1);
			   this->panel1->Controls->Add(this->panel3);
			   this->panel1->Controls->Add(this->panel2);
			   this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->panel1->Location = System::Drawing::Point(0, 0);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(360, 566);
			   this->panel1->TabIndex = 0;
			   // 
			   // panelCont
			   // 
			   this->panelCont->BackColor = System::Drawing::Color::Transparent;
			   this->panelCont->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelCont.BackgroundImage")));
			   this->panelCont->Controls->Add(this->id_input);
			   this->panelCont->Location = System::Drawing::Point(85, 222);
			   this->panelCont->Name = L"panelCont";
			   this->panelCont->Size = System::Drawing::Size(191, 26);
			   this->panelCont->TabIndex = 11;
			   // 
			   // id_input
			   // 
			   this->id_input->BackColor = System::Drawing::SystemColors::HighlightText;
			   this->id_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->id_input->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->id_input->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			   this->id_input->Location = System::Drawing::Point(16, 3);
			   this->id_input->Name = L"id_input";
			   this->id_input->Size = System::Drawing::Size(159, 20);
			   this->id_input->TabIndex = 0;
			   this->id_input->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::id_input_KeyDown);
			   // 
			   // Login
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->ClientSize = System::Drawing::Size(360, 566);
			   this->Controls->Add(this->panel1);
			   this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->MaximizeBox = false;
			   this->MaximumSize = System::Drawing::Size(360, 566);
			   this->MinimumSize = System::Drawing::Size(360, 566);
			   this->Name = L"Login";
			   this->Opacity = 0.98;
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Login";
			   this->Load += gcnew System::EventHandler(this, &Login::Login_Shown);
			   this->Shown += gcnew System::EventHandler(this, &Login::Login_Shown);
			   this->Resize += gcnew System::EventHandler(this, &Login::Login_Shown);
			   this->panel2->ResumeLayout(false);
			   this->panel2->PerformLayout();
			   this->panel7->ResumeLayout(false);
			   this->panel7->PerformLayout();
			   this->panel3->ResumeLayout(false);
			   this->panel3->PerformLayout();
			   this->panel10->ResumeLayout(false);
			   this->panel10->PerformLayout();
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   this->panelCont->ResumeLayout(false);
			   this->panelCont->PerformLayout();
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
					MessageBox::Show("Incorrect user or key");
				}
			}
			else {
				open_ui(false);
			}
		}
		catch (Exception^ exc) {
			delete exc;
			MessageBox::Show("User does not exists ");
		}
		database_data->close_session();
	}
	private: System::Void log_in_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		start_main();
	}
	private: System::Void id_input_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == 13) {
			delete e;
			start_main();
		}
	}
	private: System::Void CloseLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void CloseLabel_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->CloseLabel->ForeColor = Color::DimGray;
	}
	private: System::Void CloseLabel_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->CloseLabel->ForeColor = Color::Gray;
	}
	private: System::Void MinimzeLabel_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->MinimizeLabel->ForeColor = Color::DimGray;
	}
	private: System::Void MinimizeLabel_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->MinimizeLabel->ForeColor = Color::Gray;
	}
	private: System::Void MinimizeWindow(System::Object^ sender, System::EventArgs^ e) {
		for (int adder = 90; adder >= 0; adder--) {
			_sleep(2);
			this->Opacity = adder / static_cast<double>(100);
		}
		if (WindowState == FormWindowState::Normal) {
			WindowState = FormWindowState::Minimized;
			this->Opacity = 0;
		}
	}
	private: System::Void StartSetFormPosition(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		cursorPosition = true;
		CX = this->Location.X - Cursor->Position.X;
		CY = this->Location.Y - Cursor->Position.Y;

	}
	private: System::Void CancelFormPositionSet(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		cursorPosition = false;
	}
	private: System::Void SetFormPosition(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (cursorPosition) {
			pointer.X = (this->Cursor->Position.X + CX);
			pointer.Y = (this->Cursor->Position.Y + CY);
			this->Location = pointer;
		}

	}
	private: System::Void Login_Shown(System::Object^ sender, System::EventArgs^ e) {
		;
		for (int adder = 0; adder <= 90; adder++) {
			_sleep(2);
			this->Opacity = adder / static_cast<double>(100);
		}
	}
	private: System::Void OkButton_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int adder = 0; adder <= 90; adder++) {
			_sleep(2);
			this->Opacity = adder / static_cast<double>(100);
		}

	}
	};
}
