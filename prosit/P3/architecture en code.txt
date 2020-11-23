#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;
//------------------------------------------------
//-------------------PROCESSUS--------------------
//------------------------------------------------

class parcour
{
    private:
    
    point2d o1;
    point3d o2;


    public:

    void parcour2d(void);
    void parcour3d(void);

};

//-------------------------------------------------
//-------------------SERVICES---------------------
//-------------------------------------------------

void parcour::parcour2d(void)
{
    this->o1.coordonnee2d();
    this->o1.distance2d();

};

void parcour::parcour3d(void)
{
    this->o2.coordonnee3d();
    this->o2.distance2d();
};

//---------------------------------------------------
//------------------COMPOSANTS-----------------------
//---------------------------------------------------



class point2d
{
  public:

  void coordonnee2d(void);
  void distance2d(void);
};


class point3d
{
    public:

    void coordonnee3d(void);
    void distance3d(void);
};

//----------------------------------------------------
//---------------------FONCTIONS----------------------
//----------------------------------------------------

void point2d::coordonnee2d(void)
{
    std::cout<< "x=10" << endl;
    std::cout<< "y=5"  << endl;
};

void point3d::coordonnee3d(void)
{
    std::cout<< "x=8" << endl;
    std::cout<< "y=12"  << endl;
    std::cout<< "z=3"  << endl;
};

void point2d::distance2d(void)
{
    std:cout<< "la distance est ?"<<endl;
};

void point3d::distance3d(void)
{
    std:cout<< "la distance est ?"<<endl;
};
