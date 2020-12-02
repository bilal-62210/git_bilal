#include "pch.h"
#include "modifiercatalogue.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain13(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form14 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}