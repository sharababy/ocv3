#include <iostream>

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


int main(){
	
	Mat me = imread("me.jpg",IMREAD_UNCHANGED);

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

			if( (200 < B) && ( B<= 255) && (200 < R ) && ( R <= 255) && (200< G) && (G  <= 255) ){
				pixel_row[j][0] = 0;
				pixel_row[j][2] = 0;
				pixel_row[j][1] = 0;
			}
			
			B = pixel_row[j][0];

			G = pixel_row[j][1];

			R = pixel_row[j][2];

			if( B==0 && G==0 && R==0 ){
				pixel_row[j][0] = 244;
				pixel_row[j][2] = 204;
				pixel_row[j][1] = 230;
			}



		}
	}

	namedWindow("New",WINDOW_FREERATIO);

	imshow("New",new_me);

	waitKey(0);

	return 0;
}