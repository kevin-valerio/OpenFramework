#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	//set up the GUI panel
	gui.setup();

	//add GUI elements
	gui.add(scalarValue.setup("Scalar Value", 0.5, 0, 1));

	//load image
	imgCat.load("cat.jpg");
	imgCat.setImageType(OF_IMAGE_GRAYSCALE);
	imgSurf.load("surf.jpg");
	imgSurf.setImageType(OF_IMAGE_GRAYSCALE);

	matCat = toCv(imgCat);
	matSurf = toCv(imgSurf);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {

	drawMat(imageBlend(matCat, matSurf, scalarValue), 0, 0);
	gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}

Mat ofApp::imageBlend(Mat m1, Mat m2, float w) {
	return m1 * w + m2 * (1 - w);
}
