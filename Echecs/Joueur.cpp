//
//  Joueur.cpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#include "Joueur.hpp"

Joueur::Joueur(bool _coul):
couleur(_coul)
{
    echec = false;
    echecEtMat = false;
    
    nbPieces = NB_PIECES_JOUEUR_INIT;
    
    definitionMateriel();
}

void Joueur::definitionMateriel()
{
    int i;
    int zone = couleur ? 1 : 8;
    int zonePions = couleur ? 2 : 7;
    
    materiel[0] = new Tour     (couleur, *(new Coord(A, zone)), "tour");
    materiel[1] = new Cavalier (couleur, *(new Coord(B, zone)), "cavalier");
    materiel[2] = new Fou      (couleur, *(new Coord(C, zone)), "fou");
    materiel[3] = new Dame     (couleur, *(new Coord(D, zone)), "dame");
    materiel[4] = new Roi      (couleur, *(new Coord(E, zone)), "roi");
    materiel[5] = new Fou      (couleur, *(new Coord(F, zone)), "fou");
    materiel[6] = new Cavalier (couleur, *(new Coord(G, zone)), "cavalier");
    materiel[7] = new Tour     (couleur, *(new Coord(H, zone)), "tour");
    
    for(i = 8; i < NB_PIECES_JOUEUR_INIT; ++i)
        materiel[i] = new Pion (couleur, *(new Coord(i - 8, zonePions)), "pion");
}

void Joueur::deplacerPiece()
{
    
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


//Setteurs
void Joueur::setEchec(bool e)
{
    echec = e;
}


void Joueur::setEchecEtMat(bool e)
{
    echecEtMat = e;
}
