//
//  Poly.cpp
//  mandala_02
//
//  Created by Ira on 2/21/13.
//
//

#include "Poly.h"

Poly::Poly()
{
    pos = ofVec2f(0,0);
    radii = ofVec2f(1, 1);
    sides = 3;
    
    init();
}

// efficient way to initialize through the constructor
Poly::Poly(ofVec2f pos, ofVec2f radii, int sides):
pos(pos), radii(radii), sides(sides)
{
   // additional initialization here
    init();
}

/* a less efficinet way of iniitalizing the constructur
 Poly::Poly(ofVec2f pos, ofVec2f radii, int sides)
{
    this->pos = pos;
    this->radii = radii;
    this->sides = sides;
}
 */

// generate polygon
void Poly::init()
{
    float theta = 0;
    float x = 0;
    float y = 0;
   
    ofTranslate(pos.x, pos.y);
    ofBeginShape();
    for(int i=0; i<sides; i++){
        x = cos(theta) * radii.x;
        y = sin(theta) * radii.y;
        ofVertex(x, y);
        theta += TWO_PI/sides;
    }
   
    ofEndShape(close);
}

void Poly::setPos(const ofVec2f& pos)
{
    this->pos = pos; // assign parmater to field of same name
}
void Poly::setRadii(const ofVec2f& radii)
{
    this->radii = radii; // assign parmater to field of same name

}
void Poly::setSides(int sides)
{
    this->sides = sides; // assign parmater to field of same name

}

ofVec2f Poly::getPos() const
{
    return pos;
}
ofVec2f Poly::getRadii() const
{
    return radii;
}
int Poly::getSides() const
{
    return sides;
}
