#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    fadeTimer.setLength(100);
    fadeTimer.start();
    delayTimer.setFramerate(15);
    hysteresis.setDelay(1);
    hysteresis.set(false);
    lerpTimer.setDuration(10);
    lerpTimer.setToValue(0);
    lerpTimer.lerpToValue(20);
}

//--------------------------------------------------------------
void ofApp::update(){
    rateTimer.tick();
}

//--------------------------------------------------------------
void ofApp::draw(){
    if(hysteresis.wasTriggered()){
        ofDrawBitmapString("Hysteresis Triggered", 10, 20);
    }
    if(delayTimer.tick()){
        ofDrawBitmapString("delayTimer Triggered", 10, 40);
    }
    if(lerpTimer.getDone()){
        ofDrawBitmapString("lerpTimer Triggered", 10, 60);
    }else{
        ofDrawBitmapString(ofToString(lerpTimer.getProgress(), 3), 10, 60);
    }
    if(fadeTimer.getActive()){
        ofDrawBitmapString("fadeTimer Active "+ofToString(fadeTimer.get(), 4), 10, 80);
    }
    
    ofDrawBitmapString("rateTimer "+ofToString(rateTimer.getFrameRate(), 4), 10, 100);
    ofDrawBitmapString("rateTimer "+ofToString(rateTimer.getPeriod(), 4), 10, 120);
    
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
