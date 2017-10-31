#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(){
	

	Mat in_frame;
	
	namedWindow("vid",WINDOW_AUTOSIZE);

	VideoCapture inVid(0);
		
	int k=1;

	 while (true) {
       // Read frame from camera (grabbing and decoding)
    	inVid >> in_frame;
		imshow("vid", in_frame); 

		if (waitKey(3) >= 0)
			break;

	}

	

	waitKey(0);

	return 0;
}