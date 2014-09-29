

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Fri Sep 06 10:20:35 2013
 */
/* Compiler settings for ..\..\Zt.IDL:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


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
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_AiSquared,0x9FBBC98E,0xAE78,0x4A1C,0xB6,0x35,0x1E,0xCA,0x2F,0xBF,0xFB,0x40);


MIDL_DEFINE_GUID(IID, IID_IZTCommand,0xCC675E9B,0xD54B,0x4752,0xAE,0xBE,0x20,0xF1,0xB6,0x49,0x62,0x01);


MIDL_DEFINE_GUID(IID, IID_IZoomText,0xDE188A1C,0x7426,0x46F4,0x95,0xE2,0x40,0x04,0xA5,0xF6,0x64,0xD9);


MIDL_DEFINE_GUID(IID, IID_IAhoiManager,0xCCB88338,0x5D06,0x4D72,0x8E,0x08,0x52,0x6E,0xAB,0xED,0x44,0x58);


MIDL_DEFINE_GUID(IID, IID_IAhoiManager2,0xBA722D2B,0x4323,0x495D,0x84,0xFF,0x39,0xD6,0x94,0xD1,0x70,0xBB);


MIDL_DEFINE_GUID(IID, IID_IEventManager,0x5D2381CF,0x0B7D,0x4554,0xB3,0xA6,0xE6,0x7F,0x6E,0x98,0xDF,0xB3);


MIDL_DEFINE_GUID(IID, IID_IEventManager2,0xE0140240,0xFBA2,0x4E2B,0xA4,0xED,0xE7,0xAD,0x17,0x6E,0x7B,0xC6);


MIDL_DEFINE_GUID(IID, IID_IEventDefinition,0x83012579,0xFEC8,0x4B8A,0xA6,0xB6,0x9E,0x91,0x44,0xA7,0xE4,0x7F);


MIDL_DEFINE_GUID(IID, IID_IHotkeys,0xF8D5580B,0xBB40,0x4FBC,0xA8,0x8D,0xD4,0xEE,0x78,0x2B,0xEE,0x0E);


MIDL_DEFINE_GUID(IID, IID_IKeyboard,0x04972FBC,0x5254,0x11DC,0x83,0x14,0x08,0x00,0x20,0x0C,0x9A,0x66);


MIDL_DEFINE_GUID(IID, IID_IMagnification,0x33FBE571,0xA41D,0x49CF,0x84,0xC7,0x5E,0x22,0x07,0xE3,0x7E,0x98);


MIDL_DEFINE_GUID(IID, IID_IMagnification2,0xB8EE8CBB,0x6357,0x44EF,0xA0,0x24,0x0B,0x75,0x6D,0x0D,0x77,0x30);


MIDL_DEFINE_GUID(IID, IID_IMagnification3,0x7FECB1F1,0xC6D4,0x4F80,0x87,0xB4,0x06,0xDC,0xAA,0xBE,0xBF,0x57);


MIDL_DEFINE_GUID(IID, IID_ICaretEnhancements,0xD0433F69,0x0D8C,0x4775,0x83,0xF9,0x1F,0x04,0xF9,0x7C,0x3A,0x72);


MIDL_DEFINE_GUID(IID, IID_ICaretEnhancements2,0x92EFD367,0x80CC,0x4DDC,0xA8,0x41,0xEA,0x00,0x0C,0x53,0x1D,0x39);


MIDL_DEFINE_GUID(IID, IID_IRectangle,0x22AB4F67,0x91C3,0x4DD9,0x9B,0xC0,0x5B,0xD1,0xD5,0xAB,0x9B,0x90);


MIDL_DEFINE_GUID(IID, IID_IColorEnhancements,0x0370FAD7,0x0E6B,0x46F1,0xA0,0x08,0xC6,0xD6,0x89,0x49,0x3F,0xCE);


MIDL_DEFINE_GUID(IID, IID_IDualMonitor,0x71C6BC10,0xCA7B,0x4812,0x8B,0x1F,0xB6,0x4C,0xB7,0xA5,0x09,0xE7);


MIDL_DEFINE_GUID(IID, IID_IFocusEnhancements,0x2E51ED2F,0x589A,0x4C74,0xB9,0x55,0x27,0x3F,0xF8,0xA0,0x41,0x77);


MIDL_DEFINE_GUID(IID, IID_IFocusEnhancements2,0x58041971,0x3A0B,0x4821,0xA4,0x36,0x6B,0x94,0x71,0xFD,0xFD,0xC4);


MIDL_DEFINE_GUID(IID, IID_IFontEnhancements,0x0EE21611,0xD296,0x4C6D,0x8D,0x28,0x87,0xD7,0xBF,0xC6,0x26,0xFA);


MIDL_DEFINE_GUID(IID, IID_IZoomWindow,0xB9966BD6,0x5A59,0x4A20,0xB4,0xD5,0xC9,0x7E,0x70,0x80,0x75,0x27);


MIDL_DEFINE_GUID(IID, IID_IPower,0xFFBA1585,0x96AA,0x4BE7,0xBF,0x8E,0x79,0x96,0xBE,0x40,0x56,0x83);


MIDL_DEFINE_GUID(IID, IID_IPointerEnhancements,0x41C19AC7,0x4D28,0x4D3B,0xA1,0x7F,0x70,0x4D,0x0F,0x1B,0x38,0x72);


MIDL_DEFINE_GUID(IID, IID_ITracking,0x9A59B310,0x74F6,0x4D43,0xB0,0xAB,0x1F,0x44,0xDA,0x82,0x68,0xE0);


MIDL_DEFINE_GUID(IID, IID_ITracking2,0x0E890643,0x4D5B,0x4E20,0x8A,0x72,0x80,0xC8,0xAD,0x25,0x11,0xF9);


MIDL_DEFINE_GUID(IID, IID_IViewLocator,0x91B8C0CD,0x93CF,0x46F3,0xAB,0xBA,0x04,0xC6,0x1A,0x13,0xBA,0x0C);


MIDL_DEFINE_GUID(IID, IID_IScreenHighlight,0x1A1F44C1,0x83B2,0x4D12,0xB6,0xFE,0x62,0x97,0x51,0xC1,0x34,0xEC);


MIDL_DEFINE_GUID(IID, IID_IScreenHighlight2,0xEB53CA25,0x96D6,0x4978,0xBC,0x65,0x4C,0x3B,0x21,0x18,0xCE,0xE5);


MIDL_DEFINE_GUID(IID, IID_ICCTV,0x050E0E11,0x3D0A,0x4F6E,0xA6,0x34,0xC2,0x27,0x0E,0x30,0xDC,0x1B);


MIDL_DEFINE_GUID(IID, IID_IMouse,0x4C2662B3,0x4CF7,0x4B05,0xB0,0xB0,0x53,0xAE,0x74,0xEE,0x8D,0x5D);


MIDL_DEFINE_GUID(IID, IID_IPoint,0xE9BED2BF,0x8834,0x49F9,0xAD,0x4C,0x12,0xC3,0xCF,0x73,0x73,0xAD);


MIDL_DEFINE_GUID(IID, IID_IReader,0xCDE9E8A8,0x03A7,0x4413,0x86,0xA3,0xAC,0xA3,0x0F,0x30,0x5A,0xC1);


MIDL_DEFINE_GUID(IID, IID_IReader2,0x5F41AADC,0x84DC,0x445D,0xBB,0x22,0x0F,0xDE,0x09,0xB9,0x5E,0x91);


MIDL_DEFINE_GUID(IID, IID_IReader3,0x129E7A0E,0x9E23,0x469D,0xA2,0xCA,0xDE,0x3B,0xAE,0xCA,0xF4,0x5D);


MIDL_DEFINE_GUID(IID, IID_IAppReader,0xC4C5A470,0x4F53,0x4BBF,0xA5,0x34,0xBA,0x88,0xE9,0xFB,0xBE,0x5F);


MIDL_DEFINE_GUID(IID, IID_IMouseEcho,0x1203B332,0x4EF0,0x41FD,0xBC,0x24,0x76,0x35,0x03,0xB8,0xDC,0x90);


MIDL_DEFINE_GUID(IID, IID_IReadingZones,0xA0A71491,0x2B73,0x43F3,0x9E,0x6B,0x5A,0x9F,0xDD,0xDD,0xC3,0xD1);


MIDL_DEFINE_GUID(IID, IID_IReadingZoneObject,0xCB508DD4,0x5076,0x4B3C,0xB7,0x92,0x62,0x9D,0x6C,0x37,0xAF,0x41);


MIDL_DEFINE_GUID(IID, IID_ITypingEcho,0x865C25B5,0x9A75,0x4E41,0xB1,0x82,0xDC,0xA1,0x76,0x82,0x55,0xE3);


MIDL_DEFINE_GUID(IID, IID_IVerbosity,0x7F5432AA,0x9729,0x4FD3,0xA7,0x83,0x2C,0x02,0xFA,0xBE,0x5B,0x86);


MIDL_DEFINE_GUID(IID, IID_IProgramEcho,0xBFFF5140,0xBA03,0x40B0,0x81,0x31,0xEC,0x64,0x67,0x3B,0xC7,0x35);


MIDL_DEFINE_GUID(IID, IID_IDocReader,0x8423FBEB,0xFEAF,0x4248,0x96,0x38,0x15,0x6A,0x75,0x43,0xEA,0x91);


MIDL_DEFINE_GUID(IID, IID_IRecorder,0x2AEB500E,0x85AD,0x4808,0x83,0x6B,0x2F,0x15,0x12,0x69,0x79,0x66);


MIDL_DEFINE_GUID(IID, IID_IScriptConfiguration,0xFF065601,0xDC5C,0x49AD,0xAB,0x8D,0x58,0x32,0x58,0x85,0xBE,0x0B);


MIDL_DEFINE_GUID(IID, IID_IScriptInformation,0xFA636707,0xC09A,0x4FD9,0x8A,0x1B,0x83,0x8A,0x5A,0x50,0x5A,0x4C);


MIDL_DEFINE_GUID(IID, IID_IZoomTextSettings,0xEE7B5CC9,0xBF3E,0x493D,0xAE,0xD4,0xA0,0xA0,0xA1,0x0A,0x9A,0x8C);


MIDL_DEFINE_GUID(IID, IID_IZoomTextSettings2,0xE874A180,0xD7C9,0x4B21,0xA6,0x38,0x98,0x2D,0x36,0xF5,0xEA,0x7E);


MIDL_DEFINE_GUID(IID, IID_IZoomTextSettings3,0x51B35190,0x807C,0x4AC8,0xB7,0x4F,0x3A,0x3F,0xD8,0x3E,0x6F,0x86);


MIDL_DEFINE_GUID(IID, IID_IZoomTextSettings4,0x84C39C47,0x0CFB,0x43A8,0xB8,0x8E,0x0C,0x66,0x62,0x00,0x08,0x77);


MIDL_DEFINE_GUID(IID, IID_ISpeech,0xB7271C8C,0x3A94,0x4831,0x88,0x3B,0x81,0xBA,0x18,0xB8,0x76,0x64);


MIDL_DEFINE_GUID(IID, IID_ISpeech2,0xCD16491D,0x29DE,0x4CB2,0xA4,0xD9,0x2A,0xD4,0x23,0xFE,0x3C,0x6E);


MIDL_DEFINE_GUID(IID, IID_IVoice,0xA2FBF963,0x0748,0x4266,0xA0,0x4B,0x8C,0x54,0x46,0x61,0x26,0xD5);


MIDL_DEFINE_GUID(IID, IID_IObjectCollection,0xE9EF732F,0x25EF,0x4D19,0xA0,0xD2,0xFE,0x8F,0x6D,0x3A,0x1B,0xBB);


MIDL_DEFINE_GUID(IID, IID_ISpeaker,0xC7149863,0x61D3,0x422F,0xAA,0x2C,0x0D,0xCA,0x65,0x49,0x14,0xD5);


MIDL_DEFINE_GUID(IID, IID_IScriptManager,0x729772A3,0x83E7,0x4D86,0xA3,0x0C,0x78,0x0C,0x24,0xD0,0xBB,0x6C);


MIDL_DEFINE_GUID(IID, IID_ITextSearch,0x0D7614B7,0xC695,0x4527,0x9B,0x99,0xAC,0xA8,0x04,0xAA,0xCB,0x5E);


MIDL_DEFINE_GUID(IID, IID_ITextSearchOption,0x6820972A,0x1ABD,0x4BCF,0x92,0x4A,0x60,0x05,0x3F,0xAC,0x4A,0x8D);


MIDL_DEFINE_GUID(IID, IID_ITextObject,0x7DC44C70,0xD1E4,0x4477,0x9E,0x4A,0xCC,0xDB,0x38,0xC8,0x62,0xF7);


MIDL_DEFINE_GUID(IID, IID_IApplicationObject,0x30EF42DE,0x166E,0x4BD4,0xB8,0x64,0x0B,0xEC,0x8D,0xC1,0x43,0xF3);


MIDL_DEFINE_GUID(IID, IID_IFontObject,0xA3B6C1B2,0x5B5A,0x48D3,0x88,0x9B,0xF7,0x7B,0x40,0x87,0xE8,0x60);


MIDL_DEFINE_GUID(IID, IID_ITextCursor,0xA04731F3,0x3F79,0x4AFD,0x86,0x58,0x16,0x73,0xD5,0xE5,0x6E,0xCE);


MIDL_DEFINE_GUID(IID, IID_IApplicationSearch,0xA4E4B0F5,0x5321,0x4E2C,0x95,0x26,0xA5,0xB3,0x3E,0x89,0x0D,0x17);


MIDL_DEFINE_GUID(IID, IID_IWindowSearch,0x67C6CF6A,0xAFDA,0x44BE,0xBC,0xF9,0xC7,0x0E,0x28,0xC9,0xEE,0x91);


MIDL_DEFINE_GUID(IID, IID_IWindowObject,0x5A1F732F,0x6C70,0x4B4E,0xBD,0xF8,0xB0,0xEC,0xF9,0x50,0x01,0x34);


MIDL_DEFINE_GUID(IID, IID_ICheckBox,0x477F6A4D,0xAD3D,0x49BE,0xA9,0x90,0xC5,0x6D,0xD5,0x26,0x14,0xFB);


MIDL_DEFINE_GUID(IID, IID_IComboBox,0xC644815F,0x2157,0x4854,0x86,0x1D,0xE4,0x33,0xDA,0x8D,0xA5,0xB0);


MIDL_DEFINE_GUID(IID, IID_IItemObject,0xAE0E849F,0xED2B,0x494D,0x9A,0x02,0x9D,0xB2,0xF0,0x21,0xDD,0xA5);


MIDL_DEFINE_GUID(IID, IID_IEditBox,0x37E5004F,0x2BBD,0x4800,0xBD,0x87,0xB8,0x88,0x3B,0x6A,0x2A,0x83);


MIDL_DEFINE_GUID(IID, IID_ILink,0xFB9E3E9B,0x374D,0x4E3F,0x92,0x03,0x7C,0x3D,0x8F,0x84,0x8F,0x41);


MIDL_DEFINE_GUID(IID, IID_IListView,0x32A532D8,0x5F54,0x4E5A,0x87,0x6A,0x73,0x7A,0x87,0xC8,0xCE,0xE1);


MIDL_DEFINE_GUID(IID, IID_IMenuItem,0x836A99AD,0xBCBE,0x4534,0xA8,0xA2,0x73,0xAD,0xDF,0xCC,0x75,0x71);


MIDL_DEFINE_GUID(IID, IID_IRadioButton,0x0680F1B0,0x823E,0x4953,0xA9,0xFF,0xF5,0x2C,0x40,0x7A,0x59,0xFD);


MIDL_DEFINE_GUID(IID, IID_IScrollBar,0x3656A1FC,0xDFEA,0x4ACF,0x9C,0x78,0x67,0x5B,0xE5,0xEA,0x27,0x2D);


MIDL_DEFINE_GUID(IID, IID_ITrackBar,0x68DD54E0,0x183D,0x41AE,0xBF,0x86,0x4D,0xA4,0x34,0x81,0x43,0x02);


MIDL_DEFINE_GUID(IID, IID_ITreeView,0x4F521C31,0xEE39,0x4CF7,0xA2,0x00,0xE9,0x85,0x0A,0x9C,0x07,0x0C);


MIDL_DEFINE_GUID(IID, IID_ISpeechEventObject,0x8511473E,0x8FDE,0x4327,0xBF,0xAD,0xEC,0x59,0xF7,0x7F,0xCB,0x3F);


MIDL_DEFINE_GUID(IID, IID_IEnvironment,0xC27BB1E7,0x6142,0x4A9D,0x8D,0xB1,0x85,0x71,0xB0,0x9E,0x43,0x63);


MIDL_DEFINE_GUID(IID, IID_IWindowObject2,0xF71A5B7C,0xBB03,0x45AC,0x97,0x03,0xDD,0xFF,0xF9,0xA9,0x48,0x07);


MIDL_DEFINE_GUID(IID, IID_IWindowObjectOption,0xD226D606,0xA89C,0x4277,0xA3,0x96,0xAB,0x57,0xF9,0xD2,0xC1,0xBD);


MIDL_DEFINE_GUID(IID, IID_IHeaderControl,0x19E19AE5,0xD44B,0x4C67,0xBA,0x8E,0x37,0xBD,0xF9,0x71,0xBF,0x90);


MIDL_DEFINE_GUID(IID, IID_ICheckBox2,0x4A9140B5,0x7C86,0x4A9C,0x8E,0xA9,0x5C,0x84,0x75,0x58,0x41,0xE1);


MIDL_DEFINE_GUID(IID, IID_IComboBox2,0xA1CA3F99,0x86F1,0x4B78,0x92,0x67,0x04,0x6A,0xD3,0x27,0x82,0xC7);


MIDL_DEFINE_GUID(IID, IID_IItemObject2,0x97787E6B,0xA70D,0x4A65,0xA7,0x4A,0x10,0xA3,0x3C,0x03,0x1B,0x61);


MIDL_DEFINE_GUID(IID, IID_IEditBox2,0xEF4FE0D9,0x8E73,0x4E99,0x9D,0x98,0x44,0x38,0xA4,0xC0,0x23,0xB1);


MIDL_DEFINE_GUID(IID, IID_ILink2,0xF2A6D33C,0xF60B,0x4E89,0x98,0xF2,0xC0,0x0B,0x44,0x13,0xBE,0xFE);


MIDL_DEFINE_GUID(IID, IID_IListView2,0xBA4119F3,0x7735,0x4C7F,0x98,0x0D,0xF9,0x2F,0x20,0xB1,0x03,0xD3);


MIDL_DEFINE_GUID(IID, IID_IMenuItem2,0xE11C2304,0xA3B0,0x4F17,0x8C,0x36,0x19,0x70,0xD7,0x09,0x15,0x6A);


MIDL_DEFINE_GUID(IID, IID_IObjectStore,0xE81982EC,0x7A3A,0x4D15,0xB1,0x26,0x75,0xCC,0xC5,0x20,0xBD,0x81);


MIDL_DEFINE_GUID(IID, IID_IRadioButton2,0x93CEFB5D,0xE673,0x434A,0xAF,0x70,0x93,0xD4,0xA6,0xFE,0xE9,0xD8);


MIDL_DEFINE_GUID(IID, IID_IScrollBar2,0x179608AF,0x19D4,0x4D94,0x83,0xFC,0x31,0x58,0x14,0xB0,0xC0,0xA9);


MIDL_DEFINE_GUID(IID, IID_ITrackBar2,0x2F6B91FE,0x8DAD,0x40C6,0x81,0x51,0xD3,0x53,0x35,0x85,0xBA,0xDD);


MIDL_DEFINE_GUID(IID, IID_ITreeView2,0xC8D6ADCF,0xE992,0x45EF,0xBB,0x3F,0xA9,0x57,0x2D,0xC8,0x57,0x52);


MIDL_DEFINE_GUID(IID, IID_IWindowSearch2,0xFFC01288,0xCB56,0x4C56,0xB0,0x82,0xEE,0xDD,0xD8,0xC0,0xE1,0x44);


MIDL_DEFINE_GUID(IID, IID_IWindowSearchOption,0x6F4C7C49,0x96A6,0x4C87,0x92,0x6A,0x79,0x08,0x3A,0x19,0xD5,0x34);


MIDL_DEFINE_GUID(IID, IID_IWebPage,0x87908E23,0xDCFB,0x4A32,0x82,0xC6,0x5E,0x54,0xC4,0x87,0x0D,0x4D);


MIDL_DEFINE_GUID(IID, IID_IZoomText2,0xC954470B,0x98E8,0x4214,0xA0,0x11,0xB5,0x56,0xDB,0xDF,0x26,0xA6);


MIDL_DEFINE_GUID(CLSID, CLSID_ZoomText,0x30BB8BE8,0x4275,0x4042,0x90,0xDA,0x5F,0x96,0x98,0x74,0x4F,0x19);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif


