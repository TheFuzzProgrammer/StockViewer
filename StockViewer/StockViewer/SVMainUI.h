#pragma once
#include "SalesUI.h"
#include "AdvancedUI.h"
#include "ProductsUI.h"
#include "QuickCheck.h"

using namespace std;

namespace StockViewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class SVMainUI : public System::Windows::Forms::Form
	{
	public:
		SVMainUI(void)
		{
			InitializeComponent();
			
		}

	protected:
		~SVMainUI()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:

	private: System::Windows::Forms::Panel^ container_panel;
	private: bool on_move = false;
	private: System::Windows::Forms::Panel^ btn_container;
	private: System::Windows::Forms::Button^ advanced_btn;
	private: System::Windows::Forms::Button^ search_product_btn;
	private: System::Windows::Forms::Button^ product_mng_btn;
	private: System::Windows::Forms::Button^ new_sale_btn;
	private: System::Windows::Forms::Panel^ uplimiter_panel;
	private: System::Windows::Forms::Panel^ info_panel;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ cancel_btn;

	private:
		System::ComponentModel::Container ^components;

#pragma region

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SVMainUI::typeid));
			this->container_panel = (gcnew System::Windows::Forms::Panel());
			this->info_panel = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->btn_container = (gcnew System::Windows::Forms::Panel());
			this->advanced_btn = (gcnew System::Windows::Forms::Button());
			this->search_product_btn = (gcnew System::Windows::Forms::Button());
			this->product_mng_btn = (gcnew System::Windows::Forms::Button());
			this->new_sale_btn = (gcnew System::Windows::Forms::Button());
			this->uplimiter_panel = (gcnew System::Windows::Forms::Panel());
			this->container_panel->SuspendLayout();
			this->panel2->SuspendLayout();
			this->btn_container->SuspendLayout();
			this->SuspendLayout();
			// 
			// container_panel
			// 
			this->container_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->container_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->container_panel->Controls->Add(this->info_panel);
			this->container_panel->Controls->Add(this->panel2);
			this->container_panel->Controls->Add(this->btn_container);
			this->container_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->container_panel->Location = System::Drawing::Point(0, 0);
			this->container_panel->Name = L"container_panel";
			this->container_panel->Size = System::Drawing::Size(1008, 729);
			this->container_panel->TabIndex = 2;
			// 
			// info_panel
			// 
			this->info_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->info_panel->Location = System::Drawing::Point(289, 0);
			this->info_panel->Name = L"info_panel";
			this->info_panel->Size = System::Drawing::Size(719, 629);
			this->info_panel->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel2->Controls->Add(this->cancel_btn);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(289, 629);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(719, 100);
			this->panel2->TabIndex = 4;
			// 
			// cancel_btn
			// 
			this->cancel_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->cancel_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->cancel_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->cancel_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cancel_btn->Location = System::Drawing::Point(532, 18);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(175, 70);
			this->cancel_btn->TabIndex = 4;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = true;
			this->cancel_btn->Visible = false;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &SVMainUI::cancel_sale_btn_Click);
			// 
			// btn_container
			// 
			this->btn_container->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btn_container->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_container->Controls->Add(this->advanced_btn);
			this->btn_container->Controls->Add(this->search_product_btn);
			this->btn_container->Controls->Add(this->product_mng_btn);
			this->btn_container->Controls->Add(this->new_sale_btn);
			this->btn_container->Controls->Add(this->uplimiter_panel);
			this->btn_container->Dock = System::Windows::Forms::DockStyle::Left;
			this->btn_container->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_container->Location = System::Drawing::Point(0, 0);
			this->btn_container->Name = L"btn_container";
			this->btn_container->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn_container->Size = System::Drawing::Size(289, 729);
			this->btn_container->TabIndex = 0;
			// 
			// advanced_btn
			// 
			this->advanced_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->advanced_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"advanced_btn.BackgroundImage")));
			this->advanced_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->advanced_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->advanced_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->advanced_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->advanced_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->advanced_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->advanced_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->advanced_btn->Location = System::Drawing::Point(0, 436);
			this->advanced_btn->Name = L"advanced_btn";
			this->advanced_btn->Size = System::Drawing::Size(289, 70);
			this->advanced_btn->TabIndex = 4;
			this->advanced_btn->Text = L" Advanced";
			this->advanced_btn->UseVisualStyleBackColor = false;
			this->advanced_btn->Click += gcnew System::EventHandler(this, &SVMainUI::advanced_btn_Click);
			// 
			// search_product_btn
			// 
			this->search_product_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->search_product_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_product_btn.BackgroundImage")));
			this->search_product_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->search_product_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->search_product_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->search_product_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->search_product_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->search_product_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_product_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_product_btn->Location = System::Drawing::Point(0, 366);
			this->search_product_btn->Name = L"search_product_btn";
			this->search_product_btn->Size = System::Drawing::Size(289, 70);
			this->search_product_btn->TabIndex = 3;
			this->search_product_btn->Text = L"Quick stock check";
			this->search_product_btn->UseVisualStyleBackColor = false;
			this->search_product_btn->Click += gcnew System::EventHandler(this, &SVMainUI::search_product_btn_Click);
			// 
			// product_mng_btn
			// 
			this->product_mng_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->product_mng_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"product_mng_btn.BackgroundImage")));
			this->product_mng_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->product_mng_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->product_mng_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->product_mng_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->product_mng_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->product_mng_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->product_mng_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->product_mng_btn->Location = System::Drawing::Point(0, 296);
			this->product_mng_btn->Name = L"product_mng_btn";
			this->product_mng_btn->Size = System::Drawing::Size(289, 70);
			this->product_mng_btn->TabIndex = 2;
			this->product_mng_btn->Text = L" Products manager";
			this->product_mng_btn->UseVisualStyleBackColor = false;
			this->product_mng_btn->Click += gcnew System::EventHandler(this, &SVMainUI::product_mng_btn_Click);
			// 
			// new_sale_btn
			// 
			this->new_sale_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->new_sale_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"new_sale_btn.BackgroundImage")));
			this->new_sale_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->new_sale_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->new_sale_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->new_sale_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->new_sale_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->new_sale_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->new_sale_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new_sale_btn->Location = System::Drawing::Point(0, 226);
			this->new_sale_btn->Name = L"new_sale_btn";
			this->new_sale_btn->Size = System::Drawing::Size(289, 70);
			this->new_sale_btn->TabIndex = 1;
			this->new_sale_btn->Text = L"New sale";
			this->new_sale_btn->UseVisualStyleBackColor = false;
			this->new_sale_btn->Click += gcnew System::EventHandler(this, &SVMainUI::new_sale_btn_Click);
			// 
			// uplimiter_panel
			// 
			this->uplimiter_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->uplimiter_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->uplimiter_panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->uplimiter_panel->Location = System::Drawing::Point(0, 0);
			this->uplimiter_panel->Name = L"uplimiter_panel";
			this->uplimiter_panel->Size = System::Drawing::Size(289, 226);
			this->uplimiter_panel->TabIndex = 0;
			// 
			// SVMainUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->container_panel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1024, 768);
			this->MinimumSize = System::Drawing::Size(1024, 768);
			this->Name = L"SVMainUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ControlStock";
			this->Load += gcnew System::EventHandler(this, &SVMainUI::SVMainUI_Load);
			this->container_panel->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->btn_container->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: void check_admin(bool _is_admin) {
		this->advanced_btn->Enabled = _is_admin;
	}

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
	private: System::Void SVMainUI_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void new_sale_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		SalesUI^ sales_dialog = gcnew StockViewer::SalesUI();
		this->Visible = false;
		sales_dialog->ShowDialog();
		this->Visible = true;
	}
	private: System::Void advanced_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		AdvancedUI^ advanced_dialog = gcnew StockViewer::AdvancedUI();
		this->Visible = false;
		advanced_dialog->ShowDialog();
		this->Visible = true;
	}
	private: System::Void product_mng_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		//PMDIALOG
		this->cancel_btn->Visible = true;
		ProductsUI^ products_dialog = gcnew ProductsUI();
		open_info_panel(products_dialog);
}
	private: System::Void cancel_sale_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->info_panel->Controls->RemoveAt(0);
		this->cancel_btn->Visible = false;
}
	private: System::Void search_product_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		QuickCheck^ qc_dialog = gcnew QuickCheck();
		qc_dialog->ShowDialog();
}
};
}