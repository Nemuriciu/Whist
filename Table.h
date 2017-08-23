#pragma once

namespace Whist {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Table
	/// </summary>
	public ref class Table : public System::Windows::Forms::Form
	{
	public: static Player::Games currentGame = (Player::Games)99;
	public:
		Table(void)
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
		~Table()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label6;
	protected:
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;
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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(723, 10);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 29);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Player6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(581, 10);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 29);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Player5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(440, 10);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Player4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(299, 10);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Player3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(157, 10);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Player2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 10);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Player1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::ForestGreen;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(23, 44);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 40);
			this->button1->TabIndex = 6;
			this->button1->Text = L"King of Hearts";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Table::chooseGameType);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::ForestGreen;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(23, 94);
			this->button2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 40);
			this->button2->TabIndex = 7;
			this->button2->Text = L"10 of Clubs";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Table::chooseGameType);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::ForestGreen;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(23, 143);
			this->button3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 40);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Queens";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Table::chooseGameType);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::ForestGreen;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(23, 193);
			this->button4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 40);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Diamonds";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Table::chooseGameType);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::ForestGreen;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(23, 242);
			this->button5->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(86, 40);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Whist";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Table::chooseGameType);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::ForestGreen;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(23, 292);
			this->button6->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(86, 40);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Rentz";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Table::chooseGameType);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::ForestGreen;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(23, 341);
			this->button7->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(86, 40);
			this->button7->TabIndex = 12;
			this->button7->Text = L"Totals";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Table::chooseGameType);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::ForestGreen;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(23, 391);
			this->button8->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(86, 40);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Acool";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Table::chooseGameType);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::ForestGreen;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(164, 44);
			this->button9->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(86, 40);
			this->button9->TabIndex = 14;
			this->button9->Text = L"King of Hearts";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::ForestGreen;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(164, 94);
			this->button10->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(86, 40);
			this->button10->TabIndex = 15;
			this->button10->Text = L"10 of Clubs";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::ForestGreen;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(164, 143);
			this->button11->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(86, 40);
			this->button11->TabIndex = 16;
			this->button11->Text = L"Queens";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::ForestGreen;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(164, 193);
			this->button12->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(86, 40);
			this->button12->TabIndex = 17;
			this->button12->Text = L"Diamonds";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::ForestGreen;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(164, 242);
			this->button13->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(86, 40);
			this->button13->TabIndex = 18;
			this->button13->Text = L"Whist";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::ForestGreen;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(164, 292);
			this->button14->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(86, 40);
			this->button14->TabIndex = 19;
			this->button14->Text = L"Rentz";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::ForestGreen;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(164, 341);
			this->button15->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(86, 40);
			this->button15->TabIndex = 20;
			this->button15->Text = L"Totals";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::ForestGreen;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(164, 391);
			this->button16->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(86, 40);
			this->button16->TabIndex = 21;
			this->button16->Text = L"Acool";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::ForestGreen;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(305, 44);
			this->button17->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(86, 40);
			this->button17->TabIndex = 22;
			this->button17->Text = L"King of Hearts";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::ForestGreen;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(305, 94);
			this->button18->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(86, 40);
			this->button18->TabIndex = 23;
			this->button18->Text = L"10 of Clubs";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::ForestGreen;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(305, 143);
			this->button19->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(86, 40);
			this->button19->TabIndex = 24;
			this->button19->Text = L"Queens";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::ForestGreen;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(305, 193);
			this->button20->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(86, 40);
			this->button20->TabIndex = 25;
			this->button20->Text = L"Diamonds";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::ForestGreen;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(305, 242);
			this->button21->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(86, 40);
			this->button21->TabIndex = 26;
			this->button21->Text = L"Whist";
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::ForestGreen;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(305, 292);
			this->button22->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(86, 40);
			this->button22->TabIndex = 27;
			this->button22->Text = L"Rentz";
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::ForestGreen;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(305, 341);
			this->button23->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(86, 40);
			this->button23->TabIndex = 28;
			this->button23->Text = L"Totals";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::ForestGreen;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(305, 391);
			this->button24->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(86, 40);
			this->button24->TabIndex = 29;
			this->button24->Text = L"Acool";
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::ForestGreen;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(447, 44);
			this->button25->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(86, 40);
			this->button25->TabIndex = 30;
			this->button25->Text = L"King of Hearts";
			this->button25->UseVisualStyleBackColor = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::ForestGreen;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(447, 94);
			this->button26->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(86, 40);
			this->button26->TabIndex = 31;
			this->button26->Text = L"10 of Clubs";
			this->button26->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::ForestGreen;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(447, 143);
			this->button27->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(86, 40);
			this->button27->TabIndex = 32;
			this->button27->Text = L"Queens";
			this->button27->UseVisualStyleBackColor = false;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::ForestGreen;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(447, 193);
			this->button28->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(86, 40);
			this->button28->TabIndex = 33;
			this->button28->Text = L"Diamonds";
			this->button28->UseVisualStyleBackColor = false;
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::ForestGreen;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(447, 242);
			this->button29->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(86, 40);
			this->button29->TabIndex = 34;
			this->button29->Text = L"Whist";
			this->button29->UseVisualStyleBackColor = false;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::ForestGreen;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Location = System::Drawing::Point(447, 292);
			this->button30->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(86, 40);
			this->button30->TabIndex = 35;
			this->button30->Text = L"Rentz";
			this->button30->UseVisualStyleBackColor = false;
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::ForestGreen;
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Location = System::Drawing::Point(447, 341);
			this->button31->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(86, 40);
			this->button31->TabIndex = 36;
			this->button31->Text = L"Totals";
			this->button31->UseVisualStyleBackColor = false;
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::ForestGreen;
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Location = System::Drawing::Point(447, 391);
			this->button32->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(86, 40);
			this->button32->TabIndex = 37;
			this->button32->Text = L"Acool";
			this->button32->UseVisualStyleBackColor = false;
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::ForestGreen;
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(588, 44);
			this->button33->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(86, 40);
			this->button33->TabIndex = 38;
			this->button33->Text = L"King of Hearts";
			this->button33->UseVisualStyleBackColor = false;
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::ForestGreen;
			this->button34->FlatAppearance->BorderSize = 0;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(588, 94);
			this->button34->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(86, 40);
			this->button34->TabIndex = 39;
			this->button34->Text = L"10 of Clubs";
			this->button34->UseVisualStyleBackColor = false;
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::ForestGreen;
			this->button35->FlatAppearance->BorderSize = 0;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(588, 143);
			this->button35->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(86, 40);
			this->button35->TabIndex = 40;
			this->button35->Text = L"Queens";
			this->button35->UseVisualStyleBackColor = false;
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::ForestGreen;
			this->button36->FlatAppearance->BorderSize = 0;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(588, 193);
			this->button36->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(86, 40);
			this->button36->TabIndex = 41;
			this->button36->Text = L"Diamonds";
			this->button36->UseVisualStyleBackColor = false;
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::ForestGreen;
			this->button37->FlatAppearance->BorderSize = 0;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(588, 242);
			this->button37->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(86, 40);
			this->button37->TabIndex = 42;
			this->button37->Text = L"Whist";
			this->button37->UseVisualStyleBackColor = false;
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::ForestGreen;
			this->button38->FlatAppearance->BorderSize = 0;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Location = System::Drawing::Point(588, 292);
			this->button38->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(86, 40);
			this->button38->TabIndex = 43;
			this->button38->Text = L"Rentz";
			this->button38->UseVisualStyleBackColor = false;
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::ForestGreen;
			this->button39->FlatAppearance->BorderSize = 0;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Location = System::Drawing::Point(588, 341);
			this->button39->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(86, 40);
			this->button39->TabIndex = 44;
			this->button39->Text = L"Totals";
			this->button39->UseVisualStyleBackColor = false;
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::ForestGreen;
			this->button40->FlatAppearance->BorderSize = 0;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Location = System::Drawing::Point(588, 391);
			this->button40->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(86, 40);
			this->button40->TabIndex = 45;
			this->button40->Text = L"Acool";
			this->button40->UseVisualStyleBackColor = false;
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::ForestGreen;
			this->button41->FlatAppearance->BorderSize = 0;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->ForeColor = System::Drawing::Color::Black;
			this->button41->Location = System::Drawing::Point(729, 44);
			this->button41->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(86, 40);
			this->button41->TabIndex = 46;
			this->button41->Text = L"King of Hearts";
			this->button41->UseVisualStyleBackColor = false;
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::ForestGreen;
			this->button42->FlatAppearance->BorderSize = 0;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->Location = System::Drawing::Point(729, 94);
			this->button42->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(86, 40);
			this->button42->TabIndex = 47;
			this->button42->Text = L"10 of Clubs";
			this->button42->UseVisualStyleBackColor = false;
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::ForestGreen;
			this->button43->FlatAppearance->BorderSize = 0;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->Location = System::Drawing::Point(729, 143);
			this->button43->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(86, 40);
			this->button43->TabIndex = 48;
			this->button43->Text = L"Queens";
			this->button43->UseVisualStyleBackColor = false;
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::ForestGreen;
			this->button44->FlatAppearance->BorderSize = 0;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button44->Location = System::Drawing::Point(729, 193);
			this->button44->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(86, 40);
			this->button44->TabIndex = 49;
			this->button44->Text = L"Diamonds";
			this->button44->UseVisualStyleBackColor = false;
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::ForestGreen;
			this->button45->FlatAppearance->BorderSize = 0;
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button45->Location = System::Drawing::Point(729, 242);
			this->button45->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(86, 40);
			this->button45->TabIndex = 50;
			this->button45->Text = L"Whist";
			this->button45->UseVisualStyleBackColor = false;
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::ForestGreen;
			this->button46->FlatAppearance->BorderSize = 0;
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Location = System::Drawing::Point(729, 292);
			this->button46->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(86, 40);
			this->button46->TabIndex = 51;
			this->button46->Text = L"Rentz";
			this->button46->UseVisualStyleBackColor = false;
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::ForestGreen;
			this->button47->FlatAppearance->BorderSize = 0;
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Location = System::Drawing::Point(729, 341);
			this->button47->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(86, 40);
			this->button47->TabIndex = 52;
			this->button47->Text = L"Totals";
			this->button47->UseVisualStyleBackColor = false;
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::Color::ForestGreen;
			this->button48->FlatAppearance->BorderSize = 0;
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button48->Location = System::Drawing::Point(729, 391);
			this->button48->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(86, 40);
			this->button48->TabIndex = 53;
			this->button48->Text = L"Acool";
			this->button48->UseVisualStyleBackColor = false;
			// 
			// Table
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(834, 462);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Table";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Whist";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void chooseGameType(System::Object^  sender, System::EventArgs^  e) {
		
		Button ^obj = safe_cast<Button^>(sender);

		if (obj->Text == "King of Hearts")
			currentGame = Player::Games::King_of_Hearts;
		else if (obj->Text == "10 of Clubs")
			currentGame = Player::Games::Ten_of_Clubs;
		else if (obj->Text == "Queens")
			currentGame = Player::Games::Queens;
		else if (obj->Text == "Diamonds")
			currentGame = Player::Games::Diamonds;
		else if (obj->Text == "Whist")
			currentGame = Player::Games::Whist;
		else if (obj->Text == "Rentz")
			currentGame = Player::Games::Rentz;
		else if (obj->Text == "Totals")
			currentGame = Player::Games::Totals;
		else if (obj->Text == "Acool")
			currentGame = Player::Games::Acool;

		obj->BackColor = Color::Red;
		obj->Enabled = false;
		this->Close();
	}
};
}
