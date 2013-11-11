
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.objdetect"

#include "common.h"
#include "opencv2/objdetect/objdetect.hpp"

using namespace cv;

extern "C" {


//
//   CascadeClassifier::CascadeClassifier()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CascadeClassifier_CascadeClassifier_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CascadeClassifier_CascadeClassifier_10
  (JNIEnv* env, jclass )
{
    try {
        LOGD("objdetect::CascadeClassifier_10()");
        
        CascadeClassifier* _retval_ = new CascadeClassifier(  );
        return (jlong) _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::CascadeClassifier_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::CascadeClassifier_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::CascadeClassifier_10()}");
        return 0;
    }
}



//
//   CascadeClassifier::CascadeClassifier(string filename)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CascadeClassifier_CascadeClassifier_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CascadeClassifier_CascadeClassifier_11
  (JNIEnv* env, jclass , jstring filename)
{
    try {
        LOGD("objdetect::CascadeClassifier_11()");
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        CascadeClassifier* _retval_ = new CascadeClassifier( n_filename );
        return (jlong) _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::CascadeClassifier_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::CascadeClassifier_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::CascadeClassifier_11()}");
        return 0;
    }
}



//
//  void CascadeClassifier::detectMultiScale(Mat image, vector_Rect& objects, double scaleFactor = 1.1, int minNeighbors = 3, int flags = 0, Size minSize = Size(), Size maxSize = Size())
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jint, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jdouble scaleFactor, jint minNeighbors, jint flags, jdouble minSize_width, jdouble minSize_height, jdouble maxSize_width, jdouble maxSize_height)
{
    try {
        LOGD("objdetect::detectMultiScale_10()");
        vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        CascadeClassifier* me = (CascadeClassifier*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Size minSize((int)minSize_width, (int)minSize_height);
        Size maxSize((int)maxSize_width, (int)maxSize_height);
        me->detectMultiScale( image, objects, (double)scaleFactor, (int)minNeighbors, (int)flags, minSize, maxSize );
        vector_Rect_to_Mat( objects, objects_mat );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::detectMultiScale_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::detectMultiScale_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::detectMultiScale_10()}");
        return;
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj)
{
    try {
        LOGD("objdetect::detectMultiScale_11()");
        vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        CascadeClassifier* me = (CascadeClassifier*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        me->detectMultiScale( image, objects );
        vector_Rect_to_Mat( objects, objects_mat );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::detectMultiScale_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::detectMultiScale_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::detectMultiScale_11()}");
        return;
    }
}



//
//  void CascadeClassifier::detectMultiScale(Mat image, vector_Rect& objects, vector_int rejectLevels, vector_double levelWeights, double scaleFactor = 1.1, int minNeighbors = 3, int flags = 0, Size minSize = Size(), Size maxSize = Size(), bool outputRejectLevels = false)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jdouble, jint, jint, jdouble, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_12
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jlong rejectLevels_mat_nativeObj, jlong levelWeights_mat_nativeObj, jdouble scaleFactor, jint minNeighbors, jint flags, jdouble minSize_width, jdouble minSize_height, jdouble maxSize_width, jdouble maxSize_height, jboolean outputRejectLevels)
{
    try {
        LOGD("objdetect::detectMultiScale_12()");
        vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        vector<int> rejectLevels;
        Mat& rejectLevels_mat = *((Mat*)rejectLevels_mat_nativeObj);
        Mat_to_vector_int( rejectLevels_mat, rejectLevels );
        vector<double> levelWeights;
        Mat& levelWeights_mat = *((Mat*)levelWeights_mat_nativeObj);
        Mat_to_vector_double( levelWeights_mat, levelWeights );
        CascadeClassifier* me = (CascadeClassifier*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Size minSize((int)minSize_width, (int)minSize_height);
        Size maxSize((int)maxSize_width, (int)maxSize_height);
        me->detectMultiScale( image, objects, rejectLevels, levelWeights, (double)scaleFactor, (int)minNeighbors, (int)flags, minSize, maxSize, (bool)outputRejectLevels );
        vector_Rect_to_Mat( objects, objects_mat );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::detectMultiScale_12() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::detectMultiScale_12() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::detectMultiScale_12()}");
        return;
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_13 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_13
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jlong rejectLevels_mat_nativeObj, jlong levelWeights_mat_nativeObj)
{
    try {
        LOGD("objdetect::detectMultiScale_13()");
        vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        vector<int> rejectLevels;
        Mat& rejectLevels_mat = *((Mat*)rejectLevels_mat_nativeObj);
        Mat_to_vector_int( rejectLevels_mat, rejectLevels );
        vector<double> levelWeights;
        Mat& levelWeights_mat = *((Mat*)levelWeights_mat_nativeObj);
        Mat_to_vector_double( levelWeights_mat, levelWeights );
        CascadeClassifier* me = (CascadeClassifier*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        me->detectMultiScale( image, objects, rejectLevels, levelWeights );
        vector_Rect_to_Mat( objects, objects_mat );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::detectMultiScale_13() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::detectMultiScale_13() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::detectMultiScale_13()}");
        return;
    }
}



//
//  bool CascadeClassifier::empty()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CascadeClassifier_empty_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CascadeClassifier_empty_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::empty_10()");
        CascadeClassifier* me = (CascadeClassifier*) self; //TODO: check for NULL
        bool _retval_ = me->empty(  );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::empty_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::empty_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::empty_10()}");
        return 0;
    }
}



