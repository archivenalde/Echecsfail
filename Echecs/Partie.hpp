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
    
private:
    Joueur j1;
    Joueur j2;
    Echiquier* e;
    Piece* pieces[2][16]; //Piece[0] -> Pieces blanches, Piece[1] -> Pieces noires
    EtatPartie ep;
};


#endif /* PARTIE_HPP */
