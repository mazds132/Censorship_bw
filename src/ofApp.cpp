#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //here is where we load the original image from a file:
    pic.loadImage("images/gridHand200x333.jpg");
    pic2.loadImage("images/gridHand200x333.jpg");
    h = pic.height;
    w = pic.width;
    ofBackground(255,255,255);
    
//    hand.getPixels();
    
//    for (line = 0; line <  h/GRIDSIZE; line++)
//    {
//        for (column = 0; column <  w/GRIDSIZE; column++)
//        {
//            //cut grid pieces from the main picture, save them in the 2D array "grid[][]":
//            grid[column][line].cropFrom(hand, column*GRIDSIZE, line*GRIDSIZE, GRIDSIZE, GRIDSIZE);
//            
//            //here is where we put a black border on each grid sqaure:
//            for (vpix = 0; vpix < GRIDSIZE; vpix++)
//            {
//                for (hpix = 0; hpix < GRIDSIZE; hpix++)
//                {
//                    if (hpix == 0 or hpix == (GRIDSIZE-1))
//                        grid[column][line].setColor(vpix,hpix,ofColor(0,0,0));
//                    if (vpix == 0 or vpix == (GRIDSIZE-1))
//                        grid[column][line].setColor(vpix,hpix,ofColor(0,0,0));
//                }
//            }
            
            //we must update the file after adding the border color:
            //grid[column][line].update();
//        }
//    }
}


//--------------------------------------------------------------
void ofApp::update(){
    
//    unsigned char *pixels=hand.getPixels();
//    int index = mouseY*hand.width*3 + mouseX*3;
//    int red = pixels[index];
//    int green = pixels[index+1];
//    int blue = pixels[index+2];
//    printf(">>>>%i >>>%i >>>%i\n",red,green,blue);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    //set background color to white:
    ofSetWindowShape(800,400);
    //ofSetColor(255,255,255);
    //background.draw(0,0);
    
    //draw original photo on left side of window:
    pic.draw(10, 10);
    unsigned char * pixels = pic.getPixels();
    int counter = 0;
    for(int i = 0; i < pic2.width*pic2.height; i++){

        if ( pixels[i] > 150){
            pic2.setColor(i%(w),i/(w),ofColor(0));
            counter ++;
        }
//        else hand2.setColor(i%(w),i/(w),ofColor(115));
    }
    pic2.update();
    pic2.draw(300, 10);
    
    
//    printf("num light pixels= %i \n", counter);
//
//
//    //now draw the outlined grid pieces on right side of window-- each piece separate:
//    for (column = 0; column <  w/GRIDSIZE; column++)
//    {
//        for (line = 3; line <  h/GRIDSIZE; line++)
//        {
//            grid[column][line].draw(column*GRIDSIZE+500+(column*5), line*GRIDSIZE+10+(line*5));
//        }
//    }
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