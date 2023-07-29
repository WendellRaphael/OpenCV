#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

//void main() {

//	string path = "imagens/monalisa.jpg";
//	Mat img = imread(path);
//	imshow("Monalisa", img);
//	waitKey(0);
//
//}


void main() {

	string path = "videos/testedevideo.mp4";
	VideoCapture cap(path);
	Mat video;

	while(true){
	
		cap.read(video);

		imshow("video", video);
		waitKey(20);

	}
}