#pragma once
#include "Main.h"
#include "Table.h"
#include <time.h>

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
		static Main *main;
		static int startingPlayer = 1;
		static int currentPlayer = 1;
		int idx = 1;
		
	public:
		Button^  openTable;
		Button^  playCard;
		PictureBox^  selectedCard;
		Table ^table;

	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  gameSelected;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  playerName;
	private: System::Windows::Forms::ColumnHeader^  playerScore;
	private: System::Windows::Forms::ColumnHeader^  empty;
	public: System::Windows::Forms::Button^  openScore;
	private: System::Windows::Forms::Label^  gameInfo;

	public:
		GameForm(void)
		{
			main = new Main();
			table = gcnew Table();
			InitializeComponent();
			setCardsImages();
		}

	protected:
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  player1_0;
	private: System::Windows::Forms::PictureBox^  player1_1;
	private: System::Windows::Forms::PictureBox^  player1_2;
	private: System::Windows::Forms::PictureBox^  player1_3;
	private: System::Windows::Forms::PictureBox^  player1_4;
	private: System::Windows::Forms::PictureBox^  player1_5;
	private: System::Windows::Forms::PictureBox^  player1_6;
	private: System::Windows::Forms::PictureBox^  player1_7;

	private: System::Windows::Forms::PictureBox^  player2_7;
	private: System::Windows::Forms::PictureBox^  player2_6;
	private: System::Windows::Forms::PictureBox^  player2_5;
	private: System::Windows::Forms::PictureBox^  player2_4;
	private: System::Windows::Forms::PictureBox^  player2_3;
	private: System::Windows::Forms::PictureBox^  player2_2;
	private: System::Windows::Forms::PictureBox^  player2_1;
	private: System::Windows::Forms::PictureBox^  player2_0;
	
	private: System::Windows::Forms::PictureBox^  player3_0;
	private: System::Windows::Forms::PictureBox^  player3_1;
	private: System::Windows::Forms::PictureBox^  player3_2;
	private: System::Windows::Forms::PictureBox^  player3_3;
	private: System::Windows::Forms::PictureBox^  player3_4;
	private: System::Windows::Forms::PictureBox^  player3_5;
	private: System::Windows::Forms::PictureBox^  player3_6;
	private: System::Windows::Forms::PictureBox^  player3_7;

	private: System::Windows::Forms::PictureBox^  player4_7;
	private: System::Windows::Forms::PictureBox^  player4_6;
	private: System::Windows::Forms::PictureBox^  player4_5;
	private: System::Windows::Forms::PictureBox^  player4_4;
	private: System::Windows::Forms::PictureBox^  player4_3;
	private: System::Windows::Forms::PictureBox^  player4_2;
	private: System::Windows::Forms::PictureBox^  player4_1;
	private: System::Windows::Forms::PictureBox^  player4_0;

	private: System::Windows::Forms::PictureBox^  player5_7;
	private: System::Windows::Forms::PictureBox^  player5_6;
	private: System::Windows::Forms::PictureBox^  player5_5;
	private: System::Windows::Forms::PictureBox^  player5_4;
	private: System::Windows::Forms::PictureBox^  player5_3;
	private: System::Windows::Forms::PictureBox^  player5_2;
	private: System::Windows::Forms::PictureBox^  player5_1;
	private: System::Windows::Forms::PictureBox^  player5_0;

	private: System::Windows::Forms::PictureBox^  player6_7;
	private: System::Windows::Forms::PictureBox^  player6_6;
	private: System::Windows::Forms::PictureBox^  player6_5;
	private: System::Windows::Forms::PictureBox^  player6_4;
	private: System::Windows::Forms::PictureBox^  player6_3;
	private: System::Windows::Forms::PictureBox^  player6_2;
	private: System::Windows::Forms::PictureBox^  player6_1;
	private: System::Windows::Forms::PictureBox^  player6_0;	

	private: System::Windows::Forms::Label^  player1_name;
	private: System::Windows::Forms::Label^  player2_name;
	private: System::Windows::Forms::Label^  player3_name;
	private: System::Windows::Forms::Label^  player4_name;
	private: System::Windows::Forms::Label^  player5_name;
	private: System::Windows::Forms::Label^  player6_name;

	private: System::Windows::Forms::PictureBox^  player1_table;
	private: System::Windows::Forms::PictureBox^  player2_table;
	private: System::Windows::Forms::PictureBox^  player3_table;
	private: System::Windows::Forms::PictureBox^  player4_table;
	private: System::Windows::Forms::PictureBox^  player5_table;
	private: System::Windows::Forms::PictureBox^  player6_table;
	private: System::ComponentModel::IContainer^  components;



