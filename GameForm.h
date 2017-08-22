#pragma once

namespace Whist {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GameForm
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  player1_0;
	private: System::Windows::Forms::PictureBox^  player1_2;

	private: System::Windows::Forms::PictureBox^  player1_1;
	private: System::Windows::Forms::PictureBox^  player1_3;
	private: System::Windows::Forms::PictureBox^  player1_4;
	private: System::Windows::Forms::PictureBox^  player1_5;
	private: System::Windows::Forms::PictureBox^  player1_6;
	private: System::Windows::Forms::PictureBox^  player1_7;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GameForm::typeid));
			this->player1_0 = (gcnew System::Windows::Forms::PictureBox());
			this->player1_2 = (gcnew System::Windows::Forms::PictureBox());
			this->player1_1 = (gcnew System::Windows::Forms::PictureBox());
			this->player1_3 = (gcnew System::Windows::Forms::PictureBox());
			this->player1_4 = (gcnew System::Windows::Forms::PictureBox());
			this->player1_5 = (gcnew System::Windows::Forms::PictureBox());
			this->player1_6 = (gcnew System::Windows::Forms::PictureBox());
			this->player1_7 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_7))->BeginInit();
			this->SuspendLayout();
			// 
			// player1_0
			// 
			this->player1_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player1_0.BackgroundImage")));
			this->player1_0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_0->Location = System::Drawing::Point(230, 600);
			this->player1_0->Name = L"player1_0";
			this->player1_0->Size = System::Drawing::Size(100, 150);
			this->player1_0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_0->TabIndex = 0;
			this->player1_0->TabStop = false;
			// 
			// player1_2
			// 
			this->player1_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player1_2.BackgroundImage")));
			this->player1_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_2->Location = System::Drawing::Point(310, 600);
			this->player1_2->Name = L"player1_2";
			this->player1_2->Size = System::Drawing::Size(100, 150);
			this->player1_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_2->TabIndex = 1;
			this->player1_2->TabStop = false;
			// 
			// player1_1
			// 
			this->player1_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player1_1.BackgroundImage")));
			this->player1_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_1->Location = System::Drawing::Point(270, 600);
			this->player1_1->Name = L"player1_1";
			this->player1_1->Size = System::Drawing::Size(100, 150);
			this->player1_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_1->TabIndex = 2;
			this->player1_1->TabStop = false;
			// 
			// player1_3
			// 
			this->player1_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player1_3.BackgroundImage")));
			this->player1_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_3->Location = System::Drawing::Point(350, 600);
			this->player1_3->Name = L"player1_3";
			this->player1_3->Size = System::Drawing::Size(100, 150);
			this->player1_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_3->TabIndex = 3;
			this->player1_3->TabStop = false;
			this->player1_3->Click += gcnew System::EventHandler(this, &GameForm::player1_3_Click);
			// 
			// player1_4
			// 
			this->player1_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player1_4.BackgroundImage")));
			this->player1_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_4->Location = System::Drawing::Point(390, 600);
			this->player1_4->Name = L"player1_4";
			this->player1_4->Size = System::Drawing::Size(100, 150);
			this->player1_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_4->TabIndex = 4;
			this->player1_4->TabStop = false;
			// 
			// player1_5
			// 
			this->player1_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player1_5.BackgroundImage")));
			this->player1_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_5->Location = System::Drawing::Point(430, 600);
			this->player1_5->Name = L"player1_5";
			this->player1_5->Size = System::Drawing::Size(100, 150);
			this->player1_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_5->TabIndex = 5;
			this->player1_5->TabStop = false;
			// 
			// player1_6
			// 
			this->player1_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player1_6.BackgroundImage")));
			this->player1_6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_6->Location = System::Drawing::Point(470, 600);
			this->player1_6->Name = L"player1_6";
			this->player1_6->Size = System::Drawing::Size(100, 150);
			this->player1_6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_6->TabIndex = 6;
			this->player1_6->TabStop = false;
			// 
			// player1_7
			// 
			this->player1_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player1_7.BackgroundImage")));
			this->player1_7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_7->Location = System::Drawing::Point(510, 600);
			this->player1_7->Name = L"player1_7";
			this->player1_7->Size = System::Drawing::Size(100, 150);
			this->player1_7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_7->TabIndex = 7;
			this->player1_7->TabStop = false;
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 762);
			this->Controls->Add(this->player1_7);
			this->Controls->Add(this->player1_6);
			this->Controls->Add(this->player1_5);
			this->Controls->Add(this->player1_4);
			this->Controls->Add(this->player1_3);
			this->Controls->Add(this->player1_2);
			this->Controls->Add(this->player1_1);
			this->Controls->Add(this->player1_0);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"GameForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WHIST";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_7))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void player1_3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
