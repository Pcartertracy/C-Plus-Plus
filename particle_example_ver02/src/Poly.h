//
//  Poly.h
//  mandala_02
//
//  Created by Ira on 2/21/13.
//
//

#ifndef __mandala_02__Poly__
#define __mandala_02__Poly__

#include <iostream>
#include "ofMain.h"

class Poly {
    
private:
    ofVec2f pos;
    ofVec2f radii;
    int sides;
    void init();
    
public:
    Poly();
    Poly(ofVec2f pos, ofVec2f radii, int sides);
    
    void setPos(const ofVec2f& pos);
    void setRadii(const ofVec2f& radii);
    void setSides(int sides);
    
    ofVec2f getPos() const;
    ofVec2f getRadii() const;
    int getSides() const;
    
};



#endif /* defined(__mandala_02__Poly__) */














