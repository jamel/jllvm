/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.jllvm.bindings;

public class BitWriter {
  public static int LLVMWriteBitcodeToFile(SWIGTYPE_p_LLVMOpaqueModule M, String Path) {
    return BitWriterJNI.LLVMWriteBitcodeToFile(SWIGTYPE_p_LLVMOpaqueModule.getCPtr(M), Path);
  }

  public static int LLVMWriteBitcodeToFD(SWIGTYPE_p_LLVMOpaqueModule M, int FD, int ShouldClose, int Unbuffered) {
    return BitWriterJNI.LLVMWriteBitcodeToFD(SWIGTYPE_p_LLVMOpaqueModule.getCPtr(M), FD, ShouldClose, Unbuffered);
  }

  public static int LLVMWriteBitcodeToFileHandle(SWIGTYPE_p_LLVMOpaqueModule M, int Handle) {
    return BitWriterJNI.LLVMWriteBitcodeToFileHandle(SWIGTYPE_p_LLVMOpaqueModule.getCPtr(M), Handle);
  }

}
