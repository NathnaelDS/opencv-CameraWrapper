# opencv-CameraWrapper
Camera Wrapper Class for OpenCV written in C++

The included demo shows a basic usage.

Usage:
This Wrapper Class is singleton and so you have to create the instance
```cpp
CameraWrapper *CameraWrapper::instance = 0;
```

You can then optionally specify the size of your frame while you get the Singleton Instance. If not specified the default is 640x480.
```cpp
CameraWrapper *cw = cw->getInstance(0, 300, 300);
```

You can also use openCamera and saveImage to open the camera and save the image, respectively.
```cpp
cw->openCamera();
cw->saveImage();
```
