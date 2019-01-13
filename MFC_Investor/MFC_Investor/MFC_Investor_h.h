

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for MFCInvestor.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __MFC_Investor_h_h__
#define __MFC_Investor_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMFC_Investor_FWD_DEFINED__
#define __IMFC_Investor_FWD_DEFINED__
typedef interface IMFC_Investor IMFC_Investor;

#endif 	/* __IMFC_Investor_FWD_DEFINED__ */


#ifndef __CMFCInvestorDoc_FWD_DEFINED__
#define __CMFCInvestorDoc_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMFCInvestorDoc CMFCInvestorDoc;
#else
typedef struct CMFCInvestorDoc CMFCInvestorDoc;
#endif /* __cplusplus */

#endif 	/* __CMFCInvestorDoc_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __MFC_Investor_LIBRARY_DEFINED__
#define __MFC_Investor_LIBRARY_DEFINED__

/* library MFC_Investor */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_MFC_Investor;

#ifndef __IMFC_Investor_DISPINTERFACE_DEFINED__
#define __IMFC_Investor_DISPINTERFACE_DEFINED__

/* dispinterface IMFC_Investor */
/* [uuid] */ 


EXTERN_C const IID DIID_IMFC_Investor;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7d9f62fc-ba2d-4095-82ef-f3adbbc323fb")
    IMFC_Investor : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IMFC_InvestorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMFC_Investor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMFC_Investor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMFC_Investor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMFC_Investor * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMFC_Investor * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMFC_Investor * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMFC_Investor * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IMFC_InvestorVtbl;

    interface IMFC_Investor
    {
        CONST_VTBL struct IMFC_InvestorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMFC_Investor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMFC_Investor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMFC_Investor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMFC_Investor_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMFC_Investor_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMFC_Investor_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMFC_Investor_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IMFC_Investor_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CMFCInvestorDoc;

#ifdef __cplusplus

class DECLSPEC_UUID("009d6129-bcd1-45c8-939e-471502389798")
CMFCInvestorDoc;
#endif
#endif /* __MFC_Investor_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