//
//  bool CascadeClassifier::load(string filename)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CascadeClassifier_load_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CascadeClassifier_load_10
  (JNIEnv* env, jclass , jlong self, jstring filename)
{
    try {
        LOGD("objdetect::load_10()");
        CascadeClassifier* me = (CascadeClassifier*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        bool _retval_ = me->load( n_filename );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::load_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::load_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::load_10()}");
        return 0;
    }
}



//
//  native support for java finalize()
//  static void CascadeClassifier::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (CascadeClassifier*) self;
}


//
//   HOGDescriptor::HOGDescriptor()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_10
  (JNIEnv* env, jclass )
{
    try {
        LOGD("objdetect::HOGDescriptor_10()");
        
        HOGDescriptor* _retval_ = new HOGDescriptor(  );
        return (jlong) _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::HOGDescriptor_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::HOGDescriptor_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::HOGDescriptor_10()}");
        return 0;
    }
}



//
//   HOGDescriptor::HOGDescriptor(Size _winSize, Size _blockSize, Size _blockStride, Size _cellSize, int _nbins, int _derivAperture = 1, double _winSigma = -1, int _histogramNormType = HOGDescriptor::L2Hys, double _L2HysThreshold = 0.2, bool _gammaCorrection = false, int _nlevels = HOGDescriptor::DEFAULT_NLEVELS)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_11 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jint, jdouble, jint, jdouble, jboolean, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_11
  (JNIEnv* env, jclass , jdouble _winSize_width, jdouble _winSize_height, jdouble _blockSize_width, jdouble _blockSize_height, jdouble _blockStride_width, jdouble _blockStride_height, jdouble _cellSize_width, jdouble _cellSize_height, jint _nbins, jint _derivAperture, jdouble _winSigma, jint _histogramNormType, jdouble _L2HysThreshold, jboolean _gammaCorrection, jint _nlevels)
{
    try {
        LOGD("objdetect::HOGDescriptor_11()");
        Size _winSize((int)_winSize_width, (int)_winSize_height);
        Size _blockSize((int)_blockSize_width, (int)_blockSize_height);
        Size _blockStride((int)_blockStride_width, (int)_blockStride_height);
        Size _cellSize((int)_cellSize_width, (int)_cellSize_height);
        HOGDescriptor* _retval_ = new HOGDescriptor( _winSize, _blockSize, _blockStride, _cellSize, (int)_nbins, (int)_derivAperture, (double)_winSigma, (int)_histogramNormType, (double)_L2HysThreshold, (bool)_gammaCorrection, (int)_nlevels );
        return (jlong) _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::HOGDescriptor_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::HOGDescriptor_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::HOGDescriptor_11()}");
        return 0;
    }
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_12 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_12
  (JNIEnv* env, jclass , jdouble _winSize_width, jdouble _winSize_height, jdouble _blockSize_width, jdouble _blockSize_height, jdouble _blockStride_width, jdouble _blockStride_height, jdouble _cellSize_width, jdouble _cellSize_height, jint _nbins)
{
    try {
        LOGD("objdetect::HOGDescriptor_12()");
        Size _winSize((int)_winSize_width, (int)_winSize_height);
        Size _blockSize((int)_blockSize_width, (int)_blockSize_height);
        Size _blockStride((int)_blockStride_width, (int)_blockStride_height);
        Size _cellSize((int)_cellSize_width, (int)_cellSize_height);
        HOGDescriptor* _retval_ = new HOGDescriptor( _winSize, _blockSize, _blockStride, _cellSize, (int)_nbins );
        return (jlong) _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::HOGDescriptor_12() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::HOGDescriptor_12() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::HOGDescriptor_12()}");
        return 0;
    }
}



