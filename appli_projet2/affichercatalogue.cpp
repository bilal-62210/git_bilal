#include "pch.h"
#include "affichercatalogue.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain17(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form18 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}