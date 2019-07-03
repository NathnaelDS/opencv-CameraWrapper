#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;
int main(int, char **)
{
    // TODO
    // Select Camera
    // Set Width and Height
    // Open Camera
    // Save Image
    // Close Camera

    // Open the default video camera
    // The "0" is the default
    VideoCapture cap(0);
    if (!cap.isOpened())
        return -1;

    // Get Width and Height of frames
    double dWidth = cap.set(CAP_PROP_FRAME_WIDTH, 1280);
    double dHeight = cap.set(CAP_PROP_FRAME_HEIGHT, 720);
    
    Mat frame, edges;
    namedWindow("My Camera", 1);
    for (;;)
    {
        cap.read(frame);
        // cvtColor(frame, edges, COLOR_BGR2GRAY);
        // GaussianBlur(edges, edges, Size(7, 7), 1.5, 1.5);
        // Canny(edges, edges, 0, 30, 3);
        
        // Open Camera
        imshow("My Camera", frame);
        if (waitKey(30) >= 0)
            break;
    }

    // Save Image
    imwrite("work.jpg",frame);
    return 0;
}