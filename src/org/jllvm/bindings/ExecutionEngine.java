/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.4
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.jllvm.bindings;

public class ExecutionEngine {
  public static SWIGTYPE_p_p_LLVMOpaqueValue new_LLVMValueRefArray(int nelements) {
    long cPtr = ExecutionEngineJNI.new_LLVMValueRefArray(nelements);
    return (cPtr == 0) ? null : new SWIGTYPE_p_p_LLVMOpaqueValue(cPtr, false);
  }

  public static void delete_LLVMValueRefArray(SWIGTYPE_p_p_LLVMOpaqueValue ary) {
    ExecutionEngineJNI.delete_LLVMValueRefArray(SWIGTYPE_p_p_LLVMOpaqueValue.getCPtr(ary));
  }

  public static SWIGTYPE_p_LLVMOpaqueValue LLVMValueRefArray_getitem(SWIGTYPE_p_p_LLVMOpaqueValue ary, int index) {
    long cPtr = ExecutionEngineJNI.LLVMValueRefArray_getitem(SWIGTYPE_p_p_LLVMOpaqueValue.getCPtr(ary), index);
    return (cPtr == 0) ? null : new SWIGTYPE_p_LLVMOpaqueValue(cPtr, false);
  }

  public static void LLVMValueRefArray_setitem(SWIGTYPE_p_p_LLVMOpaqueValue ary, int index, SWIGTYPE_p_LLVMOpaqueValue value) {
    ExecutionEngineJNI.LLVMValueRefArray_setitem(SWIGTYPE_p_p_LLVMOpaqueValue.getCPtr(ary), index, SWIGTYPE_p_LLVMOpaqueValue.getCPtr(value));
  }

  public static SWIGTYPE_p_p_LLVMOpaqueModule new_LLVMModuleRefArray(int nelements) {
    long cPtr = ExecutionEngineJNI.new_LLVMModuleRefArray(nelements);
    return (cPtr == 0) ? null : new SWIGTYPE_p_p_LLVMOpaqueModule(cPtr, false);
  }

  public static void delete_LLVMModuleRefArray(SWIGTYPE_p_p_LLVMOpaqueModule ary) {
    ExecutionEngineJNI.delete_LLVMModuleRefArray(SWIGTYPE_p_p_LLVMOpaqueModule.getCPtr(ary));
  }

  public static SWIGTYPE_p_LLVMOpaqueModule LLVMModuleRefArray_getitem(SWIGTYPE_p_p_LLVMOpaqueModule ary, int index) {
    long cPtr = ExecutionEngineJNI.LLVMModuleRefArray_getitem(SWIGTYPE_p_p_LLVMOpaqueModule.getCPtr(ary), index);
    return (cPtr == 0) ? null : new SWIGTYPE_p_LLVMOpaqueModule(cPtr, false);
  }

  public static void LLVMModuleRefArray_setitem(SWIGTYPE_p_p_LLVMOpaqueModule ary, int index, SWIGTYPE_p_LLVMOpaqueModule value) {
    ExecutionEngineJNI.LLVMModuleRefArray_setitem(SWIGTYPE_p_p_LLVMOpaqueModule.getCPtr(ary), index, SWIGTYPE_p_LLVMOpaqueModule.getCPtr(value));
  }

  public static SWIGTYPE_p_p_LLVMOpaqueExecutionEngine new_LLVMExecutionEngineRefArray(int nelements) {
    long cPtr = ExecutionEngineJNI.new_LLVMExecutionEngineRefArray(nelements);
    return (cPtr == 0) ? null : new SWIGTYPE_p_p_LLVMOpaqueExecutionEngine(cPtr, false);
  }

  public static void delete_LLVMExecutionEngineRefArray(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine ary) {
    ExecutionEngineJNI.delete_LLVMExecutionEngineRefArray(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine.getCPtr(ary));
  }

  public static SWIGTYPE_p_LLVMOpaqueExecutionEngine LLVMExecutionEngineRefArray_getitem(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine ary, int index) {
    long cPtr = ExecutionEngineJNI.LLVMExecutionEngineRefArray_getitem(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine.getCPtr(ary), index);
    return (cPtr == 0) ? null : new SWIGTYPE_p_LLVMOpaqueExecutionEngine(cPtr, false);
  }

