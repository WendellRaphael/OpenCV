#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void main() {

	string path = "imagens/monalisa.jpg";
	Mat img = imread(path);
	imshow("Monalisa", img);
	waitKey(0);

}