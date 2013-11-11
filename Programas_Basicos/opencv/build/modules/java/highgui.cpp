
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.highgui"

#include "common.h"
#include "opencv2/highgui/highgui.hpp"

using namespace cv;

extern "C" {


//
//  Mat imdecode(Mat buf, int flags)
//

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_Highgui_imdecode_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_Highgui_imdecode_10
  (JNIEnv* env, jclass , jlong buf_nativeObj, jint flags)
{
    try {
        LOGD("highgui::imdecode_10()");
        Mat& buf = *((Mat*)buf_nativeObj);
        Mat _retval_ = cv::imdecode( buf, (int)flags );
        return (jlong) new Mat(_retval_);
    } catch(cv::Exception e) {
        LOGD("highgui::imdecode_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("highgui::imdecode_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {highgui::imdecode_10()}");
        return 0;
    }
}



//
//  bool imencode(string ext, Mat img, vector_uchar& buf, vector_int params = vector<int>())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imencode_10 (JNIEnv*, jclass, jstring, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imencode_10
  (JNIEnv* env, jclass , jstring ext, jlong img_nativeObj, jlong buf_mat_nativeObj, jlong params_mat_nativeObj)
{
    try {
        LOGD("highgui::imencode_10()");
        vector<uchar> buf;
        Mat& buf_mat = *((Mat*)buf_mat_nativeObj);
        vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        const char* utf_ext = env->GetStringUTFChars(ext, 0); std::string n_ext( utf_ext ? utf_ext : "" ); env->ReleaseStringUTFChars(ext, utf_ext);
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = cv::imencode( n_ext, img, buf, params );
        vector_uchar_to_Mat( buf, buf_mat );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("highgui::imencode_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("highgui::imencode_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {highgui::imencode_10()}");
        return 0;
    }
}



JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imencode_11 (JNIEnv*, jclass, jstring, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imencode_11
  (JNIEnv* env, jclass , jstring ext, jlong img_nativeObj, jlong buf_mat_nativeObj)
{
    try {
        LOGD("highgui::imencode_11()");
        vector<uchar> buf;
        Mat& buf_mat = *((Mat*)buf_mat_nativeObj);
        const char* utf_ext = env->GetStringUTFChars(ext, 0); std::string n_ext( utf_ext ? utf_ext : "" ); env->ReleaseStringUTFChars(ext, utf_ext);
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = cv::imencode( n_ext, img, buf );
        vector_uchar_to_Mat( buf, buf_mat );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("highgui::imencode_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("highgui::imencode_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {highgui::imencode_11()}");
        return 0;
    }
}



//
//  Mat imread(string filename, int flags = 1)
//

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_Highgui_imread_10 (JNIEnv*, jclass, jstring, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_Highgui_imread_10
  (JNIEnv* env, jclass , jstring filename, jint flags)
{
    try {
        LOGD("highgui::imread_10()");
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat _retval_ = cv::imread( n_filename, (int)flags );
        return (jlong) new Mat(_retval_);
    } catch(cv::Exception e) {
        LOGD("highgui::imread_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("highgui::imread_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {highgui::imread_10()}");
        return 0;
    }
}



JNIEXPORT jlong JNICALL Java_org_opencv_highgui_Highgui_imread_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_highgui_Highgui_imread_11
  (JNIEnv* env, jclass , jstring filename)
{
    try {
        LOGD("highgui::imread_11()");
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat _retval_ = cv::imread( n_filename );
        return (jlong) new Mat(_retval_);
    } catch(cv::Exception e) {
        LOGD("highgui::imread_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("highgui::imread_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {highgui::imread_11()}");
        return 0;
    }
}



//
//  bool imwrite(string filename, Mat img, vector_int params = vector<int>())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imwrite_10 (JNIEnv*, jclass, jstring, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imwrite_10
  (JNIEnv* env, jclass , jstring filename, jlong img_nativeObj, jlong params_mat_nativeObj)
{
    try {
        LOGD("highgui::imwrite_10()");
        vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = cv::imwrite( n_filename, img, params );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("highgui::imwrite_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("highgui::imwrite_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {highgui::imwrite_10()}");
        return 0;
    }
}



JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imwrite_11 (JNIEnv*, jclass, jstring, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_highgui_Highgui_imwrite_11
  (JNIEnv* env, jclass , jstring filename, jlong img_nativeObj)
{
    try {
        LOGD("highgui::imwrite_11()");
        const char* utf_filename = env->GetStringUTFChars(filename, 0); std::string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = cv::imwrite( n_filename, img );
        return _retval_;
    } catch(cv::Exception e) {
        LOGD("highgui::imwrite_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return 0;
    } catch (...) {
        LOGD("highgui::imwrite_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {highgui::imwrite_11()}");
        return 0;
    }
}



} // extern "C"