  public static void LLVMExecutionEngineRefArray_setitem(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine ary, int index, SWIGTYPE_p_LLVMOpaqueExecutionEngine value) {
    ExecutionEngineJNI.LLVMExecutionEngineRefArray_setitem(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine.getCPtr(ary), index, SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(value));
  }

  public static SWIGTYPE_p_p_LLVMOpaqueGenericValue new_LLVMGenericValueRefArray(int nelements) {
    long cPtr = ExecutionEngineJNI.new_LLVMGenericValueRefArray(nelements);
    return (cPtr == 0) ? null : new SWIGTYPE_p_p_LLVMOpaqueGenericValue(cPtr, false);
  }

  public static void delete_LLVMGenericValueRefArray(SWIGTYPE_p_p_LLVMOpaqueGenericValue ary) {
    ExecutionEngineJNI.delete_LLVMGenericValueRefArray(SWIGTYPE_p_p_LLVMOpaqueGenericValue.getCPtr(ary));
  }

  public static SWIGTYPE_p_LLVMOpaqueGenericValue LLVMGenericValueRefArray_getitem(SWIGTYPE_p_p_LLVMOpaqueGenericValue ary, int index) {
    long cPtr = ExecutionEngineJNI.LLVMGenericValueRefArray_getitem(SWIGTYPE_p_p_LLVMOpaqueGenericValue.getCPtr(ary), index);
    return (cPtr == 0) ? null : new SWIGTYPE_p_LLVMOpaqueGenericValue(cPtr, false);
  }

  public static void LLVMGenericValueRefArray_setitem(SWIGTYPE_p_p_LLVMOpaqueGenericValue ary, int index, SWIGTYPE_p_LLVMOpaqueGenericValue value) {
    ExecutionEngineJNI.LLVMGenericValueRefArray_setitem(SWIGTYPE_p_p_LLVMOpaqueGenericValue.getCPtr(ary), index, SWIGTYPE_p_LLVMOpaqueGenericValue.getCPtr(value));
  }

  public static SWIGTYPE_p_p_char new_StringArray(int nelements) {
    long cPtr = ExecutionEngineJNI.new_StringArray(nelements);
    return (cPtr == 0) ? null : new SWIGTYPE_p_p_char(cPtr, false);
  }

  public static void delete_StringArray(SWIGTYPE_p_p_char ary) {
    ExecutionEngineJNI.delete_StringArray(SWIGTYPE_p_p_char.getCPtr(ary));
  }

  public static String StringArray_getitem(SWIGTYPE_p_p_char ary, int index) {
    return ExecutionEngineJNI.StringArray_getitem(SWIGTYPE_p_p_char.getCPtr(ary), index);
  }

  public static void StringArray_setitem(SWIGTYPE_p_p_char ary, int index, String value) {
    ExecutionEngineJNI.StringArray_setitem(SWIGTYPE_p_p_char.getCPtr(ary), index, value);
  }

  public static void LLVMLinkInJIT() {
    ExecutionEngineJNI.LLVMLinkInJIT();
  }

  public static void LLVMLinkInInterpreter() {
    ExecutionEngineJNI.LLVMLinkInInterpreter();
  }

  public static SWIGTYPE_p_LLVMOpaqueGenericValue LLVMCreateGenericValueOfInt(SWIGTYPE_p_LLVMOpaqueType Ty, java.math.BigInteger N, int IsSigned) {
    long cPtr = ExecutionEngineJNI.LLVMCreateGenericValueOfInt(SWIGTYPE_p_LLVMOpaqueType.getCPtr(Ty), N, IsSigned);
    return (cPtr == 0) ? null : new SWIGTYPE_p_LLVMOpaqueGenericValue(cPtr, false);
  }