#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GameForm::typeid));
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(3) {
				L"player1_row",
					L"Player1", L"0"
			}, -1, System::Drawing::Color::Empty, System::Drawing::Color::White, nullptr));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(3) {
				L"player2_row",
					L"Player2", L"0"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(3) {
				L"player3_row",
					L"Player3", L"0"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(3) {
				L"player4_row",
					L"Player4", L"0"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(3) {
				L"player5_row",
					L"Player5", L"0"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(3) {
				L"player6_row",
					L"Player6", L"0"
			}, -1));

			this->player1_0 = (gcnew System::Windows::Forms::PictureBox());
			this->player1_2 = (gcnew System::Windows::Forms::PictureBox());
			this->player1_1 = (gcnew System::Windows::Forms::PictureBox());
			this->player1_3 = (gcnew System::Windows::Forms::PictureBox());
			this->player1_4 = (gcnew System::Windows::Forms::PictureBox());
			this->player1_5 = (gcnew System::Windows::Forms::PictureBox());
			this->player1_6 = (gcnew System::Windows::Forms::PictureBox());
			this->player1_7 = (gcnew System::Windows::Forms::PictureBox());
			this->player3_0 = (gcnew System::Windows::Forms::PictureBox());
			this->player3_1 = (gcnew System::Windows::Forms::PictureBox());
			this->player3_2 = (gcnew System::Windows::Forms::PictureBox());
			this->player3_3 = (gcnew System::Windows::Forms::PictureBox());
			this->player3_4 = (gcnew System::Windows::Forms::PictureBox());
			this->player3_5 = (gcnew System::Windows::Forms::PictureBox());
			this->player3_6 = (gcnew System::Windows::Forms::PictureBox());
			this->player3_7 = (gcnew System::Windows::Forms::PictureBox());
			this->player5_7 = (gcnew System::Windows::Forms::PictureBox());
			this->player5_6 = (gcnew System::Windows::Forms::PictureBox());
			this->player5_5 = (gcnew System::Windows::Forms::PictureBox());
			this->player5_4 = (gcnew System::Windows::Forms::PictureBox());
			this->player5_3 = (gcnew System::Windows::Forms::PictureBox());
			this->player5_2 = (gcnew System::Windows::Forms::PictureBox());
			this->player5_1 = (gcnew System::Windows::Forms::PictureBox());
			this->player5_0 = (gcnew System::Windows::Forms::PictureBox());
			this->player4_7 = (gcnew System::Windows::Forms::PictureBox());
			this->player4_6 = (gcnew System::Windows::Forms::PictureBox());
			this->player4_5 = (gcnew System::Windows::Forms::PictureBox());
			this->player4_4 = (gcnew System::Windows::Forms::PictureBox());
			this->player4_3 = (gcnew System::Windows::Forms::PictureBox());
			this->player4_2 = (gcnew System::Windows::Forms::PictureBox());
			this->player4_1 = (gcnew System::Windows::Forms::PictureBox());
			this->player4_0 = (gcnew System::Windows::Forms::PictureBox());
			this->player6_7 = (gcnew System::Windows::Forms::PictureBox());
			this->player6_6 = (gcnew System::Windows::Forms::PictureBox());
			this->player6_5 = (gcnew System::Windows::Forms::PictureBox());
			this->player6_4 = (gcnew System::Windows::Forms::PictureBox());
			this->player6_3 = (gcnew System::Windows::Forms::PictureBox());
			this->player6_2 = (gcnew System::Windows::Forms::PictureBox());
			this->player6_1 = (gcnew System::Windows::Forms::PictureBox());
			this->player6_0 = (gcnew System::Windows::Forms::PictureBox());
			this->player2_7 = (gcnew System::Windows::Forms::PictureBox());
			this->player2_6 = (gcnew System::Windows::Forms::PictureBox());
			this->player2_5 = (gcnew System::Windows::Forms::PictureBox());
			this->player2_4 = (gcnew System::Windows::Forms::PictureBox());
			this->player2_3 = (gcnew System::Windows::Forms::PictureBox());
			this->player2_2 = (gcnew System::Windows::Forms::PictureBox());
			this->player2_1 = (gcnew System::Windows::Forms::PictureBox());
			this->player2_0 = (gcnew System::Windows::Forms::PictureBox());
			this->player1_name = (gcnew System::Windows::Forms::Label());
			this->player2_name = (gcnew System::Windows::Forms::Label());
			this->player3_name = (gcnew System::Windows::Forms::Label());
			this->player4_name = (gcnew System::Windows::Forms::Label());
			this->player5_name = (gcnew System::Windows::Forms::Label());
			this->player6_name = (gcnew System::Windows::Forms::Label());
			this->player1_table = (gcnew System::Windows::Forms::PictureBox());
			this->player2_table = (gcnew System::Windows::Forms::PictureBox());
			this->player6_table = (gcnew System::Windows::Forms::PictureBox());
			this->player4_table = (gcnew System::Windows::Forms::PictureBox());
			this->player5_table = (gcnew System::Windows::Forms::PictureBox());
			this->player3_table = (gcnew System::Windows::Forms::PictureBox());
			this->playCard = (gcnew System::Windows::Forms::Button());
			this->openTable = (gcnew System::Windows::Forms::Button());
			this->gameInfo = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->gameSelected = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->empty = (gcnew System::Windows::Forms::ColumnHeader());
			this->playerName = (gcnew System::Windows::Forms::ColumnHeader());
			this->playerScore = (gcnew System::Windows::Forms::ColumnHeader());
			this->openScore = (gcnew System::Windows::Forms::Button());

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_table))->BeginInit();
			this->SuspendLayout();
			// 
			// player1_0
			// 
			this->player1_0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_0->Location = System::Drawing::Point(304, 550);
			this->player1_0->Name = L"player1_0";
			this->player1_0->Size = System::Drawing::Size(75, 100);
			this->player1_0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_0->TabIndex = 0;
			this->player1_0->TabStop = false;
			this->player1_0->Click += gcnew System::EventHandler(this, &GameForm::card_Select);
			// 
			// player1_2
			// 
			this->player1_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player1_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_2->Location = System::Drawing::Point(384, 550);
			this->player1_2->Name = L"player1_2";
			this->player1_2->Size = System::Drawing::Size(75, 100);
			this->player1_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_2->TabIndex = 1;
			this->player1_2->TabStop = false;
			this->player1_2->Click += gcnew System::EventHandler(this, &GameForm::card_Select);
			// 
			// player1_1
			// 
			this->player1_1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player1_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_1->Location = System::Drawing::Point(344, 550);
			this->player1_1->Name = L"player1_1";
			this->player1_1->Size = System::Drawing::Size(75, 100);
			this->player1_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_1->TabIndex = 2;
			this->player1_1->TabStop = false;
			this->player1_1->Click += gcnew System::EventHandler(this, &GameForm::card_Select);
			// 
			// player1_3
			// 
			this->player1_3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player1_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_3->Location = System::Drawing::Point(424, 550);
			this->player1_3->Name = L"player1_3";
			this->player1_3->Size = System::Drawing::Size(75, 100);
			this->player1_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_3->TabIndex = 3;
			this->player1_3->TabStop = false;
			this->player1_3->Click += gcnew System::EventHandler(this, &GameForm::card_Select);
			// 
			// player1_4
			// 
			this->player1_4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player1_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_4->Location = System::Drawing::Point(464, 550);
			this->player1_4->Name = L"player1_4";
			this->player1_4->Size = System::Drawing::Size(75, 100);
			this->player1_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_4->TabIndex = 4;
			this->player1_4->TabStop = false;
			this->player1_4->Click += gcnew System::EventHandler(this, &GameForm::card_Select);
			// 
			// player1_5
			// 
			this->player1_5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player1_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_5->Location = System::Drawing::Point(504, 550);
			this->player1_5->Name = L"player1_5";
			this->player1_5->Size = System::Drawing::Size(75, 100);
			this->player1_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_5->TabIndex = 5;
			this->player1_5->TabStop = false;
			this->player1_5->Click += gcnew System::EventHandler(this, &GameForm::card_Select);
			// 
			// player1_6
			// 
			this->player1_6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player1_6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_6->Location = System::Drawing::Point(544, 550);
			this->player1_6->Name = L"player1_6";
			this->player1_6->Size = System::Drawing::Size(75, 100);
			this->player1_6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_6->TabIndex = 6;
			this->player1_6->TabStop = false;
			this->player1_6->Click += gcnew System::EventHandler(this, &GameForm::card_Select);
			// 
			// player1_7
			// 
			this->player1_7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player1_7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_7->Location = System::Drawing::Point(584, 550);
			this->player1_7->Name = L"player1_7";
			this->player1_7->Size = System::Drawing::Size(75, 100);
			this->player1_7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_7->TabIndex = 7;
			this->player1_7->TabStop = false;
			this->player1_7->Click += gcnew System::EventHandler(this, &GameForm::card_Select);
			// 
			// player3_0
			// 
			this->player3_0->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player3_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player3_0.BackgroundImage")));
			this->player3_0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player3_0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player3_0->Location = System::Drawing::Point(17, 121);
			this->player3_0->Name = L"player3_0";
			this->player3_0->Size = System::Drawing::Size(75, 100);
			this->player3_0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player3_0->TabIndex = 8;
			this->player3_0->TabStop = false;
			// 
			// player3_1
			// 
			this->player3_1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player3_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player3_1.BackgroundImage")));
			this->player3_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player3_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player3_1->Location = System::Drawing::Point(17, 131);
			this->player3_1->Name = L"player3_1";
			this->player3_1->Size = System::Drawing::Size(75, 100);
			this->player3_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player3_1->TabIndex = 9;
			this->player3_1->TabStop = false;
			// 
			// player3_2
			// 
			this->player3_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player3_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player3_2.BackgroundImage")));
			this->player3_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player3_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player3_2->Location = System::Drawing::Point(17, 141);
			this->player3_2->Name = L"player3_2";
			this->player3_2->Size = System::Drawing::Size(75, 100);
			this->player3_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player3_2->TabIndex = 10;
			this->player3_2->TabStop = false;
			// 
			// player3_3
			// 
			this->player3_3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player3_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player3_3.BackgroundImage")));
			this->player3_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player3_3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player3_3->Location = System::Drawing::Point(17, 151);
			this->player3_3->Name = L"player3_3";
			this->player3_3->Size = System::Drawing::Size(75, 100);
			this->player3_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player3_3->TabIndex = 11;
			this->player3_3->TabStop = false;
			// 
			// player3_4
			// 
			this->player3_4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player3_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player3_4.BackgroundImage")));
			this->player3_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player3_4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player3_4->Location = System::Drawing::Point(17, 161);
			this->player3_4->Name = L"player3_4";
			this->player3_4->Size = System::Drawing::Size(75, 100);
			this->player3_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player3_4->TabIndex = 12;
			this->player3_4->TabStop = false;
			// 
			// player3_5
			// 
			this->player3_5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player3_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player3_5.BackgroundImage")));
			this->player3_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player3_5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player3_5->Location = System::Drawing::Point(17, 171);
			this->player3_5->Name = L"player3_5";
			this->player3_5->Size = System::Drawing::Size(75, 100);
			this->player3_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player3_5->TabIndex = 13;
			this->player3_5->TabStop = false;
			// 
			// player3_6
			// 
			this->player3_6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player3_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player3_6.BackgroundImage")));
			this->player3_6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player3_6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player3_6->Location = System::Drawing::Point(17, 181);
			this->player3_6->Name = L"player3_6";
			this->player3_6->Size = System::Drawing::Size(75, 100);
			this->player3_6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player3_6->TabIndex = 14;
			this->player3_6->TabStop = false;
			// 
			// player3_7
			// 
			this->player3_7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player3_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player3_7.BackgroundImage")));
			this->player3_7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player3_7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player3_7->Location = System::Drawing::Point(17, 191);
			this->player3_7->Name = L"player3_7";
			this->player3_7->Size = System::Drawing::Size(75, 100);
			this->player3_7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player3_7->TabIndex = 15;
			this->player3_7->TabStop = false;
			// 
			// player5_7
			// 
			this->player5_7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player5_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player5_7.BackgroundImage")));
			this->player5_7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player5_7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player5_7->Location = System::Drawing::Point(921, 191);
			this->player5_7->Name = L"player5_7";
			this->player5_7->Size = System::Drawing::Size(75, 100);
			this->player5_7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player5_7->TabIndex = 23;
			this->player5_7->TabStop = false;
			// 
			// player5_6
			// 
			this->player5_6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player5_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player5_6.BackgroundImage")));
			this->player5_6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player5_6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player5_6->Location = System::Drawing::Point(921, 181);
			this->player5_6->Name = L"player5_6";
			this->player5_6->Size = System::Drawing::Size(75, 100);
			this->player5_6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player5_6->TabIndex = 22;
			this->player5_6->TabStop = false;
			// 
			// player5_5
			// 
			this->player5_5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player5_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player5_5.BackgroundImage")));
			this->player5_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player5_5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player5_5->Location = System::Drawing::Point(921, 171);
			this->player5_5->Name = L"player5_5";
			this->player5_5->Size = System::Drawing::Size(75, 100);
			this->player5_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player5_5->TabIndex = 21;
			this->player5_5->TabStop = false;
			// 
			// player5_4
			// 
			this->player5_4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player5_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player5_4.BackgroundImage")));
			this->player5_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player5_4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player5_4->Location = System::Drawing::Point(921, 161);
			this->player5_4->Name = L"player5_4";
			this->player5_4->Size = System::Drawing::Size(75, 100);
			this->player5_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player5_4->TabIndex = 20;
			this->player5_4->TabStop = false;
			// 
			// player5_3
			// 
			this->player5_3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player5_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player5_3.BackgroundImage")));
			this->player5_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player5_3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player5_3->Location = System::Drawing::Point(921, 151);
			this->player5_3->Name = L"player5_3";
			this->player5_3->Size = System::Drawing::Size(75, 100);
			this->player5_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player5_3->TabIndex = 19;
			this->player5_3->TabStop = false;
			// 
			// player5_2
			// 
			this->player5_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player5_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player5_2.BackgroundImage")));
			this->player5_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player5_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player5_2->Location = System::Drawing::Point(921, 141);
			this->player5_2->Name = L"player5_2";
			this->player5_2->Size = System::Drawing::Size(75, 100);
			this->player5_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player5_2->TabIndex = 18;
			this->player5_2->TabStop = false;
			// 
			// player5_1
			// 
			this->player5_1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player5_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player5_1.BackgroundImage")));
			this->player5_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player5_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player5_1->Location = System::Drawing::Point(921, 131);
			this->player5_1->Name = L"player5_1";
			this->player5_1->Size = System::Drawing::Size(75, 100);
			this->player5_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player5_1->TabIndex = 17;
			this->player5_1->TabStop = false;
			// 
			// player5_0
			// 
			this->player5_0->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player5_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player5_0.BackgroundImage")));
			this->player5_0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player5_0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player5_0->Location = System::Drawing::Point(921, 121);
			this->player5_0->Name = L"player5_0";
			this->player5_0->Size = System::Drawing::Size(75, 100);
			this->player5_0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player5_0->TabIndex = 16;
			this->player5_0->TabStop = false;
			// 
			// player4_7
			// 
			this->player4_7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player4_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player4_7.BackgroundImage")));
			this->player4_7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player4_7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player4_7->Location = System::Drawing::Point(584, 12);
			this->player4_7->Name = L"player4_7";
			this->player4_7->Size = System::Drawing::Size(75, 100);
			this->player4_7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player4_7->TabIndex = 31;
			this->player4_7->TabStop = false;
			// 
			// player4_6
			// 
			this->player4_6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player4_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player4_6.BackgroundImage")));
			this->player4_6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player4_6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player4_6->Location = System::Drawing::Point(544, 12);
			this->player4_6->Name = L"player4_6";
			this->player4_6->Size = System::Drawing::Size(75, 100);
			this->player4_6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player4_6->TabIndex = 30;
			this->player4_6->TabStop = false;
			// 
			// player4_5
			// 
			this->player4_5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player4_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player4_5.BackgroundImage")));
			this->player4_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player4_5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player4_5->Location = System::Drawing::Point(504, 12);
			this->player4_5->Name = L"player4_5";
			this->player4_5->Size = System::Drawing::Size(75, 100);
			this->player4_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player4_5->TabIndex = 29;
			this->player4_5->TabStop = false;
			// 
			// player4_4
			// 
			this->player4_4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player4_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player4_4.BackgroundImage")));
			this->player4_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player4_4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player4_4->Location = System::Drawing::Point(464, 12);
			this->player4_4->Name = L"player4_4";
			this->player4_4->Size = System::Drawing::Size(75, 100);
			this->player4_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player4_4->TabIndex = 28;
			this->player4_4->TabStop = false;
			// 
			// player4_3
			// 
			this->player4_3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player4_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player4_3.BackgroundImage")));
			this->player4_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player4_3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player4_3->Location = System::Drawing::Point(424, 12);
			this->player4_3->Name = L"player4_3";
			this->player4_3->Size = System::Drawing::Size(75, 100);
			this->player4_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player4_3->TabIndex = 27;
			this->player4_3->TabStop = false;
			// 
			// player4_2
			// 
			this->player4_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player4_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player4_2.BackgroundImage")));
			this->player4_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player4_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player4_2->Location = System::Drawing::Point(384, 12);
			this->player4_2->Name = L"player4_2";
			this->player4_2->Size = System::Drawing::Size(75, 100);
			this->player4_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player4_2->TabIndex = 26;
			this->player4_2->TabStop = false;
			// 
			// player4_1
			// 
			this->player4_1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player4_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player4_1.BackgroundImage")));
			this->player4_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player4_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player4_1->Location = System::Drawing::Point(344, 12);
			this->player4_1->Name = L"player4_1";
			this->player4_1->Size = System::Drawing::Size(75, 100);
			this->player4_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player4_1->TabIndex = 25;
			this->player4_1->TabStop = false;
			// 
			// player4_0
			// 
			this->player4_0->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player4_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player4_0.BackgroundImage")));
			this->player4_0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player4_0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player4_0->Location = System::Drawing::Point(304, 12);
			this->player4_0->Name = L"player4_0";
			this->player4_0->Size = System::Drawing::Size(75, 100);
			this->player4_0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player4_0->TabIndex = 24;
			this->player4_0->TabStop = false;
			// 
			// player6_7
			// 
			this->player6_7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player6_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player6_7.BackgroundImage")));
			this->player6_7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player6_7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player6_7->Location = System::Drawing::Point(921, 465);
			this->player6_7->Name = L"player6_7";
			this->player6_7->Size = System::Drawing::Size(75, 100);
			this->player6_7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player6_7->TabIndex = 39;
			this->player6_7->TabStop = false;
			// 
			// player6_6
			// 
			this->player6_6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player6_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player6_6.BackgroundImage")));
			this->player6_6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player6_6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player6_6->Location = System::Drawing::Point(921, 455);
			this->player6_6->Name = L"player6_6";
			this->player6_6->Size = System::Drawing::Size(75, 100);
			this->player6_6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player6_6->TabIndex = 38;
			this->player6_6->TabStop = false;
			// 
			// player6_5
			// 
			this->player6_5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player6_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player6_5.BackgroundImage")));
			this->player6_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player6_5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player6_5->Location = System::Drawing::Point(921, 445);
			this->player6_5->Name = L"player6_5";
			this->player6_5->Size = System::Drawing::Size(75, 100);
			this->player6_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player6_5->TabIndex = 37;
			this->player6_5->TabStop = false;
			// 
			// player6_4
			// 
			this->player6_4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player6_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player6_4.BackgroundImage")));
			this->player6_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player6_4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player6_4->Location = System::Drawing::Point(921, 435);
			this->player6_4->Name = L"player6_4";
			this->player6_4->Size = System::Drawing::Size(75, 100);
			this->player6_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player6_4->TabIndex = 36;
			this->player6_4->TabStop = false;
			// 
			// player6_3
			// 
			this->player6_3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player6_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player6_3.BackgroundImage")));
			this->player6_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player6_3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player6_3->Location = System::Drawing::Point(921, 425);
			this->player6_3->Name = L"player6_3";
			this->player6_3->Size = System::Drawing::Size(75, 100);
			this->player6_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player6_3->TabIndex = 35;
			this->player6_3->TabStop = false;
			// 
			// player6_2
			// 
			this->player6_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player6_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player6_2.BackgroundImage")));
			this->player6_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player6_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player6_2->Location = System::Drawing::Point(921, 415);
			this->player6_2->Name = L"player6_2";
			this->player6_2->Size = System::Drawing::Size(75, 100);
			this->player6_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player6_2->TabIndex = 34;
			this->player6_2->TabStop = false;
			// 
			// player6_1
			// 
			this->player6_1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player6_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player6_1.BackgroundImage")));
			this->player6_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player6_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player6_1->Location = System::Drawing::Point(921, 405);
			this->player6_1->Name = L"player6_1";
			this->player6_1->Size = System::Drawing::Size(75, 100);
			this->player6_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player6_1->TabIndex = 33;
			this->player6_1->TabStop = false;
			// 
			// player6_0
			// 
			this->player6_0->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player6_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player6_0.BackgroundImage")));
			this->player6_0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player6_0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player6_0->Location = System::Drawing::Point(921, 395);
			this->player6_0->Name = L"player6_0";
			this->player6_0->Size = System::Drawing::Size(75, 100);
			this->player6_0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player6_0->TabIndex = 32;
			this->player6_0->TabStop = false;
			// 
			// player2_7
			// 
			this->player2_7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player2_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player2_7.BackgroundImage")));
			this->player2_7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player2_7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player2_7->Location = System::Drawing::Point(17, 465);
			this->player2_7->Name = L"player2_7";
			this->player2_7->Size = System::Drawing::Size(75, 100);
			this->player2_7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player2_7->TabIndex = 47;
			this->player2_7->TabStop = false;
			// 
			// player2_6
			// 
			this->player2_6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player2_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player2_6.BackgroundImage")));
			this->player2_6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player2_6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player2_6->Location = System::Drawing::Point(17, 455);
			this->player2_6->Name = L"player2_6";
			this->player2_6->Size = System::Drawing::Size(75, 100);
			this->player2_6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player2_6->TabIndex = 46;
			this->player2_6->TabStop = false;
			// 
			// player2_5
			// 
			this->player2_5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player2_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player2_5.BackgroundImage")));
			this->player2_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player2_5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player2_5->Location = System::Drawing::Point(17, 445);
			this->player2_5->Name = L"player2_5";
			this->player2_5->Size = System::Drawing::Size(75, 100);
			this->player2_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player2_5->TabIndex = 45;
			this->player2_5->TabStop = false;
			// 
			// player2_4
			// 
			this->player2_4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player2_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player2_4.BackgroundImage")));
			this->player2_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player2_4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player2_4->Location = System::Drawing::Point(17, 435);
			this->player2_4->Name = L"player2_4";
			this->player2_4->Size = System::Drawing::Size(75, 100);
			this->player2_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player2_4->TabIndex = 44;
			this->player2_4->TabStop = false;
			// 
			// player2_3
			// 
			this->player2_3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player2_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player2_3.BackgroundImage")));
			this->player2_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player2_3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player2_3->Location = System::Drawing::Point(17, 425);
			this->player2_3->Name = L"player2_3";
			this->player2_3->Size = System::Drawing::Size(75, 100);
			this->player2_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player2_3->TabIndex = 43;
			this->player2_3->TabStop = false;
			// 
			// player2_2
			// 
			this->player2_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player2_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player2_2.BackgroundImage")));
			this->player2_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player2_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player2_2->Location = System::Drawing::Point(17, 415);
			this->player2_2->Name = L"player2_2";
			this->player2_2->Size = System::Drawing::Size(75, 100);
			this->player2_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player2_2->TabIndex = 41;
			this->player2_2->TabStop = false;
			// 
			// player2_1
			// 
			this->player2_1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player2_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player2_1.BackgroundImage")));
			this->player2_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player2_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player2_1->Location = System::Drawing::Point(17, 405);
			this->player2_1->Name = L"player2_1";
			this->player2_1->Size = System::Drawing::Size(75, 100);
			this->player2_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player2_1->TabIndex = 42;
			this->player2_1->TabStop = false;
			// 
			// player2_0
			// 
			this->player2_0->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player2_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player2_0.BackgroundImage")));
			this->player2_0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player2_0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player2_0->Location = System::Drawing::Point(17, 397);
			this->player2_0->Name = L"player2_0";
			this->player2_0->Size = System::Drawing::Size(75, 100);
			this->player2_0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player2_0->TabIndex = 40;
			this->player2_0->TabStop = false;
			// 
			// player1_name
			// 
			this->player1_name->AutoSize = true;
			this->player1_name->BackColor = System::Drawing::Color::Transparent;
			this->player1_name->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->player1_name->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->player1_name->ForeColor = System::Drawing::Color::Goldenrod;
			this->player1_name->Location = System::Drawing::Point(207, 550);
			this->player1_name->Name = L"player1_name";
			this->player1_name->Size = System::Drawing::Size(91, 25);
			this->player1_name->TabIndex = 48;
			this->player1_name->Text = L"Player1";
			this->player1_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// player2_name
			// 
			this->player2_name->AutoSize = true;
			this->player2_name->BackColor = System::Drawing::Color::Transparent;
			this->player2_name->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->player2_name->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->player2_name->ForeColor = System::Drawing::Color::Goldenrod;
			this->player2_name->Location = System::Drawing::Point(12, 358);
			this->player2_name->Name = L"player2_name";
			this->player2_name->Size = System::Drawing::Size(91, 25);
			this->player2_name->TabIndex = 49;
			this->player2_name->Text = L"Player2";
			this->player2_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// player3_name
			// 
			this->player3_name->AutoSize = true;
			this->player3_name->BackColor = System::Drawing::Color::Transparent;
			this->player3_name->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->player3_name->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->player3_name->ForeColor = System::Drawing::Color::Goldenrod;
			this->player3_name->Location = System::Drawing::Point(12, 87);
			this->player3_name->Name = L"player3_name";
			this->player3_name->Size = System::Drawing::Size(91, 25);
			this->player3_name->TabIndex = 50;
			this->player3_name->Text = L"Player3";
			this->player3_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// player4_name
			// 
			this->player4_name->AutoSize = true;
			this->player4_name->BackColor = System::Drawing::Color::Transparent;
			this->player4_name->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->player4_name->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->player4_name->ForeColor = System::Drawing::Color::Goldenrod;
			this->player4_name->Location = System::Drawing::Point(665, 9);
			this->player4_name->Name = L"player4_name";
			this->player4_name->Size = System::Drawing::Size(91, 25);
			this->player4_name->TabIndex = 51;
			this->player4_name->Text = L"Player4";
			this->player4_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// player5_name
			// 
			this->player5_name->AutoSize = true;
			this->player5_name->BackColor = System::Drawing::Color::Transparent;
			this->player5_name->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->player5_name->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->player5_name->ForeColor = System::Drawing::Color::Goldenrod;
			this->player5_name->Location = System::Drawing::Point(916, 87);
			this->player5_name->Name = L"player5_name";
			this->player5_name->Size = System::Drawing::Size(91, 25);
			this->player5_name->TabIndex = 52;
			this->player5_name->Text = L"Player5";
			this->player5_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// player6_name
			// 
			this->player6_name->AutoSize = true;
			this->player6_name->BackColor = System::Drawing::Color::Transparent;
			this->player6_name->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->player6_name->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->player6_name->ForeColor = System::Drawing::Color::Goldenrod;
			this->player6_name->Location = System::Drawing::Point(916, 358);
			this->player6_name->Name = L"player6_name";
			this->player6_name->Size = System::Drawing::Size(91, 25);
			this->player6_name->TabIndex = 53;
			this->player6_name->Text = L"Player6";
			this->player6_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// player1_table
			// 
			this->player1_table->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player1_table->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player1_table->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_table->Location = System::Drawing::Point(444, 358);
			this->player1_table->Name = L"player1_table";
			this->player1_table->Size = System::Drawing::Size(75, 100);
			this->player1_table->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player1_table->TabIndex = 54;
			this->player1_table->TabStop = false;
			this->player1_table->Visible = false;
			// 
			// player2_table
			// 
			this->player2_table->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player2_table->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player2_table->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player2_table->Location = System::Drawing::Point(304, 358);
			this->player2_table->Name = L"player2_table";
			this->player2_table->Size = System::Drawing::Size(75, 100);
			this->player2_table->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player2_table->TabIndex = 55;
			this->player2_table->TabStop = false;
			this->player2_table->Visible = false;
			// 
			// player6_table
			// 
			this->player6_table->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player6_table->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player6_table->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player6_table->Location = System::Drawing::Point(584, 358);
			this->player6_table->Name = L"player6_table";
			this->player6_table->Size = System::Drawing::Size(75, 100);
			this->player6_table->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player6_table->TabIndex = 56;
			this->player6_table->TabStop = false;
			this->player6_table->Visible = false;
			// 
			// player4_table
			// 
			this->player4_table->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player4_table->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player4_table->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player4_table->Location = System::Drawing::Point(444, 217);
			this->player4_table->Name = L"player4_table";
			this->player4_table->Size = System::Drawing::Size(75, 100);
			this->player4_table->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player4_table->TabIndex = 57;
			this->player4_table->TabStop = false;
			this->player4_table->Visible = false;
			// 
			// player5_table
			// 
			this->player5_table->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player5_table->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player5_table->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player5_table->Location = System::Drawing::Point(584, 217);
			this->player5_table->Name = L"player5_table";
			this->player5_table->Size = System::Drawing::Size(75, 100);
			this->player5_table->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player5_table->TabIndex = 58;
			this->player5_table->TabStop = false;
			this->player5_table->Visible = false;
			// 
			// player3_table
			// 
			this->player3_table->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->player3_table->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->player3_table->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player3_table->Location = System::Drawing::Point(304, 217);
			this->player3_table->Name = L"player3_table";
			this->player3_table->Size = System::Drawing::Size(75, 100);
			this->player3_table->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player3_table->TabIndex = 59;
			this->player3_table->TabStop = false;
			this->player3_table->Visible = false;
			// 
			// playCard
			// 
			this->playCard->AutoSize = true;
			this->playCard->BackColor = System::Drawing::Color::Cornsilk;
			this->playCard->Cursor = System::Windows::Forms::Cursors::Hand;
			this->playCard->Enabled = false;
			this->playCard->FlatAppearance->BorderSize = 0;
			this->playCard->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playCard->ForeColor = System::Drawing::Color::Black;
			this->playCard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playCard.Image")));
			this->playCard->Location = System::Drawing::Point(683, 533);
			this->playCard->Name = L"playCard";
			this->playCard->Size = System::Drawing::Size(104, 60);
			this->playCard->TabIndex = 60;
			this->playCard->Text = L"Choose";
			this->playCard->UseVisualStyleBackColor = false;
			this->playCard->Click += gcnew System::EventHandler(this, &GameForm::choose_Card);
			// 
			// openTable
			// 
			this->openTable->AutoSize = true;
			this->openTable->BackColor = System::Drawing::Color::Cornsilk;
			this->openTable->Cursor = System::Windows::Forms::Cursors::Hand;
			this->openTable->FlatAppearance->BorderSize = 0;
			this->openTable->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->openTable->ForeColor = System::Drawing::Color::Black;
			this->openTable->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openTable.Image")));
			this->openTable->Location = System::Drawing::Point(670, 599);
			this->openTable->Name = L"openTable";
			this->openTable->Size = System::Drawing::Size(150, 49);
			this->openTable->TabIndex = 61;
			this->openTable->Text = L"Select Game";
			this->openTable->UseVisualStyleBackColor = false;
			this->openTable->Click += gcnew System::EventHandler(this, &GameForm::selectGame);
			// 
			// gameInfo
			// 
			this->gameInfo->BackColor = System::Drawing::Color::Transparent;
			this->gameInfo->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gameInfo->ForeColor = System::Drawing::Color::Goldenrod;
			this->gameInfo->Location = System::Drawing::Point(300, 161);
			this->gameInfo->Name = L"gameInfo";
			this->gameInfo->Size = System::Drawing::Size(359, 43);
			this->gameInfo->TabIndex = 62;
			this->gameInfo->Text = L"Player1 must choose game.";
			this->gameInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->EnableAutoDragDrop = true;
			this->richTextBox1->Location = System::Drawing::Point(98, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(201, 166);
			this->richTextBox1->TabIndex = 63;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			this->richTextBox1->Visible = false;
			// 
			// button1
			// 
			this->button1->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Location = System::Drawing::Point(11, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 38);
			this->button1->TabIndex = 64;
			this->button1->Text = L"Rules";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GameForm::button1_Click);
			// 
			// gameSelected
			// 
			this->gameSelected->BackColor = System::Drawing::Color::Transparent;
			this->gameSelected->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->gameSelected->ForeColor = System::Drawing::Color::White;
			this->gameSelected->Location = System::Drawing::Point(810, 12);
			this->gameSelected->Name = L"gameSelected";
			this->gameSelected->Size = System::Drawing::Size(186, 43);
			this->gameSelected->TabIndex = 65;
			this->gameSelected->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// listView1
			// 
			this->listView1->AutoArrange = false;
			this->listView1->BackColor = System::Drawing::Color::White;
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->empty, this->playerName,
					this->playerScore
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Eras Light ITC", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->listView1->HideSelection = false;
			listViewItem1->StateImageIndex = 0;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(6) {
				listViewItem1, listViewItem2,
					listViewItem3, listViewItem4, listViewItem5, listViewItem6
			});
			this->listView1->LabelWrap = false;
			this->listView1->Location = System::Drawing::Point(303, 217);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Scrollable = false;
			this->listView1->Size = System::Drawing::Size(360, 258);
			this->listView1->TabIndex = 67;
			this->listView1->TileSize = System::Drawing::Size(100, 100);
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->Visible = false;
			// 
			// empty
			// 
			this->empty->Tag = L"";
			this->empty->Width = 0;
			// 
			// playerName
			// 
			this->playerName->Text = L"Name";
			this->playerName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->playerName->Width = 180;
			// 
			// playerScore
			// 
			this->playerScore->Text = L"Score";
			this->playerScore->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->playerScore->Width = 180;
			// 
			// openScore
			// 
			this->openScore->AutoSize = true;
			this->openScore->BackColor = System::Drawing::Color::Cornsilk;
			this->openScore->Cursor = System::Windows::Forms::Cursors::Hand;
			this->openScore->FlatAppearance->BorderSize = 0;
			this->openScore->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->openScore->ForeColor = System::Drawing::Color::Black;
			this->openScore->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openScore.Image")));
			this->openScore->Location = System::Drawing::Point(143, 588);
			this->openScore->Name = L"openScore";
			this->openScore->Size = System::Drawing::Size(104, 60);
			this->openScore->TabIndex = 68;
			this->openScore->Text = L"Score";
			this->openScore->UseVisualStyleBackColor = false;
			this->openScore->Click += gcnew System::EventHandler(this, &GameForm::openScoreTable);
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 662);
			this->Controls->Add(this->openScore);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->gameSelected);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->openTable);
			this->Controls->Add(this->playCard);
			this->Controls->Add(this->player3_table);
			this->Controls->Add(this->player5_table);
			this->Controls->Add(this->player4_table);
			this->Controls->Add(this->player6_table);
			this->Controls->Add(this->player2_table);
			this->Controls->Add(this->player1_table);
			this->Controls->Add(this->player6_name);
			this->Controls->Add(this->player5_name);
			this->Controls->Add(this->player4_name);
			this->Controls->Add(this->player3_name);
			this->Controls->Add(this->player2_name);
			this->Controls->Add(this->player2_7);
			this->Controls->Add(this->player2_6);
			this->Controls->Add(this->player2_5);
			this->Controls->Add(this->player2_4);
			this->Controls->Add(this->player2_3);
			this->Controls->Add(this->player2_2);
			this->Controls->Add(this->player2_1);
			this->Controls->Add(this->player2_0);
			this->Controls->Add(this->player6_7);
			this->Controls->Add(this->player6_6);
			this->Controls->Add(this->player6_5);
			this->Controls->Add(this->player6_4);
			this->Controls->Add(this->player6_3);
			this->Controls->Add(this->player6_2);
			this->Controls->Add(this->player6_1);
			this->Controls->Add(this->player6_0);
			this->Controls->Add(this->player4_7);
			this->Controls->Add(this->player4_6);
			this->Controls->Add(this->player4_5);
			this->Controls->Add(this->player4_4);
			this->Controls->Add(this->player4_3);
			this->Controls->Add(this->player4_2);
			this->Controls->Add(this->player4_1);
			this->Controls->Add(this->player4_0);
			this->Controls->Add(this->player5_7);
			this->Controls->Add(this->player5_6);
			this->Controls->Add(this->player5_5);
			this->Controls->Add(this->player5_4);
			this->Controls->Add(this->player5_3);
			this->Controls->Add(this->player5_2);
			this->Controls->Add(this->player5_1);
			this->Controls->Add(this->player5_0);
			this->Controls->Add(this->player3_7);
			this->Controls->Add(this->player3_6);
			this->Controls->Add(this->player3_5);
			this->Controls->Add(this->player3_4);
			this->Controls->Add(this->player3_3);
			this->Controls->Add(this->player3_2);
			this->Controls->Add(this->player3_1);
			this->Controls->Add(this->player3_0);
			this->Controls->Add(this->player1_7);
			this->Controls->Add(this->player1_6);
			this->Controls->Add(this->player1_5);
			this->Controls->Add(this->player1_4);
			this->Controls->Add(this->player1_3);
			this->Controls->Add(this->player1_2);
			this->Controls->Add(this->player1_1);
			this->Controls->Add(this->player1_0);
			this->Controls->Add(this->player1_name);
			this->Controls->Add(this->gameInfo);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player6_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player4_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player5_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player3_table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void card_Select(System::Object^  sender, System::EventArgs^  e) {
		PictureBox ^obj = safe_cast<PictureBox^>(sender);

		if (selectedCard == obj)
		{
			obj->Location = Point(obj->Location.X, 550);
			selectedCard = nullptr;
			main->players[0]->selectedCard = NULL;
			return;
		}
		else
		{
			if(selectedCard != nullptr)
				selectedCard->Location = Point(selectedCard->Location.X, 550);

			obj->Location = Point(obj->Location.X, 520);
			selectedCard = obj;
		}

		int index = 0;

		for (size_t i = 0; i < main->players[0]->cards.size(); i++)
		{
			PictureBox ^box = safe_cast<PictureBox^>(this->Controls->Find("player1_" + Convert::ToString(index), true)[0]);
			index++;

			if (!box->Visible)
			{
				i--;
				continue;
			}

			if (obj == box)
			{
				main->players[0]->selectedCard = main->players[0]->cards[i];
				break;
			}
		}
	}

	private: System::Void choose_Card(System::Object^  sender, System::EventArgs^  e) {
		Button ^obj = safe_cast<Button^>(sender);

		if (selectedCard != nullptr)
		{
			if (main->cardsOnTable.size() > 0) {
				if (!main->checkingCard(main->players[0], main->players[0]->selectedCard, main->cardsOnTable))
				{
					gameInfo->ForeColor = Color::Red;
					gameInfo->Text = "Invalid move. Try Again"; //TODO: main->cardsOnTable[0]->type "to play."
					return;
				}
			}
			
			gameInfo->Text = "";
			player1_table->Image = selectedCard->Image;
			player1_table->Visible = true;

			selectedCard->Visible = false;
			obj->Enabled = false;
			main->cardsOnTable.push_back(main->players[0]->selectedCard);
			main->players[0]->cards.erase(find(main->players[0]->cards.begin(), main->players[0]->cards.end(), main->players[0]->selectedCard));
			main->players[0]->selectedCard = NULL;
			selectedCard = nullptr;
			Application::DoEvents();
			gameBehavior();
		}		
	}

	private: System::Void selectGame(System::Object^  sender, System::EventArgs^  e) {

		table->ShowDialog();

		if (Table::currentGame != (Player::Games)99)
		{
			openTable->Enabled = false;
			gameInfo->ForeColor = Color::Goldenrod;

			gameInfo->Text = gameToString() + " selected. Play a Card";
			gameSelected->Text = gameToString();
			playCard->Enabled = true;
			return;
		}
		
		gameInfo->ForeColor = Color::Red;
		gameInfo->Text = "No game selected. Choose a game!";
	}

	private: System::Void gameBehavior() {

		idx = ((idx + 1) == 7) ? 1 : idx + 1;

		while(idx != currentPlayer)
		{
			if (idx == 1) // Player1 must move
			{
				playCard->Enabled = true;
				return;
			}

			Application::DoEvents();
			wait(1000);
			selectRandomCard(idx);
			idx = ((idx + 1) == 7) ? 1 : idx + 1;
			Application::DoEvents();
		}

		Application::DoEvents();
		wait(500);

		Player *handWinner = main->winner(main->cardsOnTable);
		gameInfo->ForeColor = Color::Goldenrod;
		String ^str = gcnew String(handWinner->name.c_str());
		gameInfo->Text = str + " wins the hand!";

		int pts = main->points(main->cardsOnTable);
		setPoints(handWinner, pts);
		Application::DoEvents();
		wait(4000);

		player1_table->Visible = false;
		player2_table->Visible = false;
		player3_table->Visible = false;
		player4_table->Visible = false;
		player5_table->Visible = false;
		player6_table->Visible = false;
		main->cardsOnTable.clear();
		gameInfo->Text = "";

		currentPlayer = handWinner->numberOfPlayer + 1;
		idx = currentPlayer;

		// Round finished. Next player to choose game
		if (!main->players[0]->cards.size())
		{
			main->cards = main->createVector(main->num_pl);
			main->giveCards();
			setCardsImages();
			startingPlayer = ((startingPlayer + 1) == 7) ? 1 : startingPlayer + 1;
			currentPlayer = startingPlayer;
			idx = currentPlayer;

			if (startingPlayer == 1) // Player1 must choose game type
			{
				openTable->Enabled = true;
				gameInfo->ForeColor = Color::Goldenrod;
				gameInfo->Text = "Your turn. Choose a game type.";
				return;
			}

			Application::DoEvents();
			wait(1000);
			selectRandomGameType(currentPlayer);
			selectRandomCard(currentPlayer);
			gameBehavior();
			return;
		}
		
		if (currentPlayer == 1) // Player1 must move
		{			
			playCard->Enabled = true;
			gameInfo->Text = "Play a card";
			gameInfo->ForeColor = Color::Goldenrod;
			return;
		}

		Application::DoEvents();
		wait(750);
		selectRandomCard(idx);
		gameBehavior();
	}

	private: System::Void selectRandomGameType(int player) {
		for (size_t i = 0; i < 8; i++)
		{
			if (!main->checkingTabel(main->players[player - 1], i, main->tabel))
			{
				main->markGame(main->players[player - 1], i, main->tabel);
				
				String ^str = System::Convert::ToString((player - 1) * 8 + i + 1);
				str = "button" + str;
				Button ^btn = safe_cast<Button^>(table->Controls->Find(str, true)[0]);
				btn->BackColor = Color::Red;
				btn->Enabled = false;

				break;
			}				
		}

		gameInfo->ForeColor = Color::Goldenrod;
		gameInfo->Text = "Player" + Convert::ToString(player) + " selected game - " + gameToString();
		gameSelected->Text = gameToString();
		Application::DoEvents();
		wait(2000);
		gameInfo->Text = "";

	}

	private: System::Void selectRandomCard(int playerId) {
		Player *player = main->players[playerId - 1];
		String ^str = "player" + Convert::ToString(playerId) + "_table";
		PictureBox ^obj = safe_cast<PictureBox^>(this->Controls->Find(str, true)[0]);

		if (main->cardsOnTable.size() > 0) {
			for (size_t i = 0; i < player->cards.size(); i++)
			{
				if (main->checkingCard(player, player->cards[i], main->cardsOnTable))
				{
					obj->Image = Image::FromFile(IO::Path::GetFullPath(gcnew String(player->cards[i]->pathImage.c_str())));
					main->cardsOnTable.push_back(player->cards[i]);
					player->cards.erase(find(player->cards.begin(), player->cards.end(), player->cards[i]));
					obj->Visible = true;
					return;
				}				
			}
		}

		obj->Image = Image::FromFile(IO::Path::GetFullPath(gcnew String(player->cards.back()->pathImage.c_str())));
		main->cardsOnTable.push_back(player->cards.back());
		player->cards.pop_back();
		obj->Visible = true;		
	}

	private: System::Void setCardsImages()
	{
		player1_0->Image = Image::FromFile(IO::Path::GetFullPath(gcnew String(main->players[0]->cards[0]->pathImage.c_str())));
		player1_1->Image = Image::FromFile(IO::Path::GetFullPath(gcnew String(main->players[0]->cards[1]->pathImage.c_str())));
		player1_2->Image = Image::FromFile(IO::Path::GetFullPath(gcnew String(main->players[0]->cards[2]->pathImage.c_str())));
		player1_3->Image = Image::FromFile(IO::Path::GetFullPath(gcnew String(main->players[0]->cards[3]->pathImage.c_str())));
		player1_4->Image = Image::FromFile(IO::Path::GetFullPath(gcnew String(main->players[0]->cards[4]->pathImage.c_str())));
		player1_5->Image = Image::FromFile(IO::Path::GetFullPath(gcnew String(main->players[0]->cards[5]->pathImage.c_str())));
		player1_6->Image = Image::FromFile(IO::Path::GetFullPath(gcnew String(main->players[0]->cards[6]->pathImage.c_str())));
		player1_7->Image = Image::FromFile(IO::Path::GetFullPath(gcnew String(main->players[0]->cards[7]->pathImage.c_str())));

		player1_0->Visible = true;
		player1_0->Location = Point(player1_0->Location.X, 550);
		player1_1->Visible = true;
		player1_1->Location = Point(player1_1->Location.X, 550);
		player1_2->Visible = true;
		player1_2->Location = Point(player1_2->Location.X, 550);
		player1_3->Visible = true;
		player1_3->Location = Point(player1_3->Location.X, 550);
		player1_4->Visible = true;
		player1_4->Location = Point(player1_4->Location.X, 550);
		player1_5->Visible = true;
		player1_5->Location = Point(player1_5->Location.X, 550);
		player1_6->Visible = true;
		player1_6->Location = Point(player1_6->Location.X, 550);
		player1_7->Visible = true;
		player1_7->Location = Point(player1_7->Location.X, 550);
	}
	
	private: System::Void wait(int timeout)
	{
		timeout += clock();
		while (clock() < timeout)
		{
			Threading::Thread::Sleep(1);
			continue;
		}
	}
	
	private: System::String ^gameToString()
	{
		String ^str;

		switch (Table::currentGame)
		{
		case Player::King_of_Hearts:
			str = "King of Hearts";
			break;
		case Player::Ten_of_Clubs:
			str = "Ten of Clubs";
			break;
		case Player::Queens:
			str = "Queens";
			break;
		case Player::Diamonds:
			str = "Diamonds";
			break;
		case Player::Whist:
			str = "Whist";
			break;
		case Player::Rentz:
			str = "Rentz";
			break;
		case Player::Totals:
			str = "Totals";
			break;
		case Player::Acool:
			str = "Acool";
			break;
		default:
			str = "Unknown";
			break;
		}

		return str;
	}

	private: System::Void setPoints(Player *player, int score)
	{
		ListViewItem ^obj = listView1->Items[player->numberOfPlayer];

		int currentScore = Convert::ToInt32(obj->SubItems[2]->Text);
		currentScore += score;
		obj->SubItems[2]->Text = Convert::ToString(currentScore);
		
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (richTextBox1->Visible == true)
			richTextBox1->Visible = false;
		else richTextBox1->Visible = true;	
	}
	
	private: System::Void openScoreTable(System::Object^  sender, System::EventArgs^  e) {
		listView1->Visible = (listView1->Visible) ? false : true;
	}

	private: System::Void disableResize(System::Object^  sender, System::Windows::Forms::ColumnWidthChangingEventArgs^  e) {
		e->Cancel = true;
		e->NewWidth = 180;
	}
};
}
