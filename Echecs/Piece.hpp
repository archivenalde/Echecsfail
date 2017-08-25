//
//  Piece.hpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#ifndef PIECE_HPP
#define PIECE_HPP

#include "Coord.hpp"
#include "Case.hpp"
#include "Echiquier.hpp"

#include <string>
#include <vector>

//Classe abstraite
class Piece {
    
public:
    Piece(bool couleurPiece, Coord coordPiece, std::string nomPiece);
    
    //Getteurs
    bool getCouleur() const;
    std::string getNom() const;
    Coord getCoordonnees() const;
    
    //Setteurs
    void setCoordonnees(Coord coordPiece);
    
    //Fonctions virtuelles pures
    virtual void MAJcasesAutorisees(Echiquier const&) = 0;
    virtual void deplacement() = 0;
    
protected:
    const bool coul; //false = noir, true = blanc
    const std::string nom;
    Coord c;
    std::vector<Case> casesAutorisees;
    
};



class Cavalier : public Piece {
    
public:
    Cavalier(bool couleurPiece, Coord coordPiece, std::string nomPiece);
    
    void MAJcasesAutorisees(Echiquier const&);
    void deplacement();
};



class Dame : public Piece {
    
public:
    Dame(bool couleurPiece, Coord coordPiece, std::string nomPiece);
    
    void MAJcasesAutorisees(Echiquier const&);
    void deplacement();
};



class Fou : public Piece {
    
public:
    Fou(bool couleurPiece, Coord coordPiece, std::string nomPiece);
    
    void MAJcasesAutorisees(Echiquier const&);
    void deplacement();
};



class Pion : public Piece {
    
private:
    static int nbPions;
    const int id;
    
public:
    Pion(bool couleurPiece, Coord coordPiece, std::string nomPiece);
    
    void MAJcasesAutorisees(Echiquier const&);
    void deplacement();
};



class Roi : public Piece {
    
public:
    Roi(bool couleurPiece, Coord coordPiece, std::string nomPiece);
    
    void MAJcasesAutorisees(Echiquier const&);
    void deplacement();
};



class Tour : public Piece {
    
public:
    Tour(bool couleurPiece, Coord coordPiece, std::string nomPiece);
    
    void MAJcasesAutorisees(Echiquier const&);
    void deplacement();
};


#endif /* PIECE_HPP */
