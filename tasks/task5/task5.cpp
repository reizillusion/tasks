#include <iostream>
#include<string>
#include <opencv2/imgcodecs.hpp>
//#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
using namespace std;
using namespace cv;
int hmin = 0, smin = 50, vmin = 50;
int hmax = 10, smax = 255, vmax = 255;
int main(int argc,char*argv[]) {
	string path = argv[1];
	Mat img = imread(path);
	Mat hsvimg, mask;
	cvtColor(img, hsvimg, COLOR_BGR2HSV);
	Scalar lower(hmin, smin, vmin);
	Scalar upper(hmax, smax, vmax);
	inRange(hsvimg, lower, upper, mask);
	imshow("image", img);
	imshow("image mask", mask);
	waitKey(0);
	return 0;


}