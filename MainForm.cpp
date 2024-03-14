#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ array) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CalculatorInCPP::MainForm form;
	Application::Run(% form);
}