//
//   HOGDescriptor::HOGDescriptor(String filename)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_13 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_13
  (JNIEnv* env, jclass , jstring filename)
{
    try {
        LOGD("objdetect::HOGDescriptor_13()");
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        HOGDescriptor* _retval_ = new HOGDescriptor( n_filename );
        return (jlong) _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::HOGDescriptor_13() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::HOGDescriptor_13() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::HOGDescriptor_13()}");
        return 0;
    }
}



//
//  bool HOGDescriptor::checkDetectorSize()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_checkDetectorSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_checkDetectorSize_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::checkDetectorSize_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        bool _retval_ = me->checkDetectorSize(  );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::checkDetectorSize_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::checkDetectorSize_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::checkDetectorSize_10()}");
        return 0;
    }
}



//
//  void HOGDescriptor::compute(Mat img, vector_float& descriptors, Size winStride = Size(), Size padding = Size(), vector_Point locations = vector<Point>())
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_compute_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_compute_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong descriptors_mat_nativeObj, jdouble winStride_width, jdouble winStride_height, jdouble padding_width, jdouble padding_height, jlong locations_mat_nativeObj)
{
    try {
        LOGD("objdetect::compute_10()");
        vector<float> descriptors;
        Mat& descriptors_mat = *((Mat*)descriptors_mat_nativeObj);
        vector<Point> locations;
        Mat& locations_mat = *((Mat*)locations_mat_nativeObj);
        Mat_to_vector_Point( locations_mat, locations );
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Size winStride((int)winStride_width, (int)winStride_height);
        Size padding((int)padding_width, (int)padding_height);
        me->compute( img, descriptors, winStride, padding, locations );
        vector_float_to_Mat( descriptors, descriptors_mat );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::compute_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::compute_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::compute_10()}");
        return;
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_compute_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_compute_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong descriptors_mat_nativeObj)
{
    try {
        LOGD("objdetect::compute_11()");
        vector<float> descriptors;
        Mat& descriptors_mat = *((Mat*)descriptors_mat_nativeObj);
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        me->compute( img, descriptors );
        vector_float_to_Mat( descriptors, descriptors_mat );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::compute_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::compute_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::compute_11()}");
        return;
    }
}



//
//  void HOGDescriptor::computeGradient(Mat img, Mat& grad, Mat& angleOfs, Size paddingTL = Size(), Size paddingBR = Size())
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_computeGradient_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_computeGradient_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong grad_nativeObj, jlong angleOfs_nativeObj, jdouble paddingTL_width, jdouble paddingTL_height, jdouble paddingBR_width, jdouble paddingBR_height)
{
    try {
        LOGD("objdetect::computeGradient_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& grad = *((Mat*)grad_nativeObj);
        Mat& angleOfs = *((Mat*)angleOfs_nativeObj);
        Size paddingTL((int)paddingTL_width, (int)paddingTL_height);
        Size paddingBR((int)paddingBR_width, (int)paddingBR_height);
        me->computeGradient( img, grad, angleOfs, paddingTL, paddingBR );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::computeGradient_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::computeGradient_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::computeGradient_10()}");
        return;
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_computeGradient_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_computeGradient_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong grad_nativeObj, jlong angleOfs_nativeObj)
{
    try {
        LOGD("objdetect::computeGradient_11()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& grad = *((Mat*)grad_nativeObj);
        Mat& angleOfs = *((Mat*)angleOfs_nativeObj);
        me->computeGradient( img, grad, angleOfs );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::computeGradient_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::computeGradient_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::computeGradient_11()}");
        return;
    }
}



//
//  void HOGDescriptor::detect(Mat img, vector_Point& foundLocations, vector_double& weights, double hitThreshold = 0, Size winStride = Size(), Size padding = Size(), vector_Point searchLocations = vector<Point>())
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detect_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detect_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong weights_mat_nativeObj, jdouble hitThreshold, jdouble winStride_width, jdouble winStride_height, jdouble padding_width, jdouble padding_height, jlong searchLocations_mat_nativeObj)
{
    try {
        LOGD("objdetect::detect_10()");
        vector<Point> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        vector<double> weights;
        Mat& weights_mat = *((Mat*)weights_mat_nativeObj);
        vector<Point> searchLocations;
        Mat& searchLocations_mat = *((Mat*)searchLocations_mat_nativeObj);
        Mat_to_vector_Point( searchLocations_mat, searchLocations );
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Size winStride((int)winStride_width, (int)winStride_height);
        Size padding((int)padding_width, (int)padding_height);
        me->detect( img, foundLocations, weights, (double)hitThreshold, winStride, padding, searchLocations );
        vector_Point_to_Mat( foundLocations, foundLocations_mat );  vector_double_to_Mat( weights, weights_mat );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::detect_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::detect_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::detect_10()}");
        return;
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detect_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detect_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong weights_mat_nativeObj)
{
    try {
        LOGD("objdetect::detect_11()");
        vector<Point> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        vector<double> weights;
        Mat& weights_mat = *((Mat*)weights_mat_nativeObj);
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        me->detect( img, foundLocations, weights );
        vector_Point_to_Mat( foundLocations, foundLocations_mat );  vector_double_to_Mat( weights, weights_mat );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::detect_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::detect_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::detect_11()}");
        return;
    }
}



