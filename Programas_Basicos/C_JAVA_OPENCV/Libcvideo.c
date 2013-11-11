
#include "cvideo.h"
#include <highgui.h> /* required to use OpenCV's highgui */
#include <list>
#include <jni.h>
#include <stdio.h>
#include <cv.h> /* required to use OpenCV */
#include <iostream>
using namespace std;

using namespace cv;
void startVideo(){

	cv::VideoCapture cap; // Abre el video, 0 si se desea usar la webcam. 
	std::string videoFile = "0";
	cap.open(0);

	if (!cap.isOpened())  // Confirmacion si el video fue abierto con exito o no.
		return ;

	namedWindow("Tarea 1", 1);// Creo la pantalla para mostrar el video.

	std::vector<Mat> frames;// Creo un vector para guardar los frames del video.
	Mat frame;
	cap >> frame; // Obtengo el primer frame del video para mostrar un video Base.
	Mat E;
	frame.copyTo(E);  
	double width = cap.get(CV_CAP_PROP_FRAME_WIDTH);// Obtengo el ancho del video.
	double height = cap.get(CV_CAP_PROP_FRAME_HEIGHT);// Obtengo el alto del video.
	//VideoWriter video("capture.avi", -1, 30, cvSize((int) width, (int) height));


	for (;;)// for que leera todos los frames del video hasta que el usuario lo detenga.
	{
		cap >> frame; // Obtengo el proximo frame del video.
		int count_rows = frame.rows; // Cantidad de filas del video.
		Mat a;// Creo un "frame" para guardarlo y no referenciar al frame que cambia dentro del for.
		frame.copyTo(a);// Copio el frame del video en la variable a.
		frames.push_back(a);// Agrego el frame "a" a el vector.
		if (frames.size() == count_rows/2) // Verifico si ya tengo los frames suficientes si es asi, elimino el mas viejo.
			frames.erase(frames.begin());
		for (int start = 0, row_number = 0; start < frames.size() ; start++, row_number += 2)
		{
			Mat row = E.row(row_number);
			frames[frames.size() - 1 - start].row(row_number).copyTo(row);
			 row = E.row(row_number+1);
			frames[frames.size() - 1 - start].row(row_number+1).copyTo(row);
		}
		imshow("Tarea 1", E); // Muestro el frame creado en pantalla.
//		video << E;	// Guardo el frame creado en el archivo nuevo.
		if (waitKey(1) >= 0) break;// si el usuario preciona la tecla "escape" se termina el programa.
	}
	
}
JNIEXPORT void JNICALL Java_cvideo_startvideo
  (JNIEnv *, jobject){
startVideo();
}
