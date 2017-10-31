#include <iostream>

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


int main(){
	
	Mat me = imread("ibg11.png",IMREAD_UNCHANGED);

	namedWindow("original");

	imshow("original",me);

	Mat new_me = me.clone();

	uchar R,G,B;

	for(int i=0; i< me.rows; i++){
		Vec3b* pixel_row = new_me.ptr<Vec3b>(i);
		for(int j=0 ; j< me.cols;j++){	

			B = pixel_row[j][0];

			G = pixel_row[j][1];

			R = pixel_row[j][2];

			if(B < 10 && R <10 && G<10){
				pixel_row[j][0] = 255;
				pixel_row[j][2] = 255;
				pixel_row[j][1] = 255;
			}
			else if((G-B>50) && (G-R >50)){
				pixel_row[j][0] = 10;
				pixel_row[j][2] = 200;
				pixel_row[j][1] = 10;

			}



		}
	}

	namedWindow("New");

	imshow("New",new_me);

	waitKey(0);

	return 0;
}