//
//  void HOGDescriptor::detectMultiScale(Mat img, vector_Rect& foundLocations, vector_double& foundWeights, double hitThreshold = 0, Size winStride = Size(), Size padding = Size(), double scale = 1.05, double finalThreshold = 2.0, bool useMeanshiftGrouping = false)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong foundWeights_mat_nativeObj, jdouble hitThreshold, jdouble winStride_width, jdouble winStride_height, jdouble padding_width, jdouble padding_height, jdouble scale, jdouble finalThreshold, jboolean useMeanshiftGrouping)
{
    try {
        LOGD("objdetect::detectMultiScale_10()");
        vector<Rect> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        vector<double> foundWeights;
        Mat& foundWeights_mat = *((Mat*)foundWeights_mat_nativeObj);
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Size winStride((int)winStride_width, (int)winStride_height);
        Size padding((int)padding_width, (int)padding_height);
        me->detectMultiScale( img, foundLocations, foundWeights, (double)hitThreshold, winStride, padding, (double)scale, (double)finalThreshold, (bool)useMeanshiftGrouping );
        vector_Rect_to_Mat( foundLocations, foundLocations_mat );  vector_double_to_Mat( foundWeights, foundWeights_mat );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::detectMultiScale_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::detectMultiScale_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::detectMultiScale_10()}");
        return;
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong foundWeights_mat_nativeObj)
{
    try {
        LOGD("objdetect::detectMultiScale_11()");
        vector<Rect> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        vector<double> foundWeights;
        Mat& foundWeights_mat = *((Mat*)foundWeights_mat_nativeObj);
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        me->detectMultiScale( img, foundLocations, foundWeights );
        vector_Rect_to_Mat( foundLocations, foundLocations_mat );  vector_double_to_Mat( foundWeights, foundWeights_mat );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::detectMultiScale_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::detectMultiScale_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::detectMultiScale_11()}");
        return;
    }
}



//
// static vector_float HOGDescriptor::getDaimlerPeopleDetector()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_getDaimlerPeopleDetector_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_getDaimlerPeopleDetector_10
  (JNIEnv* env, jclass )
{
    try {
        LOGD("objdetect::getDaimlerPeopleDetector_10()");
        
        vector<float> _ret_val_vector_ = HOGDescriptor::getDaimlerPeopleDetector(  );
        Mat* _retval_ = new Mat();  vector_float_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::getDaimlerPeopleDetector_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::getDaimlerPeopleDetector_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::getDaimlerPeopleDetector_10()}");
        return 0;
    }
}



//
// static vector_float HOGDescriptor::getDefaultPeopleDetector()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_getDefaultPeopleDetector_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_getDefaultPeopleDetector_10
  (JNIEnv* env, jclass )
{
    try {
        LOGD("objdetect::getDefaultPeopleDetector_10()");
        
        vector<float> _ret_val_vector_ = HOGDescriptor::getDefaultPeopleDetector(  );
        Mat* _retval_ = new Mat();  vector_float_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::getDefaultPeopleDetector_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::getDefaultPeopleDetector_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::getDefaultPeopleDetector_10()}");
        return 0;
    }
}



