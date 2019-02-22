#include<opencv2\opencv.hpp>   //Win
//#include<opencv2/opencv.hpp>  //MacOSX
#include<iostream>
#include<stdio.h>
#include<fstream>
#include<vector>

using namespace std;
using namespace cv;

Mat rgb;
char window_name[12] = "Check Color";

static void onMouse(int event, int i, int j, int f, void *p) {

//	ofstream *pfout = (ofstream*)p;
	Vec3b pix = rgb.at<Vec3b>(j, i);
	int red = rgb.at<cv::Vec3b>(j, i)[2];
	int green = rgb.at<cv::Vec3b>(j, i)[1];
	int blue = rgb.at<cv::Vec3b>(j, i)[0];
	int x = rgb.at<cv::Vec3b>(j, i)[4];
	int y = rgb.at<cv::Vec3b>(j, i)[3];
	cout << "X=" << x << " Y=" << y << ", RED=" << red << ", Green=" << green << ", BLUE=" << blue <<endl;
//	(*pfout) << "X=" << x << "Y=" << y << "RED=" << red << "Green=" << green << "BLUE=" << blue << endl;
}


int main()
{
	rgb = imread("image.jpg");
	namedWindow(window_name, CV_WINDOW_AUTOSIZE); 
//	namedWindow(window_name, WINDOW_AUTOSIZE);  //OpenCV 4.0
	ofstream fout("output.txt");
	imshow(window_name, rgb);
	setMouseCallback(window_name, onMouse);
	waitKey(0);
	fout.close();
	destroyAllWindows();
	return 0;
}





