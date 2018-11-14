#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
     img1.load("star.png");
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    ofBackground(ofColor::pink);
    ofSetBackgroundAuto(false);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if(ofGetMousePressed(OF_MOUSE_BUTTON_LEFT))
    {
        
        float hue = ofRandom(255);
        ofSetColor(ofColor::fromHsb(hue, 180, 255));
        
        int size = ofRandom(10,250);
        
        img1.draw(ofGetMouseX(), ofGetMouseY(), size, size);
        
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == ' ')
    {
        ofColor c = ofColor::fromHsb(ofRandom(255), 180, 255);
        ofClear(c);
        
    }
    if(key == 'p')
    {
        ofSaveScreen("screenShot_"+ofGetTimestampString()+".png");
        
        std::cout<<"Snap"<<std::endl;
    }

}

