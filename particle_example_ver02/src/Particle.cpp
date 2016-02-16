//
//  Particle.cpp
//  mandala_02
//
//  Created by Ira on 2/26/13.
//
//

#include "Particle.h"

Particle::Particle()
{
    std::cout<< "in default constructor"  << std::endl;
}

Particle::Particle(const ofVec2f& pos, const ofVec2f& spd, float gravity, float r):
pos(pos), spd(spd), gravity(gravity), r(r)
{
    damping = .75;
}

void Particle::setPos(const ofVec2f& pos)
{
    this->pos = pos;
}
void Particle::setSpd(const ofVec2f& spd)
{
    this->spd = spd;
}
void Particle::setRadius(float r)
{
    this->r = r;
}
void Particle::setGravity(float gravity)
{
    this->gravity = gravity;
}

ofVec2f Particle::getPos() const
{
    return pos;
}
ofVec2f Particle::getSpd() const
{
    return spd;
}
float Particle::getRadius() const
{
    return r;
}
float Particle::getGravity() const
{
    return gravity;
}

void Particle::move()
{
    spd.y += gravity;
    pos += spd;
}
void Particle::display()
{
    //ofCircle(pos.x, pos.y, r);
    
    ofPushMatrix();
    ofTranslate(pos.x, pos.y);
    ofCircle(0, 0, r);
    ofPopMatrix();
}
void Particle::collide()
{
    if (pos.y > ofGetHeight()-r){
        pos.y = ofGetHeight()-r;
        spd.y *=- 1;
        spd.y*=damping;
    }
}










