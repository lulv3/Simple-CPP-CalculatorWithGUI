#pragma once
#include "CallD.h";

namespace CalculatorInCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

		static String^ numOne;
		static String^ numTwo;
		static int result;
		static bool isFirst = true;

		static CallD::Operations oper = CallD::Operations::NONE;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnResult;

	public:
		

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ txtView;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnFive;
	private: System::Windows::Forms::Button^ btnEight;
	private: System::Windows::Forms::Button^ btnNine;



	private: System::Windows::Forms::Button^ btnSix;

	private: System::Windows::Forms::Button^ btnThree;

	private: System::Windows::Forms::Button^ btnTwo;

	private: System::Windows::Forms::Button^ btnOne;
	private: System::Windows::Forms::Button^ btnFour;
	private: System::Windows::Forms::Button^ btnSeven;



	private: System::Windows::Forms::Button^ btnZero;
	private: System::Windows::Forms::Button^ btnDivide;

	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btnMinus;
	private: System::Windows::Forms::Button^ btnPlus;
	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtView = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnFive = (gcnew System::Windows::Forms::Button());
			this->btnEight = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnNine = (gcnew System::Windows::Forms::Button());
			this->btnSix = (gcnew System::Windows::Forms::Button());
			this->btnThree = (gcnew System::Windows::Forms::Button());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->btnZero = (gcnew System::Windows::Forms::Button());
			this->btnTwo = (gcnew System::Windows::Forms::Button());
			this->btnOne = (gcnew System::Windows::Forms::Button());
			this->btnFour = (gcnew System::Windows::Forms::Button());
			this->btnSeven = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtView
			// 
			this->txtView->BackColor = System::Drawing::Color::White;
			this->txtView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtView->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtView->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtView->Location = System::Drawing::Point(0, 0);
			this->txtView->Name = L"txtView";
			this->txtView->ReadOnly = true;
			this->txtView->Size = System::Drawing::Size(394, 34);
			this->txtView->TabIndex = 0;
			this->txtView->Text = L"111 + 111";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnFive);
			this->panel1->Controls->Add(this->btnEight);
			this->panel1->Controls->Add(this->btnDivide);
			this->panel1->Controls->Add(this->btnMultiply);
			this->panel1->Controls->Add(this->btnMinus);
			this->panel1->Controls->Add(this->btnClear);
			this->panel1->Controls->Add(this->btnPlus);
			this->panel1->Controls->Add(this->btnNine);
			this->panel1->Controls->Add(this->btnSix);
			this->panel1->Controls->Add(this->btnThree);
			this->panel1->Controls->Add(this->btnResult);
			this->panel1->Controls->Add(this->btnZero);
			this->panel1->Controls->Add(this->btnTwo);
			this->panel1->Controls->Add(this->btnOne);
			this->panel1->Controls->Add(this->btnFour);
			this->panel1->Controls->Add(this->btnSeven);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 34);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(394, 423);
			this->panel1->TabIndex = 1;
			// 
			// btnFive
			// 
			this->btnFive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFive->Location = System::Drawing::Point(104, 86);
			this->btnFive->Name = L"btnFive";
			this->btnFive->Size = System::Drawing::Size(95, 77);
			this->btnFive->TabIndex = 0;
			this->btnFive->Text = L"5";
			this->btnFive->UseVisualStyleBackColor = true;
			this->btnFive->Click += gcnew System::EventHandler(this, &MainForm::btnFive_Click);
			// 
			// btnEight
			// 
			this->btnEight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEight->Location = System::Drawing::Point(104, 3);
			this->btnEight->Name = L"btnEight";
			this->btnEight->Size = System::Drawing::Size(95, 77);
			this->btnEight->TabIndex = 0;
			this->btnEight->Text = L"8";
			this->btnEight->UseVisualStyleBackColor = true;
			this->btnEight->Click += gcnew System::EventHandler(this, &MainForm::btnEight_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(306, 334);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(88, 77);
			this->btnDivide->TabIndex = 0;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MainForm::btnDivide_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->Location = System::Drawing::Point(306, 252);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(88, 77);
			this->btnMultiply->TabIndex = 0;
			this->btnMultiply->Text = L"X";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MainForm::btnMultiply_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMinus->Location = System::Drawing::Point(306, 169);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(88, 77);
			this->btnMinus->TabIndex = 0;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MainForm::btnMinus_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(306, 6);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(88, 77);
			this->btnClear->TabIndex = 0;
			this->btnClear->Text = L"CLS";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MainForm::btnClear_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(306, 86);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(88, 77);
			this->btnPlus->TabIndex = 0;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MainForm::btnPlus_Click);
			// 
			// btnNine
			// 
			this->btnNine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNine->Location = System::Drawing::Point(205, 3);
			this->btnNine->Name = L"btnNine";
			this->btnNine->Size = System::Drawing::Size(95, 77);
			this->btnNine->TabIndex = 0;
			this->btnNine->Text = L"9";
			this->btnNine->UseVisualStyleBackColor = true;
			this->btnNine->Click += gcnew System::EventHandler(this, &MainForm::btnNine_Click);
			// 
			// btnSix
			// 
			this->btnSix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSix->Location = System::Drawing::Point(205, 86);
			this->btnSix->Name = L"btnSix";
			this->btnSix->Size = System::Drawing::Size(95, 77);
			this->btnSix->TabIndex = 0;
			this->btnSix->Text = L"6";
			this->btnSix->UseVisualStyleBackColor = true;
			this->btnSix->Click += gcnew System::EventHandler(this, &MainForm::btnSix_Click);
			// 
			// btnThree
			// 
			this->btnThree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThree->Location = System::Drawing::Point(205, 169);
			this->btnThree->Name = L"btnThree";
			this->btnThree->Size = System::Drawing::Size(95, 77);
			this->btnThree->TabIndex = 0;
			this->btnThree->Text = L"3";
			this->btnThree->UseVisualStyleBackColor = true;
			this->btnThree->Click += gcnew System::EventHandler(this, &MainForm::btnThree_Click);
			// 
			// btnResult
			// 
			this->btnResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResult->Location = System::Drawing::Point(3, 334);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(297, 77);
			this->btnResult->TabIndex = 0;
			this->btnResult->Text = L"=";
			this->btnResult->UseVisualStyleBackColor = true;
			this->btnResult->Click += gcnew System::EventHandler(this, &MainForm::btnResult_Click);
			// 
			// btnZero
			// 
			this->btnZero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnZero->Location = System::Drawing::Point(3, 252);
			this->btnZero->Name = L"btnZero";
			this->btnZero->Size = System::Drawing::Size(297, 77);
			this->btnZero->TabIndex = 0;
			this->btnZero->Text = L"0";
			this->btnZero->UseVisualStyleBackColor = true;
			this->btnZero->Click += gcnew System::EventHandler(this, &MainForm::btnZero_Click);
			// 
			// btnTwo
			// 
			this->btnTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTwo->Location = System::Drawing::Point(104, 169);
			this->btnTwo->Name = L"btnTwo";
			this->btnTwo->Size = System::Drawing::Size(95, 77);
			this->btnTwo->TabIndex = 0;
			this->btnTwo->Text = L"2";
			this->btnTwo->UseVisualStyleBackColor = true;
			this->btnTwo->Click += gcnew System::EventHandler(this, &MainForm::btnTwo_Click);
			// 
			// btnOne
			// 
			this->btnOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOne->Location = System::Drawing::Point(3, 169);
			this->btnOne->Name = L"btnOne";
			this->btnOne->Size = System::Drawing::Size(95, 77);
			this->btnOne->TabIndex = 0;
			this->btnOne->Text = L"1";
			this->btnOne->UseVisualStyleBackColor = true;
			this->btnOne->Click += gcnew System::EventHandler(this, &MainForm::btnOne_Click);
			// 
			// btnFour
			// 
			this->btnFour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFour->Location = System::Drawing::Point(3, 86);
			this->btnFour->Name = L"btnFour";
			this->btnFour->Size = System::Drawing::Size(95, 77);
			this->btnFour->TabIndex = 0;
			this->btnFour->Text = L"4";
			this->btnFour->UseVisualStyleBackColor = true;
			this->btnFour->Click += gcnew System::EventHandler(this, &MainForm::btnFour_Click);
			// 
			// btnSeven
			// 
			this->btnSeven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSeven->Location = System::Drawing::Point(3, 3);
			this->btnSeven->Name = L"btnSeven";
			this->btnSeven->Size = System::Drawing::Size(95, 77);
			this->btnSeven->TabIndex = 0;
			this->btnSeven->Text = L"7";
			this->btnSeven->UseVisualStyleBackColor = true;
			this->btnSeven->Click += gcnew System::EventHandler(this, &MainForm::btnSeven_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(394, 457);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->txtView);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Simple Calculator with GUI in C++";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

