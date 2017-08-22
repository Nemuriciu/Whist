#pragma once
#include "GameForm.h" 

namespace Whist {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckedListBox^  numPlayers;




	protected:

	private: System::ComponentModel::Container ^components;	

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
			this->numPlayers = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// numPlayers
			// 
			this->numPlayers->BackColor = System::Drawing::Color::LightBlue;
			this->numPlayers->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numPlayers->CheckOnClick = true;
			this->numPlayers->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numPlayers->FormattingEnabled = true;
			this->numPlayers->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"3", L"4", L"5", L"6" });
			this->numPlayers->Location = System::Drawing::Point(298, 257);
			this->numPlayers->Name = L"numPlayers";
			this->numPlayers->Size = System::Drawing::Size(38, 88);
			this->numPlayers->TabIndex = 3;
			this->numPlayers->Visible = false;
			this->numPlayers->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &MenuForm::ItemCheck);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Goldenrod;
			this->button1->Location = System::Drawing::Point(72, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(240, 150);
			this->button1->TabIndex = 0;
			this->button1->Text = L"NEW GAME";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuForm::NewGame_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Goldenrod;
			this->button2->Location = System::Drawing::Point(79, 376);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(240, 142);
			this->button2->TabIndex = 1;
			this->button2->Text = L"EXIT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MenuForm::ExitGame);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Goldenrod;
			this->label1->Location = System::Drawing::Point(72, 223);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 150);
			this->label1->TabIndex = 2;
			this->label1->Text = L"PLAYERS";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MenuForm::setPlayerNum);
			// 
			// MenuForm
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->numPlayers);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Transparent;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WHIST";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void NewGame_Click(System::Object^  sender, System::EventArgs^  e) {
		GameForm ^game = gcnew GameForm();

		if (numPlayers->SelectedItems->Count != 0)
		{ 
			String ^str = numPlayers->SelectedItem->ToString();
			game->main->num_pl = Convert::ToUInt64(str);

			this->Hide();
			game->ShowDialog();
			this->Close();
		}

	}
	private: System::Void ExitGame(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void setPlayerNum(System::Object^  sender, System::EventArgs^  e) {
		if (!numPlayers->Visible)
			numPlayers->Visible = true;
		else
			numPlayers->Visible = false;
	}
	private: System::Void ItemCheck(System::Object^  sender, System::Windows::Forms::ItemCheckEventArgs^  e) {
		for (size_t i = 0; i < numPlayers->Items->Count; i++)
		{
			if (i != e->Index) numPlayers->SetItemChecked(i, false);
		}
	}
};
}
