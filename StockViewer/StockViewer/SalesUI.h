#pragma once
#include "UsersManagementUI.h"
#include "TypeConv.h"

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
            database_data = gcnew DataBase("datasource=localhost; username=root; password=""; database=svlocal;");
            total_ammount = 0.0;
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
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ add_item_btn;
    private: System::Windows::Forms::Panel^ panel6;
    private: System::Windows::Forms::Label^ total_lbl;
    private: System::Windows::Forms::Label^ taxes_lbl;
    private: System::Windows::Forms::Label^ subt_lbl;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ code_in;
    private: System::ComponentModel::Container ^components;
    private: DataBase^ database_data;
    private: System::Windows::Forms::Label^ client_lbl;
    private: System::Windows::Forms::Label^ label6;
    private: float total_ammount;

#pragma region 

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
            this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->client_lbl = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->total_lbl = (gcnew System::Windows::Forms::Label());
            this->taxes_lbl = (gcnew System::Windows::Forms::Label());
            this->subt_lbl = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->code_in = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->add_item_btn = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel6->SuspendLayout();
            this->panel5->SuspendLayout();
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
            this->add_observation_btn->Click += gcnew System::EventHandler(this, &SalesUI::add_observation_btn_Click);
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
            this->restart_sale_btn->Click += gcnew System::EventHandler(this, &SalesUI::restart_sale_btn_Click);
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
            this->search_client_btn->Click += gcnew System::EventHandler(this, &SalesUI::search_client_btn_Click);
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
            this->panel2->Location = System::Drawing::Point(289, 635);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(719, 94);
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
            this->preview_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->preview_btn->Location = System::Drawing::Point(283, 13);
            this->preview_btn->Name = L"preview_btn";
            this->preview_btn->Size = System::Drawing::Size(175, 70);
            this->preview_btn->TabIndex = 5;
            this->preview_btn->Text = L"Preview";
            this->preview_btn->UseVisualStyleBackColor = true;
            this->preview_btn->Click += gcnew System::EventHandler(this, &SalesUI::preview_btn_Click);
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
            this->cancel_sale_btn->Location = System::Drawing::Point(16, 13);
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
            this->sell_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->sell_btn->Location = System::Drawing::Point(536, 13);
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
            this->panel3->Controls->Add(this->checkedListBox1);
            this->panel3->Controls->Add(this->panel6);
            this->panel3->Controls->Add(this->panel5);
            this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel3->Location = System::Drawing::Point(289, 0);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(719, 635);
            this->panel3->TabIndex = 2;
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->panel6->Controls->Add(this->client_lbl);
            this->panel6->Controls->Add(this->label6);
            this->panel6->Controls->Add(this->total_lbl);
            this->panel6->Controls->Add(this->taxes_lbl);
            this->panel6->Controls->Add(this->subt_lbl);
            this->panel6->Controls->Add(this->label3);
            this->panel6->Controls->Add(this->label2);
            this->panel6->Controls->Add(this->label1);
            this->panel6->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->panel6->Location = System::Drawing::Point(0, 558);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(719, 77);
            this->panel6->TabIndex = 2;
            // 
            // client_lbl
            // 
            this->client_lbl->AutoSize = true;
            this->client_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->client_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->client_lbl->Location = System::Drawing::Point(92, 3);
            this->client_lbl->Name = L"client_lbl";
            this->client_lbl->Size = System::Drawing::Size(0, 24);
            this->client_lbl->TabIndex = 7;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->label6->Location = System::Drawing::Point(6, 3);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(80, 24);
            this->label6->TabIndex = 6;
            this->label6->Text = L"Client: ";
            // 
            // total_lbl
            // 
            this->total_lbl->AutoSize = true;
            this->total_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->total_lbl->ForeColor = System::Drawing::SystemColors::ControlDark;
            this->total_lbl->Location = System::Drawing::Point(603, 42);
            this->total_lbl->Name = L"total_lbl";
            this->total_lbl->Size = System::Drawing::Size(26, 30);
            this->total_lbl->TabIndex = 5;
            this->total_lbl->Text = L"0";
            // 
            // taxes_lbl
            // 
            this->taxes_lbl->AutoSize = true;
            this->taxes_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->taxes_lbl->ForeColor = System::Drawing::SystemColors::ControlDark;
            this->taxes_lbl->Location = System::Drawing::Point(410, 40);
            this->taxes_lbl->Name = L"taxes_lbl";
            this->taxes_lbl->Size = System::Drawing::Size(26, 30);
            this->taxes_lbl->TabIndex = 4;
            this->taxes_lbl->Text = L"0";
            // 
            // subt_lbl
            // 
            this->subt_lbl->AutoSize = true;
            this->subt_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->subt_lbl->ForeColor = System::Drawing::SystemColors::ControlDark;
            this->subt_lbl->Location = System::Drawing::Point(234, 42);
            this->subt_lbl->Name = L"subt_lbl";
            this->subt_lbl->Size = System::Drawing::Size(26, 30);
            this->subt_lbl->TabIndex = 3;
            this->subt_lbl->Text = L"0";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->label3->Location = System::Drawing::Point(340, 45);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(64, 24);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Taxes";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->label2->Location = System::Drawing::Point(142, 45);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(94, 24);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Subtotal";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->label1->Location = System::Drawing::Point(543, 45);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(58, 24);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Total";
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->panel5->Controls->Add(this->label7);
            this->panel5->Controls->Add(this->code_in);
            this->panel5->Controls->Add(this->button1);
            this->panel5->Controls->Add(this->add_item_btn);
            this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel5->Location = System::Drawing::Point(0, 0);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(719, 88);
            this->panel5->TabIndex = 0;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->label7->Location = System::Drawing::Point(30, 37);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(72, 24);
            this->label7->TabIndex = 8;
            this->label7->Text = L"CODE";
            // 
            // code_in
            // 
            this->code_in->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->code_in->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->code_in->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->code_in->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->code_in->Location = System::Drawing::Point(131, 29);
            this->code_in->Name = L"code_in";
            this->code_in->Size = System::Drawing::Size(327, 37);
            this->code_in->TabIndex = 7;
            // 
            // button1
            // 
            this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
            this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->button1->Location = System::Drawing::Point(527, 5);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(82, 77);
            this->button1->TabIndex = 6;
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &SalesUI::button1_Click);
            // 
            // add_item_btn
            // 
            this->add_item_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_item_btn.BackgroundImage")));
            this->add_item_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->add_item_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->add_item_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SpringGreen;
            this->add_item_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aquamarine;
            this->add_item_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->add_item_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->add_item_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->add_item_btn->Location = System::Drawing::Point(628, 8);
            this->add_item_btn->Name = L"add_item_btn";
            this->add_item_btn->Size = System::Drawing::Size(82, 70);
            this->add_item_btn->TabIndex = 5;
            this->add_item_btn->UseVisualStyleBackColor = true;
            this->add_item_btn->Click += gcnew System::EventHandler(this, &SalesUI::add_item_btn_Click);
            //
            // checkedListBox1
            // 
            this->checkedListBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->checkedListBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->checkedListBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->checkedListBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->checkedListBox1->FormattingEnabled = true;
            this->checkedListBox1->Location = System::Drawing::Point(0, 88);
            this->checkedListBox1->Name = L"checkedListBox1";
            this->checkedListBox1->Size = System::Drawing::Size(719, 470);
            this->checkedListBox1->TabIndex = 3;
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
            this->panel3->ResumeLayout(false);
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void SalesUI_Load(System::Object^ sender, System::EventArgs^ e) {
        this->total_lbl->Text = this->total_ammount.ToString();
	}

    private: System::Void cancel_sale_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	    this->Close();
    } 

    private: System::Void add_discount_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void add_item_btn_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ item;
        if (this->code_in->Text != "") {
            database_data->open_session();
            DataTable^ table = database_data->get_data(get_query_products(this->code_in->Text));
            database_data->close_session();
            try {
               item = table->Rows[0]->ItemArray[6]->ToString();
               this->checkedListBox1->Items->Add(item, true);
               total_ammount += TypeConversions::StringToFloat(table->Rows[0]->ItemArray[6]->ToString());
            }
            catch (Exception^ e) {
                MessageBox::Show(e->Message);
            }
        }
        this->total_lbl->Text = Convert::ToString(total_ammount);  
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            if (this->checkedListBox1->SelectedItem) {
                total_ammount -= TypeConversions::StringToFloat(this->checkedListBox1->SelectedItem->ToString());
                this->checkedListBox1->Items->Remove(this->checkedListBox1->SelectedItem);
                this->total_lbl->Text = Convert::ToString(total_ammount);
            }

        }
        catch(Exception^ e) {
            System::Windows::Forms::MessageBox::Show(e->Message);
        }
    }

    private: System::Void search_client_btn_Click(System::Object^ sender, System::EventArgs^ e) {

    }

    private: System::Void restart_sale_btn_Click(System::Object^ sender, System::EventArgs^ e) {
        this->client_lbl->ResetText();
        this->total_lbl->ResetText();
        this->taxes_lbl->ResetText();
        this->subt_lbl->ResetText();
        this->total_ammount = 0;
        this->checkedListBox1->Items->Clear();
    }

    private: System::Void add_observation_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void preview_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
