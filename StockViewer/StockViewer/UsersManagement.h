#pragma once
#include "CreateUser.h"

namespace StockViewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UsersManagement
	/// </summary>
	public ref class UsersManagement : public System::Windows::Forms::Form
	{
	public:
		UsersManagement(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~UsersManagement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ info_panel;
	protected:
	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::Button^ cancel_sale_btn;
	private: System::Windows::Forms::Panel^ options_panel;
	private: System::Windows::Forms::Button^ search_user_btn;
	private: System::Windows::Forms::Button^ create_user_btn;
	private: System::Windows::Forms::Button^ edit_user_btn;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;





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
			this->info_panel = (gcnew System::Windows::Forms::Panel());
			this->options_panel = (gcnew System::Windows::Forms::Panel());
			this->edit_user_btn = (gcnew System::Windows::Forms::Button());
			this->search_user_btn = (gcnew System::Windows::Forms::Button());
			this->create_user_btn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->cancel_sale_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->info_panel->SuspendLayout();
			this->options_panel->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// info_panel
			// 
			this->info_panel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->info_panel->Controls->Add(this->options_panel);
			this->info_panel->Controls->Add(this->panel2);
			this->info_panel->Location = System::Drawing::Point(0, 0);
			this->info_panel->Name = L"info_panel";
			this->info_panel->Size = System::Drawing::Size(719, 729);
			this->info_panel->TabIndex = 3;
			// 
			// options_panel
			// 
			this->options_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->options_panel->Controls->Add(this->label3);
			this->options_panel->Controls->Add(this->label2);
			this->options_panel->Controls->Add(this->label1);
			this->options_panel->Controls->Add(this->edit_user_btn);
			this->options_panel->Controls->Add(this->search_user_btn);
			this->options_panel->Controls->Add(this->create_user_btn);
			this->options_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->options_panel->Location = System::Drawing::Point(0, 0);
			this->options_panel->Name = L"options_panel";
			this->options_panel->Size = System::Drawing::Size(719, 616);
			this->options_panel->TabIndex = 3;
			// 
			// edit_user_btn
			// 
			this->edit_user_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->edit_user_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->edit_user_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->edit_user_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->edit_user_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->edit_user_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->edit_user_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_user_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->edit_user_btn->Location = System::Drawing::Point(0, 415);
			this->edit_user_btn->Name = L"edit_user_btn";
			this->edit_user_btn->Size = System::Drawing::Size(719, 201);
			this->edit_user_btn->TabIndex = 7;
			this->edit_user_btn->Text = L"Edit user";
			this->edit_user_btn->UseVisualStyleBackColor = false;
			// 
			// search_user_btn
			// 
			this->search_user_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->search_user_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->search_user_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->search_user_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->search_user_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->search_user_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_user_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_user_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->search_user_btn->Location = System::Drawing::Point(0, 188);
			this->search_user_btn->Name = L"search_user_btn";
			this->search_user_btn->Size = System::Drawing::Size(719, 227);
			this->search_user_btn->TabIndex = 6;
			this->search_user_btn->Text = L"Search user";
			this->search_user_btn->UseVisualStyleBackColor = false;
			// 
			// create_user_btn
			// 
			this->create_user_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->create_user_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->create_user_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->create_user_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->create_user_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->create_user_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->create_user_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->create_user_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->create_user_btn->Location = System::Drawing::Point(0, 0);
			this->create_user_btn->Name = L"create_user_btn";
			this->create_user_btn->Size = System::Drawing::Size(719, 188);
			this->create_user_btn->TabIndex = 5;
			this->create_user_btn->Text = L"Create new user";
			this->create_user_btn->UseVisualStyleBackColor = false;
			this->create_user_btn->Click += gcnew System::EventHandler(this, &UsersManagement::create_user_btn_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel2->Controls->Add(this->cancel_sale_btn);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel2->Location = System::Drawing::Point(0, 616);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(719, 113);
			this->panel2->TabIndex = 2;
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
			this->cancel_sale_btn->Location = System::Drawing::Point(533, 22);
			this->cancel_sale_btn->Name = L"cancel_sale_btn";
			this->cancel_sale_btn->Size = System::Drawing::Size(175, 70);
			this->cancel_sale_btn->TabIndex = 4;
			this->cancel_sale_btn->Text = L"Cancel";
			this->cancel_sale_btn->UseVisualStyleBackColor = true;
			this->cancel_sale_btn->Click += gcnew System::EventHandler(this, &UsersManagement::cancel_sale_btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(232, 569);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 15);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Allows you to assign roles an edit personal info";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(232, 370);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(262, 15);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Allows you to assign roles an edit personal info";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(232, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(262, 15);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Allows you to assign roles an edit personal info";
			// 
			// UsersManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(720, 729);
			this->Controls->Add(this->info_panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UsersManagement";
			this->Text = L"UsersManagement";
			this->info_panel->ResumeLayout(false);
			this->options_panel->ResumeLayout(false);
			this->options_panel->PerformLayout();
			this->panel2->ResumeLayout(false);
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
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void cancel_sale_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void create_user_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	CreateUser^ new_user_dialog = gcnew StockViewer::CreateUser();
	open_info_panel(new_user_dialog);
}
};
}
