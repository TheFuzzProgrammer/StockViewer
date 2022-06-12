#pragma once

namespace userinterface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ProductsUI
	/// </summary>
	public ref class ProductsUI : public System::Windows::Forms::Form
	{
	public:
		ProductsUI(void)
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
		~ProductsUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ options_panel;
	private: System::Windows::Forms::Button^ edit_product_btn;
	private: System::Windows::Forms::Button^ search_product_btn;
	private: System::Windows::Forms::Button^ add_product_btn;
	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->options_panel = (gcnew System::Windows::Forms::Panel());
			this->edit_product_btn = (gcnew System::Windows::Forms::Button());
			this->search_product_btn = (gcnew System::Windows::Forms::Button());
			this->add_product_btn = (gcnew System::Windows::Forms::Button());
			this->options_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// options_panel
			// 
			this->options_panel->Controls->Add(this->edit_product_btn);
			this->options_panel->Controls->Add(this->search_product_btn);
			this->options_panel->Controls->Add(this->add_product_btn);
			this->options_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->options_panel->Location = System::Drawing::Point(0, 0);
			this->options_panel->Name = L"options_panel";
			this->options_panel->Size = System::Drawing::Size(720, 629);
			this->options_panel->TabIndex = 0;
			// 
			// edit_product_btn
			// 
			this->edit_product_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->edit_product_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->edit_product_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->edit_product_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->edit_product_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->edit_product_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->edit_product_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_product_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->edit_product_btn->Location = System::Drawing::Point(0, 418);
			this->edit_product_btn->Name = L"edit_product_btn";
			this->edit_product_btn->Size = System::Drawing::Size(720, 210);
			this->edit_product_btn->TabIndex = 10;
			this->edit_product_btn->Text = L"Edit product";
			this->edit_product_btn->UseVisualStyleBackColor = false;
			// 
			// search_product_btn
			// 
			this->search_product_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->search_product_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->search_product_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->search_product_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->search_product_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->search_product_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_product_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_product_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->search_product_btn->Location = System::Drawing::Point(0, 209);
			this->search_product_btn->Name = L"search_product_btn";
			this->search_product_btn->Size = System::Drawing::Size(720, 209);
			this->search_product_btn->TabIndex = 9;
			this->search_product_btn->Text = L"Search product";
			this->search_product_btn->UseVisualStyleBackColor = false;
			// 
			// add_product_btn
			// 
			this->add_product_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->add_product_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->add_product_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->add_product_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->add_product_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->add_product_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_product_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_product_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->add_product_btn->Location = System::Drawing::Point(0, 0);
			this->add_product_btn->Name = L"add_product_btn";
			this->add_product_btn->Size = System::Drawing::Size(720, 209);
			this->add_product_btn->TabIndex = 8;
			this->add_product_btn->Text = L"Add to stock";
			this->add_product_btn->UseVisualStyleBackColor = false;
			// 
			// ProductsUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(720, 629);
			this->Controls->Add(this->options_panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ProductsUI";
			this->Text = L"ProductsUI";
			this->options_panel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
