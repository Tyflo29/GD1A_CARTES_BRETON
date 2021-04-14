#include "Monstre.cpp"
#include "Monstre.h"
#include <iostream>
#include <string>

int main(){

    Monstre j1 = Monstre();
    Monstre j2 = Monstre();
    
    std::cout << "Joueur 1 :" << std::endl;
    j1.afficheMonstre();
    std::cout << "------------------" << std::endl;
    std::cout << "Joueur 2 :" << std::endl;
    j2.afficheMonstre();

    std::cout << "Joueur 1 commence" << std::endl;
    j1.attaqueMonstre(j2._tableau[1]);
    j2.attaqueMonstre(j1._tableau[1]);

    std::cout << "Joueur 1 :" << std::endl;
    j1.afficheMonstre();
    std::cout << "------------------" << std::endl;
    std::cout << "Joueur 2 :" << std::endl;
    j2.afficheMonstre();

    return 0;
}