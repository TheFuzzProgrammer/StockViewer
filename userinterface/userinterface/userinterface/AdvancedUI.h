#pragma once
#include "UsersManagementUI.h" //DB
namespace userinterface {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class AdvancedUI : public System::Windows::Forms::Form
	{
	public:
		AdvancedUI(void)
		{
			InitializeComponent();
			cursorPosition = false;
			CX = 0, CY = 0;
			pointer = Point();
		}
	protected:

		~AdvancedUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel7;
	protected:
	private: System::Windows::Forms::Label^ MinimizeLabel;
	private: System::Windows::Forms::Label^ CloseLabel;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ cancel_btn;
	private: System::Windows::Forms::Panel^ info_panel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ database_mgm_btn;
	private: System::Windows::Forms::Button^ taxes_btn;
	private: System::Windows::Forms::Button^ statics_btn;
	private: System::Windows::Forms::Button^ usr_mgm_btn;
	private: bool cursorPosition;
	private: System::Drawing::Point pointer;
	private: int CX, CY;
	private: System::Windows::Forms::Panel^ panel4;
	private:
		System::ComponentModel::Container^ components;

#pragma region
		void InitializeComponent(void)
		{
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->MinimizeLabel = (gcnew System::Windows::Forms::Label());
			this->CloseLabel = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->info_panel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->database_mgm_btn = (gcnew System::Windows::Forms::Button());
			this->taxes_btn = (gcnew System::Windows::Forms::Button());
			this->statics_btn = (gcnew System::Windows::Forms::Button());
			this->usr_mgm_btn = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel7->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel7->Controls->Add(this->MinimizeLabel);
			this->panel7->Controls->Add(this->CloseLabel);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel7->Location = System::Drawing::Point(0, 0);
			this->panel7->MaximumSize = System::Drawing::Size(1024, 25);
			this->panel7->MinimumSize = System::Drawing::Size(1024, 25);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1024, 25);
			this->panel7->TabIndex = 12;
			this->panel7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AdvancedUI::StartSetFormPosition);
			this->panel7->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdvancedUI::SetFormPosition);
			this->panel7->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AdvancedUI::CancelFormPositionSet);
			// 
			// MinimizeLabel
			// 
			this->MinimizeLabel->AutoSize = true;
			this->MinimizeLabel->BackColor = System::Drawing::Color::Transparent;
			this->MinimizeLabel->Dock = System::Windows::Forms::DockStyle::Right;
			this->MinimizeLabel->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MinimizeLabel->ForeColor = System::Drawing::Color::DimGray;
			this->MinimizeLabel->Location = System::Drawing::Point(984, 0);
			this->MinimizeLabel->Name = L"MinimizeLabel";
			this->MinimizeLabel->Size = System::Drawing::Size(18, 25);
			this->MinimizeLabel->TabIndex = 2;
			this->MinimizeLabel->Text = L"-";
			this->MinimizeLabel->Click += gcnew System::EventHandler(this, &AdvancedUI::MinimizeWindow);
			this->MinimizeLabel->MouseEnter += gcnew System::EventHandler(this, &AdvancedUI::MinimizeLabel_MouseEnter);
			this->MinimizeLabel->MouseLeave += gcnew System::EventHandler(this, &AdvancedUI::MinimzeLabel_MouseLeave);
			// 
			// CloseLabel
			// 
			this->CloseLabel->AutoSize = true;
			this->CloseLabel->BackColor = System::Drawing::Color::Transparent;
			this->CloseLabel->Dock = System::Windows::Forms::DockStyle::Right;
			this->CloseLabel->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CloseLabel->ForeColor = System::Drawing::Color::DimGray;
			this->CloseLabel->Location = System::Drawing::Point(1002, 0);
			this->CloseLabel->Name = L"CloseLabel";
			this->CloseLabel->Size = System::Drawing::Size(22, 23);
			this->CloseLabel->TabIndex = 1;
			this->CloseLabel->Text = L"X";
			this->CloseLabel->Click += gcnew System::EventHandler(this, &AdvancedUI::CloseLabel_Click);
			this->CloseLabel->MouseEnter += gcnew System::EventHandler(this, &AdvancedUI::CloseLabel_MouseEnter);
			this->CloseLabel->MouseLeave += gcnew System::EventHandler(this, &AdvancedUI::CloseLabel_MouseLeave);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel2->Controls->Add(this->cancel_btn);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(289, 666);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(735, 102);
			this->panel2->TabIndex = 15;
			// 
			// cancel_btn
			// 
			this->cancel_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->cancel_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->cancel_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->cancel_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cancel_btn->Location = System::Drawing::Point(548, 20);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(175, 70);
			this->cancel_btn->TabIndex = 4;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = true;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &AdvancedUI::cancel_sale_btn_Click);
			// 
			// info_panel
			// 
			this->info_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->info_panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->info_panel->Location = System::Drawing::Point(289, 25);
			this->info_panel->Name = L"info_panel";
			this->info_panel->Size = System::Drawing::Size(735, 641);
			this->info_panel->TabIndex = 14;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->database_mgm_btn);
			this->panel1->Controls->Add(this->taxes_btn);
			this->panel1->Controls->Add(this->statics_btn);
			this->panel1->Controls->Add(this->usr_mgm_btn);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 25);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(289, 743);
			this->panel1->TabIndex = 13;
			// 
			// database_mgm_btn
			// 
			this->database_mgm_btn->BackColor = System::Drawing::Color::Transparent;
			this->database_mgm_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->database_mgm_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->database_mgm_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->database_mgm_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->database_mgm_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->database_mgm_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->database_mgm_btn->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->database_mgm_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->database_mgm_btn->Location = System::Drawing::Point(0, 436);
			this->database_mgm_btn->Name = L"database_mgm_btn";
			this->database_mgm_btn->Size = System::Drawing::Size(289, 70);
			this->database_mgm_btn->TabIndex = 5;
			this->database_mgm_btn->Text = L"DB Management";
			this->database_mgm_btn->UseVisualStyleBackColor = false;
			// 
			// taxes_btn
			// 
			this->taxes_btn->BackColor = System::Drawing::Color::Transparent;
			this->taxes_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->taxes_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->taxes_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->taxes_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->taxes_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->taxes_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->taxes_btn->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->taxes_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->taxes_btn->Location = System::Drawing::Point(0, 366);
			this->taxes_btn->Name = L"taxes_btn";
			this->taxes_btn->Size = System::Drawing::Size(289, 70);
			this->taxes_btn->TabIndex = 4;
			this->taxes_btn->Text = L"Taxes management";
			this->taxes_btn->UseVisualStyleBackColor = false;
			// 
			// statics_btn
			// 
			this->statics_btn->BackColor = System::Drawing::Color::Transparent;
			this->statics_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->statics_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->statics_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->statics_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->statics_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->statics_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->statics_btn->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statics_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->statics_btn->Location = System::Drawing::Point(0, 296);
			this->statics_btn->Name = L"statics_btn";
			this->statics_btn->Size = System::Drawing::Size(289, 70);
			this->statics_btn->TabIndex = 3;
			this->statics_btn->Text = L"Statistics";
			this->statics_btn->UseVisualStyleBackColor = false;
			// 
			// usr_mgm_btn
			// 
			this->usr_mgm_btn->BackColor = System::Drawing::Color::Transparent;
			this->usr_mgm_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->usr_mgm_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->usr_mgm_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->usr_mgm_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->usr_mgm_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->usr_mgm_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->usr_mgm_btn->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usr_mgm_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->usr_mgm_btn->Location = System::Drawing::Point(0, 226);
			this->usr_mgm_btn->Name = L"usr_mgm_btn";
			this->usr_mgm_btn->Size = System::Drawing::Size(289, 70);
			this->usr_mgm_btn->TabIndex = 2;
			this->usr_mgm_btn->Text = L"Users management";
			this->usr_mgm_btn->UseVisualStyleBackColor = false;
			this->usr_mgm_btn->Click += gcnew System::EventHandler(this, &AdvancedUI::add_user_btn_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(289, 226);
			this->panel4->TabIndex = 0;
			// 
			// AdvancedUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(1024, 768);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->info_panel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel7);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1024, 768);
			this->MinimumSize = System::Drawing::Size(1024, 768);
			this->Name = L"AdvancedUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Advanced ";
			this->Resize += gcnew System::EventHandler(this, &AdvancedUI::ShowWindow);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		template <class T>
		void open_info_panel(T SonForm) {
			if (this->info_panel->Controls->Count > 0)
				this->info_panel->Controls->RemoveAt(0);
			SonForm->TopLevel = false;
			SonForm->Dock = DockStyle::Fill;
			this->info_panel->Controls->Add(SonForm);
			this->info_panel->Tag = SonForm;
			SonForm->Show();
		}
	private: System::Void add_user_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		UsersManagement^ user_dialog = gcnew userinterface::UsersManagement();
		open_info_panel(user_dialog);
	}
	private: System::Void cancel_sale_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
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
	private: System::Void ShowWindow(System::Object^ sender, System::EventArgs^ e) {
		;
		for (int adder = 0; adder <= 100; adder++) {
			_sleep(2);
			this->Opacity = adder / static_cast<double>(100);
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
	};
}