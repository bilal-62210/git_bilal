#include "pch.h"
#include "ajouterperso.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain1(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form2 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}