  public static SWIGTYPE_p_LLVMOpaqueGenericValue LLVMCreateGenericValueOfPointer(SWIGTYPE_p_void P) {
    long cPtr = ExecutionEngineJNI.LLVMCreateGenericValueOfPointer(SWIGTYPE_p_void.getCPtr(P));
    return (cPtr == 0) ? null : new SWIGTYPE_p_LLVMOpaqueGenericValue(cPtr, false);
  }

  public static SWIGTYPE_p_LLVMOpaqueGenericValue LLVMCreateGenericValueOfFloat(SWIGTYPE_p_LLVMOpaqueType Ty, double N) {
    long cPtr = ExecutionEngineJNI.LLVMCreateGenericValueOfFloat(SWIGTYPE_p_LLVMOpaqueType.getCPtr(Ty), N);
    return (cPtr == 0) ? null : new SWIGTYPE_p_LLVMOpaqueGenericValue(cPtr, false);
  }

  public static long LLVMGenericValueIntWidth(SWIGTYPE_p_LLVMOpaqueGenericValue GenValRef) {
    return ExecutionEngineJNI.LLVMGenericValueIntWidth(SWIGTYPE_p_LLVMOpaqueGenericValue.getCPtr(GenValRef));
  }

  public static java.math.BigInteger LLVMGenericValueToInt(SWIGTYPE_p_LLVMOpaqueGenericValue GenVal, int IsSigned) {
    return ExecutionEngineJNI.LLVMGenericValueToInt(SWIGTYPE_p_LLVMOpaqueGenericValue.getCPtr(GenVal), IsSigned);
  }

  public static SWIGTYPE_p_void LLVMGenericValueToPointer(SWIGTYPE_p_LLVMOpaqueGenericValue GenVal) {
    long cPtr = ExecutionEngineJNI.LLVMGenericValueToPointer(SWIGTYPE_p_LLVMOpaqueGenericValue.getCPtr(GenVal));
    return (cPtr == 0) ? null : new SWIGTYPE_p_void(cPtr, false);
  }

  public static double LLVMGenericValueToFloat(SWIGTYPE_p_LLVMOpaqueType TyRef, SWIGTYPE_p_LLVMOpaqueGenericValue GenVal) {
    return ExecutionEngineJNI.LLVMGenericValueToFloat(SWIGTYPE_p_LLVMOpaqueType.getCPtr(TyRef), SWIGTYPE_p_LLVMOpaqueGenericValue.getCPtr(GenVal));
  }

  public static void LLVMDisposeGenericValue(SWIGTYPE_p_LLVMOpaqueGenericValue GenVal) {
    ExecutionEngineJNI.LLVMDisposeGenericValue(SWIGTYPE_p_LLVMOpaqueGenericValue.getCPtr(GenVal));
  }

  public static int LLVMCreateExecutionEngineForModule(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine OutEE, SWIGTYPE_p_LLVMOpaqueModule M, SWIGTYPE_p_p_char OutError) {
    return ExecutionEngineJNI.LLVMCreateExecutionEngineForModule(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine.getCPtr(OutEE), SWIGTYPE_p_LLVMOpaqueModule.getCPtr(M), SWIGTYPE_p_p_char.getCPtr(OutError));
  }

  public static int LLVMCreateInterpreterForModule(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine OutInterp, SWIGTYPE_p_LLVMOpaqueModule M, SWIGTYPE_p_p_char OutError) {
    return ExecutionEngineJNI.LLVMCreateInterpreterForModule(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine.getCPtr(OutInterp), SWIGTYPE_p_LLVMOpaqueModule.getCPtr(M), SWIGTYPE_p_p_char.getCPtr(OutError));
  }

  public static int LLVMCreateJITCompilerForModule(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine OutJIT, SWIGTYPE_p_LLVMOpaqueModule M, long OptLevel, SWIGTYPE_p_p_char OutError) {
    return ExecutionEngineJNI.LLVMCreateJITCompilerForModule(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine.getCPtr(OutJIT), SWIGTYPE_p_LLVMOpaqueModule.getCPtr(M), OptLevel, SWIGTYPE_p_p_char.getCPtr(OutError));
  }

