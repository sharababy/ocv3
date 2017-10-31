#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace cv;

int main(){
	
	Mat img = imread("ibg11.png",IMREAD_UNCHANGED);

	namedWindow("pic",WINDOW_AUTOSIZE);

	rectangle(img, Point( 45, 7 ), Point( 180, 35),Scalar(0, 0 ,255));
	
	string q="_";
		
	putText(img, q , Point(10,30), FONT_HERSHEY_SIMPLEX, 0.5, Scalar(0,200,0), 1);

	imshow("pic",img);

	int j=50;

	for(int i=50;i<150;i++){


		putText(img, q , Point(i+10,i+10), FONT_HERSHEY_SIMPLEX, 0.8, Scalar(0,0,200), 2);
		putText(img, q , Point(200-i,j+10), FONT_HERSHEY_SIMPLEX, 0.8, Scalar(0,0,200), 2);

		imshow("pic",img);
		waitKey(1);

		j=j+1;
	}

	waitKey(0);


	return 0;
}