#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(50);
    
    
    //system time (functions)
    int seconds = ofGetSeconds();
    int minutes = ofGetMinutes();
    int hours = ofGetHours();// hours is in 24hr time
    
    //map these numbers to a rotation
    
    float sDegree = ofMap(seconds, 0, 60, 0, 360);
    float mDegree = ofMap(minutes, 0, 60,0,360);
    float hDegree = ofMap(hours, 0,24, 0, 720);
    
    //great now we have our roation amounts
    ofPushMatrix();
    //drawing the second hand, use sDegree
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZDeg(180);
        ofPushMatrix();
            //translate to the middle of the screen
            //drawing the second hand, use sDegree
            ofRotateZDeg(sDegree);
            ofSetLineWidth(1);
            ofSetColor(ofColor::red);
            ofDrawLine(0,0,0,300);
        ofPopMatrix();
    
        // draw the minute hand
        ofPushMatrix();
            ofRotateZDeg(mDegree);
            ofSetColor(ofColor::purple);
            ofDrawLine(0,0,0,250);
            ofSetLineWidth(5);
        ofPopMatrix();
    
        ofPushMatrix();
            ofRotateZDeg(hDegree);
            ofSetColor(ofColor::hotPink);
            ofDrawLine(0,0,0,150);
            ofSetLineWidth(10);
        ofPopMatrix();
    
    ofPopMatrix();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
