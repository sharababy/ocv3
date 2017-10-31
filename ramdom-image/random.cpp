#include <iostream>

#include <opencv2/opencv.hpp>

using namespace std;

using namespace cv;

int main(int argc, char const *argv[])
{
	Mat m1 = Mat(300, 300, CV_8UC1);
	
	randu(m1, 0, 255);

	namedWindow("random",WINDOW_AUTOSIZE);
		
	for(int i=0;i<30000;i++){
		waitKey(1);
		randu(m1, 0, 255);
		imshow("random",m1);
	}	

	

	waitKey(0);

	return 0;
}