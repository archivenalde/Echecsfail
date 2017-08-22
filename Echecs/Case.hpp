//
//  Case.hpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#ifndef Case_hpp
#define Case_hpp

#include "Coord.hpp"


class Case {
    
private:
    const Coord c;
    const bool couleur;
    bool occupe;
    Piece *p;
};

#endif /* Case_hpp */
