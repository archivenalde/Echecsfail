//
//  Piece.cpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#include "Piece.hpp"

Piece::Piece(bool _coul, std::string _nom, Coord _c):
coul(_coul), nom(_nom), c(_c)
{
}


//Setteurs
void Piece::setCoordonnees(Coord _c)
{
    c = _c;
}

//Getteurs
bool Piece::getCouleur() const
{
    return coul;
}

std::string Piece::getNom() const
{
    return nom;
}

Coord Piece::getCoordonnees() const
{
    return c;
}
