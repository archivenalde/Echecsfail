//
//  Joueur.hpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include "Piece.hpp"
#include "Echiquier.hpp" //Pour NB_PIECES_JOUEUR_INIT

class Joueur {
    
public:
    Joueur(bool couleurJoueur);
    ~Joueur(); //TODO
    
    //Getteurs
    bool getCouleur() const;
    bool estEchec() const;
    bool estEchecEtMat() const;
    int getNbPieces() const;
    
    //Setteurs
    void setEchec(bool);
    void setEchecEtMat(bool);
    
    void deplacerPiece(); //TODO utiliser la methode setPieceSurCase.

    
private:
    const bool couleur;
    bool echec;
    bool echecEtMat;
    
    Piece* materiel[NB_PIECES_JOUEUR_INIT];
    int nbPieces;
    
    void definitionMateriel(); //Routine pour definir le tableau "materiel"
    
};

#endif /* JOUEUR_HPP */
