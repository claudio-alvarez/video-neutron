
#include "cvideo.h"
#include <highgui.h> /* required to use OpenCV's highgui */
#include <list>
#include <jni.h>
#include <stdio.h>
#include <cv.h> /* required to use OpenCV */
#include <iostream>
using namespace std;

using namespace cv;
bool mostrar=true;
void startVideo(){

	cv::VideoCapture cap; // Abre el video, 0 si se desea usar la webcam. 
	std::string videoFile = "0";
	cap.open(0);

	if (!cap.isOpened())  // Confirmacion si el video fue abierto con exito o no.
		return ;

	namedWindow("Tarea 1", 1);// Creo la pantalla para mostrar el video.
	Mat frame;
	cap >> frame; // Obtengo el primer frame del video para mostrar un video Base.
	Mat E;
	frame.copyTo(E);  
	double width = cap.get(CV_CAP_PROP_FRAME_WIDTH);// Obtengo el ancho del video.
	double height = cap.get(CV_CAP_PROP_FRAME_HEIGHT);// Obtengo el alto del video.
	VideoWriter video;
	video.open ( "outputVideo.avi", CV_FOURCC('D','I','V','X'), 60, Size(cap.get(CV_CAP_PROP_FRAME_WIDTH), cap.get(CV_CAP_PROP_FRAME_HEIGHT)), true );
	
	while (true)// for que leera todos los frames del video hasta que el usuario lo detenga.
	{
		if(mostrar){

			cap >> frame; // Obtengo el proximo frame del video.
			int count_rows = frame.rows; // Cantidad de filas del video.
			Mat a;// Creo un "frame" para guardarlo y no referenciar al frame que cambia dentro del for.
			frame.copyTo(a);// Copio el frame del video en la variable a.
			IplImage* imageOriginal;
			imageOriginal = cvCreateImage(cvSize(width,height), IPL_DEPTH_8U, 3);
			imageOriginal->imageData = (char *) a.data;
			for (int i = 0; i < height; i++){
				for (int j = 0; j < width; j++){
					if(i%20==0||j%20==0){
						CvScalar pixel = cvGet2D(imageOriginal, i ,j);
						pixel.val[0] = 0;
						pixel.val[1] = 0;
						pixel.val[2] = 0;
						cvSet2D(imageOriginal, i, j, pixel);
					}
				}
			}
			imshow("Tarea 1", a); // Muestro el frame creado en pantalla.
			video << a;	// Guardo el frame creado en el archivo nuevo.
		cvShowImage("Smile", imageOriginal); 
		}
		if (waitKey(1) >= 0) mostrar=!mostrar;//break;// si el usuario preciona la tecla "escape" se termina el programa.
	}
	
}
JNIEXPORT void JNICALL Java_cvideo_startvideo
  (JNIEnv *, jobject){
startVideo();
}
