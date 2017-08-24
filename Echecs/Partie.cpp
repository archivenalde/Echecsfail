//
//  Partie.cpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#include "Partie.hpp"


Partie::Partie()
{
    bool couleur = true;
    
    definitionMateriel(couleur);
    couleur = !couleur;
    definitionMateriel(couleur);
    
    e = new Echiquier();
    
    j1 = new Joueur((bool)1, materiel);
    j0 = new Joueur((bool)0, materiel);
    
    ep = PARTIE_DEBUT;
}


void Partie::definitionMateriel(bool couleur)
{
    int i;
    int zone = couleur ? 1 : 8;
    int zonePions = couleur ? 2 : 7;
    
    materiel[(int)couleur][0] = new Tour     (couleur, *(new Coord(A, zone)), "tour");
    materiel[(int)couleur][1] = new Cavalier (couleur, *(new Coord(B, zone)), "cavalier");
    materiel[(int)couleur][2] = new Fou      (couleur, *(new Coord(C, zone)), "fou");
    materiel[(int)couleur][3] = new Dame     (couleur, *(new Coord(D, zone)), "dame");
    materiel[(int)couleur][4] = new Roi      (couleur, *(new Coord(E, zone)), "roi");
    materiel[(int)couleur][5] = new Fou      (couleur, *(new Coord(F, zone)), "fou");
    materiel[(int)couleur][6] = new Cavalier (couleur, *(new Coord(G, zone)), "cavalier");
    materiel[(int)couleur][7] = new Tour     (couleur, *(new Coord(H, zone)), "tour");
    
    for(i = 8; i < NB_PIECES_JOUEUR_INIT; ++i)
        materiel[(int)couleur][i] = new Pion (couleur, *(new Coord(i - 8, zonePions)), "pion");
}


//Getteurs
Joueur Partie::getJ0() const
{
    return *j0;
}


Joueur Partie::getJ1() const
{
    return *j1;
}


Echiquier Partie::getEchiquier() const
{
    return *e;
}


EtatPartie Partie::getEtatPartie() const
{
    return ep;
}


//Setteurs
void Partie::setEtatPartie(EtatPartie _ep)
{
    ep = _ep;
}
