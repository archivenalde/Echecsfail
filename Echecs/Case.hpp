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


class Case {
    
private:
    const Coord c;
    const bool couleur;
    bool occupe;
    Piece *p;
};

#endif /* CASE_HPP */
