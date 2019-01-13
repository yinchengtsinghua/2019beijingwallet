

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for MFCInvestorHandlers.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IPreview,0xe76bf09c,0x0cb0,0x48c7,0xbd,0x8f,0x39,0x26,0x84,0x2d,0x6a,0x7e);


MIDL_DEFINE_GUID(IID, IID_IThumbnail,0xa4a3fa83,0x722e,0x4bd4,0xa3,0x0c,0x2d,0xcd,0x18,0x0f,0xa2,0x1e);


MIDL_DEFINE_GUID(IID, IID_ISearch,0xa5a5a910,0xfbda,0x4db9,0x83,0xca,0xad,0xef,0xbd,0xaa,0xa9,0x58);


MIDL_DEFINE_GUID(IID, LIBID_MFCInvestorHandlersLib,0x077c5c28,0x48a9,0x488e,0x96,0x2c,0x5f,0x9a,0x8a,0x3c,0x68,0xe7);


MIDL_DEFINE_GUID(CLSID, CLSID_Preview,0x4e2b6b80,0x8c62,0x4997,0xbc,0xb6,0x95,0x1b,0x5b,0x2f,0x54,0xaf);


MIDL_DEFINE_GUID(CLSID, CLSID_Thumbnail,0x002fc525,0x2af7,0x4c2f,0xa1,0xfb,0x78,0xcb,0x2e,0xe0,0x7c,0x3b);


MIDL_DEFINE_GUID(CLSID, CLSID_Search,0x2007b856,0x0c6e,0x4987,0x85,0xb5,0xf0,0xb1,0x01,0xa7,0x5e,0x9c);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



