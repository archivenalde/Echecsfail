//
//  Piece.hpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#ifndef Piece_hpp
#define Piece_hpp

#include "Coord.hpp"
#include "Case.hpp"
#include "Echiquier.hpp"

#include <string>
#include <vector>

//Classe abstraite
class Piece {
    
public:
    Piece(bool couleurPiece, std::string nomPiece, Coord coordPiece);
    
    //Setteurs
    void setCoordonnees(Coord coordPiece);
    
    //Getteurs
    bool getCouleur() const;
    std::string getNom() const;
    Coord getCoordonnees() const;
    
    //Fonctions virtuelles pures
    virtual void MAJcasesAutorisees(Echiquier const& e) = 0;
    virtual void deplacement() = 0;
    
protected:
    const bool coul; //false = noir, true = blanc
    const std::string nom;
    Coord c;
    std::vector<Case> casesAutorisees;
};

#endif /* Piece_hpp */
