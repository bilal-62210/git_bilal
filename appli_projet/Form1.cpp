

#include "pch.h"
#include "Form1.h"



using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form1 monFormulaire;
	Application::Run(% monFormulaire);
}