#pragma once

namespace Whist {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button ^newGame;

	private: System::ComponentModel::Container ^components;
	
	

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			// New Game Button //
			this->newGame = (gcnew System::Windows::Forms::Button());
			this->newGame->Location = System::Drawing::Point(100, 100);
			this->newGame->Text = L"NEW GAME";
			this->newGame->Size = System::Drawing::Size(50, 50);
			this->newGame->UseVisualStyleBackColor = true;

			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(1024,800);
			this->Text = L"WHIST";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

			
		}
#pragma endregion
	};
}
