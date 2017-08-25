//
//  Piece.cpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#include "Piece.hpp"

Piece::Piece(bool _coul, Coord _c, std::string _nom):
coul(_coul), c(_c), nom(_nom)
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



//Cavalier
Cavalier::Cavalier(bool _coul, Coord _c, std::string _nom):
Piece(_coul, _c, _nom)
{
}

//Dame
Dame::Dame(bool _coul, Coord _c, std::string _nom):
Piece(_coul, _c, _nom)
{
}


//Fou
Fou::Fou(bool _coul, Coord _c, std::string _nom):
Piece(_coul, _c, _nom)
{
}


//Pion
int Pion::nbPions = 0;

Pion::Pion(bool _coul, Coord _c, std::string _nom):
Piece(_coul, _c, _nom), id(nbPions+1)
{
}


//Roi
Roi::Roi(bool _coul, Coord _c, std::string _nom):
Piece(_coul, _c, _nom)
{
}


//Tour
Tour::Tour(bool _coul, Coord _c, std::string _nom):
Piece(_coul, _c, _nom)
{
}



