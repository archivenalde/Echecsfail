//
//  Echiquier.hpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#ifndef ECHIQUIER_HPP
#define ECHIQUIER_HPP

#include "Case.hpp"

#define NBL 8
#define NBC 8
#define NBC_BUFFER NBC + 1

class Echiquier {
    
private:
    Case* plateau[NBL][NBC_BUFFER];
    int nbPieces; //Pieces sur le plateau au cours d'une partie
    int nbPiecesB; //Pieces blanches sur le plateau au cours d'une partie
    int nbPiecesN; //Pieces noires sur le plateau au cours d'une partie
    
    
};

#endif /* ECHIQUIER_HPP */
