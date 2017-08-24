//
//  Joueur.hpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include "Piece.hpp"
#include "Echiquier.hpp" //Pour NB_PIECES_JOUEUR_INIT

class Joueur {
    
public:
    Joueur(bool couleurJoueur, Piece* materielPartie[2][NB_PIECES_JOUEUR_INIT]);
    
    //Getteurs
    bool getCouleur() const;
    bool estEchec() const;
    bool estEchecEtMat() const;
    int getNbPieces() const;
    
private:
    const bool couleur;
    bool echec;
    bool echecEtMat;
    
    Piece* materiel[16];
    int nbPieces;
    
};

#endif /* JOUEUR_HPP */
