#pragma once
#include "UsersManagement.h"
#include "CreateUser.h"

namespace StockViewer {

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

		}

	protected:

		~AdvancedUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ add_observation_btn;
	private: System::Windows::Forms::Button^ taxes_btn;

	private: System::Windows::Forms::Button^ statics_btn;

	private: System::Windows::Forms::Button^ add_user_btn;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ info_panel;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ preview_btn;
	private: System::Windows::Forms::Button^ cancel_sale_btn;
	private: System::Windows::Forms::Button^ sell_btn;

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->add_observation_btn = (gcnew System::Windows::Forms::Button());
			this->taxes_btn = (gcnew System::Windows::Forms::Button());
			this->statics_btn = (gcnew System::Windows::Forms::Button());
			this->add_user_btn = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->info_panel = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->preview_btn = (gcnew System::Windows::Forms::Button());
			this->cancel_sale_btn = (gcnew System::Windows::Forms::Button());
			this->sell_btn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->info_panel->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->add_observation_btn);
			this->panel1->Controls->Add(this->taxes_btn);
			this->panel1->Controls->Add(this->statics_btn);
			this->panel1->Controls->Add(this->add_user_btn);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(289, 729);
			this->panel1->TabIndex = 1;
			// 
			// add_observation_btn
			// 
			this->add_observation_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->add_observation_btn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->add_observation_btn->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->add_observation_btn->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->add_observation_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_observation_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_observation_btn->Location = System::Drawing::Point(0, 408);
			this->add_observation_btn->Name = L"add_observation_btn";
			this->add_observation_btn->Size = System::Drawing::Size(289, 70);
			this->add_observation_btn->TabIndex = 5;
			this->add_observation_btn->Text = L"Add observation";
			this->add_observation_btn->UseVisualStyleBackColor = true;
			// 
			// taxes_btn
			// 
			this->taxes_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->taxes_btn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->taxes_btn->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->taxes_btn->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->taxes_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->taxes_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->taxes_btn->Location = System::Drawing::Point(0, 338);
			this->taxes_btn->Name = L"taxes_btn";
			this->taxes_btn->Size = System::Drawing::Size(289, 70);
			this->taxes_btn->TabIndex = 4;
			this->taxes_btn->Text = L"Taxes management";
			this->taxes_btn->UseVisualStyleBackColor = true;
			// 
			// statics_btn
			// 
			this->statics_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->statics_btn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->statics_btn->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->statics_btn->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->statics_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->statics_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statics_btn->Location = System::Drawing::Point(0, 268);
			this->statics_btn->Name = L"statics_btn";
			this->statics_btn->Size = System::Drawing::Size(289, 70);
			this->statics_btn->TabIndex = 3;
			this->statics_btn->Text = L"Statistics";
			this->statics_btn->UseVisualStyleBackColor = true;
			// 
			// add_user_btn
			// 
			this->add_user_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->add_user_btn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->add_user_btn->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->add_user_btn->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->add_user_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_user_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_user_btn->Location = System::Drawing::Point(0, 198);
			this->add_user_btn->Name = L"add_user_btn";
			this->add_user_btn->Size = System::Drawing::Size(289, 70);
			this->add_user_btn->TabIndex = 2;
			this->add_user_btn->Text = L"Users management";
			this->add_user_btn->UseVisualStyleBackColor = true;
			this->add_user_btn->Click += gcnew System::EventHandler(this, &AdvancedUI::add_user_btn_Click);
			// 
			// panel4
			// 
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(289, 198);
			this->panel4->TabIndex = 0;
			// 
			// info_panel
			// 
			this->info_panel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->info_panel->Controls->Add(this->panel2);
			this->info_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->info_panel->Location = System::Drawing::Point(289, 0);
			this->info_panel->Name = L"info_panel";
			this->info_panel->Size = System::Drawing::Size(719, 729);
			this->info_panel->TabIndex = 2;
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
			this->sell_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Lime;
			this->sell_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->sell_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sell_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sell_btn->Location = System::Drawing::Point(536, 18);
			this->sell_btn->Name = L"sell_btn";
			this->sell_btn->Size = System::Drawing::Size(175, 70);
			this->sell_btn->TabIndex = 3;
			this->sell_btn->Text = L"Sell";
			this->sell_btn->UseVisualStyleBackColor = true;
			// 
			// AdvancedUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->info_panel);
			this->Controls->Add(this->panel1);
			this->MaximumSize = System::Drawing::Size(1024, 768);
			this->MinimumSize = System::Drawing::Size(1024, 768);
			this->Name = L"AdvancedUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Advanced ";
			this->panel1->ResumeLayout(false);
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
		
	private: System::Void add_user_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		UsersManagement^ user_dialog = gcnew StockViewer::UsersManagement();
		open_info_panel(user_dialog);
	}
};
}
