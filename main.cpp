#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

//IMAGEM
//void main() {
//	string path = "imagens/monalisa.jpg";
//	Mat img = imread(path);
//	imshow("Monalisa", img);
//	waitKey(0);
//
//}

// VIDEO
//void main() {
//
//	string path = "videos/testedevideo.mp4";
//	VideoCapture cap(path);
//	Mat video;
//
//	while(true){
//	
//		cap.read(video);
//
//		imshow("video", video);
//		waitKey(20);
//
//	}
//}

// WEBCAM
void main() {

	VideoCapture cap(0);//zero pq estou usando a webcam do notebook
	Mat video;

	while(true){
	
		cap.read(video);

		imshow("video", video);
		waitKey(20);

	}
}