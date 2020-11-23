#include <sstream>
#include <iostream>
#include "classe.h"
#include "fonction.cpp"

int main(void)
{
   Cla o1;
   Cla* o2;

   o2 = new Cla();

   o1.afficher();
   o2->afficher();
   cout << "l'adresse de o1 est  " << &o1 << endl;
   cout << "l'adresse de o2 est " << &o2 << endl;
   
   delete o2;
   

}