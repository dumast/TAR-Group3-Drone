#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv) {

    // Load the video file
    VideoCapture cap(0);

    // Check if the video file was opened successfully
    if (!cap.isOpened()) {
        cerr << "Error: could not open video file" << endl;
        return -1;
    }

    // Create a window to display the video frames
    namedWindow("Img", WINDOW_NORMAL);
    namedWindow("Mask", WINDOW_NORMAL);

    Mat hsvImg;
    Mat inRangeImg;
    Mat mask;
    Mat dilateImg;

    vector<int> rangeValues = {3, 149, 95, 13, 230, 228};

    // namedWindow("Trackbars", WINDOW_AUTOSIZE);
    // for(int i = 0; i < rangeValues.size(); i++){
    //     createTrackbar(to_string(i), "Trackbars", &rangeValues[i], 255, NULL);
    // }

    // Loop over the video frames and display them in the window
    while (true) {
        // Read the next frame from the video file
        Mat img;
        cap.read(img);

        // Check if the frame was read successfully
        if (img.empty()) {
            break;
        }
        // convert RGV to HSV
        cvtColor(img, hsvImg, COLOR_BGR2HSV);
        Scalar lower(rangeValues[0], rangeValues[1], rangeValues[2]);
        Scalar upper(rangeValues[3], rangeValues[4], rangeValues[5]);
        inRange(hsvImg, lower, upper, mask);

        // Display the current frame in the window
        imshow("Img", img);
        imshow("Mask", mask);

        // Wait for a key press (or 30 milliseconds) to allow the frame to be displayed
        if (waitKey(100) >= 0) {
            break;
        }
    }

    // Release the video file and destroy the window
    cap.release();
    destroyAllWindows();

    return 0;
}