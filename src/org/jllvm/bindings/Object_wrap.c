/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.4
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
#include <llvm-c/Object.h>


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMCreateObjectFile(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  LLVMMemoryBufferRef arg1 = (LLVMMemoryBufferRef) 0 ;
  LLVMObjectFileRef result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMMemoryBufferRef *)&jarg1; 
  result = (LLVMObjectFileRef)LLVMCreateObjectFile(arg1);
  *(LLVMObjectFileRef *)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMDisposeObjectFile(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  LLVMObjectFileRef arg1 = (LLVMObjectFileRef) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMObjectFileRef *)&jarg1; 
  LLVMDisposeObjectFile(arg1);
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetSections(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  LLVMObjectFileRef arg1 = (LLVMObjectFileRef) 0 ;
  LLVMSectionIteratorRef result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMObjectFileRef *)&jarg1; 
  result = (LLVMSectionIteratorRef)LLVMGetSections(arg1);
  *(LLVMSectionIteratorRef *)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMDisposeSectionIterator(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  LLVMSectionIteratorRef arg1 = (LLVMSectionIteratorRef) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSectionIteratorRef *)&jarg1; 
  LLVMDisposeSectionIterator(arg1);
}


SWIGEXPORT jint JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMIsSectionIteratorAtEnd(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  LLVMObjectFileRef arg1 = (LLVMObjectFileRef) 0 ;
  LLVMSectionIteratorRef arg2 = (LLVMSectionIteratorRef) 0 ;
  LLVMBool result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMObjectFileRef *)&jarg1; 
  arg2 = *(LLVMSectionIteratorRef *)&jarg2; 
  result = (LLVMBool)LLVMIsSectionIteratorAtEnd(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMMoveToNextSection(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  LLVMSectionIteratorRef arg1 = (LLVMSectionIteratorRef) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSectionIteratorRef *)&jarg1; 
  LLVMMoveToNextSection(arg1);
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMMoveToContainingSection(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  LLVMSectionIteratorRef arg1 = (LLVMSectionIteratorRef) 0 ;
  LLVMSymbolIteratorRef arg2 = (LLVMSymbolIteratorRef) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSectionIteratorRef *)&jarg1; 
  arg2 = *(LLVMSymbolIteratorRef *)&jarg2; 
  LLVMMoveToContainingSection(arg1,arg2);
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetSymbols(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  LLVMObjectFileRef arg1 = (LLVMObjectFileRef) 0 ;
  LLVMSymbolIteratorRef result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMObjectFileRef *)&jarg1; 
  result = (LLVMSymbolIteratorRef)LLVMGetSymbols(arg1);
  *(LLVMSymbolIteratorRef *)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMDisposeSymbolIterator(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  LLVMSymbolIteratorRef arg1 = (LLVMSymbolIteratorRef) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSymbolIteratorRef *)&jarg1; 
  LLVMDisposeSymbolIterator(arg1);
}


SWIGEXPORT jint JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMIsSymbolIteratorAtEnd(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  LLVMObjectFileRef arg1 = (LLVMObjectFileRef) 0 ;
  LLVMSymbolIteratorRef arg2 = (LLVMSymbolIteratorRef) 0 ;
  LLVMBool result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMObjectFileRef *)&jarg1; 
  arg2 = *(LLVMSymbolIteratorRef *)&jarg2; 
  result = (LLVMBool)LLVMIsSymbolIteratorAtEnd(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMMoveToNextSymbol(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  LLVMSymbolIteratorRef arg1 = (LLVMSymbolIteratorRef) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSymbolIteratorRef *)&jarg1; 
  LLVMMoveToNextSymbol(arg1);
}


