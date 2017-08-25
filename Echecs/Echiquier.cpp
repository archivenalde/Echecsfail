//
//  Echiquier.cpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#include "Echiquier.hpp"


Echiquier::Echiquier()
{
    nbPieces = NB_PIECES_TOTAL_INIT;
    nbPiecesB = NB_PIECES_JOUEUR_INIT;
    nbPiecesN = NB_PIECES_JOUEUR_INIT;
    
    bool couleur = false;
    bool occupe = true;
    
    for (int i = A; i <= H; ++i)
    {
        for (int j = 1; j <= 8; ++j)
        {
            couleur = !couleur;
            if (B < i && i < G)
                occupe = false;
            else
                occupe = true;
            
            plateau[i][j] = *(new Case(*(new Coord(i, j)), couleur, occupe));
        }
    }
}
