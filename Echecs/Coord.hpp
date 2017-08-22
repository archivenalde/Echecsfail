//
//  Coord.hpp
//  Echecs
//
//  Created by Adlane Ladjal on 22/08/2017.
//  Copyright © 2017 Adlane Ladjal. All rights reserved.
//

#ifndef Coord_hpp
#define Coord_hpp

#include <stdio.h>

enum {A = 0, B, C, D, E, F, G, H};


class Coord
{
    
public:
    Coord(int indiceLigne, int indiceColonne);
    
    //Setteurs
    void setIndL(int indiceLigne);
    void setIndC(int indiceColonne);
    void setCoord(int indiceLigne, int indiceColonne);
    
    //Getteurs
    int getIndL();
    int getIndC();
    
private:
    int indL; //Entre A et H
    int indC; //Entre 1 et 8
    
};


#endif /* Coord_hpp */
