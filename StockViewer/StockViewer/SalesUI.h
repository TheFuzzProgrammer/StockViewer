#pragma once

namespace StockViewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class SalesUI : public System::Windows::Forms::Form
	{
	public:
		SalesUI(void)
		{
			InitializeComponent();
		}

	protected:
		~SalesUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ add_observation_btn;

	private: System::Windows::Forms::Button^ restart_sale_btn;

	private: System::Windows::Forms::Button^ search_client_btn;

	private: System::Windows::Forms::Button^ add_discount_btn;
	private: System::Windows::Forms::Button^ preview_btn;
	private: System::Windows::Forms::Button^ cancel_sale_btn;
	private: System::Windows::Forms::Button^ sell_btn;


	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SalesUI::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->add_observation_btn = (gcnew System::Windows::Forms::Button());
			this->restart_sale_btn = (gcnew System::Windows::Forms::Button());
			this->search_client_btn = (gcnew System::Windows::Forms::Button());
			this->add_discount_btn = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->preview_btn = (gcnew System::Windows::Forms::Button());
			this->cancel_sale_btn = (gcnew System::Windows::Forms::Button());
			this->sell_btn = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel1->Controls->Add(this->add_observation_btn);
			this->panel1->Controls->Add(this->restart_sale_btn);
			this->panel1->Controls->Add(this->search_client_btn);
			this->panel1->Controls->Add(this->add_discount_btn);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(289, 729);
			this->panel1->TabIndex = 0;
			// 
			// add_observation_btn
			// 
			this->add_observation_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_observation_btn.BackgroundImage")));
			this->add_observation_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->add_observation_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->add_observation_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->add_observation_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->add_observation_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->add_observation_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_observation_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_observation_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->add_observation_btn->Location = System::Drawing::Point(0, 436);
			this->add_observation_btn->Name = L"add_observation_btn";
			this->add_observation_btn->Size = System::Drawing::Size(289, 70);
			this->add_observation_btn->TabIndex = 5;
			this->add_observation_btn->Text = L"Add observation";
			this->add_observation_btn->UseVisualStyleBackColor = true;
			// 
			// restart_sale_btn
			// 
			this->restart_sale_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"restart_sale_btn.BackgroundImage")));
			this->restart_sale_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->restart_sale_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->restart_sale_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->restart_sale_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->restart_sale_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->restart_sale_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->restart_sale_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->restart_sale_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->restart_sale_btn->Location = System::Drawing::Point(0, 366);
			this->restart_sale_btn->Name = L"restart_sale_btn";
			this->restart_sale_btn->Size = System::Drawing::Size(289, 70);
			this->restart_sale_btn->TabIndex = 4;
			this->restart_sale_btn->Text = L"Restart sale";
			this->restart_sale_btn->UseVisualStyleBackColor = true;
			// 
			// search_client_btn
			// 
			this->search_client_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_client_btn.BackgroundImage")));
			this->search_client_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->search_client_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->search_client_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->search_client_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->search_client_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->search_client_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_client_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_client_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->search_client_btn->Location = System::Drawing::Point(0, 296);
			this->search_client_btn->Name = L"search_client_btn";
			this->search_client_btn->Size = System::Drawing::Size(289, 70);
			this->search_client_btn->TabIndex = 3;
			this->search_client_btn->Text = L"Search client";
			this->search_client_btn->UseVisualStyleBackColor = true;
			// 
			// add_discount_btn
			// 
			this->add_discount_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_discount_btn.BackgroundImage")));
			this->add_discount_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->add_discount_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->add_discount_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->add_discount_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->add_discount_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->add_discount_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_discount_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_discount_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->add_discount_btn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->add_discount_btn->Location = System::Drawing::Point(0, 226);
			this->add_discount_btn->Name = L"add_discount_btn";
			this->add_discount_btn->Size = System::Drawing::Size(289, 70);
			this->add_discount_btn->TabIndex = 2;
			this->add_discount_btn->Text = L"Add discount";
			this->add_discount_btn->UseVisualStyleBackColor = true;
			this->add_discount_btn->Click += gcnew System::EventHandler(this, &SalesUI::add_discount_btn_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(289, 226);
			this->panel4->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel2->Controls->Add(this->preview_btn);
			this->panel2->Controls->Add(this->cancel_sale_btn);
			this->panel2->Controls->Add(this->sell_btn);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(289, 629);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(719, 100);
			this->panel2->TabIndex = 1;
			// 
			// preview_btn
			// 
			this->preview_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->preview_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->preview_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
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
			this->cancel_sale_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->cancel_sale_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->cancel_sale_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->cancel_sale_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel_sale_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_sale_btn->Location = System::Drawing::Point(16, 18);
			this->cancel_sale_btn->Name = L"cancel_sale_btn";
			this->cancel_sale_btn->Size = System::Drawing::Size(175, 70);
			this->cancel_sale_btn->TabIndex = 4;
			this->cancel_sale_btn->Text = L"Cancel";
			this->cancel_sale_btn->UseVisualStyleBackColor = true;
			this->cancel_sale_btn->Click += gcnew System::EventHandler(this, &SalesUI::cancel_sale_btn_Click);
			// 
			// sell_btn
			// 
			this->sell_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->sell_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SpringGreen;
			this->sell_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aquamarine;
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
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(289, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(719, 629);
			this->panel3->TabIndex = 2;
			// 
			// SalesUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1024, 768);
			this->MinimumSize = System::Drawing::Size(1024, 768);
			this->Name = L"SalesUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SalesUI";
			this->Load += gcnew System::EventHandler(this, &SalesUI::SalesUI_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SalesUI_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void cancel_sale_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void add_discount_btn_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
