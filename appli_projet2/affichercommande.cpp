#include "pch.h"
#include "affichercommande.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain16(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form17 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}