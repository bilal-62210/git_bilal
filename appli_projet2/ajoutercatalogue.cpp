#include "pch.h"
#include "ajoutercatalogue.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain5(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form6 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}