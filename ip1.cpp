#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(){
	
	Mat img = imread("ibg11.png",CV_LOAD_IMAGE_COLOR);

	namedWindow("pic",WINDOW_AUTOSIZE);


  img += Scalar(107,100,18);

	imshow("pic",img);

	waitKey(0);

	return 0;
}