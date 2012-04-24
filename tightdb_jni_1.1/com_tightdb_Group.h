/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tightdb_Group */

#ifndef _Included_com_tightdb_Group
#define _Included_com_tightdb_Group
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_tightdb_Group
 * Method:    createNativeTable
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Group_createNativeTable
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeHasTable
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_tightdb_Group_nativeHasTable
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeGetTableName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_Group_nativeGetTableName
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeLoadFile
 * Signature: (Ljava/lang/String;)Lcom/tightdb/Group;
 */
JNIEXPORT jobject JNICALL Java_com_tightdb_Group_nativeLoadFile
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeGetTable
 * Signature: (Ljava/lang/String;)Lcom/tightdb/Table;
 */
JNIEXPORT jobject JNICALL Java_com_tightdb_Group_nativeGetTable
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_tightdb_Group
 * Method:    getTableCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_tightdb_Group_getTableCount
  (JNIEnv *, jobject);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeWriteToFile
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Group_nativeWriteToFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeLoadData
 * Signature: ([B)Lcom/tightdb/Group;
 */
JNIEXPORT jobject JNICALL Java_com_tightdb_Group_nativeLoadData
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_tightdb_Group
 * Method:    writeToBuffer
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_tightdb_Group_writeToBuffer
  (JNIEnv *, jobject);

/*
 * Class:     com_tightdb_Group
 * Method:    createNative
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Group_createNative
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif