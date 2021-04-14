#ifndef MONSTRE_H
#define MONSTRE_H

#include <string>
#include <vector>

class Monstre{

    private:
        std::string _nom;
        int _vie = _tableau[0];
        int _attaque = _tableau[1];
        bool _fatique = false;
    
    public:
        Monstre();
        Monstre(std::string name);
        std::vector<int> _tableau = {6,3};
        int vieMonstre();
        int atqMonstre();
        bool fatiqueMonstre();
        void afficheMonstre();
        int attaqueMonstre(int attaqueAdversaire);
        bool detruireMonstre();
        void finTour();

};

#endif