//
//  size_t HOGDescriptor::getDescriptorSize()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_getDescriptorSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_getDescriptorSize_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::getDescriptorSize_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        size_t _retval_ = me->getDescriptorSize(  );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::getDescriptorSize_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::getDescriptorSize_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::getDescriptorSize_10()}");
        return 0;
    }
}



//
//  double HOGDescriptor::getWinSigma()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_HOGDescriptor_getWinSigma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_HOGDescriptor_getWinSigma_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::getWinSigma_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        double _retval_ = me->getWinSigma(  );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::getWinSigma_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::getWinSigma_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::getWinSigma_10()}");
        return 0;
    }
}



//
//  bool HOGDescriptor::load(String filename, String objname = String())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_load_10 (JNIEnv*, jclass, jlong, jstring, jstring);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_load_10
  (JNIEnv* env, jclass , jlong self, jstring filename, jstring objname)
{
    try {
        LOGD("objdetect::load_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        const char* utf_objname = env->GetStringUTFChars(objname, 0); String n_objname( utf_objname ? utf_objname : "" ); env->ReleaseStringUTFChars(objname, utf_objname);
        bool _retval_ = me->load( n_filename, n_objname );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::load_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::load_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::load_10()}");
        return 0;
    }
}



JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_load_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_load_11
  (JNIEnv* env, jclass , jlong self, jstring filename)
{
    try {
        LOGD("objdetect::load_11()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        bool _retval_ = me->load( n_filename );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::load_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::load_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::load_11()}");
        return 0;
    }
}



//
//  void HOGDescriptor::save(String filename, String objname = String())
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_save_10 (JNIEnv*, jclass, jlong, jstring, jstring);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_save_10
  (JNIEnv* env, jclass , jlong self, jstring filename, jstring objname)
{
    try {
        LOGD("objdetect::save_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        const char* utf_objname = env->GetStringUTFChars(objname, 0); String n_objname( utf_objname ? utf_objname : "" ); env->ReleaseStringUTFChars(objname, utf_objname);
        me->save( n_filename, n_objname );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::save_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::save_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::save_10()}");
        return;
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_save_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_save_11
  (JNIEnv* env, jclass , jlong self, jstring filename)
{
    try {
        LOGD("objdetect::save_11()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        me->save( n_filename );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::save_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::save_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::save_11()}");
        return;
    }
}



//
//  void HOGDescriptor::setSVMDetector(Mat _svmdetector)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_setSVMDetector_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_setSVMDetector_10
  (JNIEnv* env, jclass , jlong self, jlong _svmdetector_nativeObj)
{
    try {
        LOGD("objdetect::setSVMDetector_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        Mat& _svmdetector = *((Mat*)_svmdetector_nativeObj);
        me->setSVMDetector( _svmdetector );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::setSVMDetector_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::setSVMDetector_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::setSVMDetector_10()}");
        return;
    }
}



//
// Size HOGDescriptor::winSize
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1winSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1winSize_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::get_1winSize_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        Size _retval_ = me->winSize;//(  );
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {_retval_.width, _retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::get_1winSize_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::get_1winSize_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::get_1winSize_10()}");
        return 0;
    }
}



//
// Size HOGDescriptor::blockSize
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1blockSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1blockSize_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::get_1blockSize_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        Size _retval_ = me->blockSize;//(  );
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {_retval_.width, _retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::get_1blockSize_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::get_1blockSize_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::get_1blockSize_10()}");
        return 0;
    }
}



//
// Size HOGDescriptor::blockStride
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1blockStride_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1blockStride_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::get_1blockStride_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        Size _retval_ = me->blockStride;//(  );
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {_retval_.width, _retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::get_1blockStride_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::get_1blockStride_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::get_1blockStride_10()}");
        return 0;
    }
}



//
// Size HOGDescriptor::cellSize
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1cellSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1cellSize_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::get_1cellSize_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        Size _retval_ = me->cellSize;//(  );
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {_retval_.width, _retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::get_1cellSize_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::get_1cellSize_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::get_1cellSize_10()}");
        return 0;
    }
}



//
// int HOGDescriptor::nbins
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1nbins_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1nbins_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::get_1nbins_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        int _retval_ = me->nbins;//(  );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::get_1nbins_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::get_1nbins_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::get_1nbins_10()}");
        return 0;
    }
}



