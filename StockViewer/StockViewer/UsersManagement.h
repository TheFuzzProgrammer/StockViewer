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
	private: System::Windows::Forms::Button^ preview_btn;
	private: System::Windows::Forms::Button^ cancel_sale_btn;
	private: System::Windows::Forms::Button^ sell_btn;



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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->preview_btn = (gcnew System::Windows::Forms::Button());
			this->cancel_sale_btn = (gcnew System::Windows::Forms::Button());
			this->sell_btn = (gcnew System::Windows::Forms::Button());
			this->info_panel->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// info_panel
			// 
			this->info_panel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->info_panel->Controls->Add(this->panel2);
			this->info_panel->Location = System::Drawing::Point(0, 0);
			this->info_panel->Name = L"info_panel";
			this->info_panel->Size = System::Drawing::Size(719, 729);
			this->info_panel->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel2->Controls->Add(this->preview_btn);
			this->panel2->Controls->Add(this->cancel_sale_btn);
			this->panel2->Controls->Add(this->sell_btn);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 629);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(719, 100);
			this->panel2->TabIndex = 2;
			// 
			// preview_btn
			// 
			this->preview_btn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->preview_btn->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->preview_btn->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->preview_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->preview_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->preview_btn->Location = System::Drawing::Point(283, 18);
			this->preview_btn->Name = L"preview_btn";
			this->preview_btn->Size = System::Drawing::Size(175, 70);
			this->preview_btn->TabIndex = 5;
			this->preview_btn->Text = L"Preview";
			this->preview_btn->UseVisualStyleBackColor = true;
			this->preview_btn->Click += gcnew System::EventHandler(this, &UsersManagement::preview_btn_Click);
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
			this->cancel_sale_btn->Location = System::Drawing::Point(16, 18);
			this->cancel_sale_btn->Name = L"cancel_sale_btn";
			this->cancel_sale_btn->Size = System::Drawing::Size(175, 70);
			this->cancel_sale_btn->TabIndex = 4;
			this->cancel_sale_btn->Text = L"Cancel";
			this->cancel_sale_btn->UseVisualStyleBackColor = true;
			this->cancel_sale_btn->Click += gcnew System::EventHandler(this, &UsersManagement::cancel_sale_btn_Click);
			// 
			// sell_btn
			// 
			this->sell_btn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->sell_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightSalmon;
			this->sell_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->sell_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sell_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sell_btn->Location = System::Drawing::Point(536, 18);
			this->sell_btn->Name = L"sell_btn";
			this->sell_btn->Size = System::Drawing::Size(175, 70);
			this->sell_btn->TabIndex = 3;
			this->sell_btn->Text = L"Test";
			this->sell_btn->UseVisualStyleBackColor = true;
			this->sell_btn->Click += gcnew System::EventHandler(this, &UsersManagement::sell_btn_Click);
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
private: System::Void sell_btn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cancel_sale_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void preview_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	CreateUser^ sales_dialog = gcnew StockViewer::CreateUser();
	open_info_panel(sales_dialog);
}
};
}
