#include <jni.h>
#include <string>

extern "C" {
#include "include/libavutil/avutil.h"
}

const char *getFFmpVersion() {
    return av_version_info();
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_tencent_fenghuanghuakai_learnffmpegdemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
//    std::string hello = "Hello from C++";
    return env->NewStringUTF(getFFmpVersion());
}