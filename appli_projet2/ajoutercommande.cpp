#include "pch.h"
#include "ajoutercommande.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain3(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form4 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}