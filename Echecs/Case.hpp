//
//  Case.hpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#ifndef CASE_HPP
#define CASE_HPP

#include "Coord.hpp"
#include "Piece.hpp"

#include <iostream> //Pour la definition de NULL

class Case {
    
public:
    Case(Coord coordonnesCase, bool couleurCase, bool occupationCase, Piece *_p = NULL);
    
    //Getteurs
    Coord getCoordonnes() const;
    bool getCouleur() const;
    bool estOccupe() const;
    Piece* getPieceSurCase() const;
    
    //Setteurs
    void setOccupation(bool);
    void setPieceSurCase(Piece*);
    
private:
    const Coord c;
    const bool couleur;
    bool occupe;
    Piece *p;
    
};

#endif /* CASE_HPP */
