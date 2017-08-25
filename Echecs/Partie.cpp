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
    
    couleur = !couleur;
    
    e = new Echiquier();
    
    j1 = new Joueur((bool)1);
    j0 = new Joueur((bool)0);
    
    ep = PARTIE_DEBUT;
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
