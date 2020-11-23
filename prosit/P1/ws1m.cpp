#include <sstream>
#include <iostream>
#include "ws1.h"
#include "ws1.cpp"


using namespace std;


int main(void)
{
    affichage obj1;
    affichage* obj2;

    obj2 = new affichage;

    obj1.bonjour();
    obj2->bonjour();

    delete obj2;

}