#pragma region Window Func
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		txtView->Text = "";
	}

#pragma region CF
	String^ GetOperAsString() 
	{
		switch (oper) 
		{
			case CallD::Operations::ADD:
				return "+";
				break;
			case CallD::Operations::SUBSTRACT:
				return "-";
				break;
			case CallD::Operations::MULTIPLY:
				return "X";
				break;
			case CallD::Operations::DIVIDE:
				return "/";
				break;
			case CallD::Operations::NONE:
				return "";
				break;
			default:
				return "Error: GetOperAsString();";
		}
	}
	void UpdateViewText() 
	{
		txtView->Text = numOne + " " + GetOperAsString() + " " + numTwo;
	}

	void AddNumber(String^ num) 
	{
		if (isFirst) {
			numOne = numOne + num;
		}
		else {
			numTwo = numTwo + num;
		}
		UpdateViewText();
	}

	void Operate() 
	{
		switch (oper) 
		{
			case CallD::Operations::ADD:
				result = System::Convert::ToInt16(numOne) + System::Convert::ToInt16(numTwo);
				break;
			case CallD::Operations::SUBSTRACT:
				result = System::Convert::ToInt16(numOne) - System::Convert::ToInt16(numTwo);
				break;
			case CallD::Operations::MULTIPLY:
				result = System::Convert::ToInt16(numOne) * System::Convert::ToInt16(numTwo);
				break;
			case CallD::Operations::DIVIDE:
				result = System::Convert::ToInt16(numOne) / System::Convert::ToInt16(numTwo);
				break;
		}
		txtView->Text = "";
		txtView->Text = System::Convert::ToString(result);
	}
