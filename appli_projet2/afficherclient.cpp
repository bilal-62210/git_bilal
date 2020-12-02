#include "pch.h"
#include "afficherclient.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain15(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form16 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}