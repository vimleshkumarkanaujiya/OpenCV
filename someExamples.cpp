// Some Basic Examples

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


int main() {

	string path = "contents/img.jpg";
	Mat img = imread(path);
	Mat imgGray, imgBlur, imgCanny, imgDil, imgEros;

	cvtColor(img, imgGray, COLOR_BGR2GRAY);
	GaussianBlur(img, imgBlur, Size(7,7), 5, 0);
	Canny(imgBlur, imgCanny, 50, 150);

	Mat kernal = getStructuringElement(MORPH_RECT, Size(5,5));

	dilate(imgCanny, imgDil, kernal);
	erode(imgDil, imgEros, kernal);

	imshow("Image Gray", imgGray);
	imshow("Image Blur", imgBlur);
	imshow("Image Canny", imgCanny);
	imshow("Image Dilation", imgDil);
	imshow("Image Erosion", imgEros);

	waitKey(0);
	
	return 0;
}
