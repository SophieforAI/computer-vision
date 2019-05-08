#include "opencv2/opencv.hpp"
#include "opencv2/highgui.cpp"
#include "opencv2/imgproc.hpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>


using namespace std;
using namespace cv;

int main(int argc,char** argv){
	Mat img = imread(argv[1],-1);
	if(img.empty()) return -1;
	namedWindow("read pic",1);
	imshow("read pic",img);
	waitKey(0);
	destroyWindow("read pic");
}






