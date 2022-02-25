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
			this->search_user_btn = (gcnew System::Windows::Forms::Button());
			this->create_user_btn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->cancel_sale_btn = (gcnew System::Windows::Forms::Button());
			this->edit_user_btn = (gcnew System::Windows::Forms::Button());
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
			this->options_panel->Controls->Add(this->edit_user_btn);
			this->options_panel->Controls->Add(this->search_user_btn);
			this->options_panel->Controls->Add(this->create_user_btn);
			this->options_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->options_panel->Location = System::Drawing::Point(0, 0);
			this->options_panel->Name = L"options_panel";
			this->options_panel->Size = System::Drawing::Size(719, 616);
			this->options_panel->TabIndex = 3;
			// 
			// search_user_btn
			// 
			this->search_user_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->search_user_btn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->search_user_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->search_user_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->search_user_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_user_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_user_btn->Location = System::Drawing::Point(0, 188);
			this->search_user_btn->Name = L"search_user_btn";
			this->search_user_btn->Size = System::Drawing::Size(719, 227);
			this->search_user_btn->TabIndex = 6;
			this->search_user_btn->Text = L"Search user";
			this->search_user_btn->UseVisualStyleBackColor = true;
			// 
			// create_user_btn
			// 
			this->create_user_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->create_user_btn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->create_user_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->create_user_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->create_user_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->create_user_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->create_user_btn->Location = System::Drawing::Point(0, 0);
			this->create_user_btn->Name = L"create_user_btn";
			this->create_user_btn->Size = System::Drawing::Size(719, 188);
			this->create_user_btn->TabIndex = 5;
			this->create_user_btn->Text = L"Create new user";
			this->create_user_btn->UseVisualStyleBackColor = true;
			this->create_user_btn->Click += gcnew System::EventHandler(this, &UsersManagement::create_user_btn_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel2->Controls->Add(this->cancel_sale_btn);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 616);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(719, 113);
			this->panel2->TabIndex = 2;
			// 
			// cancel_sale_btn
			// 
			this->cancel_sale_btn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->cancel_sale_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->cancel_sale_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
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
			// edit_user_btn
			// 
			this->edit_user_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->edit_user_btn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->edit_user_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->edit_user_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->edit_user_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->edit_user_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_user_btn->Location = System::Drawing::Point(0, 415);
			this->edit_user_btn->Name = L"edit_user_btn";
			this->edit_user_btn->Size = System::Drawing::Size(719, 200);
			this->edit_user_btn->TabIndex = 7;
			this->edit_user_btn->Text = L"Edit user";
			this->edit_user_btn->UseVisualStyleBackColor = true;
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