  public static int LLVMCreateExecutionEngine(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine OutEE, SWIGTYPE_p_LLVMModuleProviderRef MP, SWIGTYPE_p_p_char OutError) {
    return ExecutionEngineJNI.LLVMCreateExecutionEngine(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine.getCPtr(OutEE), SWIGTYPE_p_LLVMModuleProviderRef.getCPtr(MP), SWIGTYPE_p_p_char.getCPtr(OutError));
  }

  public static int LLVMCreateInterpreter(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine OutInterp, SWIGTYPE_p_LLVMModuleProviderRef MP, SWIGTYPE_p_p_char OutError) {
    return ExecutionEngineJNI.LLVMCreateInterpreter(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine.getCPtr(OutInterp), SWIGTYPE_p_LLVMModuleProviderRef.getCPtr(MP), SWIGTYPE_p_p_char.getCPtr(OutError));
  }

  public static int LLVMCreateJITCompiler(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine OutJIT, SWIGTYPE_p_LLVMModuleProviderRef MP, long OptLevel, SWIGTYPE_p_p_char OutError) {
    return ExecutionEngineJNI.LLVMCreateJITCompiler(SWIGTYPE_p_p_LLVMOpaqueExecutionEngine.getCPtr(OutJIT), SWIGTYPE_p_LLVMModuleProviderRef.getCPtr(MP), OptLevel, SWIGTYPE_p_p_char.getCPtr(OutError));
  }

  public static void LLVMDisposeExecutionEngine(SWIGTYPE_p_LLVMOpaqueExecutionEngine EE) {
    ExecutionEngineJNI.LLVMDisposeExecutionEngine(SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(EE));
  }

  public static void LLVMRunStaticConstructors(SWIGTYPE_p_LLVMOpaqueExecutionEngine EE) {
    ExecutionEngineJNI.LLVMRunStaticConstructors(SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(EE));
  }

  public static void LLVMRunStaticDestructors(SWIGTYPE_p_LLVMOpaqueExecutionEngine EE) {
    ExecutionEngineJNI.LLVMRunStaticDestructors(SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(EE));
  }

  public static int LLVMRunFunctionAsMain(SWIGTYPE_p_LLVMOpaqueExecutionEngine EE, SWIGTYPE_p_LLVMOpaqueValue F, long ArgC, SWIGTYPE_p_p_char ArgV, SWIGTYPE_p_p_char EnvP) {
    return ExecutionEngineJNI.LLVMRunFunctionAsMain(SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(EE), SWIGTYPE_p_LLVMOpaqueValue.getCPtr(F), ArgC, SWIGTYPE_p_p_char.getCPtr(ArgV), SWIGTYPE_p_p_char.getCPtr(EnvP));
  }

  public static SWIGTYPE_p_LLVMOpaqueGenericValue LLVMRunFunction(SWIGTYPE_p_LLVMOpaqueExecutionEngine EE, SWIGTYPE_p_LLVMOpaqueValue F, long NumArgs, SWIGTYPE_p_p_LLVMOpaqueGenericValue Args) {
    long cPtr = ExecutionEngineJNI.LLVMRunFunction(SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(EE), SWIGTYPE_p_LLVMOpaqueValue.getCPtr(F), NumArgs, SWIGTYPE_p_p_LLVMOpaqueGenericValue.getCPtr(Args));
    return (cPtr == 0) ? null : new SWIGTYPE_p_LLVMOpaqueGenericValue(cPtr, false);
  }

  public static void LLVMFreeMachineCodeForFunction(SWIGTYPE_p_LLVMOpaqueExecutionEngine EE, SWIGTYPE_p_LLVMOpaqueValue F) {
    ExecutionEngineJNI.LLVMFreeMachineCodeForFunction(SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(EE), SWIGTYPE_p_LLVMOpaqueValue.getCPtr(F));
  }

  public static void LLVMAddModule(SWIGTYPE_p_LLVMOpaqueExecutionEngine EE, SWIGTYPE_p_LLVMOpaqueModule M) {
    ExecutionEngineJNI.LLVMAddModule(SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(EE), SWIGTYPE_p_LLVMOpaqueModule.getCPtr(M));
  }

