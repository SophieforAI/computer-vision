#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <stdlib.h>
#include <stdio.h>


using namespace std;
using namespace cv;

//define variable
Mat src;
Mat dst;
int top1,bottom1,left1,right1;
int borderType= BORDER_CONSTANT;
char windowname[]="CopyMakeBorder_demo";
Scalar value;
RNG rng(12345);

int main(int argc,char** argv){
	int c;//button
	src = imread(argv[1]);
	if (src.empty()) return -1;
	printf("\n copyMakeBorder:\n");
	printf("\n---------------------\n");
	printf("**press 'c' to set a constant border \n");
	printf("**press 'r' to set a replicate border \n");
	printf("**press 'ECS' to exit program");


	top1 = (int) (src.rows*0.05);
	left1 = (int) (src.cols*0.05);
	bottom1 = (int)(src.rows*0.05);
	right1 = (int)(src.cols*0.05);
	namedWindow(windowname,0);
	//initialize
	dst = src;
    while(true){
		c = waitKey(0);
		if ((char)c==27){break;}
		else if((char)c=='c')
		    {dst=borderInterpolate(3,src.rows,BORDER_REFLECT_101);}
		else if((char)c=='r')
		    {dst=borderInterpolate(3,src.cols,BORDER_WRAP);}
		value = Scalar(rng.uniform(0,255),rng.uniform(0,255),rng.uniform(0,255));
		


		imshow(windowname,dst);
	
	
	}
	return 0;
}




