#include "pch.h"
#include "afficherperso.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain14(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form15 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}