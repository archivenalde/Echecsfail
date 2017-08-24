//
//  Joueur.cpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#include "Joueur.hpp"

Joueur::Joueur(bool _coul, Piece* _mat[2][NB_PIECES_JOUEUR_INIT]):
couleur(_coul)
{
    echec = false;
    echecEtMat = false;
    
    nbPieces = NB_PIECES_JOUEUR_INIT;
    
    for (int i = 0; i < NB_PIECES_JOUEUR_INIT; ++i)
        materiel[i] = _mat[(int)couleur][i];
}


//Getteurs
bool Joueur::getCouleur() const
{
    return couleur;
}

bool Joueur::estEchec() const
{
    return echec;
}

bool Joueur::estEchecEtMat() const
{
    return echecEtMat;
}

int Joueur::getNbPieces() const
{
    return nbPieces;
}

