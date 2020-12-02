#include "pch.h"
#include "ajouterclient.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain2(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form3 monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}