#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
 
using namespace cv;
using namespace std;
 
Mat rotate(Mat sr, double ang)   //Rotate function returning mat object with parametres image file and angle    
{
    Mat dt;      //Mat object for output image file
    Point2f pt(sr.cols/2., sr.rows/2.);          //point from where to rotate    
    Mat r = getRotationMatrix2D(pt, ang, 1.0);      //Mat object for storing after rotation
    warpAffine(sr, dt, r, Size(sr.cols, sr.rows));  ///applie an affine transforation to image.
    return dt;         //returning Mat object for output image file
}
 
int main()
{
    Mat sr = imread("1.png");           //reading image file in mat object
 
    Mat dt;      //Mat object for output image file
    dst = rotate(sr, 30);       //rotating image with 30 degree angle
 
    imshow("src", sr);          //displaying input image file
    imshow("dt", dt);         //displaying output image file
    waitKey(0);                     //to exit press escape
    return 0;
}
