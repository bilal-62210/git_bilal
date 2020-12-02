#include "pch.h"
#include "supprimerperso.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain6(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form7 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}