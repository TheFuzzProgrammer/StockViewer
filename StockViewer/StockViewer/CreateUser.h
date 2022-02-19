#pragma once

namespace StockViewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CreateUser
	/// </summary>
	public ref class CreateUser : public System::Windows::Forms::Form
	{
	public:
		CreateUser(void)
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
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ preview_btn;
	private: System::Windows::Forms::Button^ cancel_sale_btn;
	private: System::Windows::Forms::Button^ sell_btn;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;

	protected:





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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->preview_btn = (gcnew System::Windows::Forms::Button());
			this->cancel_sale_btn = (gcnew System::Windows::Forms::Button());
			this->sell_btn = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->info_panel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// info_panel
			// 
			this->info_panel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->info_panel->Controls->Add(this->textBox1);
			this->info_panel->Controls->Add(this->panel3);
			this->info_panel->Controls->Add(this->panel1);
			this->info_panel->Controls->Add(this->panel2);
			this->info_panel->Location = System::Drawing::Point(1, 0);
			this->info_panel->Name = L"info_panel";
			this->info_panel->Size = System::Drawing::Size(719, 729);
			this->info_panel->TabIndex = 4;
			// 
			// panel1
			// 
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(278, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Create new user";
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
			// 
			// sell_btn
			// 
			this->sell_btn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->sell_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGoldenrod;
			this->sell_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->sell_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sell_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sell_btn->Location = System::Drawing::Point(536, 18);
			this->sell_btn->Name = L"sell_btn";
			this->sell_btn->Size = System::Drawing::Size(175, 70);
			this->sell_btn->TabIndex = 3;
			this->sell_btn->Text = L"Test";
			this->sell_btn->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 140);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(213, 489);
			this->panel3->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(98, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name   ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(283, 180);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(327, 20);
			this->textBox1->TabIndex = 2;
			// 
			// CreateUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(720, 729);
			this->Controls->Add(this->info_panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CreateUser";
			this->Text = L"CreateUser";
			this->info_panel->ResumeLayout(false);
			this->info_panel->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

};
}
