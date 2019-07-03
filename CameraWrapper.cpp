#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;

class CameraWrapper
{
  private:
    Mat frame;
    VideoCapture cap;

  public:
    CameraWrapper(int camera, int width, int height)
    {

        VideoCapture cap(0);
        if (!cap.isOpened())
            exit(0);
    }

    void openCamera()
    {
        namedWindow("My Camera", 1);
        for (;;)
        {
            cap.read(frame);
            
            // Open Camera
            imshow("My Camera", frame);
            if (waitKey(30) >= 0)
                break;
        }
    }

    void saveImage()
    {
        // Save Image
        imwrite("work.jpg", frame);
    }

    void closeCamera()
    {
    }
}