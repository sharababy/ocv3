#include <iostream>

#include <opencv2/opencv.hpp>

using namespace std;

using namespace cv;

int main()
{	
	
	Mat me = imread("me.jpg",IMREAD_GRAYSCALE);

	Mat mask(me.rows , me.cols,CV_8U,Scalar(0,0,0));

	circle(mask, Point(me.rows/2,me.cols/2), 350, 255, -1);

	namedWindow("mask");

	Mat r;
		
	bitwise_and(mask,me,r);

	imshow("mask",r);

	const uchar white = 255;
     for(int i = 0; i < r.rows; i++)
     for(int j = 0; j < r.cols; j++)
       if (!mask.at<uchar>(i,j))
       r.at<uchar>(i,j)=white;

	namedWindow("merged",WINDOW_AUTOSIZE);

	imshow("merged",r);

	waitKey(0);
	return 0;
}