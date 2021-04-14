#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include "Monstre.h"
#include <string>
#include <iostream>

    Monstre::Monstre() :{

    }

    void Monstre::afficheMonstre(){
       std::cout << _nom << std::endl;
       std::cout << "PV : ", _vie, " ATQ : ", _attaque << std::endl;
    }
#endif