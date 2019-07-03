#include "CameraWrapper.cpp"

int main(){
    CameraWrapper cam(0, 300, 300);
    cam.openCamera();
    cam.saveImage();

    return -1;
}