#include "pch.h"
#include "statistiques.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain18(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form19 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}