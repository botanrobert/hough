// Hough.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"

#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>

using namespace cv;

int main()
{	
	printf("%s\n", CV_VERSION);
	Mat imagine;
	imagine = imread("C:/Users/botan/Documents/GitHub/hough/src/data/linii.png");

	cvNamedWindow("fereastra");
	imshow("fereastra", imagine);
	
	cvWaitKey(0); //pentru a nu inchide fereastra
    return 0;
}

