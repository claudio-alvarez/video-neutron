
#include <highgui.h> /* required to use OpenCV's highgui */
#include <list>
#include <stdio.h>
#include <cv.h> /* required to use OpenCV */
#include <iostream>
using namespace std;

using namespace cv;
bool mostrar=true;

class MostrarClass{
	IplImage* imageOriginal;
	int height;
	int width;
	int ancho;
	public:
	void Define(int Width, int Height,int Ancho){
		height=Height;
		width=Width;
		ancho = Ancho;
		imageOriginal = cvCreateImage(cvSize(640,480), IPL_DEPTH_8U, 3);
		for (int i = 0; i < height; i++){
			for (int j = 0; j < width; j++){
					CvScalar pixel;
					pixel.val[0]=100;	
					pixel.val[1]=100;
					pixel.val[2]=100;
					cvSet2D(imageOriginal, i, j, pixel);
			}
		}
		cvShowImage("Smile", imageOriginal);
	}
	void MostrarImagen(int a,int b,int imagen[]){
			for (int i = 0; i < ancho; i++){
				for (int j = 0; j < ancho; j++){
					CvScalar pixel;
					pixel.val[0]=imagen[i*3*ancho+j*3];	
					pixel.val[1]=imagen[i*3*ancho+j*3+1];
					pixel.val[2]=imagen[i*3*ancho+j*3+2];
					cvSet2D(imageOriginal, a*ancho+i, b*ancho+j, pixel);
				}
			}
		cvShowImage("Smile", imageOriginal);
	}


};
int main(){
	int ancho=40; 
	MostrarClass mostrarImagen;
	cv::VideoCapture cap; // Abre el video, 0 si se desea usar la webcam. 
	std::string videoFile = "0";
	cap.open(0);
	if (!cap.isOpened())  // Confirmacion si el video fue abierto con exito o no.
		return 0;

	Mat frame;
	cap >> frame; // Obtengo el primer frame del video para mostrar un video Base. 
	double width = cap.get(CV_CAP_PROP_FRAME_WIDTH);// Obtengo el ancho del video.
	double height = cap.get(CV_CAP_PROP_FRAME_HEIGHT);// Obtengo el alto del video.

	mostrarImagen.Define(width,height,ancho);
	VideoWriter video;
	video.open ( "outputVideo.avi", CV_FOURCC('D','I','V','X'), 30, Size(cap.get(CV_CAP_PROP_FRAME_WIDTH), cap.get	(CV_CAP_PROP_FRAME_HEIGHT)), true );
	
	int buffer [ancho*ancho*3];
	while (true)// for que leera todos los frames del video hasta que el usuario lo detenga.
	{
		if(mostrar){
			cap >> frame; // Obtengo el proximo frame del video.
			Mat a;// Creo un "frame" para guardarlo y no referenciar al frame que cambia dentro del for.
			frame.copyTo(a);// Copio el frame del video en la variable a.
			IplImage* imageOriginal;
			imageOriginal = cvCreateImage(cvSize(width,height), IPL_DEPTH_8U, 3);
			imageOriginal->imageData = (char *) a.data;
			
			for (int i = 0; i < height/ancho; i++){
				for (int j = 0; j < width/ancho; j++){
					for(int k =0;k<ancho;k++){
						for(int z=0;z<ancho;z++){
							CvScalar pixel = cvGet2D(imageOriginal, k+ancho*i ,z+ancho*j);
							buffer[k*(ancho*3)+z*3]=pixel.val[0];
							buffer[k*(ancho*3)+z*3+1]=pixel.val[1];
							buffer[k*(ancho*3)+z*3+2]=pixel.val[2];
							int pos =k*(ancho*3)+z*3;
							//std::cout<<pos<<" "<<buffer[k*(ancho*3)+z*3+2]<<"\n";		
						}				
					}
					mostrarImagen.MostrarImagen(i, j, buffer);	
				}
			}
			video << a;	// Guardo el frame creado en el archivo nuevo.
		}
		if (waitKey(1) >= 0) mostrar=!mostrar;//break;// si el usuario preciona la tecla "escape" se termina el programa.
	}
return 0;
}



