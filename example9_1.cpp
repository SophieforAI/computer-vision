#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main(int argc,char** argv){
	cv::namedWindow(argv[1],1);
	Mat img = imread(argv[1]);
	imshow(argv[1],img);
	while(true){
		if(waitKey(100/*milliseconds*/)==27) break;
	
	}
	destroyWindow(argv[1]);
	exit(0);
}
