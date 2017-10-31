#include <iostream>
   #include <string>
   #include <sstream>
   using namespace std;

   #include "opencv2/core.hpp"
   #include "opencv2/highgui.hpp"
   using namespace cv;


   int main(){

		VideoCapture cap;

		cap.open(0);

		if(!cap.isOpened())  // check if we succeeded
			
			return -1;

		namedWindow("Video",1);
       for(;;)
       {
           Mat frame;
           cap >> frame; // get a new frame from camera
           imshow("Video", frame);
           if(waitKey(30) >= 0) break;
       }
       // Release the camera or video cap

       cap.release();


		return 0;


   }