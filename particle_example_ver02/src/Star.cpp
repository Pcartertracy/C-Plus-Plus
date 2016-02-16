//
//  Star.cpp
//  particle_example_Ver02
//
//  Created by Ira on 2/28/13.
//
//

#include "Star.h"

Star::Star(int pts, float innerRad, float outerRad):
pts(pts), innerRad(innerRad), outerRad(outerRad)
{
    pts_arr = new ofVec2f[pts]; // responsible for cleaning this up
    
    // calculate points and fill the array
    std::cout << "in default constructor 2"<< std::endl;
    
}

Star::~Star()
{
   std::cout << "in destructor"<< std::endl;
    delete [] pts_arr;
}

Star& Star::operator=(const Star& s)
{
     std::cout << "in assignment operator"<< std::endl;
    
    delete [] pts_arr;
    pts_arr = new ofVec2f[s.pts];
    
    pts = s.pts;
    innerRad = s.innerRad;
    outerRad = s.outerRad;
    pos = s.pos;
    spd = s.spd;
    // pts_arr = s.pts_arr; // we can't do this
    
    for(int i=0; i<pts; i++){
        pts_arr[i] = s.pts_arr[i];
    }
    
    return *this;

}

// copy constructor - called when 1 object exists(RHS) and 1 doesnt (LHS)
Star::Star(const Star& s)
{
    std::cout << "in copy constructor"<< std::endl;
    pts = s.pts;
    innerRad = s.innerRad;
    outerRad = s.outerRad;
    pos = s.pos;
    spd = s.spd;
    // pts_arr = s.pts_arr; // we can't do this
    
    pts_arr = new ofVec2f[pts];
    for(int i=0; i<pts; i++){
        pts_arr[i] = s.pts_arr[i];
    }

}















