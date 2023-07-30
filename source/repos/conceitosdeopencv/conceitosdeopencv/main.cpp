#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void main() {

	string path = "imagens/monalisa.jpg";
	Mat img = imread(path);
	Mat gray, blur, canny, dil, erosao;

	cvtColor(img, gray, COLOR_BGR2GRAY);
	GaussianBlur(img, blur, Size(5, 5), 1.5);
	Canny(blur, canny,100, 200);

	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
	dilate(canny, dil, kernel);
	erode(dil, erosao, kernel);

	imshow("Monalisa", img);
	imshow("Monalisa cinza", gray);
	imshow("Monalisa Blur", blur);
	imshow("Monalisa canny", canny);
	imshow("Monalisa Dilatação", dil);
	imshow("monalisa erosao", erosao);
	waitKey(0);

}