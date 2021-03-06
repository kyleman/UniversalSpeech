/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
/* Header for class quentinc_UniversalSpeech */

#ifndef _Included_quentinc_UniversalSpeech
#define _Included_quentinc_UniversalSpeech
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     quentinc_UniversalSpeech
 * Method:    say
 * Signature: (Ljava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_quentinc_UniversalSpeech_say
  (JNIEnv *, jclass, jstring, jboolean);

JNIEXPORT jboolean JNICALL Java_quentinc_UniversalSpeech_braille
  (JNIEnv *, jclass, jstring);

/*
 * Class:     quentinc_UniversalSpeech
 * Method:    stop
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_quentinc_UniversalSpeech_stop
  (JNIEnv *, jclass);

/*
 * Class:     quentinc_UniversalSpeech
 * Method:    setValue
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_quentinc_UniversalSpeech_setValue
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     quentinc_UniversalSpeech
 * Method:    getValue
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_quentinc_UniversalSpeech_getValue
  (JNIEnv *, jclass, jint);

/*
 * Class:     quentinc_UniversalSpeech
 * Method:    setString
 * Signature: (ILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_quentinc_UniversalSpeech_setString
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     quentinc_UniversalSpeech
 * Method:    getString
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_quentinc_UniversalSpeech_getString
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
