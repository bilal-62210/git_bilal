#include "pch.h"
#include "supprimerclient.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain7(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form8 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}