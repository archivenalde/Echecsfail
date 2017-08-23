//
//  Echiquier.cpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#include "Echiquier.hpp"

#define NB_PIECES_TOTAL_INIT

Echiquier::Echiquier()
{
    nbPieces = NB_PIECES_TOTAL_INIT;
    nbPiecesB = NB_PIECES_TOTAL_INIT/2;
    nbPiecesN = NB_PIECES_TOTAL_INIT/2;
    
    
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
            
            Coord kase(i, j);
            
            plateau[i][j] = *(new Case( *(new Case(i,j)), couleur, occupe));
        }
    }
}
