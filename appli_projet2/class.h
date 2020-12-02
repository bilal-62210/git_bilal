
#pragma once

#include "iostream"
#include "ajouterclient.h"
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Data::SqlClient;
using namespace System::Media;
using namespace System::Threading::Tasks;
using namespace System::Collections::Generic;

class appli
{
public:
    virtual void creer(void) = 0;
    virtual void modifier(void) = 0;
    virtual void supprimer(void) = 0;
    virtual void afficher(void) = 0;


};

class personnel : appli

{

public:
    virtual void creer(void);
    virtual void modifier(void);
    virtual void supprimer(void);
    virtual void afficher(void);

};

 class client : appli
{

public:
    virtual void creer(void);
    virtual void modifier(void);
    virtual void supprimer(void);
    virtual void afficher(void);
    void remise(void);

};

class commande : appli
{

public:
    virtual void creer(void);
    virtual void modifier(void);
    virtual void supprimer(void);
    virtual void afficher(void);

};

class facture : commande, client
{

public:
    void envoi_facture(void);
};

class stock : appli

{
public:
    virtual void creer(void);
    virtual void modifier(void);
    virtual void supprimer(void);
    virtual void afficher(void);
};

class stats : personnel, commande, stock, client
{
public:
    void panier_moyen(float);
    void chiffre_affaire(void);
    void produit_inf_reapro(void);
    void achat_total_client(void);
    void articles_plus_vendus(void);
    void articles_moins_vendu(void);
    void valeur_commerciale_stock(void);
    void valeur_achat_stock(void);
    void variations_valeur_commerciale(void);
};

