#include "pch.h"
#include "supprimercommande.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain8(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form9 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}