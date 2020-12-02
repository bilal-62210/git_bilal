#include "pch.h"
#include "modifierclient.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain11(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form12 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}