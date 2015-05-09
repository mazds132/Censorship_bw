#pragma once

#include "ofMain.h"

#define GRIDSIZE 100 //pixel dimension of grid square

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofImage pic, pic2;
    ofImage grid[6][10];
    ofImage background;
    //ofPixels pic;
    
    int line, column, vpix, hpix, h, w;
    
    
};

