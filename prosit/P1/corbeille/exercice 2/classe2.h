#pragma once

class CLobjet
{
public:

    double getmasse();
    double getvitesse();
    double getec();
    void calculer(void);

private:

    double masse;
    double vitesse;
    double ec;


}