//
// int HOGDescriptor::derivAperture
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1derivAperture_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1derivAperture_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::get_1derivAperture_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        int _retval_ = me->derivAperture;//(  );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::get_1derivAperture_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::get_1derivAperture_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::get_1derivAperture_10()}");
        return 0;
    }
}



//
// double HOGDescriptor::winSigma
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1winSigma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1winSigma_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::get_1winSigma_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        double _retval_ = me->winSigma;//(  );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::get_1winSigma_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::get_1winSigma_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::get_1winSigma_10()}");
        return 0;
    }
}



//
// int HOGDescriptor::histogramNormType
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1histogramNormType_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1histogramNormType_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::get_1histogramNormType_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        int _retval_ = me->histogramNormType;//(  );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::get_1histogramNormType_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::get_1histogramNormType_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::get_1histogramNormType_10()}");
        return 0;
    }
}



//
// double HOGDescriptor::L2HysThreshold
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1L2HysThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1L2HysThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::get_1L2HysThreshold_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        double _retval_ = me->L2HysThreshold;//(  );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::get_1L2HysThreshold_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::get_1L2HysThreshold_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::get_1L2HysThreshold_10()}");
        return 0;
    }
}



//
// bool HOGDescriptor::gammaCorrection
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1gammaCorrection_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1gammaCorrection_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::get_1gammaCorrection_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        bool _retval_ = me->gammaCorrection;//(  );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::get_1gammaCorrection_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::get_1gammaCorrection_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::get_1gammaCorrection_10()}");
        return 0;
    }
}



//
// vector_float HOGDescriptor::svmDetector
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1svmDetector_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1svmDetector_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::get_1svmDetector_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        vector<float> _ret_val_vector_ = me->svmDetector;//(  );
        Mat* _retval_ = new Mat();  vector_float_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::get_1svmDetector_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::get_1svmDetector_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::get_1svmDetector_10()}");
        return 0;
    }
}



//
// int HOGDescriptor::nlevels
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1nlevels_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1nlevels_10
  (JNIEnv* env, jclass , jlong self)
{
    try {
        LOGD("objdetect::get_1nlevels_10()");
        HOGDescriptor* me = (HOGDescriptor*) self; //TODO: check for NULL
        int _retval_ = me->nlevels;//(  );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("objdetect::get_1nlevels_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("objdetect::get_1nlevels_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::get_1nlevels_10()}");
        return 0;
    }
}



//
//  native support for java finalize()
//  static void HOGDescriptor::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (HOGDescriptor*) self;
}


//
//  void groupRectangles(vector_Rect& rectList, vector_int& weights, int groupThreshold, double eps = 0.2)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_groupRectangles_10 (JNIEnv*, jclass, jlong, jlong, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_groupRectangles_10
  (JNIEnv* env, jclass , jlong rectList_mat_nativeObj, jlong weights_mat_nativeObj, jint groupThreshold, jdouble eps)
{
    try {
        LOGD("objdetect::groupRectangles_10()");
        vector<Rect> rectList;
        Mat& rectList_mat = *((Mat*)rectList_mat_nativeObj);
        Mat_to_vector_Rect( rectList_mat, rectList );
        vector<int> weights;
        Mat& weights_mat = *((Mat*)weights_mat_nativeObj);
        cv::groupRectangles( rectList, weights, (int)groupThreshold, (double)eps );
        vector_Rect_to_Mat( rectList, rectList_mat );  vector_int_to_Mat( weights, weights_mat );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::groupRectangles_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::groupRectangles_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::groupRectangles_10()}");
        return;
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_groupRectangles_11 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_groupRectangles_11
  (JNIEnv* env, jclass , jlong rectList_mat_nativeObj, jlong weights_mat_nativeObj, jint groupThreshold)
{
    try {
        LOGD("objdetect::groupRectangles_11()");
        vector<Rect> rectList;
        Mat& rectList_mat = *((Mat*)rectList_mat_nativeObj);
        Mat_to_vector_Rect( rectList_mat, rectList );
        vector<int> weights;
        Mat& weights_mat = *((Mat*)weights_mat_nativeObj);
        cv::groupRectangles( rectList, weights, (int)groupThreshold );
        vector_Rect_to_Mat( rectList, rectList_mat );  vector_int_to_Mat( weights, weights_mat );
        return;
    } catch(cv::Exception e) {
        LOGD("objdetect::groupRectangles_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("objdetect::groupRectangles_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {objdetect::groupRectangles_11()}");
        return;
    }
}



} // extern "C"
