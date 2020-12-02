#include "pch.h"
#include "supprimercatalogue.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain9(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form10 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}