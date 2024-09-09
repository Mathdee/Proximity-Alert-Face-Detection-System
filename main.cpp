#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include <iostream>

using namespace std;
using namespace cv;

const float FACE_SIZE_THRESHOLD = 0.3; 

int main() {
    VideoCapture video(0);
    CascadeClassifier facedetect;
    facedetect.load("haarcascade_frontalface_default.xml");

    Mat img;
    while (true) {
        video.read(img);

        vector<Rect> faces;
        facedetect.detectMultiScale(img, faces, 1.3, 5);

        for (int i = 0; i < faces.size(); i++) {
            rectangle(img, faces[i].tl(), faces[i].br(), Scalar(255, 255, 255), 3);

            float faceWidthRatio = static_cast<float>(faces[i].width) / img.cols;

            
            if (faceWidthRatio > FACE_SIZE_THRESHOLD) {
                putText(img, "ALERT: Too Close!", Point(40, 100), FONT_HERSHEY_SIMPLEX, 2, Scalar(0, 0, 255), 2);
                cout << "ALERT: Face too close to the camera!" << endl;
            }
        }

        imshow("Frame", img);
        waitKey(1);
    }

    return 0;
}