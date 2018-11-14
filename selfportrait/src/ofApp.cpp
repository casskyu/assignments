#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    //background
    ofBackground(255, 240, 245);
    
    //hair
    ofSetColor(255, 182, 193);
    ofDrawCircle(500,340, 110);
    ofDrawCircle(500,207, 50);
    
    
    //head
    ofSetColor(205, 104, 137);
    ofDrawCircle(500, 370, 100);
    ofDrawCircle(500,410,80);
    
    //ears (L)
    ofDrawCircle(410,380,30);
    //ears (R)
    ofDrawCircle(587,380,30);
    
    //nose
    ofSetColor(238, 180, 34);
    ofDrawRectangle(490, 380, 20, 45);
    ofDrawCircle(487,415, 10);
    ofDrawCircle(513,415, 10);
    ofSetColor(255, 215, 0);
    ofDrawCircle(500,413, 15);
    
    //eyes (L)
    ofSetColor(205, 170, 125);
    ofDrawCircle(450, 380, 14);
    ofSetColor(255, 255, 255);
    ofDrawCircle(450, 377, 7);
    //eyes (R)
    ofSetColor(205, 170, 125);
    ofDrawCircle(550, 380, 14);
    ofSetColor(255, 255, 255);
   ofDrawCircle(550, 377, 7);
    
    //eyebrows (L)
     ofSetColor(255, 182, 193);
    ofDrawRectangle(427,340,50,13);
    //eyebrows (R)
    ofDrawRectangle(527,340,50,13);
    
    //mouth
    ofSetColor(139, 35, 35);
    ofDrawCircle(500, 455, 12);
    
    ofDrawCircle(492, 450, 10);
    ofDrawCircle(508, 450, 10);
    
    
    
    
    
    
    
    
    
    

}

