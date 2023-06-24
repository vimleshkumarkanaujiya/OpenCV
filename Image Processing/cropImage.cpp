#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


int main() {

	string path = "contents/img.jpg";
	Mat img = imread(path);
	Mat imgResize, imgCrop;
	resize(img, imgResize, Size(320, 240));

	Rect roi(100, 100, 160, 120);
	imgCrop = img(roi);

	imshow("Image Resize", imgResize);
	imshow("Image Crop", imgCrop);

	waitKey(0);
	
	return 0;
}
