//
//  Star.h
//  particle_example_Ver02
//
//  Created by Ira on 2/28/13.
//
//

#ifndef __particle_example_Ver02__Star__
#define __particle_example_Ver02__Star__

#include <iostream>
#include "ofmain.h"

class Star {
    
private:
    int pts;
    float innerRad, outerRad;
    ofVec2f pos;
    ofVec2f spd;
    
    //1. if you ever allocate on the heap with "new",
    // you are responsible for deleting the memory
    // yourself, which should most often be done
    // in the destructor
    
    // 2. if you include a destructor (which you should
    // only do if 1. was true), you need to also
    // override the assignment operator and the
    // copy constructor
    
    
    ofVec2f* pts_arr;

public:
    Star(int pts=3, float innerRad=.25, float outerRad=.5);
    
    // destructor
    ~Star();
    
    // assignment operator - called when both objects exist already
    Star& operator=(const Star& s);
    
    // copy constructor - called when 1 object exists(RHS) and 1 doesnt (LHS)
    Star(const Star& s);
    

    
    
};

#endif /* defined(__particle_example_Ver02__Star__) */










