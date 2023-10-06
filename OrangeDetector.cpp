#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv) {

    // Load the video file on 0th camera
    VideoCapture cap(0);

    // Check if the video file was opened successfully
    if (!cap.isOpened()) {
        cerr << "Error: could not open video file" << endl;
        return -1;
    }

    // initialization of img matrices
    Mat hsvImg;
    Mat mask;
    Mat blurImg;

    // hmin, smin, vmin, hmax, smax, vmax
    vector<int> rangeValues = {3, 149, 95, 13, 230, 228};

    // --------- uncomment to change hsv threshold values ---------
    namedWindow("Trackbars", WINDOW_AUTOSIZE);
    for(int i = 0; i < rangeValues.size(); i++){
        createTrackbar(to_string(i), "Trackbars", &rangeValues[i], 255, NULL);
    }

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

        // lower hsv threshold
        Scalar lower(rangeValues[0], rangeValues[1], rangeValues[2]);
        // upper hsv threshold
        Scalar upper(rangeValues[3], rangeValues[4], rangeValues[5]);
        // applies threshold to new mask matrix
        inRange(hsvImg, lower, upper, mask);

        blur(mask, blurImg, Size(15, 15));

        // Display the current frame in the window
        // imshow("Img", img);
        // Display mask
        imshow("Mask", mask);
        // imshow("Blur", blurImg);

        // Change waitKey value to make it faster / slower
        if (waitKey(10) >= 0) {
            break;
        }
    }

    // Release the video file and destroy the window
    cap.release();
    destroyAllWindows();

    return 0;
}