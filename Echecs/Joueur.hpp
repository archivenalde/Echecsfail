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

class Joueur {
    
private:
    const bool couleur;
    Piece* materiel[16];
    bool echec;
    bool echecEtMat;
    
};

#endif /* JOUEUR_HPP */
