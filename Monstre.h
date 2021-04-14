#ifndef MONSTRE_H
#define MONSTRE_H

#include "ZoneDeJeu.h"
#include <string>

class Monstre{

    private:
        string _nom = "Slime";
        int _vie = 6;
        int _attaque = 3;
        bool fatique = false;
    
    public:
        Monstre();
        void afficheMonstre();
        void attaqueMonstre();
        bool detruireMonstre();
        void finTour();

};

#endif