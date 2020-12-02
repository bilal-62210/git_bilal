#include "pch.h"
#include "modifiercommande.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain12(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form13 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}