#pragma endregion

#pragma region Buttons
	// NUM BUTTONS
	private: System::Void btnZero_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AddNumber("0");
	}
	private: System::Void btnOne_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AddNumber("1");
	}
	private: System::Void btnTwo_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AddNumber("2");
	}
	private: System::Void btnThree_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AddNumber("3");
	}
	private: System::Void btnFour_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AddNumber("4");
	}
	private: System::Void btnFive_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AddNumber("5");
	}
	private: System::Void btnSix_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AddNumber("6");
	}
	private: System::Void btnSeven_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AddNumber("7");
	}
	private: System::Void btnEight_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AddNumber("8");
	}
	private: System::Void btnNine_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AddNumber("9");
	}

	// OPER BUTTONS
	private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		oper = CallD::Operations::ADD;
		isFirst = false;
	}
	private: System::Void btnMinus_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		oper = CallD::Operations::SUBSTRACT;
		isFirst = false;
	}
	private: System::Void btnMultiply_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		oper = CallD::Operations::MULTIPLY;
		isFirst = false;
	}
	private: System::Void btnDivide_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		oper = CallD::Operations::DIVIDE;
		isFirst = false;
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		oper = CallD::Operations::NONE;
		txtView->Text = "";
		numOne = "";
		numTwo = "";
		isFirst = true;
	}
	private: System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Operate();
		numTwo = "";
		numOne = txtView->Text;
	}
#pragma endregion

#pragma endregion
};
}
