import java.io.File;

import com.googlecode.javacv.CanvasFrame;
import com.googlecode.javacv.FFmpegFrameGrabber;
import com.googlecode.javacv.FrameGrabber.Exception;
import com.googlecode.javacv.cpp.opencv_core.IplImage;

public class prueba {
	public static void main(String[] args) throws Exception {

		// Create canvas frame for displaying video.
		CanvasFrame canvas = new CanvasFrame("VideoCanvas");

		File movie_name = new File("a.avi");

		// Declare FrameGrabber to import video from "video.mp4"
		FFmpegFrameGrabber grabber = new FFmpegFrameGrabber(movie_name);

		// Start grabber to capture video
		// grabber.start();

		// Declare img as IplImage
		//IplImage img;

		while (true) {

			// inser grabed video frame to IplImage img
			 //img = grabber.grab();

			// Set canvas size as per dimentions of video frame.
			 //canvas.setCanvasSize(grabber.getImageWidth(),
			// grabber.getImageHeight());

			// Show video frame in canvas
			 //canvas.showImage(img);

			// save video frame as a picture
//			 cvSaveImage("capture.png", img);

		}

	}
}