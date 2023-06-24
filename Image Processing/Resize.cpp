// Resize the image

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


int main() {

	string path = "contents/img.jpg";
	Mat img = imread(path);
	Mat imgResize;
  
	resize(img, imgResize, Size(320, 240));

	imshow("Image Resize", imgResize);

	waitKey(0);
	
	return 0;
}
