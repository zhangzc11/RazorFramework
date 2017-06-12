// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME rootdict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "CustomPdfs.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *RooCB_Dictionary();
   static void RooCB_TClassManip(TClass*);
   static void *new_RooCB(void *p = 0);
   static void *newArray_RooCB(Long_t size, void *p);
   static void delete_RooCB(void *p);
   static void deleteArray_RooCB(void *p);
   static void destruct_RooCB(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCB*)
   {
      ::RooCB *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooCB));
      static ::ROOT::TGenericClassInfo 
         instance("RooCB", "CustomPdfs.hh", 8,
                  typeid(::RooCB), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCB_Dictionary, isa_proxy, 4,
                  sizeof(::RooCB) );
      instance.SetNew(&new_RooCB);
      instance.SetNewArray(&newArray_RooCB);
      instance.SetDelete(&delete_RooCB);
      instance.SetDeleteArray(&deleteArray_RooCB);
      instance.SetDestructor(&destruct_RooCB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCB*)
   {
      return GenerateInitInstanceLocal((::RooCB*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RooCB*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCB_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCB*)0x0)->GetClass();
      RooCB_TClassManip(theClass);
   return theClass;
   }

   static void RooCB_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooDoubleCB_Dictionary();
   static void RooDoubleCB_TClassManip(TClass*);
   static void *new_RooDoubleCB(void *p = 0);
   static void *newArray_RooDoubleCB(Long_t size, void *p);
   static void delete_RooDoubleCB(void *p);
   static void deleteArray_RooDoubleCB(void *p);
   static void destruct_RooDoubleCB(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooDoubleCB*)
   {
      ::RooDoubleCB *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooDoubleCB));
      static ::ROOT::TGenericClassInfo 
         instance("RooDoubleCB", "CustomPdfs.hh", 40,
                  typeid(::RooDoubleCB), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooDoubleCB_Dictionary, isa_proxy, 4,
                  sizeof(::RooDoubleCB) );
      instance.SetNew(&new_RooDoubleCB);
      instance.SetNewArray(&newArray_RooDoubleCB);
      instance.SetDelete(&delete_RooDoubleCB);
      instance.SetDeleteArray(&deleteArray_RooDoubleCB);
      instance.SetDestructor(&destruct_RooDoubleCB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooDoubleCB*)
   {
      return GenerateInitInstanceLocal((::RooDoubleCB*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RooDoubleCB*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooDoubleCB_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooDoubleCB*)0x0)->GetClass();
      RooDoubleCB_TClassManip(theClass);
   return theClass;
   }

   static void RooDoubleCB_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooFermi_Dictionary();
   static void RooFermi_TClassManip(TClass*);
   static void *new_RooFermi(void *p = 0);
   static void *newArray_RooFermi(Long_t size, void *p);
   static void delete_RooFermi(void *p);
   static void deleteArray_RooFermi(void *p);
   static void destruct_RooFermi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFermi*)
   {
      ::RooFermi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooFermi));
      static ::ROOT::TGenericClassInfo 
         instance("RooFermi", "CustomPdfs.hh", 75,
                  typeid(::RooFermi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooFermi_Dictionary, isa_proxy, 4,
                  sizeof(::RooFermi) );
      instance.SetNew(&new_RooFermi);
      instance.SetNewArray(&newArray_RooFermi);
      instance.SetDelete(&delete_RooFermi);
      instance.SetDeleteArray(&deleteArray_RooFermi);
      instance.SetDestructor(&destruct_RooFermi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFermi*)
   {
      return GenerateInitInstanceLocal((::RooFermi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RooFermi*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooFermi_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooFermi*)0x0)->GetClass();
      RooFermi_TClassManip(theClass);
   return theClass;
   }

   static void RooFermi_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooRelBW_Dictionary();
   static void RooRelBW_TClassManip(TClass*);
   static void *new_RooRelBW(void *p = 0);
   static void *newArray_RooRelBW(Long_t size, void *p);
   static void delete_RooRelBW(void *p);
   static void deleteArray_RooRelBW(void *p);
   static void destruct_RooRelBW(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRelBW*)
   {
      ::RooRelBW *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooRelBW));
      static ::ROOT::TGenericClassInfo 
         instance("RooRelBW", "CustomPdfs.hh", 100,
                  typeid(::RooRelBW), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooRelBW_Dictionary, isa_proxy, 4,
                  sizeof(::RooRelBW) );
      instance.SetNew(&new_RooRelBW);
      instance.SetNewArray(&newArray_RooRelBW);
      instance.SetDelete(&delete_RooRelBW);
      instance.SetDeleteArray(&deleteArray_RooRelBW);
      instance.SetDestructor(&destruct_RooRelBW);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRelBW*)
   {
      return GenerateInitInstanceLocal((::RooRelBW*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RooRelBW*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooRelBW_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooRelBW*)0x0)->GetClass();
      RooRelBW_TClassManip(theClass);
   return theClass;
   }

   static void RooRelBW_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *Triangle_Dictionary();
   static void Triangle_TClassManip(TClass*);
   static void *new_Triangle(void *p = 0);
   static void *newArray_Triangle(Long_t size, void *p);
   static void delete_Triangle(void *p);
   static void deleteArray_Triangle(void *p);
   static void destruct_Triangle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Triangle*)
   {
      ::Triangle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Triangle));
      static ::ROOT::TGenericClassInfo 
         instance("Triangle", "CustomPdfs.hh", 128,
                  typeid(::Triangle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Triangle_Dictionary, isa_proxy, 4,
                  sizeof(::Triangle) );
      instance.SetNew(&new_Triangle);
      instance.SetNewArray(&newArray_Triangle);
      instance.SetDelete(&delete_Triangle);
      instance.SetDeleteArray(&deleteArray_Triangle);
      instance.SetDestructor(&destruct_Triangle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Triangle*)
   {
      return GenerateInitInstanceLocal((::Triangle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Triangle*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Triangle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Triangle*)0x0)->GetClass();
      Triangle_TClassManip(theClass);
   return theClass;
   }

   static void Triangle_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooLevelledExp_Dictionary();
   static void RooLevelledExp_TClassManip(TClass*);
   static void *new_RooLevelledExp(void *p = 0);
   static void *newArray_RooLevelledExp(Long_t size, void *p);
   static void delete_RooLevelledExp(void *p);
   static void deleteArray_RooLevelledExp(void *p);
   static void destruct_RooLevelledExp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooLevelledExp*)
   {
      ::RooLevelledExp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooLevelledExp));
      static ::ROOT::TGenericClassInfo 
         instance("RooLevelledExp", "CustomPdfs.hh", 161,
                  typeid(::RooLevelledExp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooLevelledExp_Dictionary, isa_proxy, 4,
                  sizeof(::RooLevelledExp) );
      instance.SetNew(&new_RooLevelledExp);
      instance.SetNewArray(&newArray_RooLevelledExp);
      instance.SetDelete(&delete_RooLevelledExp);
      instance.SetDeleteArray(&deleteArray_RooLevelledExp);
      instance.SetDestructor(&destruct_RooLevelledExp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooLevelledExp*)
   {
      return GenerateInitInstanceLocal((::RooLevelledExp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RooLevelledExp*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooLevelledExp_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooLevelledExp*)0x0)->GetClass();
      RooLevelledExp_TClassManip(theClass);
   return theClass;
   }

   static void RooLevelledExp_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCB(void *p) {
      return  p ? new(p) ::RooCB : new ::RooCB;
   }
   static void *newArray_RooCB(Long_t nElements, void *p) {
      return p ? new(p) ::RooCB[nElements] : new ::RooCB[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCB(void *p) {
      delete ((::RooCB*)p);
   }
   static void deleteArray_RooCB(void *p) {
      delete [] ((::RooCB*)p);
   }
   static void destruct_RooCB(void *p) {
      typedef ::RooCB current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCB

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooDoubleCB(void *p) {
      return  p ? new(p) ::RooDoubleCB : new ::RooDoubleCB;
   }
   static void *newArray_RooDoubleCB(Long_t nElements, void *p) {
      return p ? new(p) ::RooDoubleCB[nElements] : new ::RooDoubleCB[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooDoubleCB(void *p) {
      delete ((::RooDoubleCB*)p);
   }
   static void deleteArray_RooDoubleCB(void *p) {
      delete [] ((::RooDoubleCB*)p);
   }
   static void destruct_RooDoubleCB(void *p) {
      typedef ::RooDoubleCB current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooDoubleCB

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooFermi(void *p) {
      return  p ? new(p) ::RooFermi : new ::RooFermi;
   }
   static void *newArray_RooFermi(Long_t nElements, void *p) {
      return p ? new(p) ::RooFermi[nElements] : new ::RooFermi[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooFermi(void *p) {
      delete ((::RooFermi*)p);
   }
   static void deleteArray_RooFermi(void *p) {
      delete [] ((::RooFermi*)p);
   }
   static void destruct_RooFermi(void *p) {
      typedef ::RooFermi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooFermi

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooRelBW(void *p) {
      return  p ? new(p) ::RooRelBW : new ::RooRelBW;
   }
   static void *newArray_RooRelBW(Long_t nElements, void *p) {
      return p ? new(p) ::RooRelBW[nElements] : new ::RooRelBW[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooRelBW(void *p) {
      delete ((::RooRelBW*)p);
   }
   static void deleteArray_RooRelBW(void *p) {
      delete [] ((::RooRelBW*)p);
   }
   static void destruct_RooRelBW(void *p) {
      typedef ::RooRelBW current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooRelBW

namespace ROOT {
   // Wrappers around operator new
   static void *new_Triangle(void *p) {
      return  p ? new(p) ::Triangle : new ::Triangle;
   }
   static void *newArray_Triangle(Long_t nElements, void *p) {
      return p ? new(p) ::Triangle[nElements] : new ::Triangle[nElements];
   }
   // Wrapper around operator delete
   static void delete_Triangle(void *p) {
      delete ((::Triangle*)p);
   }
   static void deleteArray_Triangle(void *p) {
      delete [] ((::Triangle*)p);
   }
   static void destruct_Triangle(void *p) {
      typedef ::Triangle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Triangle

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooLevelledExp(void *p) {
      return  p ? new(p) ::RooLevelledExp : new ::RooLevelledExp;
   }
   static void *newArray_RooLevelledExp(Long_t nElements, void *p) {
      return p ? new(p) ::RooLevelledExp[nElements] : new ::RooLevelledExp[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooLevelledExp(void *p) {
      delete ((::RooLevelledExp*)p);
   }
   static void deleteArray_RooLevelledExp(void *p) {
      delete [] ((::RooLevelledExp*)p);
   }
   static void destruct_RooLevelledExp(void *p) {
      typedef ::RooLevelledExp current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooLevelledExp

namespace {
  void TriggerDictionaryInitialization_rootdict_Impl() {
    static const char* headers[] = {
"CustomPdfs.hh",
0
    };
    static const char* includePaths[] = {
"/afs/cern.ch/work/z/zhicaiz/public/release/CMSSW_7_6_3/src/RazorFramework_hacked_git/HggRazor/FitMgg/include",
"/afs/cern.ch/work/c/cpena/public/myRootHacked6V2/include",
"/afs/cern.ch/work/z/zhicaiz/public/release/CMSSW_7_6_3/src/RazorFramework_hacked_git/HggRazor/FitMgg/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "rootdict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$CustomPdfs.hh")))  RooCB;
class __attribute__((annotate("$clingAutoload$CustomPdfs.hh")))  RooDoubleCB;
class __attribute__((annotate("$clingAutoload$CustomPdfs.hh")))  RooFermi;
class __attribute__((annotate("$clingAutoload$CustomPdfs.hh")))  RooRelBW;
class __attribute__((annotate("$clingAutoload$CustomPdfs.hh")))  Triangle;
class __attribute__((annotate("$clingAutoload$CustomPdfs.hh")))  RooLevelledExp;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "rootdict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "CustomPdfs.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"RooCB", payloadCode, "@",
"RooDoubleCB", payloadCode, "@",
"RooFermi", payloadCode, "@",
"RooLevelledExp", payloadCode, "@",
"RooRelBW", payloadCode, "@",
"Triangle", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("rootdict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_rootdict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_rootdict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_rootdict() {
  TriggerDictionaryInitialization_rootdict_Impl();
}
