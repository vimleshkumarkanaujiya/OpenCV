#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


int main() {

	string path = "contents/hq.png";
	Mat img = imread(path);
	Mat imgGray;

	cvtColor(img, imgGray, COLOR_BGR2GRAY);

	imshow("Image Gray", imgGray);

	waitKey(0);
	
	return 0;
}
