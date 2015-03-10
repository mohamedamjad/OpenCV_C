#include <stdio.h>
#include <stdlib.h>
#include <opencv/cv.h>
#include <opencv2/core/types_c.h>
#include <opencv2/core/core_c.h>
#include <opencv2/core/mat.hpp>
#include <opencv/ml.h>
#include <opencv/highgui.h>


int main(){
    IplImage* im = cvLoadImage("images/Circleoflife5.png",CV_LOAD_IMAGE_COLOR);
    IplImage* im_result = cvCreateImage( cvGetSize(im), IPL_DEPTH_8U, 3 );
    int dim = im->height*im->width;

    printf("Hello cruel world !\n");
    printf("Height: %d pixels\n",im->height);
    printf("Width: %d pixels\n",im->width);

    // Ajouter un bruit gaussien
    cvSmooth( im, im_result, CV_GAUSSIAN, 11, 11,0,0 );

    cvNamedWindow( "Original", CV_WINDOW_AUTOSIZE );
    cvNamedWindow( "Gauss", CV_WINDOW_AUTOSIZE );
    cvShowImage("Original", im);
    cvShowImage("Gauss", im_result);
    cvWaitKey(0);
    cvReleaseImage( &im );
    cvReleaseImage( &im_result );
    cvDestroyWindow( "Example1" );
    cvDestroyWindow( "Gauss" );

    return 0;
}
