
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.photo"

#include "common.h"
#include "opencv2/photo/photo.hpp"

using namespace cv;

extern "C" {


//
//  void fastNlMeansDenoising(Mat src, Mat& dst, float h = 3, int templateWindowSize = 7, int searchWindowSize = 21)
//

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoising_10 (JNIEnv*, jclass, jlong, jlong, jfloat, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoising_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize)
{
    try {
        LOGD("photo::fastNlMeansDenoising_10()");
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoising( src, dst, (float)h, (int)templateWindowSize, (int)searchWindowSize );
        return;
    } catch(cv::Exception e) {
        LOGD("photo::fastNlMeansDenoising_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("photo::fastNlMeansDenoising_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {photo::fastNlMeansDenoising_10()}");
        return;
    }
}



JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoising_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoising_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    try {
        LOGD("photo::fastNlMeansDenoising_11()");
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoising( src, dst );
        return;
    } catch(cv::Exception e) {
        LOGD("photo::fastNlMeansDenoising_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("photo::fastNlMeansDenoising_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {photo::fastNlMeansDenoising_11()}");
        return;
    }
}



//
//  void fastNlMeansDenoisingColored(Mat src, Mat& dst, float h = 3, float hColor = 3, int templateWindowSize = 7, int searchWindowSize = 21)
//

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColored_10 (JNIEnv*, jclass, jlong, jlong, jfloat, jfloat, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColored_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat h, jfloat hColor, jint templateWindowSize, jint searchWindowSize)
{
    try {
        LOGD("photo::fastNlMeansDenoisingColored_10()");
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoisingColored( src, dst, (float)h, (float)hColor, (int)templateWindowSize, (int)searchWindowSize );
        return;
    } catch(cv::Exception e) {
        LOGD("photo::fastNlMeansDenoisingColored_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("photo::fastNlMeansDenoisingColored_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {photo::fastNlMeansDenoisingColored_10()}");
        return;
    }
}



JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColored_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColored_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    try {
        LOGD("photo::fastNlMeansDenoisingColored_11()");
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoisingColored( src, dst );
        return;
    } catch(cv::Exception e) {
        LOGD("photo::fastNlMeansDenoisingColored_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("photo::fastNlMeansDenoisingColored_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {photo::fastNlMeansDenoisingColored_11()}");
        return;
    }
}



//
//  void fastNlMeansDenoisingColoredMulti(vector_Mat srcImgs, Mat& dst, int imgToDenoiseIndex, int temporalWindowSize, float h = 3, float hColor = 3, int templateWindowSize = 7, int searchWindowSize = 21)
//

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColoredMulti_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jfloat, jfloat, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColoredMulti_10
  (JNIEnv* env, jclass , jlong srcImgs_mat_nativeObj, jlong dst_nativeObj, jint imgToDenoiseIndex, jint temporalWindowSize, jfloat h, jfloat hColor, jint templateWindowSize, jint searchWindowSize)
{
    try {
        LOGD("photo::fastNlMeansDenoisingColoredMulti_10()");
        vector<Mat> srcImgs;
        Mat& srcImgs_mat = *((Mat*)srcImgs_mat_nativeObj);
        Mat_to_vector_Mat( srcImgs_mat, srcImgs );
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoisingColoredMulti( srcImgs, dst, (int)imgToDenoiseIndex, (int)temporalWindowSize, (float)h, (float)hColor, (int)templateWindowSize, (int)searchWindowSize );
        return;
    } catch(cv::Exception e) {
        LOGD("photo::fastNlMeansDenoisingColoredMulti_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("photo::fastNlMeansDenoisingColoredMulti_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {photo::fastNlMeansDenoisingColoredMulti_10()}");
        return;
    }
}



JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColoredMulti_11 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingColoredMulti_11
  (JNIEnv* env, jclass , jlong srcImgs_mat_nativeObj, jlong dst_nativeObj, jint imgToDenoiseIndex, jint temporalWindowSize)
{
    try {
        LOGD("photo::fastNlMeansDenoisingColoredMulti_11()");
        vector<Mat> srcImgs;
        Mat& srcImgs_mat = *((Mat*)srcImgs_mat_nativeObj);
        Mat_to_vector_Mat( srcImgs_mat, srcImgs );
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoisingColoredMulti( srcImgs, dst, (int)imgToDenoiseIndex, (int)temporalWindowSize );
        return;
    } catch(cv::Exception e) {
        LOGD("photo::fastNlMeansDenoisingColoredMulti_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("photo::fastNlMeansDenoisingColoredMulti_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {photo::fastNlMeansDenoisingColoredMulti_11()}");
        return;
    }
}



//
//  void fastNlMeansDenoisingMulti(vector_Mat srcImgs, Mat& dst, int imgToDenoiseIndex, int temporalWindowSize, float h = 3, int templateWindowSize = 7, int searchWindowSize = 21)
//

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingMulti_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jfloat, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingMulti_10
  (JNIEnv* env, jclass , jlong srcImgs_mat_nativeObj, jlong dst_nativeObj, jint imgToDenoiseIndex, jint temporalWindowSize, jfloat h, jint templateWindowSize, jint searchWindowSize)
{
    try {
        LOGD("photo::fastNlMeansDenoisingMulti_10()");
        vector<Mat> srcImgs;
        Mat& srcImgs_mat = *((Mat*)srcImgs_mat_nativeObj);
        Mat_to_vector_Mat( srcImgs_mat, srcImgs );
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoisingMulti( srcImgs, dst, (int)imgToDenoiseIndex, (int)temporalWindowSize, (float)h, (int)templateWindowSize, (int)searchWindowSize );
        return;
    } catch(cv::Exception e) {
        LOGD("photo::fastNlMeansDenoisingMulti_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("photo::fastNlMeansDenoisingMulti_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {photo::fastNlMeansDenoisingMulti_10()}");
        return;
    }
}



JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingMulti_11 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_fastNlMeansDenoisingMulti_11
  (JNIEnv* env, jclass , jlong srcImgs_mat_nativeObj, jlong dst_nativeObj, jint imgToDenoiseIndex, jint temporalWindowSize)
{
    try {
        LOGD("photo::fastNlMeansDenoisingMulti_11()");
        vector<Mat> srcImgs;
        Mat& srcImgs_mat = *((Mat*)srcImgs_mat_nativeObj);
        Mat_to_vector_Mat( srcImgs_mat, srcImgs );
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::fastNlMeansDenoisingMulti( srcImgs, dst, (int)imgToDenoiseIndex, (int)temporalWindowSize );
        return;
    } catch(cv::Exception e) {
        LOGD("photo::fastNlMeansDenoisingMulti_11() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("photo::fastNlMeansDenoisingMulti_11() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {photo::fastNlMeansDenoisingMulti_11()}");
        return;
    }
}



//
//  void inpaint(Mat src, Mat inpaintMask, Mat& dst, double inpaintRadius, int flags)
//

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_inpaint_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_photo_Photo_inpaint_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong inpaintMask_nativeObj, jlong dst_nativeObj, jdouble inpaintRadius, jint flags)
{
    try {
        LOGD("photo::inpaint_10()");
        Mat& src = *((Mat*)src_nativeObj);
        Mat& inpaintMask = *((Mat*)inpaintMask_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::inpaint( src, inpaintMask, dst, (double)inpaintRadius, (int)flags );
        return;
    } catch(cv::Exception e) {
        LOGD("photo::inpaint_10() catched cv::Exception: %s", e.what());
        jclass je = env->FindClass("org/opencv/core/CvException");
        if(!je) je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, e.what());
        return;
    } catch (...) {
        LOGD("photo::inpaint_10() catched unknown exception (...)");
        jclass je = env->FindClass("java/lang/Exception");
        env->ThrowNew(je, "Unknown exception in JNI code {photo::inpaint_10()}");
        return;
    }
}



} // extern "C"
