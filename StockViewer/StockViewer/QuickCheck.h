#pragma once
#include "DataBase.h"
#include "database_manager.h"

namespace StockViewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class QuickCheck : public System::Windows::Forms::Form
	{
	public:
		QuickCheck(void)
		{
			InitializeComponent();
			database_data = gcnew DataBase("datasource=localhost; username=root; password=""; database=svlocal;");
		}
	protected:

		~QuickCheck()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ tittle_label;
	private: System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ result_panel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ code_input;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ qk_srch_btn;
	private: System::Windows::Forms::Label^ result_lbl;
	private: DataBase^ database_data;

#pragma region

	void InitializeComponent(void)
		{
		this->panel2 = (gcnew System::Windows::Forms::Panel());
		this->tittle_label = (gcnew System::Windows::Forms::Label());
		this->panel1 = (gcnew System::Windows::Forms::Panel());
		this->result_panel = (gcnew System::Windows::Forms::Panel());
		this->result_lbl = (gcnew System::Windows::Forms::Label());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->code_input = (gcnew System::Windows::Forms::TextBox());
		this->panel3 = (gcnew System::Windows::Forms::Panel());
		this->qk_srch_btn = (gcnew System::Windows::Forms::Button());
		this->panel2->SuspendLayout();
		this->panel1->SuspendLayout();
		this->result_panel->SuspendLayout();
		this->panel3->SuspendLayout();
		this->SuspendLayout();
		// 
		// panel2
		// 
		this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
			static_cast<System::Int32>(static_cast<System::Byte>(30)));
		this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->panel2->Controls->Add(this->tittle_label);
		this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
		this->panel2->Location = System::Drawing::Point(0, 0);
		this->panel2->Name = L"panel2";
		this->panel2->Size = System::Drawing::Size(344, 116);
		this->panel2->TabIndex = 16;
		// 
		// tittle_label
		// 
		this->tittle_label->AutoSize = true;
		this->tittle_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->tittle_label->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
		this->tittle_label->Location = System::Drawing::Point(103, 53);
		this->tittle_label->Name = L"tittle_label";
		this->tittle_label->Size = System::Drawing::Size(144, 24);
		this->tittle_label->TabIndex = 10;
		this->tittle_label->Text = L"Quick search";
		// 
		// panel1
		// 
		this->panel1->Controls->Add(this->result_panel);
		this->panel1->Controls->Add(this->label1);
		this->panel1->Controls->Add(this->code_input);
		this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
		this->panel1->Location = System::Drawing::Point(0, 116);
		this->panel1->Name = L"panel1";
		this->panel1->Size = System::Drawing::Size(344, 315);
		this->panel1->TabIndex = 17;
		// 
		// result_panel
		// 
		this->result_panel->Controls->Add(this->result_lbl);
		this->result_panel->Dock = System::Windows::Forms::DockStyle::Bottom;
		this->result_panel->Location = System::Drawing::Point(0, 95);
		this->result_panel->Name = L"result_panel";
		this->result_panel->Size = System::Drawing::Size(344, 220);
		this->result_panel->TabIndex = 16;
		// 
		// result_lbl
		// 
		this->result_lbl->AutoSize = true;
		this->result_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->result_lbl->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
		this->result_lbl->Location = System::Drawing::Point(83, 19);
		this->result_lbl->Name = L"result_lbl";
		this->result_lbl->Size = System::Drawing::Size(0, 22);
		this->result_lbl->TabIndex = 16;
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
		this->label1->Location = System::Drawing::Point(83, 19);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(142, 22);
		this->label1->TabIndex = 15;
		this->label1->Text = L"Product code:";
		// 
		// code_input
		// 
		this->code_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->code_input->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->code_input->Location = System::Drawing::Point(85, 51);
		this->code_input->Name = L"code_input";
		this->code_input->Size = System::Drawing::Size(175, 24);
		this->code_input->TabIndex = 14;
		this->code_input->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &QuickCheck::code_input_KeyDown);
		// 
		// panel3
		// 
		this->panel3->Controls->Add(this->qk_srch_btn);
		this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
		this->panel3->Location = System::Drawing::Point(0, 431);
		this->panel3->Name = L"panel3";
		this->panel3->Size = System::Drawing::Size(344, 96);
		this->panel3->TabIndex = 18;
		// 
		// qk_srch_btn
		// 
		this->qk_srch_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
			static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
		this->qk_srch_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SpringGreen;
		this->qk_srch_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aquamarine;
		this->qk_srch_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->qk_srch_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->qk_srch_btn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
		this->qk_srch_btn->Location = System::Drawing::Point(121, 29);
		this->qk_srch_btn->Name = L"qk_srch_btn";
		this->qk_srch_btn->Size = System::Drawing::Size(102, 38);
		this->qk_srch_btn->TabIndex = 16;
		this->qk_srch_btn->Text = L"Search!";
		this->qk_srch_btn->UseVisualStyleBackColor = true;
		this->qk_srch_btn->Click += gcnew System::EventHandler(this, &QuickCheck::qk_srch_btn_Click);
		// 
		// QuickCheck
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
			static_cast<System::Int32>(static_cast<System::Byte>(30)));
		this->ClientSize = System::Drawing::Size(344, 527);
		this->Controls->Add(this->panel3);
		this->Controls->Add(this->panel1);
		this->Controls->Add(this->panel2);
		this->MaximumSize = System::Drawing::Size(360, 566);
		this->MinimizeBox = false;
		this->MinimumSize = System::Drawing::Size(360, 566);
		this->Name = L"QuickCheck";
		this->Opacity = 0.99;
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L"QuickCheck";
		this->panel2->ResumeLayout(false);
		this->panel2->PerformLayout();
		this->panel1->ResumeLayout(false);
		this->panel1->PerformLayout();
		this->result_panel->ResumeLayout(false);
		this->result_panel->PerformLayout();
		this->panel3->ResumeLayout(false);
		this->ResumeLayout(false);

	}
#pragma endregion
	/*String^ get_query_products(String^ _code) {
		String^ query = "select * from svlocal.products where code = '" + _code + "'";
		return query;
	}*/
	private: DataTable^ quick_check() {
		if (this->code_input->Text != "") {
			this->database_data->open_session();
			DataTable^ data_obtd = this->database_data->get_data(get_query_products(this->code_input->Text));
			this->database_data->close_session();
			return data_obtd;
		}
		else {
			MessageBox::Show("Code needed for search");
			return gcnew DataTable();
		}
	}
	private: System::Void id_input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->code_input->Text != "") {
			this->qk_srch_btn->Enabled = true;
		}
		else {
			this->qk_srch_btn->Enabled = false;
		}		
	}
	private: void show_result() {
		DataTable^ d_ndd = this->quick_check();
		try {
			this->result_lbl->Text = d_ndd->Rows[0]->ItemArray[1]->ToString() + "\n\n" +
				"Stock: " + d_ndd->Rows[0]->ItemArray[4]->ToString();
		}
		catch (Exception^ e) {
			MessageBox::Show("Not found \n" + e->Message);
		}
	}
	private: System::Void qk_srch_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		show_result();
	}
	private: System::Void code_input_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == 13) {
			show_result();
		}
		else {
		}
	}
};
}
