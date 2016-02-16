//
//  Particle.h
//  mandala_02
//
//  Created by Ira on 2/26/13.
//
//

#ifndef __mandala_02__Particle__
#define __mandala_02__Particle__

#include <iostream>
#include "ofmain.h"

class Particle {
    
public:
    Particle();
    Particle(const ofVec2f& pos, const ofVec2f& spd, float gravity, float r);
    
    void setPos(const ofVec2f& pos);
    void setSpd(const ofVec2f& spd);
    void setRadius(float r);
    void setGravity(float gravity);
    
    ofVec2f getPos() const;
    ofVec2f getSpd() const;
    float getRadius() const;
    float getGravity() const;
    
    void move();
    void display();
    void collide();
    
private:
    ofVec2f pos;
    ofVec2f spd;
    float gravity;
    float damping;
    float r;
    
    
};

#endif /* defined(__mandala_02__Particle__) */
