//
//  Partie.hpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#ifndef PARTIE_HPP
#define PARTIE_HPP

#include "Joueur.hpp"
#include "Echiquier.hpp"
#include "Piece.hpp"

enum e_etat_partie {PARTIE_DEBUT = 0, PARTIE_EN_COURS, PARTIE_FINIE, PARTIE_NULLE};
typedef e_etat_partie EtatPartie;

class Partie {
    
public:
    Partie();
    ~Partie(); //TODO ASAP
    
    //Getteurs
    Joueur getJ0() const;
    Joueur getJ1() const;
    Echiquier getEchiquier() const;
    EtatPartie getEtatPartie() const;
    
    //Setteurs
    void setEtatPartie(EtatPartie);
    
private:
    Joueur* j1;
    Joueur* j0;
    Echiquier* e;
    Piece* materiel[2][16]; //Piece[0] -> Pieces noires, Piece[1] -> Pieces blanches
    EtatPartie ep;
    
    void definitionMateriel(bool couleur); //Routine pour definir le tableau "materiel"
                                           //A appeler en 2 fois, pour chaque dimension du tableau
    
};


#endif /* PARTIE_HPP */
