//
//  Coord.cpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#include "Coord.hpp"

#include <iostream>

Coord::Coord(int _iL, int _iC)
{
    if (1 <= _iL && _iL <= 8)
        indL = _iL;
    else
        std::cout << "Erreur d'indicage sur la ligne lors de la creation de la coordonnée : " << _iL << std::endl;
    
    if (A <= _iC && _iC <= H)
        indC = _iC;
    else
        std::cout << "Erreur d'indicage sur la colonne lors de la creation de la coordonnée : " << _iC << std::endl;
}

//Setteurs
void Coord::setIndL(int _iL)
{
    if (1 <= _iL && _iL <= 8)
        indL = _iL;
    else
        std::cout << "Erreur d'indicage sur la ligne : " << _iL << std::endl;
}

void Coord::setIndC(int _iC)
{
    if (A <= _iC && _iC <= H)
        indC = _iC;
    else
        std::cout << "Erreur d'indicage sur la colonne : " << _iC << std::endl;
}

void Coord::setCoord(int _iL, int _iC)
{
    if (1 <= _iL && _iL <= 8)
        indL = _iL;
    else
        std::cout << "Erreur d'indicage sur la ligne : " << _iL << std::endl;
    
    if (A <= _iC && _iC <= H)
        indC = _iC;
    else
        std::cout << "Erreur d'indicage sur la colonne : " << _iC << std::endl;
}


int Coord::getIndL()
{
    return indL;
}


int Coord::getIndC()
{
    return indC;
}
