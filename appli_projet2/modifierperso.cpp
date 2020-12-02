#include "pch.h"
#include "modifierperso.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain10(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form11 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}