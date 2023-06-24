#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


int main() {

	string path = "contents/hq.png";
  
	Mat img = imread(path);
	Mat imgBlur;
	GaussianBlur(img, imgBlur, Size(7,7), 5, 0);

	imshow("Image Blur", imgBlur);

	waitKey(0);
	
	return 0;
}
