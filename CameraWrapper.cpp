#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;

class CameraWrapper
{
  private:
    Mat frame;
    VideoCapture cap;

  public:
    CameraWrapper(int camera = 0, int width = 640, int height = 480)
    {

        VideoCapture cap(camera);
        this->cap = cap;
        if (!cap.isOpened())
            exit(0);

        cap.set(CV_CAP_PROP_FRAME_WIDTH, width);
        cap.set(CV_CAP_PROP_FRAME_HEIGHT, height);
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
};