  public static void LLVMAddModuleProvider(SWIGTYPE_p_LLVMOpaqueExecutionEngine EE, SWIGTYPE_p_LLVMModuleProviderRef MP) {
    ExecutionEngineJNI.LLVMAddModuleProvider(SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(EE), SWIGTYPE_p_LLVMModuleProviderRef.getCPtr(MP));
  }

  public static int LLVMRemoveModule(SWIGTYPE_p_LLVMOpaqueExecutionEngine EE, SWIGTYPE_p_LLVMOpaqueModule M, SWIGTYPE_p_p_LLVMOpaqueModule OutMod, SWIGTYPE_p_p_char OutError) {
    return ExecutionEngineJNI.LLVMRemoveModule(SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(EE), SWIGTYPE_p_LLVMOpaqueModule.getCPtr(M), SWIGTYPE_p_p_LLVMOpaqueModule.getCPtr(OutMod), SWIGTYPE_p_p_char.getCPtr(OutError));
  }

  public static int LLVMRemoveModuleProvider(SWIGTYPE_p_LLVMOpaqueExecutionEngine EE, SWIGTYPE_p_LLVMModuleProviderRef MP, SWIGTYPE_p_p_LLVMOpaqueModule OutMod, SWIGTYPE_p_p_char OutError) {
    return ExecutionEngineJNI.LLVMRemoveModuleProvider(SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(EE), SWIGTYPE_p_LLVMModuleProviderRef.getCPtr(MP), SWIGTYPE_p_p_LLVMOpaqueModule.getCPtr(OutMod), SWIGTYPE_p_p_char.getCPtr(OutError));
  }

  public static int LLVMFindFunction(SWIGTYPE_p_LLVMOpaqueExecutionEngine EE, String Name, SWIGTYPE_p_p_LLVMOpaqueValue OutFn) {
    return ExecutionEngineJNI.LLVMFindFunction(SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(EE), Name, SWIGTYPE_p_p_LLVMOpaqueValue.getCPtr(OutFn));
  }

  public static SWIGTYPE_p_void LLVMRecompileAndRelinkFunction(SWIGTYPE_p_LLVMOpaqueExecutionEngine EE, SWIGTYPE_p_LLVMOpaqueValue Fn) {
    long cPtr = ExecutionEngineJNI.LLVMRecompileAndRelinkFunction(SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(EE), SWIGTYPE_p_LLVMOpaqueValue.getCPtr(Fn));
    return (cPtr == 0) ? null : new SWIGTYPE_p_void(cPtr, false);
  }

  public static SWIGTYPE_p_LLVMOpaqueTargetData LLVMGetExecutionEngineTargetData(SWIGTYPE_p_LLVMOpaqueExecutionEngine EE) {
    long cPtr = ExecutionEngineJNI.LLVMGetExecutionEngineTargetData(SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(EE));
    return (cPtr == 0) ? null : new SWIGTYPE_p_LLVMOpaqueTargetData(cPtr, false);
  }

  public static void LLVMAddGlobalMapping(SWIGTYPE_p_LLVMOpaqueExecutionEngine EE, SWIGTYPE_p_LLVMOpaqueValue Global, SWIGTYPE_p_void Addr) {
    ExecutionEngineJNI.LLVMAddGlobalMapping(SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(EE), SWIGTYPE_p_LLVMOpaqueValue.getCPtr(Global), SWIGTYPE_p_void.getCPtr(Addr));
  }

  public static SWIGTYPE_p_void LLVMGetPointerToGlobal(SWIGTYPE_p_LLVMOpaqueExecutionEngine EE, SWIGTYPE_p_LLVMOpaqueValue Global) {
    long cPtr = ExecutionEngineJNI.LLVMGetPointerToGlobal(SWIGTYPE_p_LLVMOpaqueExecutionEngine.getCPtr(EE), SWIGTYPE_p_LLVMOpaqueValue.getCPtr(Global));
    return (cPtr == 0) ? null : new SWIGTYPE_p_void(cPtr, false);
  }

}
