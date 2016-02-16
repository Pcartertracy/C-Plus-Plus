#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
ofBackground(143, 100, 48)
ofSetFrameRate(1)

}

//--------------------------------------------------------------

void testApp::draw(){
ofFill();
ofSetHexColor(0xd3ffd3);
ofRect(80,480,140,70);
ofSetHexColor(0xff00ff);

ofBeginShape();

ofVertex(100,500);
ofVertex(180,550);
ofVertex(100,600);

ofNextContour(true);

ofVertex(120,520);
ofVertex(160,550);
ofVertex(120,580);

ofEndShape(true);
}