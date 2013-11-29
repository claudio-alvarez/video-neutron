/* A simple server in the internet domain using TCP
The port number is passed as an argument */
#include <highgui.h> /* required to use OpenCV's highgui */
#include <cv.h> /* required to use OpenCV */
#include <stdio.h>
#include <list>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> 
#include <stdio.h>
using namespace std;

using namespace cv;
void error(const char *msg)
{
	perror(msg);
	exit(1);
}
int main(int argc, char *argv[])
{		

	int ancho = 40;
	int sockfd, newsockfd, portno;
	socklen_t clilen;
	int buffer[ancho*ancho*3+2];
	struct sockaddr_in serv_addr, cli_addr;
	
	if (argc < 2) {
	fprintf(stderr,"ERROR, no port provided\n");
	exit(1);
	}
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sockfd < 0) 
		error("ERROR opening socket");
	bzero((char *) &serv_addr, sizeof(serv_addr));
	portno = atoi(argv[1]);
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = INADDR_ANY;
	serv_addr.sin_port = htons(portno);
	if (bind(sockfd, (struct sockaddr *) &serv_addr,
	      sizeof(serv_addr)) < 0) 
	      error("ERROR on binding");
	listen(sockfd,5);
	clilen = sizeof(cli_addr);
	newsockfd = accept(sockfd, 
		 (struct sockaddr *) &cli_addr, 
		 &clilen);
	if (newsockfd < 0) 
		error("ERROR on accept");
	bzero(buffer,256);

//Pantalla y imagen:
	VideoWriter video;
	video.open ( "outputVideo.avi", CV_FOURCC('D','I','V','X'), 24, Size(640,480), true );
	IplImage* imageOriginal;
	imageOriginal = cvCreateImage(cvSize(640,480), IPL_DEPTH_8U, 3);
	for (int i = 0; i < 480; i++){
		for (int j = 0; j < 640; j++){
				CvScalar pixel;
				pixel.val[0]=100;	
				pixel.val[1]=100;
				pixel.val[2]=100;
				cvSet2D(imageOriginal, i, j, pixel);
		}
	}
	cvSaveImage("original.jpg", imageOriginal);

	cvNamedWindow("window", CV_WINDOW_AUTOSIZE);
	int count =0;
	while(true){
		int n;
		n = read(newsockfd,buffer,ancho*ancho*3*4+8);
		if (n < 0) error("ERROR reading from socket");
			printf("Here is the message: %d  %d\n",buffer[0],buffer[1]);
		int a=buffer[0];
		int b=buffer[1];
		if(a>20)
			a=1;
		if(b>20)
			b=1;
		for (int i = 0; i < ancho; i++){
			for (int j = 0; j < ancho; j++){
				CvScalar pixel;
				pixel.val[0]=buffer[i*3*ancho+j*3+2];	
				pixel.val[1]=buffer[i*3*ancho+j*3+3];
				pixel.val[2]=buffer[i*3*ancho+j*3+4];
				cvSet2D(imageOriginal, a*ancho+i, b*ancho+j, pixel);
			}
		} 
		count +=1;
		if(count == 192){
		Mat image=cvarrToMat(imageOriginal);  
		
		video<<image; 		
		imshow("Mat",image);  
		cvShowImage("window", imageOriginal);
		count = 0;
		}
	}
	close(newsockfd);
	close(sockfd);
	return 0; 
}