SWIGEXPORT jstring JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetSectionName(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jstring jresult = 0 ;
  LLVMSectionIteratorRef arg1 = (LLVMSectionIteratorRef) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSectionIteratorRef *)&jarg1; 
  result = (char *)LLVMGetSectionName(arg1);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetSectionSize(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  LLVMSectionIteratorRef arg1 = (LLVMSectionIteratorRef) 0 ;
  uint64_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSectionIteratorRef *)&jarg1; 
  result = LLVMGetSectionSize(arg1);
  {
    uint64_t * resultptr = (uint64_t *) malloc(sizeof(uint64_t));
    memmove(resultptr, &result, sizeof(uint64_t));
    *(uint64_t **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetSectionContents(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jstring jresult = 0 ;
  LLVMSectionIteratorRef arg1 = (LLVMSectionIteratorRef) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSectionIteratorRef *)&jarg1; 
  result = (char *)LLVMGetSectionContents(arg1);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetSectionAddress(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  LLVMSectionIteratorRef arg1 = (LLVMSectionIteratorRef) 0 ;
  uint64_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSectionIteratorRef *)&jarg1; 
  result = LLVMGetSectionAddress(arg1);
  {
    uint64_t * resultptr = (uint64_t *) malloc(sizeof(uint64_t));
    memmove(resultptr, &result, sizeof(uint64_t));
    *(uint64_t **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetSectionContainsSymbol(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  LLVMSectionIteratorRef arg1 = (LLVMSectionIteratorRef) 0 ;
  LLVMSymbolIteratorRef arg2 = (LLVMSymbolIteratorRef) 0 ;
  LLVMBool result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSectionIteratorRef *)&jarg1; 
  arg2 = *(LLVMSymbolIteratorRef *)&jarg2; 
  result = (LLVMBool)LLVMGetSectionContainsSymbol(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetRelocations(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  LLVMSectionIteratorRef arg1 = (LLVMSectionIteratorRef) 0 ;
  LLVMRelocationIteratorRef result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSectionIteratorRef *)&jarg1; 
  result = (LLVMRelocationIteratorRef)LLVMGetRelocations(arg1);
  *(LLVMRelocationIteratorRef *)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMDisposeRelocationIterator(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  LLVMRelocationIteratorRef arg1 = (LLVMRelocationIteratorRef) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMRelocationIteratorRef *)&jarg1; 
  LLVMDisposeRelocationIterator(arg1);
}


SWIGEXPORT jint JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMIsRelocationIteratorAtEnd(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  LLVMSectionIteratorRef arg1 = (LLVMSectionIteratorRef) 0 ;
  LLVMRelocationIteratorRef arg2 = (LLVMRelocationIteratorRef) 0 ;
  LLVMBool result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSectionIteratorRef *)&jarg1; 
  arg2 = *(LLVMRelocationIteratorRef *)&jarg2; 
  result = (LLVMBool)LLVMIsRelocationIteratorAtEnd(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMMoveToNextRelocation(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  LLVMRelocationIteratorRef arg1 = (LLVMRelocationIteratorRef) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMRelocationIteratorRef *)&jarg1; 
  LLVMMoveToNextRelocation(arg1);
}


SWIGEXPORT jstring JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetSymbolName(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jstring jresult = 0 ;
  LLVMSymbolIteratorRef arg1 = (LLVMSymbolIteratorRef) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSymbolIteratorRef *)&jarg1; 
  result = (char *)LLVMGetSymbolName(arg1);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetSymbolAddress(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  LLVMSymbolIteratorRef arg1 = (LLVMSymbolIteratorRef) 0 ;
  uint64_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSymbolIteratorRef *)&jarg1; 
  result = LLVMGetSymbolAddress(arg1);
  {
    uint64_t * resultptr = (uint64_t *) malloc(sizeof(uint64_t));
    memmove(resultptr, &result, sizeof(uint64_t));
    *(uint64_t **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetSymbolFileOffset(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  LLVMSymbolIteratorRef arg1 = (LLVMSymbolIteratorRef) 0 ;
  uint64_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSymbolIteratorRef *)&jarg1; 
  result = LLVMGetSymbolFileOffset(arg1);
  {
    uint64_t * resultptr = (uint64_t *) malloc(sizeof(uint64_t));
    memmove(resultptr, &result, sizeof(uint64_t));
    *(uint64_t **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetSymbolSize(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  LLVMSymbolIteratorRef arg1 = (LLVMSymbolIteratorRef) 0 ;
  uint64_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMSymbolIteratorRef *)&jarg1; 
  result = LLVMGetSymbolSize(arg1);
  {
    uint64_t * resultptr = (uint64_t *) malloc(sizeof(uint64_t));
    memmove(resultptr, &result, sizeof(uint64_t));
    *(uint64_t **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetRelocationAddress(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  LLVMRelocationIteratorRef arg1 = (LLVMRelocationIteratorRef) 0 ;
  uint64_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMRelocationIteratorRef *)&jarg1; 
  result = LLVMGetRelocationAddress(arg1);
  {
    uint64_t * resultptr = (uint64_t *) malloc(sizeof(uint64_t));
    memmove(resultptr, &result, sizeof(uint64_t));
    *(uint64_t **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetRelocationOffset(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  LLVMRelocationIteratorRef arg1 = (LLVMRelocationIteratorRef) 0 ;
  uint64_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMRelocationIteratorRef *)&jarg1; 
  result = LLVMGetRelocationOffset(arg1);
  {
    uint64_t * resultptr = (uint64_t *) malloc(sizeof(uint64_t));
    memmove(resultptr, &result, sizeof(uint64_t));
    *(uint64_t **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetRelocationSymbol(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  LLVMRelocationIteratorRef arg1 = (LLVMRelocationIteratorRef) 0 ;
  LLVMSymbolIteratorRef result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMRelocationIteratorRef *)&jarg1; 
  result = (LLVMSymbolIteratorRef)LLVMGetRelocationSymbol(arg1);
  *(LLVMSymbolIteratorRef *)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetRelocationType(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  LLVMRelocationIteratorRef arg1 = (LLVMRelocationIteratorRef) 0 ;
  uint64_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMRelocationIteratorRef *)&jarg1; 
  result = LLVMGetRelocationType(arg1);
  {
    uint64_t * resultptr = (uint64_t *) malloc(sizeof(uint64_t));
    memmove(resultptr, &result, sizeof(uint64_t));
    *(uint64_t **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetRelocationTypeName(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jstring jresult = 0 ;
  LLVMRelocationIteratorRef arg1 = (LLVMRelocationIteratorRef) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMRelocationIteratorRef *)&jarg1; 
  result = (char *)LLVMGetRelocationTypeName(arg1);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_jllvm_bindings_ObjectJNI_LLVMGetRelocationValueString(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jstring jresult = 0 ;
  LLVMRelocationIteratorRef arg1 = (LLVMRelocationIteratorRef) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LLVMRelocationIteratorRef *)&jarg1; 
  result = (char *)LLVMGetRelocationValueString(arg1);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


#ifdef __cplusplus
}
#endif

