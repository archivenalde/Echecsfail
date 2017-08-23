//
//  Case.cpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#include "Case.hpp"


Case::Case(Coord _c, bool _coul, bool _o, Piece* _p):
c(_c), couleur(_coul), occupe(_o), p(_p)
{
}


//Getteurs
Coord Case::getCoordonnes() const
{
    return c;
}

bool Case::getCouleur() const
{
    return couleur;
}

bool Case::estOccupe() const
{
    return occupe;
}

Piece* Case::getPieceSurCase() const
{
    return p;
}


//Setteurs
void Case::setOccupation(bool _o)
{
    occupe = _o;
}


void Case::setPieceSurCase(Piece *_p)
{
    p = _p;
}

