//CLexplorateur.cpp
#include "pch.h"
#include "CLexplorateur.h"
#define ARRAY_SIZE 2

namespace NS_composants
{
	array<String^>^ CLfichier::explorerUnDossier(String^ dossier)
	{
		array< String^>^ file = gcnew array< String^>(ARRAY_SIZE);
		return file;
	}
	void CLfichier::effacer(String^ fichier)
	{
		System::IO::File::Delete(fichier);
	}
	void CLfichier::copier(String^ fichierSource, String^ fichierDestination)
	{
		String^ nomDeFichierExtension;
		nomDeFichierExtension = System::IO::Path::GetFileName(fichierSource);
		System::IO::File::Copy(fichierSource, fichierDestination + "\\" + nomDeFichierExtension);
	}
}
