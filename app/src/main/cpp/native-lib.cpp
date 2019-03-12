#include <jni.h>
#include <string>
#include <opencv2/core.hpp>

extern "C" {

JNIEXPORT jstring JNICALL
Java_com_example_nativeopencv_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from here C++";
    return env->NewStringUTF(hello.c_str());
}

jstring
Java_com_example_nativeopencv_MainActivity_validate(JNIEnv *env, jobject, jlong addGray, jlong addRgba){
    cv::Rect();
    cv::Mat();

    std::string hello2 = "Hello from validate";
    return env->NewStringUTF(hello2.c_str());
}

}