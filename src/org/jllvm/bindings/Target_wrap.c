/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif 
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  (*jenv)->ExceptionClear(jenv);
  excep = (*jenv)->FindClass(jenv, except_ptr->java_exception);
  if (excep)
    (*jenv)->ThrowNew(jenv, excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include <stdbool.h>
#include <llvm-c/Target.h>


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMInitializeAllTargetInfos(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  LLVMInitializeAllTargetInfos();
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMInitializeAllTargets(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  LLVMInitializeAllTargets();
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMInitializeAllTargetMCs(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  LLVMInitializeAllTargetMCs();
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMInitializeAllAsmPrinters(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  LLVMInitializeAllAsmPrinters();
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMInitializeAllAsmParsers(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  LLVMInitializeAllAsmParsers();
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMInitializeAllDisassemblers(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  LLVMInitializeAllDisassemblers();
}


SWIGEXPORT jint JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMInitializeNativeTarget(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  LLVMBool result;
  
  (void)jenv;
  (void)jcls;
  result = (LLVMBool)LLVMInitializeNativeTarget();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMCreateTargetData(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jlong jresult = 0 ;
  char *arg1 = (char *) 0 ;
  LLVMTargetDataRef result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = (LLVMTargetDataRef)LLVMCreateTargetData((char const *)arg1);
  *(LLVMTargetDataRef *)&jresult = result; 
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMAddTargetData(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  LLVMPassManagerRef arg2 = (LLVMPassManagerRef) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  arg2 = *(LLVMPassManagerRef *)&jarg2; 
  LLVMAddTargetData(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMAddTargetLibraryInfo(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  LLVMTargetLibraryInfoRef arg1 = (LLVMTargetLibraryInfoRef) 0 ;
  LLVMPassManagerRef arg2 = (LLVMPassManagerRef) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetLibraryInfoRef *)&jarg1; 
  arg2 = *(LLVMPassManagerRef *)&jarg2; 
  LLVMAddTargetLibraryInfo(arg1,arg2);
}


SWIGEXPORT jstring JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMCopyStringRepOfTargetData(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jstring jresult = 0 ;
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  result = (char *)LLVMCopyStringRepOfTargetData(arg1);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMByteOrder(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  enum LLVMByteOrdering result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  result = (enum LLVMByteOrdering)LLVMByteOrder(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMPointerSize(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  result = (unsigned int)LLVMPointerSize(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMPointerSizeForAS(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jlong jresult = 0 ;
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  unsigned int arg2 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  arg2 = (unsigned int)jarg2; 
  result = (unsigned int)LLVMPointerSizeForAS(arg1,arg2);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMIntPtrType(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  LLVMTypeRef result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  result = (LLVMTypeRef)LLVMIntPtrType(arg1);
  *(LLVMTypeRef *)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMIntPtrTypeForAS(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jlong jresult = 0 ;
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  unsigned int arg2 ;
  LLVMTypeRef result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  arg2 = (unsigned int)jarg2; 
  result = (LLVMTypeRef)LLVMIntPtrTypeForAS(arg1,arg2);
  *(LLVMTypeRef *)&jresult = result; 
  return jresult;
}


SWIGEXPORT jobject JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMSizeOfTypeInBits(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jobject jresult = 0 ;
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  LLVMTypeRef arg2 = (LLVMTypeRef) 0 ;
  unsigned long long result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  arg2 = *(LLVMTypeRef *)&jarg2; 
  result = (unsigned long long)LLVMSizeOfTypeInBits(arg1,arg2);
  {
    jbyteArray ba = (*jenv)->NewByteArray(jenv, 9);
    jbyte* bae = (*jenv)->GetByteArrayElements(jenv, ba, 0);
    jclass clazz = (*jenv)->FindClass(jenv, "java/math/BigInteger");
    jmethodID mid = (*jenv)->GetMethodID(jenv, clazz, "<init>", "([B)V");
    jobject bigint;
    int i;
    
    bae[0] = 0;
    for(i=1; i<9; i++ ) {
      bae[i] = (jbyte)(result>>8*(8-i));
    }
    
    (*jenv)->ReleaseByteArrayElements(jenv, ba, bae, 0);
    bigint = (*jenv)->NewObject(jenv, clazz, mid, ba);
    jresult = bigint;
  }
  return jresult;
}


SWIGEXPORT jobject JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMStoreSizeOfType(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jobject jresult = 0 ;
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  LLVMTypeRef arg2 = (LLVMTypeRef) 0 ;
  unsigned long long result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  arg2 = *(LLVMTypeRef *)&jarg2; 
  result = (unsigned long long)LLVMStoreSizeOfType(arg1,arg2);
  {
    jbyteArray ba = (*jenv)->NewByteArray(jenv, 9);
    jbyte* bae = (*jenv)->GetByteArrayElements(jenv, ba, 0);
    jclass clazz = (*jenv)->FindClass(jenv, "java/math/BigInteger");
    jmethodID mid = (*jenv)->GetMethodID(jenv, clazz, "<init>", "([B)V");
    jobject bigint;
    int i;
    
    bae[0] = 0;
    for(i=1; i<9; i++ ) {
      bae[i] = (jbyte)(result>>8*(8-i));
    }
    
    (*jenv)->ReleaseByteArrayElements(jenv, ba, bae, 0);
    bigint = (*jenv)->NewObject(jenv, clazz, mid, ba);
    jresult = bigint;
  }
  return jresult;
}


SWIGEXPORT jobject JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMABISizeOfType(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jobject jresult = 0 ;
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  LLVMTypeRef arg2 = (LLVMTypeRef) 0 ;
  unsigned long long result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  arg2 = *(LLVMTypeRef *)&jarg2; 
  result = (unsigned long long)LLVMABISizeOfType(arg1,arg2);
  {
    jbyteArray ba = (*jenv)->NewByteArray(jenv, 9);
    jbyte* bae = (*jenv)->GetByteArrayElements(jenv, ba, 0);
    jclass clazz = (*jenv)->FindClass(jenv, "java/math/BigInteger");
    jmethodID mid = (*jenv)->GetMethodID(jenv, clazz, "<init>", "([B)V");
    jobject bigint;
    int i;
    
    bae[0] = 0;
    for(i=1; i<9; i++ ) {
      bae[i] = (jbyte)(result>>8*(8-i));
    }
    
    (*jenv)->ReleaseByteArrayElements(jenv, ba, bae, 0);
    bigint = (*jenv)->NewObject(jenv, clazz, mid, ba);
    jresult = bigint;
  }
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMABIAlignmentOfType(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jlong jresult = 0 ;
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  LLVMTypeRef arg2 = (LLVMTypeRef) 0 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  arg2 = *(LLVMTypeRef *)&jarg2; 
  result = (unsigned int)LLVMABIAlignmentOfType(arg1,arg2);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMCallFrameAlignmentOfType(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jlong jresult = 0 ;
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  LLVMTypeRef arg2 = (LLVMTypeRef) 0 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  arg2 = *(LLVMTypeRef *)&jarg2; 
  result = (unsigned int)LLVMCallFrameAlignmentOfType(arg1,arg2);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMPreferredAlignmentOfType(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jlong jresult = 0 ;
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  LLVMTypeRef arg2 = (LLVMTypeRef) 0 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  arg2 = *(LLVMTypeRef *)&jarg2; 
  result = (unsigned int)LLVMPreferredAlignmentOfType(arg1,arg2);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMPreferredAlignmentOfGlobal(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jlong jresult = 0 ;
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  LLVMValueRef arg2 = (LLVMValueRef) 0 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  arg2 = *(LLVMValueRef *)&jarg2; 
  result = (unsigned int)LLVMPreferredAlignmentOfGlobal(arg1,arg2);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMElementAtOffset(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jobject jarg3) {
  jlong jresult = 0 ;
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  LLVMTypeRef arg2 = (LLVMTypeRef) 0 ;
  unsigned long long arg3 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  arg2 = *(LLVMTypeRef *)&jarg2; 
  {
    jclass clazz;
    jmethodID mid;
    jbyteArray ba;
    jbyte* bae;
    jsize sz;
    int i;
    
    if (!jarg3) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "BigInteger null");
      return 0;
    }
    clazz = (*jenv)->GetObjectClass(jenv, jarg3);
    mid = (*jenv)->GetMethodID(jenv, clazz, "toByteArray", "()[B");
    ba = (jbyteArray)(*jenv)->CallObjectMethod(jenv, jarg3, mid);
    bae = (*jenv)->GetByteArrayElements(jenv, ba, 0);
    sz = (*jenv)->GetArrayLength(jenv, ba);
    arg3 = 0;
    for(i=0; i<sz; i++) {
      arg3 = (arg3 << 8) | (unsigned long long)(unsigned char)bae[i];
    }
    (*jenv)->ReleaseByteArrayElements(jenv, ba, bae, 0);
  }
  result = (unsigned int)LLVMElementAtOffset(arg1,arg2,arg3);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jobject JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMOffsetOfElement(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jlong jarg3) {
  jobject jresult = 0 ;
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  LLVMTypeRef arg2 = (LLVMTypeRef) 0 ;
  unsigned int arg3 ;
  unsigned long long result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  arg2 = *(LLVMTypeRef *)&jarg2; 
  arg3 = (unsigned int)jarg3; 
  result = (unsigned long long)LLVMOffsetOfElement(arg1,arg2,arg3);
  {
    jbyteArray ba = (*jenv)->NewByteArray(jenv, 9);
    jbyte* bae = (*jenv)->GetByteArrayElements(jenv, ba, 0);
    jclass clazz = (*jenv)->FindClass(jenv, "java/math/BigInteger");
    jmethodID mid = (*jenv)->GetMethodID(jenv, clazz, "<init>", "([B)V");
    jobject bigint;
    int i;
    
    bae[0] = 0;
    for(i=1; i<9; i++ ) {
      bae[i] = (jbyte)(result>>8*(8-i));
    }
    
    (*jenv)->ReleaseByteArrayElements(jenv, ba, bae, 0);
    bigint = (*jenv)->NewObject(jenv, clazz, mid, ba);
    jresult = bigint;
  }
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_TargetJNI_LLVMDisposeTargetData(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  LLVMTargetDataRef arg1 = (LLVMTargetDataRef) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMTargetDataRef *)&jarg1; 
  LLVMDisposeTargetData(arg1);
}


#ifdef __cplusplus
}
#endif

