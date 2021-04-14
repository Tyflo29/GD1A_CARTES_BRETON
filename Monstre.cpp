#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include "Monstre.h"
#include <string>
#include <iostream>
    
    Monstre::Monstre(){
        _nom = "Slime";
    }

    ///////////////////////////////////////////
    int Monstre::vieMonstre() {
        return _tableau[0];
    }
    int Monstre::atqMonstre() {
        return _tableau[1];
    }
    bool Monstre::fatiqueMonstre() {
        return _fatique;
    }
    ///////////////////////////////////////////
    
    void Monstre::afficheMonstre() {
       std::cout << _nom << std::endl;
       std::cout << "PV : "<< _vie <<" ATQ : " << _attaque << std::endl;
       return;
    }

    int Monstre::attaqueMonstre(int attaqueAdversaire) {
        _vie = _vie - attaqueAdversaire;
        return _vie;
    }
#endif