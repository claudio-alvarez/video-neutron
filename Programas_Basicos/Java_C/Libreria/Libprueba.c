#include <stdio.h>
#include "prueba.h"
#include "jni.h"
int y = 10;
JNIEXPORT void JNICALL Java_prueba_sumar
  (JNIEnv *, jobject, jint x){
	int z = y+x;
    	printf("Hello World!\n %d \n",z);
	y = y+2;
    	return;
}

