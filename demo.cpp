#include "CameraWrapper.cpp"

CameraWrapper *CameraWrapper::instance = 0;
int main()
{
    CameraWrapper *cw = cw->getInstance(0, 300, 300);
    cw->openCamera();
    cw->saveImage();

    return -1;
}