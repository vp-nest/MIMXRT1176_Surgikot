/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 11.00
* Profile  : iMX_RT
* Platform : NXP.iMX_RT_VGLite.RGBA8888
*
*******************************************************************************/

#include "ewlocale.h"
#include "_ApplicationApplication.h"
#include "_ApplicationButtomBar.h"
#include "_ApplicationLogInScreen.h"
#include "_ApplicationProfileButtomBar.h"
#include "_ApplicationProfileScreen.h"
#include "_ApplicationScreenManager.h"
#include "_ApplicationSettingsInputField.h"
#include "_ApplicationSettingsNewSurgicalProfile.h"
#include "_ApplicationTextEditor.h"
#include "_ApplicationTitleBar.h"
#include "_CoreGroup.h"
#include "_CoreKeyPressHandler.h"
#include "_CorePropertyObserver.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreVerticalList.h"
#include "_CoreView.h"
#include "_EffectsBoolEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_ViewsWarpGroup.h"
#include "_WidgetAddProfileButton.h"
#include "_WidgetNumPad.h"
#include "_WidgetProfileListItem.h"
#include "Application.h"
#include "Core.h"
#include "Res.h"
#include "Resources.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x00000430, /* ratio 54.48 % */
  0xB8002900, 0x00062452, 0x00400019, 0x0EA00250, 0x0F093600, 0xD1218002, 0x34834446,
  0x3000E800, 0x8F802263, 0xC1160607, 0x0004B121, 0x88171F93, 0x0AA0029C, 0x8E002900,
  0x60024800, 0x00278009, 0xF0047CA8, 0x3C802560, 0xA000E600, 0x800CA003, 0x00991136,
  0x0CE00378, 0xDC003480, 0xB220F4EC, 0x45A1D448, 0x1889C801, 0xA3990004, 0x842AAF4F,
  0x93801332, 0x2A994488, 0x2AF4B31C, 0x1D52A851, 0x4188FD1A, 0x34B3CD24, 0x02FC2A75,
  0xBEDFAF80, 0x0E0AFF80, 0x5949180C, 0x220D2290, 0xA3F198EC, 0xD5328249, 0xD67C9562,
  0x0AAC1E28, 0x6ADDB259, 0x1754A8D4, 0x0E8B4000, 0xE9B47A4D, 0x7F47A8D2, 0xAAF76074,
  0x1E61001D, 0xB63AFD86, 0x028FD9EC, 0xB874B209, 0xB65429D5, 0xDED621B1, 0x584CD4CA,
  0x7E854688, 0x28D3E154, 0x896C0072, 0x10AD8C2A, 0xC6B6D68E, 0x98573EA1, 0xAC98A236,
  0x4562C5BE, 0x53215593, 0xC6B746EB, 0xEA56DB7E, 0x95220CC7, 0x9B1EB6C6, 0x6DE85078,
  0xD88EFFAD, 0xCF4CA222, 0xDB27A959, 0x24881547, 0xDDE75844, 0xFD429407, 0x5B15970D,
  0x15050950, 0x0001EE53, 0xB443411F, 0x0E539B15, 0x821EB441, 0x000835E2, 0x26C5444B,
  0x79F557D5, 0x044853B5, 0x521464E9, 0x82647DD6, 0x243A1948, 0xD400471D, 0xA0445030,
  0x53219429, 0x1084461B, 0x18F05749, 0x01B01351, 0x4E429970, 0x75942809, 0x9A04590A,
  0x3001B78E, 0x610D8623, 0x44418006, 0x86A3E91A, 0xE3945D4D, 0x08F50A8E, 0x2DB19200,
  0x0093A619, 0x46400940, 0xE55451A0, 0xA8D44595, 0x15084225, 0x3F446659, 0x4294E926,
  0x27A45119, 0xA9A10A69, 0x264D4464, 0x524464F9, 0x0225547A, 0x9608B922, 0xD47D0875,
  0xA5586E93, 0x4481D448, 0x4394C4E9, 0x51F7916C, 0x0561CD04, 0x71429857, 0xA05B539A,
  0x002A2002, 0xE254F812, 0x65923775, 0x7D465B1F, 0x96565BC5, 0x762B648A, 0x566795C7,
  0x05CD4892, 0x663404C0, 0x48775429, 0xB05C5839, 0x29542946, 0x54881700, 0x44770019,
  0xE175DBB4, 0xB39B2701, 0x9B276400, 0x10013BB1, 0x00000010, 0x00000000
};

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault1[] =
{
  0x00000226, /* ratio 51.64 % */
  0xB8002300, 0x80086452, 0x00E8003A, 0x08A00100, 0xCA003700, 0xE0039000, 0x0B3C800C,
  0x0818A001, 0x8F800520, 0x99160605, 0x47C60001, 0x1A441900, 0x4C20037C, 0xD80083C5,
  0x20084CB4, 0x1096000D, 0x28843A19, 0x8C45A291, 0xE95E370C, 0x41243278, 0x9C6A0019,
  0xC9B220B4, 0x8F193C4C, 0x07399C4C, 0x468C9C00, 0x131D4E6E, 0x2746E331, 0x101A3F44,
  0x8B800369, 0x342B2792, 0x26D0AAD5, 0xAC538CCE, 0x26489576, 0x009A9323, 0xF855E0DA,
  0xB8C88171, 0xAC425D0A, 0xDD6292EB, 0xA2441D8F, 0x31B36BC1, 0x238EC7E3, 0x592C9E43,
  0x04A647F2, 0xCCA65717, 0x8FE3B379, 0x00B6440F, 0xE934BA30, 0x9F53A6D3, 0x344128FE,
  0x63AAD7EA, 0x41093EC3, 0x60001264, 0x02A800A1, 0xDD464A80, 0x88021A52, 0x9121D71B,
  0x2A441E93, 0xA1912C5C, 0x1132999D, 0xB55BC736, 0xB3EBECAA, 0x20447F4D, 0xA844B7D2,
  0x3C9C150A, 0xF82BBDD0, 0x8A440493, 0x609E98FF, 0xE1EAF409, 0xB2715413, 0x0000407E,
  0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 1280, 720 }};
static const XRect _Const0001 = {{ 0, 0 }, { 1280, 64 }};
static const XColor _Const0002 = { 0x0B, 0x12, 0x20, 0xFF };
static const XRect _Const0003 = {{ 934, 18 }, { 1160, 48 }};
static const XStringRes _Const0004 = { _StringsDefault0, 0x0002 };
static const XRect _Const0005 = {{ 1195, 3 }, { 1255, 59 }};
static const XStringRes _Const0006 = { _StringsDefault0, 0x0016 };
static const XRect _Const0007 = {{ 1115, 7 }, { 1226, 57 }};
static const XRect _Const0008 = {{ 23, 5 }, { 249, 60 }};
static const XStringRes _Const0009 = { _StringsDefault0, 0x001D };
static const XRect _Const000A = {{ 0, 0 }, { 1280, 65 }};
static const XRect _Const000B = {{ 0, 654 }, { 1280, 720 }};
static const XRect _Const000C = {{ 0, 64 }, { 1280, 655 }};
static const XColor _Const000D = { 0x14, 0x1A, 0x2B, 0xFF };
static const XPoint _Const000E = { 1280, 64 };
static const XPoint _Const000F = { 0, 64 };
static const XColor _Const0010 = { 0x55, 0x5D, 0x6D, 0xFF };
static const XPoint _Const0011 = { 1280, 654 };
static const XPoint _Const0012 = { 0, 654 };
static const XRect _Const0013 = {{ 474, 255 }, { 806, 598 }};
static const XRect _Const0014 = {{ 571, 89 }, { 710, 187 }};
static const XRect _Const0015 = {{ 550, 181 }, { 730, 217 }};
static const XStringRes _Const0016 = { _StringsDefault0, 0x0028 };
static const XRect _Const0017 = {{ 545, 217 }, { 735, 235 }};
static const XStringRes _Const0018 = { _StringsDefault0, 0x0037 };
static const XStringRes _Const0019 = { _StringsDefault0, 0x0055 };
static const XStringRes _Const001A = { _StringsDefault0, 0x006D };
static const XStringRes _Const001B = { _StringsDefault0, 0x0074 };
static const XStringRes _Const001C = { _StringsDefault0, 0x0099 };
static const XRect _Const001D = {{ 0, 64 }, { 1280, 615 }};
static const XPoint _Const001E = { 1280, 615 };
static const XPoint _Const001F = { 0, 615 };
static const XRect _Const0020 = {{ 192, 112 }, { 408, 148 }};
static const XStringRes _Const0021 = { _StringsDefault0, 0x00A7 };
static const XRect _Const0022 = {{ 192, 148 }, { 444, 166 }};
static const XStringRes _Const0023 = { _StringsDefault0, 0x00BB };
static const XRect _Const0024 = {{ 950, 122 }, { 1088, 170 }};
static const XRect _Const0025 = {{ 192, 186 }, { 1088, 588 }};
static const XRect _Const0026 = {{ 273, 186 }, { 1004, 588 }};
static const XStringRes _Const0027 = { _StringsDefault0, 0x00E5 };
static const XStringRes _Const0028 = { _StringsDefault0, 0x00FE };
static const XStringRes _Const0029 = { _StringsDefault0, 0x0113 };
static const XStringRes _Const002A = { _StringsDefault0, 0x012C };
static const XStringRes _Const002B = { _StringsDefault0, 0x0133 };
static const XStringRes _Const002C = { _StringsDefault0, 0x0159 };
static const XStringRes _Const002D = { _StringsDefault0, 0x017F };
static const XStringRes _Const002E = { _StringsDefault0, 0x01A5 };
static const XRect _Const002F = {{ 0, 615 }, { 1280, 720 }};
static const XStringRes _Const0030 = { _StringsDefault0, 0x01AD };
static const XStringRes _Const0031 = { _StringsDefault0, 0x01BC };
static const XRect _Const0032 = {{ 0, 0 }, { 1280, 105 }};
static const XRect _Const0033 = {{ 88, 25 }, { 1248, 81 }};
static const XRect _Const0034 = {{ 32, 33 }, { 72, 73 }};
static const XStringRes _Const0035 = { _StringsDefault0, 0x01CD };
static const XPoint _Const0036 = { 87, 25 };
static const XPoint _Const0037 = { 1248, 25 };
static const XPoint _Const0038 = { 1248, 81 };
static const XPoint _Const0039 = { 87, 81 };
static const XPoint _Const003A = { 32, 33 };
static const XPoint _Const003B = { 72, 33 };
static const XPoint _Const003C = { 72, 73 };
static const XPoint _Const003D = { 32, 73 };
static const XRect _Const003E = {{ 0, 64 }, { 1280, 720 }};
static const XRect _Const003F = {{ 25, 139 }, { 252, 211 }};
static const XStringRes _Const0040 = { _StringsDefault0, 0x01DF };
static const XRect _Const0041 = {{ 21, 199 }, { 1246, 298 }};
static const XStringRes _Const0042 = { _StringsDefault0, 0x01EE };
static const XRect _Const0043 = {{ 0, 66 }, { 1280, 141 }};
static const XPoint _Const0044 = { 1280, 142 };
static const XPoint _Const0045 = { 0, 142 };
static const XRect _Const0046 = {{ 84, 84 }, { 458, 125 }};
static const XStringRes _Const0047 = { _StringsDefault0, 0x0201 };
static const XRect _Const0048 = {{ 4, 69 }, { 91, 142 }};
static const XRect _Const0049 = {{ 25, 267 }, { 270, 339 }};
static const XStringRes _Const004A = { _StringsDefault1, 0x0002 };
static const XRect _Const004B = {{ 20, 336 }, { 632, 434 }};
static const XStringRes _Const004C = { _StringsDefault1, 0x0013 };
static const XRect _Const004D = {{ 663, 269 }, { 991, 341 }};
static const XStringRes _Const004E = { _StringsDefault1, 0x0018 };
static const XRect _Const004F = {{ 656, 335 }, { 1268, 433 }};
static const XStringRes _Const0050 = { _StringsDefault1, 0x0031 };
static const XRect _Const0051 = {{ 25, 412 }, { 404, 485 }};
static const XStringRes _Const0052 = { _StringsDefault1, 0x0036 };
static const XRect _Const0053 = {{ 24, 476 }, { 636, 574 }};
static const XStringRes _Const0054 = { _StringsDefault1, 0x004C };
static const XRect _Const0055 = {{ 662, 414 }, { 990, 486 }};
static const XStringRes _Const0056 = { _StringsDefault1, 0x0052 };
static const XRect _Const0057 = {{ 656, 476 }, { 1268, 574 }};
static const XStringRes _Const0058 = { _StringsDefault1, 0x0067 };
static const XPoint _Const0059 = { 5, 68 };
static const XPoint _Const005A = { 85, 68 };
static const XPoint _Const005B = { 85, 138 };
static const XPoint _Const005C = { 5, 138 };
static const XColor _Const005D = { 0x20, 0x2B, 0x4B, 0xFF };
static const XColor _Const005E = { 0x33, 0x4F, 0x93, 0xFF };
static const XRect _Const005F = {{ 0, 0 }, { 513, 87 }};
static const XRect _Const0060 = {{ 3, 6 }, { 501, 76 }};
static const XColor _Const0061 = { 0x1D, 0x29, 0x48, 0xFF };
static const XColor _Const0062 = { 0x3C, 0x65, 0xA7, 0xFF };
static const XRect _Const0063 = {{ 14, 17 }, { 491, 64 }};
static const XColor _Const0064 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0065 = {{ 424, 16 }, { 474, 66 }};
static const XPoint _Const0066 = { 424, 17 };
static const XPoint _Const0067 = { 474, 17 };
static const XPoint _Const0068 = { 474, 64 };
static const XPoint _Const0069 = { 424, 64 };
static const XStringRes _Const006A = { _StringsDefault1, 0x0072 };
static const XStringRes _Const006B = { _StringsDefault1, 0x008F };
static const XStringRes _Const006C = { _StringsDefault1, 0x00A5 };
static const XStringRes _Const006D = { _StringsDefault1, 0x00B4 };
static const XStringRes _Const006E = { _StringsDefault1, 0x00C6 };
static const XStringRes _Const006F = { _StringsDefault1, 0x00D6 };
static const XRect _Const0070 = {{ 0, 0 }, { 160, 120 }};
static const XPoint _Const0071 = { 0, 120 };
static const XPoint _Const0072 = { 160, 120 };
static const XPoint _Const0073 = { 160, 0 };
static const XPoint _Const0074 = { 0, 0 };
static const XRect _Const0075 = {{ 2, 2 }, { 157, 117 }};
static const XStringRes _Const0076 = { _StringsDefault1, 0x00F4 };
static const XColor _Const0077 = { 0x00, 0x00, 0x00, 0xFF };
static const XPoint _Const0078 = { 50, 70 };
static const XPoint _Const0079 = { 50, 50 };
static const XStringRes _Const007A = { _StringsDefault1, 0x00FC };
static const XPoint _Const007B = { 20, 20 };
static const XPoint _Const007C = { -10, -10 };
static const XColor _Const007D = { 0xEE, 0xEE, 0xEE, 0xCC };
static const XStringRes _Const007E = { _StringsDefault1, 0x0103 };
static const XStringRes _Const007F = { _StringsDefault1, 0x0107 };
static const XStringRes _Const0080 = { _StringsDefault1, 0x010B };
static const XStringRes _Const0081 = { _StringsDefault1, 0x010F };

#ifndef EW_DONT_CHECK_INDEX
  /* This function is used to check the indices when accessing an array.
     If you don't want this verification add the define EW_DONT_CHECK_INDEX
     to your Makefile or project settings. */
  static int EwCheckIndex( int aIndex, int aRange, const char* aFile, int aLine )
  {
    if (( aIndex < 0 ) || ( aIndex >= aRange ))
    {
      EwPrint( "[FATAL ERROR in %s:%d] Array index %d out of bounds %d",
                aFile, aLine, aIndex, aRange );
      EwPanic();
    }
    return aIndex;
  }

  #define EwCheckIndex( aIndex, aRange ) \
    EwCheckIndex( aIndex, aRange, __FILE__, __LINE__ )
#else
  #define EwCheckIndex( aIndex, aRange ) aIndex
#endif

/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationApplication );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );

  /* Call the user defined constructor */
  ApplicationApplication_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationApplication_Init( ApplicationApplication _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationLogInScreen, 
  0 )), 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Application::Application" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetBuffered,
  CoreRoot_OnSetOpacity,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationApplication )

/* Initializer for the class 'Application::TitleBar' */
void ApplicationTitleBar__Init( ApplicationTitleBar _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationTitleBar );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationTitleBar );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0001 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0002 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0003 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0004 ));
  CoreRectView__OnSetBounds( &_this->Text1, _Const0005 );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0006 ));
  CoreRectView__OnSetBounds( &_this->Image1, _Const0007 );
  CoreRectView__OnSetBounds( &_this->Text2, _Const0008 );
  ViewsText_OnSetAlignment( &_this->Text2, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const0009 ));
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text2 ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontNormal22, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ApplicationFontNormal22, 
  ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image1, EwLoadResource( &ResBatteryIcon, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ApplicationFontBold32, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::TitleBar' */
void ApplicationTitleBar__ReInit( ApplicationTitleBar _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->Text1 );
  ViewsImage__ReInit( &_this->Image1 );
  ViewsText__ReInit( &_this->Text2 );
}

/* Finalizer method for the class 'Application::TitleBar' */
void ApplicationTitleBar__Done( ApplicationTitleBar _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->Text );
  ViewsText__Done( &_this->Text1 );
  ViewsImage__Done( &_this->Image1 );
  ViewsText__Done( &_this->Text2 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Application::TitleBar' */
EW_DEFINE_CLASS_VARIANTS( ApplicationTitleBar )
EW_END_OF_CLASS_VARIANTS( ApplicationTitleBar )

/* Virtual Method Table (VMT) for the class : 'Application::TitleBar' */
EW_DEFINE_CLASS( ApplicationTitleBar, CoreGroup, Rectangle, Rectangle, Rectangle, 
                 Rectangle, _.VMT, _.VMT, "Application::TitleBar" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationTitleBar )

/* Include a file containing the font resource : 'Application::FontNormal22' */
#include "_ApplicationFontNormal22.h"

/* Table with links to derived variants of the font resource : 'Application::FontNormal22' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontNormal22 )

/* Initializer for the class 'Application::ButtomBar' */
void ApplicationButtomBar__Init( ApplicationButtomBar _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationButtomBar );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->buttomBarImg, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationButtomBar );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000A );
  CoreRectView__OnSetBounds( &_this->buttomBarImg, _Const000A );
  CoreGroup__Add( _this, ((CoreView)&_this->buttomBarImg ), 0 );
  ViewsImage_OnSetBitmap( &_this->buttomBarImg, EwLoadResource( &ResButtomBarImg, 
  ResourcesBitmap ));
}

/* Re-Initializer for the class 'Application::ButtomBar' */
void ApplicationButtomBar__ReInit( ApplicationButtomBar _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->buttomBarImg );
}

/* Finalizer method for the class 'Application::ButtomBar' */
void ApplicationButtomBar__Done( ApplicationButtomBar _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->buttomBarImg );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Application::ButtomBar' */
EW_DEFINE_CLASS_VARIANTS( ApplicationButtomBar )
EW_END_OF_CLASS_VARIANTS( ApplicationButtomBar )

/* Virtual Method Table (VMT) for the class : 'Application::ButtomBar' */
EW_DEFINE_CLASS( ApplicationButtomBar, CoreGroup, buttomBarImg, buttomBarImg, buttomBarImg, 
                 buttomBarImg, _.VMT, _.VMT, "Application::ButtomBar" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationButtomBar )

/* Initializer for the class 'Application::LogInScreen' */
void ApplicationLogInScreen__Init( ApplicationLogInScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationLogInScreen );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ApplicationButtomBar__Init( &_this->ButtomBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->ButtomLine, &_this->_.XObject, 0 );
  WidgetNumPad__Init( &_this->NumPad, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->LockIcon, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->H1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->H2, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationLogInScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->ButtomBar, _Const000B );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const000C );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000D );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000F );
  ViewsLine_OnSetColor( &_this->TopLine, _Const0010 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->ButtomLine, _Const0011 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->ButtomLine, _Const0012 );
  ViewsLine_OnSetColor( &_this->ButtomLine, _Const0010 );
  CoreRectView__OnSetBounds( &_this->NumPad, _Const0013 );
  CoreRectView__OnSetBounds( &_this->LockIcon, _Const0014 );
  CoreRectView__OnSetBounds( &_this->H1, _Const0015 );
  ViewsText_OnSetAutoSize( &_this->H1, 1 );
  ViewsText_OnSetWrapText( &_this->H1, 0 );
  ViewsText_OnSetString( &_this->H1, EwLoadString( &_Const0016 ));
  CoreRectView__OnSetBounds( &_this->H2, _Const0017 );
  ViewsText_OnSetAutoSize( &_this->H2, 1 );
  ViewsText_OnSetWrapText( &_this->H2, 0 );
  ViewsText_OnSetString( &_this->H2, EwLoadString( &_Const0018 ));
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtomBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtomLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumPad ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->LockIcon ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->H1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->H2 ), 0 );
  _this->NumPad.OnEnterKey = EwNewSlot( _this, ApplicationLogInScreen_SlotOnEnter );
  ViewsImage_OnSetBitmap( &_this->LockIcon, EwLoadResource( &ResLockIconImg, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->H1, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsText_OnSetFont( &_this->H2, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationLogInScreen_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationNavigation, ApplicationScreenManager ), ApplicationScreenManager_OnGetLoginResult, 
  ApplicationScreenManager_OnSetLoginResult ));

  /* Call the user defined constructor */
  ApplicationLogInScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::LogInScreen' */
void ApplicationLogInScreen__ReInit( ApplicationLogInScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ApplicationButtomBar__ReInit( &_this->ButtomBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  ViewsLine__ReInit( &_this->ButtomLine );
  WidgetNumPad__ReInit( &_this->NumPad );
  ViewsImage__ReInit( &_this->LockIcon );
  ViewsText__ReInit( &_this->H1 );
  ViewsText__ReInit( &_this->H2 );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
}

/* Finalizer method for the class 'Application::LogInScreen' */
void ApplicationLogInScreen__Done( ApplicationLogInScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ApplicationButtomBar__Done( &_this->ButtomBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  ViewsLine__Done( &_this->ButtomLine );
  WidgetNumPad__Done( &_this->NumPad );
  ViewsImage__Done( &_this->LockIcon );
  ViewsText__Done( &_this->H1 );
  ViewsText__Done( &_this->H2 );
  CorePropertyObserver__Done( &_this->PropertyObserver );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationLogInScreen_Init( ApplicationLogInScreen _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );

  EwTrace( "%s", EwLoadString( &_Const0019 ));
}

/* 'C' function for method : 'Application::LogInScreen.SlotOnEnter()' */
void ApplicationLogInScreen_SlotOnEnter( ApplicationLogInScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !EwCompString( _this->NumPad.Number, 0 ))
    return;

  CoreGroup_OnSetEnabled((CoreGroup)&_this->NumPad, 0 );

  if ( !EwCompString( _this->NumPad.Number, EwLoadString( &_Const001A )))
  {
    EwTrace( "%s", EwLoadString( &_Const001B ));
    WidgetNumPad_OnSetNumber( &_this->NumPad, 0 );
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  }
  else
    WidgetNumPad_OnSetNumber( &_this->NumPad, 0 );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationLogInScreen_onEvent( ApplicationLogInScreen _this, XObject sender )
{
  XInt32 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  result = EwGetAutoObject( &ApplicationNavigation, ApplicationScreenManager )->LoginResult;

  if ( result == 1 )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  else
    if ( result == 2 )
      ViewsText_OnSetString( &_this->H2, EwLoadString( &_Const001C ));
}

/* Variants derived from the class : 'Application::LogInScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationLogInScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationLogInScreen )

/* Virtual Method Table (VMT) for the class : 'Application::LogInScreen' */
EW_DEFINE_CLASS( ApplicationLogInScreen, CoreRoot, TitleBar, TitleBar, TitleBar, 
                 TitleBar, _.VMT, _.VMT, "Application::LogInScreen" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetBuffered,
  CoreRoot_OnSetOpacity,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationLogInScreen )

/* Initializer for the class 'Application::ProfileScreen' */
void ApplicationProfileScreen__Init( ApplicationProfileScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationProfileScreen );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->ButtomLine, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->H1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->H2, &_this->_.XObject, 0 );
  WidgetAddProfileButton__Init( &_this->AddProfileButton, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->VerticalList, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  ApplicationProfileButtomBar__Init( &_this->ProfileButtomBar, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationProfileScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const001D );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000D );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000F );
  ViewsLine_OnSetColor( &_this->TopLine, _Const0010 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->ButtomLine, _Const001E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->ButtomLine, _Const001F );
  ViewsLine_OnSetColor( &_this->ButtomLine, _Const0010 );
  CoreRectView__OnSetBounds( &_this->H1, _Const0020 );
  ViewsText_OnSetAutoSize( &_this->H1, 1 );
  ViewsText_OnSetWrapText( &_this->H1, 0 );
  ViewsText_OnSetString( &_this->H1, EwLoadString( &_Const0021 ));
  CoreRectView__OnSetBounds( &_this->H2, _Const0022 );
  ViewsText_OnSetAutoSize( &_this->H2, 1 );
  ViewsText_OnSetWrapText( &_this->H2, 0 );
  ViewsText_OnSetString( &_this->H2, EwLoadString( &_Const0023 ));
  CoreRectView__OnSetBounds( &_this->AddProfileButton, _Const0024 );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const0025 );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 120 );
  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, 5 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( WidgetProfileListItem ));
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0026 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreSlideTouchHandler_OnSetRetargetDelay( &_this->SlideTouchHandler, 0 );
  _this->SlideTouchHandler.RetargetCondition = CoreRetargetReasonLongPress;
  _this->ProfileH1[ 0 ] = EwShareString( EwLoadString( &_Const0027 ));
  _this->ProfileH1[ 1 ] = EwShareString( EwLoadString( &_Const0028 ));
  _this->ProfileH1[ 2 ] = EwShareString( EwLoadString( &_Const0029 ));
  _this->ProfileH1[ 3 ] = EwShareString( EwLoadString( &_Const002A ));
  _this->ProfileH2[ 0 ] = EwShareString( EwLoadString( &_Const002B ));
  _this->ProfileH2[ 1 ] = EwShareString( EwLoadString( &_Const002C ));
  _this->ProfileH2[ 2 ] = EwShareString( EwLoadString( &_Const002D ));
  _this->ProfileH2[ 3 ] = EwShareString( EwLoadString( &_Const002E ));
  CoreRectView__OnSetBounds( &_this->ProfileButtomBar, _Const002F );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtomLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->H1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->H2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->AddProfileButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ProfileButtomBar ), 0 );
  ViewsText_OnSetFont( &_this->H1, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsText_OnSetFont( &_this->H2, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  _this->AddProfileButton.OnRelease = EwNewSlot( _this, ApplicationProfileScreen_onAddNewProfile );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationProfileScreen_OnLoadItem );
  CoreVerticalList_OnSetSlideHandler( &_this->VerticalList, &_this->SlideTouchHandler );
  _this->ProfileButtomBar.OnPressSetings = EwNewSlot( _this, ApplicationProfileScreen_Slot1 );
  _this->ProfileButtomBar.OnPressStart = EwNewSlot( _this, ApplicationProfileScreen_Slot );

  /* Call the user defined constructor */
  ApplicationProfileScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::ProfileScreen' */
void ApplicationProfileScreen__ReInit( ApplicationProfileScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  ViewsLine__ReInit( &_this->ButtomLine );
  ViewsText__ReInit( &_this->H1 );
  ViewsText__ReInit( &_this->H2 );
  WidgetAddProfileButton__ReInit( &_this->AddProfileButton );
  CoreVerticalList__ReInit( &_this->VerticalList );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  ApplicationProfileButtomBar__ReInit( &_this->ProfileButtomBar );
}

/* Finalizer method for the class 'Application::ProfileScreen' */
void ApplicationProfileScreen__Done( ApplicationProfileScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  ViewsLine__Done( &_this->ButtomLine );
  ViewsText__Done( &_this->H1 );
  ViewsText__Done( &_this->H2 );
  WidgetAddProfileButton__Done( &_this->AddProfileButton );
  CoreVerticalList__Done( &_this->VerticalList );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  ApplicationProfileButtomBar__Done( &_this->ProfileButtomBar );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationProfileScreen_Init( ApplicationProfileScreen _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ApplicationProfileScreen_SetupLayout( _this );
}

/* 'C' function for method : 'Application::ProfileScreen.SetupLayout()' */
void ApplicationProfileScreen_SetupLayout( ApplicationProfileScreen _this )
{
  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, 4 );
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationProfileScreen_OnLoadItem( ApplicationProfileScreen _this, XObject 
  sender )
{
  XInt32 itemNo;
  WidgetProfileListItem itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  itemView = EwCastObject( _this->VerticalList.View, WidgetProfileListItem );

  if ( itemView == 0 )
    return;

  ViewsText_OnSetString( &itemView->H1, _this->ProfileH1[ EwCheckIndex( itemNo, 
  4 )]);
  ViewsText_OnSetString( &itemView->H2, _this->ProfileH2[ EwCheckIndex( itemNo, 
  4 )]);
  WidgetProfileListItem_OnSetOnSelectRadioBT( itemView, EwNewSlot( _this, ApplicationProfileScreen_SlotSelectRadioBT ));
  itemView->ItemNo = (XInt8)itemNo;

  if ( itemView->ItemNo == _this->VerticalList.SelectedItem )
    ViewsImage_OnSetBitmap( &itemView->RadioImg, EwLoadResource( &ResRadioBtClicked, 
    ResourcesBitmap ));
  else
    ViewsImage_OnSetBitmap( &itemView->RadioImg, EwLoadResource( &ResRadioBtNormal, 
    ResourcesBitmap ));

  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->VerticalList.Super2.Bounds ), _this->VerticalList.ItemHeight )));
}

/* 'C' function for method : 'Application::ProfileScreen.SlotSelectRadioBT()' */
void ApplicationProfileScreen_SlotSelectRadioBT( ApplicationProfileScreen _this, 
  XObject sender )
{
  WidgetProfileListItem ListItem = EwCastObject( sender, WidgetProfileListItem );

  CoreVerticalList_OnSetSelectedItem( &_this->VerticalList, ListItem->ItemNo );
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
}

/* 'C' function for method : 'Application::ProfileScreen.Slot()' */
void ApplicationProfileScreen_Slot( ApplicationProfileScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  EwTrace( "%s", EwLoadString( &_Const0030 ));
}

/* 'C' function for method : 'Application::ProfileScreen.Slot1()' */
void ApplicationProfileScreen_Slot1( ApplicationProfileScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  EwTrace( "%s", EwLoadString( &_Const0031 ));
}

/* 'C' function for method : 'Application::ProfileScreen.onAddNewProfile()' */
void ApplicationProfileScreen_onAddNewProfile( ApplicationProfileScreen _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationSettingsNewSurgicalProfile, 
  0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::ProfileScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationProfileScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationProfileScreen )

/* Virtual Method Table (VMT) for the class : 'Application::ProfileScreen' */
EW_DEFINE_CLASS( ApplicationProfileScreen, CoreRoot, TitleBar, TitleBar, TitleBar, 
                 TitleBar, ProfileH1, _.VMT, "Application::ProfileScreen" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetBuffered,
  CoreRoot_OnSetOpacity,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationProfileScreen )

/* Initializer for the class 'Application::ProfileButtomBar' */
void ApplicationProfileButtomBar__Init( ApplicationProfileButtomBar _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationProfileButtomBar );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->buttomBarImg, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->StartImg, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->SettingsImg, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->StartBtTouch, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SetingsBtTouch, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationProfileButtomBar );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0032 );
  CoreRectView__OnSetBounds( &_this->buttomBarImg, _Const0032 );
  CoreRectView__OnSetBounds( &_this->StartImg, _Const0033 );
  CoreRectView__OnSetBounds( &_this->SettingsImg, _Const0034 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0033 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0035 ));
  CoreQuadView__OnSetPoint4( &_this->StartBtTouch, _Const0036 );
  CoreQuadView__OnSetPoint3( &_this->StartBtTouch, _Const0037 );
  CoreQuadView__OnSetPoint2( &_this->StartBtTouch, _Const0038 );
  CoreQuadView__OnSetPoint1( &_this->StartBtTouch, _Const0039 );
  CoreQuadView__OnSetPoint4( &_this->SetingsBtTouch, _Const003A );
  CoreQuadView__OnSetPoint3( &_this->SetingsBtTouch, _Const003B );
  CoreQuadView__OnSetPoint2( &_this->SetingsBtTouch, _Const003C );
  CoreQuadView__OnSetPoint1( &_this->SetingsBtTouch, _Const003D );
  CoreGroup__Add( _this, ((CoreView)&_this->buttomBarImg ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StartImg ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SettingsImg ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StartBtTouch ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SetingsBtTouch ), 0 );
  ViewsImage_OnSetBitmap( &_this->buttomBarImg, EwLoadResource( &ResButtomBG, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->StartImg, EwLoadResource( &ResButtomStartBtNormal, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->SettingsImg, EwLoadResource( &ResButtomSetingsBtNormal, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  _this->StartBtTouch.OnRelease = EwNewSlot( _this, ApplicationProfileButtomBar_OnRelease );
  _this->StartBtTouch.OnPress = EwNewSlot( _this, ApplicationProfileButtomBar_OnPress );
  _this->SetingsBtTouch.OnRelease = EwNewSlot( _this, ApplicationProfileButtomBar_OnRelease );
  _this->SetingsBtTouch.OnPress = EwNewSlot( _this, ApplicationProfileButtomBar_OnPress );
}

/* Re-Initializer for the class 'Application::ProfileButtomBar' */
void ApplicationProfileButtomBar__ReInit( ApplicationProfileButtomBar _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->buttomBarImg );
  ViewsImage__ReInit( &_this->StartImg );
  ViewsImage__ReInit( &_this->SettingsImg );
  ViewsText__ReInit( &_this->Text );
  CoreSimpleTouchHandler__ReInit( &_this->StartBtTouch );
  CoreSimpleTouchHandler__ReInit( &_this->SetingsBtTouch );
}

/* Finalizer method for the class 'Application::ProfileButtomBar' */
void ApplicationProfileButtomBar__Done( ApplicationProfileButtomBar _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->buttomBarImg );
  ViewsImage__Done( &_this->StartImg );
  ViewsImage__Done( &_this->SettingsImg );
  ViewsText__Done( &_this->Text );
  CoreSimpleTouchHandler__Done( &_this->StartBtTouch );
  CoreSimpleTouchHandler__Done( &_this->SetingsBtTouch );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::ProfileButtomBar.OnPress()' */
void ApplicationProfileButtomBar_OnPress( ApplicationProfileButtomBar _this, XObject 
  sender )
{
  if ( sender == ((XObject)&_this->StartBtTouch ))
    ViewsImage_OnSetBitmap( &_this->StartImg, EwLoadResource( &ResButtomStartBtClicked, 
    ResourcesBitmap ));
  else
    ViewsImage_OnSetBitmap( &_this->SettingsImg, EwLoadResource( &ResButtomSetingsBtClicked, 
    ResourcesBitmap ));
}

/* 'C' function for method : 'Application::ProfileButtomBar.OnRelease()' */
void ApplicationProfileButtomBar_OnRelease( ApplicationProfileButtomBar _this, XObject 
  sender )
{
  if ( sender == ((XObject)&_this->StartBtTouch ))
  {
    ViewsImage_OnSetBitmap( &_this->StartImg, EwLoadResource( &ResButtomStartBtNormal, 
    ResourcesBitmap ));
    EwPostSignal( _this->OnPressStart, ((XObject)_this ));
  }
  else
  {
    ViewsImage_OnSetBitmap( &_this->SettingsImg, EwLoadResource( &ResButtomSetingsBtNormal, 
    ResourcesBitmap ));
    EwPostSignal( _this->OnPressSetings, ((XObject)_this ));
  }
}

/* Variants derived from the class : 'Application::ProfileButtomBar' */
EW_DEFINE_CLASS_VARIANTS( ApplicationProfileButtomBar )
EW_END_OF_CLASS_VARIANTS( ApplicationProfileButtomBar )

/* Virtual Method Table (VMT) for the class : 'Application::ProfileButtomBar' */
EW_DEFINE_CLASS( ApplicationProfileButtomBar, CoreGroup, OnPressSetings, OnPressSetings, 
                 buttomBarImg, buttomBarImg, _.VMT, _.VMT, "Application::ProfileButtomBar" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationProfileButtomBar )

/* Initializer for the class 'Application::ScreenManager' */
void ApplicationScreenManager__Init( ApplicationScreenManager _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationScreenManager );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationScreenManager );

  /* ... and initialize objects, variables, properties, etc. */
}

/* Re-Initializer for the class 'Application::ScreenManager' */
void ApplicationScreenManager__ReInit( ApplicationScreenManager _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::ScreenManager' */
void ApplicationScreenManager__Done( ApplicationScreenManager _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::ScreenManager.OnGetLoginResult()' */
XInt32 ApplicationScreenManager_OnGetLoginResult( ApplicationScreenManager _this )
{
  return _this->LoginResult;
}

/* 'C' function for method : 'Application::ScreenManager.OnSetLoginResult()' */
void ApplicationScreenManager_OnSetLoginResult( ApplicationScreenManager _this, 
  XInt32 value )
{
  if ( _this->LoginResult == value )
    return;

  _this->LoginResult = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationScreenManager_OnGetLoginResult, 
    ApplicationScreenManager_OnSetLoginResult ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationScreenManager_UpdateLoginResult( ApplicationScreenManager _this, 
  XInt32 aNewValue )
{
  if ( aNewValue != _this->LoginResult )
  {
    _this->LoginResult = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationScreenManager_OnGetLoginResult, 
      ApplicationScreenManager_OnSetLoginResult ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::ScreenManager.UpdateLoginResult()' */
void ApplicationScreenManager__UpdateLoginResult( void* _this, XInt32 aNewValue )
{
  ApplicationScreenManager_UpdateLoginResult((ApplicationScreenManager)_this, aNewValue );
}

/* Variants derived from the class : 'Application::ScreenManager' */
EW_DEFINE_CLASS_VARIANTS( ApplicationScreenManager )
EW_END_OF_CLASS_VARIANTS( ApplicationScreenManager )

/* Virtual Method Table (VMT) for the class : 'Application::ScreenManager' */
EW_DEFINE_CLASS( ApplicationScreenManager, XObject, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::ScreenManager" )
EW_END_OF_CLASS( ApplicationScreenManager )

/* User defined auto object: 'Application::Navigation' */
EW_DEFINE_AUTOOBJECT( ApplicationNavigation, ApplicationScreenManager )

/* Initializer for the auto object 'Application::Navigation' */
void ApplicationNavigation__Init( ApplicationScreenManager _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::Navigation' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationNavigation )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationNavigation )

/* User defined inline code: 'Application::Inline' */
//#include "HardwareInterface.h"

/* Initializer for the class 'Application::SettingsNewSurgicalProfile' */
void ApplicationSettingsNewSurgicalProfile__Init( ApplicationSettingsNewSurgicalProfile _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsNewSurgicalProfile );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtProfile, &_this->_.XObject, 0 );
  ApplicationSettingsInputField__Init( &_this->ProfileNameInput, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->rctTitile, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtCutEnergy, &_this->_.XObject, 0 );
  ApplicationSettingsInputField__Init( &_this->CutEnergyInput, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtCoagulation, &_this->_.XObject, 0 );
  ApplicationSettingsInputField__Init( &_this->CoagulationEnergyInput, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtMaxGrasp, &_this->_.XObject, 0 );
  ApplicationSettingsInputField__Init( &_this->MaxGraspInput, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtMotion, &_this->_.XObject, 0 );
  ApplicationSettingsInputField__Init( &_this->MotionSpeedInput, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsNewSurgicalProfile );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const003E );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000D );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000F );
  ViewsLine_OnSetColor( &_this->TopLine, _Const0010 );
  CoreRectView__OnSetBounds( &_this->txtProfile, _Const003F );
  ViewsText_OnSetAlignment( &_this->txtProfile, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtProfile, EwLoadString( &_Const0040 ));
  CoreRectView__OnSetBounds( &_this->ProfileNameInput, _Const0041 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ProfileNameInput, 1 );
  ApplicationSettingsInputField_OnSetInputType( &_this->ProfileNameInput, 0 );
  ApplicationSettingsInputField_OnSetMaxLength( &_this->ProfileNameInput, 6 );
  ApplicationSettingsInputField_OnSetValue( &_this->ProfileNameInput, EwLoadString( 
  &_Const0042 ));
  ApplicationSettingsInputField_OnSetPassword( &_this->ProfileNameInput, 0 );
  ApplicationSettingsInputField_OnSetShowPassword( &_this->ProfileNameInput, 0 );
  CoreRectView__OnSetBounds( &_this->rctTitile, _Const0043 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine1, _Const0044 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine1, _Const0045 );
  ViewsLine_OnSetWidth( &_this->TopLine1, 1 );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const0010 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0046 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0047 ));
  CoreRectView__OnSetBounds( &_this->Image, _Const0048 );
  CoreRectView__OnSetBounds( &_this->txtCutEnergy, _Const0049 );
  ViewsText_OnSetAlignment( &_this->txtCutEnergy, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtCutEnergy, EwLoadString( &_Const004A ));
  CoreRectView__OnSetBounds( &_this->CutEnergyInput, _Const004B );
  ApplicationSettingsInputField_OnSetInputType( &_this->CutEnergyInput, 0 );
  ApplicationSettingsInputField_OnSetMaxLength( &_this->CutEnergyInput, 6 );
  ApplicationSettingsInputField_OnSetValue( &_this->CutEnergyInput, EwLoadString( 
  &_Const004C ));
  ApplicationSettingsInputField_OnSetPassword( &_this->CutEnergyInput, 0 );
  ApplicationSettingsInputField_OnSetShowPassword( &_this->CutEnergyInput, 0 );
  CoreRectView__OnSetBounds( &_this->txtCoagulation, _Const004D );
  ViewsText_OnSetAlignment( &_this->txtCoagulation, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtCoagulation, EwLoadString( &_Const004E ));
  CoreRectView__OnSetBounds( &_this->CoagulationEnergyInput, _Const004F );
  ApplicationSettingsInputField_OnSetInputType( &_this->CoagulationEnergyInput, 
  0 );
  ApplicationSettingsInputField_OnSetMaxLength( &_this->CoagulationEnergyInput, 
  6 );
  ApplicationSettingsInputField_OnSetValue( &_this->CoagulationEnergyInput, EwLoadString( 
  &_Const0050 ));
  ApplicationSettingsInputField_OnSetPassword( &_this->CoagulationEnergyInput, 0 );
  ApplicationSettingsInputField_OnSetShowPassword( &_this->CoagulationEnergyInput, 
  0 );
  CoreRectView__OnSetBounds( &_this->txtMaxGrasp, _Const0051 );
  ViewsText_OnSetAlignment( &_this->txtMaxGrasp, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtMaxGrasp, EwLoadString( &_Const0052 ));
  CoreRectView__OnSetBounds( &_this->MaxGraspInput, _Const0053 );
  ApplicationSettingsInputField_OnSetInputType( &_this->MaxGraspInput, 0 );
  ApplicationSettingsInputField_OnSetMaxLength( &_this->MaxGraspInput, 6 );
  ApplicationSettingsInputField_OnSetValue( &_this->MaxGraspInput, EwLoadString( 
  &_Const0054 ));
  ApplicationSettingsInputField_OnSetPassword( &_this->MaxGraspInput, 0 );
  ApplicationSettingsInputField_OnSetShowPassword( &_this->MaxGraspInput, 0 );
  CoreRectView__OnSetBounds( &_this->txtMotion, _Const0055 );
  ViewsText_OnSetAlignment( &_this->txtMotion, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtMotion, EwLoadString( &_Const0056 ));
  CoreRectView__OnSetBounds( &_this->MotionSpeedInput, _Const0057 );
  ApplicationSettingsInputField_OnSetInputType( &_this->MotionSpeedInput, 0 );
  ApplicationSettingsInputField_OnSetMaxLength( &_this->MotionSpeedInput, 6 );
  ApplicationSettingsInputField_OnSetValue( &_this->MotionSpeedInput, EwLoadString( 
  &_Const0058 ));
  ApplicationSettingsInputField_OnSetPassword( &_this->MotionSpeedInput, 0 );
  ApplicationSettingsInputField_OnSetShowPassword( &_this->MotionSpeedInput, 0 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0059 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const005A );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const005B );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const005C );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtProfile ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ProfileNameInput ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->rctTitile ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtCutEnergy ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CutEnergyInput ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtCoagulation ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CoagulationEnergyInput ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtMaxGrasp ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MaxGraspInput ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtMotion ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MotionSpeedInput ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationSettingsNewSurgicalProfile_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationNavigation, ApplicationScreenManager ), ApplicationScreenManager_OnGetLoginResult, 
  ApplicationScreenManager_OnSetLoginResult ));
  ViewsText_OnSetFont( &_this->txtProfile, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontBold32, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResDefaultBckArrow, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->txtCutEnergy, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->txtCoagulation, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->txtMaxGrasp, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->txtMotion, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ApplicationSettingsNewSurgicalProfile_onBack );

  /* Call the user defined constructor */
  ApplicationSettingsNewSurgicalProfile_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsNewSurgicalProfile' */
void ApplicationSettingsNewSurgicalProfile__ReInit( ApplicationSettingsNewSurgicalProfile _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
  ViewsText__ReInit( &_this->txtProfile );
  ApplicationSettingsInputField__ReInit( &_this->ProfileNameInput );
  ViewsRectangle__ReInit( &_this->rctTitile );
  ViewsLine__ReInit( &_this->TopLine1 );
  ViewsText__ReInit( &_this->Text );
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->txtCutEnergy );
  ApplicationSettingsInputField__ReInit( &_this->CutEnergyInput );
  ViewsText__ReInit( &_this->txtCoagulation );
  ApplicationSettingsInputField__ReInit( &_this->CoagulationEnergyInput );
  ViewsText__ReInit( &_this->txtMaxGrasp );
  ApplicationSettingsInputField__ReInit( &_this->MaxGraspInput );
  ViewsText__ReInit( &_this->txtMotion );
  ApplicationSettingsInputField__ReInit( &_this->MotionSpeedInput );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
}

/* Finalizer method for the class 'Application::SettingsNewSurgicalProfile' */
void ApplicationSettingsNewSurgicalProfile__Done( ApplicationSettingsNewSurgicalProfile _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  CorePropertyObserver__Done( &_this->PropertyObserver );
  ViewsText__Done( &_this->txtProfile );
  ApplicationSettingsInputField__Done( &_this->ProfileNameInput );
  ViewsRectangle__Done( &_this->rctTitile );
  ViewsLine__Done( &_this->TopLine1 );
  ViewsText__Done( &_this->Text );
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->txtCutEnergy );
  ApplicationSettingsInputField__Done( &_this->CutEnergyInput );
  ViewsText__Done( &_this->txtCoagulation );
  ApplicationSettingsInputField__Done( &_this->CoagulationEnergyInput );
  ViewsText__Done( &_this->txtMaxGrasp );
  ApplicationSettingsInputField__Done( &_this->MaxGraspInput );
  ViewsText__Done( &_this->txtMotion );
  ApplicationSettingsInputField__Done( &_this->MotionSpeedInput );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsNewSurgicalProfile_Init( ApplicationSettingsNewSurgicalProfile _this, 
  XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  _this->theme = EwNewObject( ApplicationScreenManager, 0 );
  CoreRectView__OnSetBounds( &_this->ProfileNameInput.Rectangle, EwSetRectW( _this->ProfileNameInput.Rectangle.Super1.Bounds, 
  1220 ));
  CoreRectView__OnSetBounds( &_this->ProfileNameInput.Border, EwSetRectW( _this->ProfileNameInput.Border.Super1.Bounds, 
  1220 ));
  ViewsRectangle_OnSetColor( &_this->rctTitile, _Const005D );
  ViewsLine_OnSetColor( &_this->TopLine, _Const005E );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const005E );
  CoreGroup_ObtainFocus((CoreGroup)&_this->ProfileNameInput.TextEditor );
  CoreRectView__OnSetBounds( &_this->CutEnergyInput.Rectangle, EwSetRectW( _this->CutEnergyInput.Rectangle.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->CutEnergyInput.Border, EwSetRectW( _this->CutEnergyInput.Border.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->CutEnergyInput.TextEditor, EwSetRectW( _this->CutEnergyInput.TextEditor.Super3.Bounds, 
  575 ));
  CoreRectView__OnSetBounds( &_this->CoagulationEnergyInput.Rectangle, EwSetRectW( 
  _this->CoagulationEnergyInput.Rectangle.Super1.Bounds, 583 ));
  CoreRectView__OnSetBounds( &_this->CoagulationEnergyInput.Border, EwSetRectW( 
  _this->CoagulationEnergyInput.Border.Super1.Bounds, 583 ));
  CoreRectView__OnSetBounds( &_this->CoagulationEnergyInput.TextEditor, EwSetRectW( 
  _this->CoagulationEnergyInput.TextEditor.Super3.Bounds, 575 ));
  CoreRectView__OnSetBounds( &_this->MaxGraspInput.Rectangle, EwSetRectW( _this->MaxGraspInput.Rectangle.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->MaxGraspInput.Border, EwSetRectW( _this->MaxGraspInput.Border.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->MaxGraspInput.TextEditor, EwSetRectW( _this->MaxGraspInput.TextEditor.Super3.Bounds, 
  575 ));
  CoreRectView__OnSetBounds( &_this->MotionSpeedInput.Rectangle, EwSetRectW( _this->MotionSpeedInput.Rectangle.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->MotionSpeedInput.Border, EwSetRectW( _this->MotionSpeedInput.Border.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->MotionSpeedInput.TextEditor, EwSetRectW( _this->MotionSpeedInput.TextEditor.Super3.Bounds, 
  575 ));
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationSettingsNewSurgicalProfile_onEvent( ApplicationSettingsNewSurgicalProfile _this, 
  XObject sender )
{
  XInt32 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  result = EwGetAutoObject( &ApplicationNavigation, ApplicationScreenManager )->LoginResult;

  if ( result == 1 )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::SettingsNewSurgicalProfile.onBack()' */
void ApplicationSettingsNewSurgicalProfile_onBack( ApplicationSettingsNewSurgicalProfile _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
  0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::SettingsNewSurgicalProfile' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsNewSurgicalProfile )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsNewSurgicalProfile )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsNewSurgicalProfile' */
EW_DEFINE_CLASS( ApplicationSettingsNewSurgicalProfile, CoreRoot, theme, TitleBar, 
                 TitleBar, TitleBar, _.VMT, _.VMT, "Application::SettingsNewSurgicalProfile" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetBuffered,
  CoreRoot_OnSetOpacity,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsNewSurgicalProfile )

/* Initializer for the class 'Application::SettingsInputField' */
void ApplicationSettingsInputField__Init( ApplicationSettingsInputField _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsInputField );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_.XObject, 0 );
  ApplicationTextEditor__Init( &_this->TextEditor, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->EyeImage, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->EyeTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsInputField );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const005F );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0060 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0061 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0060 );
  ViewsBorder_OnSetWidth( &_this->Border, 2 );
  ViewsBorder_OnSetColor( &_this->Border, _Const0062 );
  CoreRectView__OnSetBounds( &_this->TextEditor, _Const0063 );
  ApplicationTextEditor_OnSetString( &_this->TextEditor, 0 );
  ApplicationTextEditor_OnSetColor( &_this->TextEditor, _Const0064 );
  CoreRectView__OnSetBounds( &_this->EyeImage, _Const0065 );
  ViewsImage_OnSetVisible( &_this->EyeImage, 0 );
  CoreQuadView__OnSetPoint4( &_this->EyeTouchHandler, _Const0066 );
  CoreQuadView__OnSetPoint3( &_this->EyeTouchHandler, _Const0067 );
  CoreQuadView__OnSetPoint2( &_this->EyeTouchHandler, _Const0068 );
  CoreQuadView__OnSetPoint1( &_this->EyeTouchHandler, _Const0069 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->EyeTouchHandler, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextEditor ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->EyeImage ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->EyeTouchHandler ), 0 );
  _this->TextEditor.OnChange = EwNewSlot( _this, ApplicationSettingsInputField_OnPress );
  ApplicationTextEditor_OnSetFont( &_this->TextEditor, EwLoadResource( &ApplicationFontNormal22, 
  ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->EyeImage, EwLoadResource( &ResEyeOpen, ResourcesBitmap ));
  _this->EyeTouchHandler.OnPress = EwNewSlot( _this, ApplicationSettingsInputField_onEyePressed );

  /* Call the user defined constructor */
  ApplicationSettingsInputField_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsInputField' */
void ApplicationSettingsInputField__ReInit( ApplicationSettingsInputField _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsBorder__ReInit( &_this->Border );
  ApplicationTextEditor__ReInit( &_this->TextEditor );
  ViewsImage__ReInit( &_this->EyeImage );
  CoreSimpleTouchHandler__ReInit( &_this->EyeTouchHandler );
}

/* Finalizer method for the class 'Application::SettingsInputField' */
void ApplicationSettingsInputField__Done( ApplicationSettingsInputField _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsBorder__Done( &_this->Border );
  ApplicationTextEditor__Done( &_this->TextEditor );
  ViewsImage__Done( &_this->EyeImage );
  CoreSimpleTouchHandler__Done( &_this->EyeTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsInputField_Init( ApplicationSettingsInputField _this, XHandle 
  aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwTrace( "%s%b", EwLoadString( &_Const006A ), _this->Password );
  ApplicationTextEditor_OnSetInputType( &_this->TextEditor, _this->InputType );
  ApplicationTextEditor_OnSetMaxLength( &_this->TextEditor, _this->MaxLength );
  _this->TextEditor.Password = _this->Password;
}

/* 'C' function for method : 'Application::SettingsInputField.OnSetInputType()' */
void ApplicationSettingsInputField_OnSetInputType( ApplicationSettingsInputField _this, 
  XInt32 value )
{
  if ( _this->InputType == value )
    return;

  _this->InputType = value;
  EwTrace( "%s", EwLoadString( &_Const006B ));
  ApplicationTextEditor_OnSetInputType( &_this->TextEditor, value );
  EwTrace( "%s%i", EwLoadString( &_Const006C ), _this->TextEditor.InputType );
  EwTrace( "%s%s", EwLoadString( &_Const006D ), ApplicationTextEditor_OnGetString( 
    &_this->TextEditor ));
}

/* 'C' function for method : 'Application::SettingsInputField.OnSetMaxLength()' */
void ApplicationSettingsInputField_OnSetMaxLength( ApplicationSettingsInputField _this, 
  XInt32 value )
{
  if ( _this->MaxLength == value )
    return;

  _this->MaxLength = value;
  ApplicationTextEditor_OnSetMaxLength( &_this->TextEditor, value );
}

/* 'C' function for method : 'Application::SettingsInputField.OnSetValue()' */
void ApplicationSettingsInputField_OnSetValue( ApplicationSettingsInputField _this, 
  XString value )
{
  if ( !EwCompString( _this->Value, value ))
    return;

  _this->Value = EwShareString( value );
  ApplicationTextEditor_OnSetString( &_this->TextEditor, value );
}

/* 'C' function for method : 'Application::SettingsInputField.OnPress()' */
void ApplicationSettingsInputField_OnPress( ApplicationSettingsInputField _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwTrace( "%s", EwLoadString( &_Const006E ));
  CoreGroup_ObtainFocus((CoreGroup)_this );
  CoreGroup_ObtainFocus((CoreGroup)&_this->TextEditor );
}

/* 'C' function for method : 'Application::SettingsInputField.OnSetPassword()' */
void ApplicationSettingsInputField_OnSetPassword( ApplicationSettingsInputField _this, 
  XBool value )
{
  if ( _this->Password == value )
    return;

  _this->Password = value;
  _this->TextEditor.Password = value;
  ViewsImage_OnSetVisible( &_this->EyeImage, _this->Password );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->EyeTouchHandler, _this->Password );
}

/* 'C' function for method : 'Application::SettingsInputField.OnSetShowPassword()' */
void ApplicationSettingsInputField_OnSetShowPassword( ApplicationSettingsInputField _this, 
  XBool value )
{
  if ( _this->ShowPassword == value )
    return;

  _this->ShowPassword = value;
  ApplicationTextEditor_OnSetShowPassword( &_this->TextEditor, value );
}

/* 'C' function for method : 'Application::SettingsInputField.onEyePressed()' */
void ApplicationSettingsInputField_onEyePressed( ApplicationSettingsInputField _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationSettingsInputField_OnSetShowPassword( _this, (XBool)!_this->ShowPassword );
  ApplicationTextEditor_OnSetShowPassword( &_this->TextEditor, _this->ShowPassword );

  if ( _this->ShowPassword )
    ViewsImage_OnSetBitmap( &_this->EyeImage, EwLoadResource( &ResEyeOpen, ResourcesBitmap ));
  else
    ViewsImage_OnSetBitmap( &_this->EyeImage, EwLoadResource( &ResEyeClosed, ResourcesBitmap ));

  EwTrace( "%s%s", EwLoadString( &_Const006F ), _this->TextEditor.RealValue );
  EwTrace( "%s%s", EwLoadString( &_Const006F ), ApplicationTextEditor_OnGetString( 
    &_this->TextEditor ));
}

/* Variants derived from the class : 'Application::SettingsInputField' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsInputField )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsInputField )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsInputField' */
EW_DEFINE_CLASS( ApplicationSettingsInputField, CoreGroup, Rectangle, Rectangle, 
                 Rectangle, Rectangle, Value, InputType, "Application::SettingsInputField" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsInputField )

/* Initializer for the class 'Application::TextEditor' */
void ApplicationTextEditor__Init( ApplicationTextEditor _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesTextEditor__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationTextEditor );

  /* ... then construct all embedded objects */
  EffectsBoolEffect__Init( &_this->blinkEffect, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->CursorKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->BackspaceKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->DeleteKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->NewlineKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->CharacterKeyHandler, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Caret, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationTextEditor );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0070 );
  _this->blinkEffect.Value2 = 0;
  _this->blinkEffect.Value1 = 1;
  EffectsBoolEffect_OnSetCycleDuration( &_this->blinkEffect, 500 );
  EffectsBoolEffect_OnSetInterCycleDelay( &_this->blinkEffect, 500 );
  _this->CursorKeyHandler.Filter = CoreKeyCodeCursorKeys;
  _this->BackspaceKeyHandler.Filter = CoreKeyCodeBackspace;
  _this->DeleteKeyHandler.Filter = CoreKeyCodeDelete;
  _this->NewlineKeyHandler.Filter = CoreKeyCodeEnter;
  _this->CharacterKeyHandler.Filter = CoreKeyCodeCharacterKeys;
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0070 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.050000f );
  CoreView_OnSetLayout((CoreView)&_this->SimpleTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0071 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0072 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0073 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0074 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->SimpleTouchHandler, 3 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0075 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0076 ));
  ViewsText_OnSetColor( &_this->Text, _Const0077 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, _Const0078 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, _Const0079 );
  ViewsLine_OnSetWidth2( &_this->Caret, 2 );
  ViewsLine_OnSetWidth1( &_this->Caret, 2 );
  ViewsLine_OnSetColor( &_this->Caret, _Const0077 );
  ViewsLine_OnSetVisible( &_this->Caret, 0 );
  _this->String = EwShareString( EwLoadString( &_Const007A ));
  _this->Color = _Const0077;
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Caret ), 0 );
  _this->blinkEffect.Outlet = EwNewRef( &_this->Caret, ViewsLine_OnGetVisible, ViewsLine_OnSetVisible );
  _this->CursorKeyHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onCursorKey );
  _this->CursorKeyHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onCursorKey );
  _this->BackspaceKeyHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onBackspaceKey );
  _this->BackspaceKeyHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onBackspaceKey );
  _this->DeleteKeyHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onDeleteKey );
  _this->DeleteKeyHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onDeleteKey );
  _this->NewlineKeyHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onNewlineKey );
  _this->NewlineKeyHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onNewlineKey );
  _this->CharacterKeyHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onCharacterKey );
  _this->CharacterKeyHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onCharacterKey );
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, ApplicationTextEditor_onDragTouch );
  _this->SimpleTouchHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onHoldTouch );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ApplicationTextEditor_onReleaseTouch );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onPressTouch );
  ViewsText_OnSetOnUpdate( &_this->Text, EwNewSlot( _this, ApplicationTextEditor_updateCaret ));
  ViewsText_OnSetSlideHandler( &_this->Text, &_this->SlideTouchHandler );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  _this->Font = EwLoadResource( &ResourcesFontMedium, ResourcesFont );
}

/* Re-Initializer for the class 'Application::TextEditor' */
void ApplicationTextEditor__ReInit( ApplicationTextEditor _this )
{
  /* At first re-initialize the super class ... */
  TemplatesTextEditor__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  EffectsBoolEffect__ReInit( &_this->blinkEffect );
  CoreKeyPressHandler__ReInit( &_this->CursorKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->BackspaceKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->DeleteKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->NewlineKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->CharacterKeyHandler );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsText__ReInit( &_this->Text );
  ViewsLine__ReInit( &_this->Caret );
}

/* Finalizer method for the class 'Application::TextEditor' */
void ApplicationTextEditor__Done( ApplicationTextEditor _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesTextEditor );

  /* Finalize all embedded objects */
  EffectsBoolEffect__Done( &_this->blinkEffect );
  CoreKeyPressHandler__Done( &_this->CursorKeyHandler );
  CoreKeyPressHandler__Done( &_this->BackspaceKeyHandler );
  CoreKeyPressHandler__Done( &_this->DeleteKeyHandler );
  CoreKeyPressHandler__Done( &_this->NewlineKeyHandler );
  CoreKeyPressHandler__Done( &_this->CharacterKeyHandler );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsText__Done( &_this->Text );
  ViewsLine__Done( &_this->Caret );

  /* Don't forget to deinitialize the super class ... */
  TemplatesTextEditor__Done( &_this->_.Super );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationTextEditor_UpdateViewState( ApplicationTextEditor _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );

  if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 1 );
  else
  {
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 0 );
    ViewsLine_OnSetVisible( &_this->Caret, 0 );
  }
}

/* This slot method is called after the caret has been adjusted. Its job is to adjust 
   too the position of the magnifying glass view where the augmented text content 
   around the caret is shown. */
void ApplicationTextEditor_updateMagnifyingView( ApplicationTextEditor _this, XObject 
  sender )
{
  XRect srcArea;
  XRect extent;
  XRect bounds;
  XPoint caret;
  XInt32 srcX;
  XInt32 dstX;
  XPoint ofs;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView == 0 )
    return;

  srcArea = _this->magnifyingView->Super1.SourceArea;
  extent = CoreView__GetExtent( _this->magnifyingView );
  bounds = _this->Super3.Bounds;
  caret = _this->Caret.Super1.Point1;
  srcX = caret.X - ( EwGetRectW( srcArea ) / 2 );

  if ( srcX < 0 )
    srcX = 0;

  if (( srcX + EwGetRectW( srcArea )) > EwGetRectW( bounds ))
    srcX = EwGetRectW( bounds ) - EwGetRectW( srcArea );

  ViewsWarpView_OnSetSourceArea((ViewsWarpView)_this->magnifyingView, EwSetRectOrigin( 
  _this->magnifyingView->Super1.SourceArea, EwNewPoint( srcX, caret.Y )));
  dstX = ( bounds.Point1.X + caret.X ) - (( caret.X - srcX ) * 2 );
  ofs = EwNewPoint( dstX - extent.Point1.X, ( bounds.Point1.Y + caret.Y ) - extent.Point2.Y );
  CoreView__MoveView( _this->magnifyingView, ofs, 0 );
  CoreView__MoveView( _this->magnifyingBack, ofs, 0 );
}

/* This slot method is called after a short delay when the user has moved the caret 
   or modified the text. Its job is to ensure that the caret is still visible. If 
   necessary, the editor content is scrolled. */
void ApplicationTextEditor_updateScrollOffset( ApplicationTextEditor _this, XObject 
  sender )
{
  XRect bounds;
  XInt32 ofsX;
  XInt32 ofsY;
  XPoint size;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  bounds = _this->Text.Super1.Bounds;
  ofsX = 0;
  ofsY = 0;

  if ( _this->Caret.Super1.Point1.X < bounds.Point1.X )
    ofsX = bounds.Point1.X - _this->Caret.Super1.Point1.X;

  if ( _this->Caret.Super1.Point1.X > bounds.Point2.X )
    ofsX = bounds.Point2.X - _this->Caret.Super1.Point1.X;

  if ( _this->Caret.Super1.Point1.Y < bounds.Point1.Y )
    ofsY = bounds.Point1.Y - _this->Caret.Super1.Point1.Y;

  if ( _this->Caret.Super1.Point2.Y > bounds.Point2.Y )
    ofsY = bounds.Point2.Y - _this->Caret.Super1.Point2.Y;

  if (( ofsX != 0 ) || ( ofsY != 0 ))
    ViewsText_OnSetScrollOffset( &_this->Text, EwMovePointPos( _this->Text.ScrollOffset, 
    EwNewPoint( ofsX, ofsY )));

  ofsX = _this->Text.ScrollOffset.X;
  ofsY = _this->Text.ScrollOffset.Y;
  size = EwGetRectSize( ViewsText_GetContentArea( &_this->Text ));

  if ( size.X <= EwGetRectW( _this->Text.Super1.Bounds ))
    ofsX = 0;

  if ( size.Y <= EwGetRectH( _this->Text.Super1.Bounds ))
    ofsY = 0;

  ViewsText_OnSetScrollOffset( &_this->Text, EwNewPoint( ofsX, ofsY ));
}

/* This slot method is attached to the Text view. Each time the Text view has rearranged 
   the text, this method is called. Its job is to adjust the caret to the evtl. 
   new position. */
void ApplicationTextEditor_updateCaret( ApplicationTextEditor _this, XObject sender )
{
  XPoint rowCol;
  XPoint pos;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Font == 0 )
    return;

  rowCol = ViewsText_StringIndex2RowCol( &_this->Text, _this->caretIndex );
  pos = ViewsText_RowCol2Position( &_this->Text, rowCol );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, EwMovePointNeg( pos, EwNewPoint( 
  0, _this->Font->Ascent )));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, EwMovePointPos( pos, EwNewPoint( 
  0, _this->Font->Descent )));

  if ( _this->blinkEffect.Enabled )
  {
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 0 );
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 1 );
  }

  if ( _this->autoScroll )
  {
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateScrollOffset ), 
      ((XObject)_this ));
    _this->autoScroll = 0;
  }

  if ( _this->magnifyingView != 0 )
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateMagnifyingView ), 
      ((XObject)_this ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   hide the magnifying glass view again. */
void ApplicationTextEditor_onReleaseTouch( ApplicationTextEditor _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView != 0 )
  {
    CoreGroup__Remove( _this->Super4.Owner, ((CoreView)_this->magnifyingView ));
    CoreGroup__Remove( _this->Super4.Owner, ((CoreView)_this->magnifyingBack ));
    _this->magnifyingView = 0;
    _this->magnifyingBack = 0;
    CoreGroup__OnSetBuffered( _this, 0 );
  }
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   move the caret accordingly to the user's finger movement. */
void ApplicationTextEditor_onDragTouch( ApplicationTextEditor _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView != 0 )
  {
    XPoint rc = ViewsText_Position2RowCol( &_this->Text, _this->SimpleTouchHandler.CurrentPos );
    XInt32 newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

    if ( newCaretIndex != _this->caretIndex )
    {
      _this->caretIndex = newCaretIndex;
      EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateCaret ), ((XObject)_this ));
      _this->autoScroll = 1;
    }
  }
  else
  {
    XPoint ofs = EwMovePointNeg( _this->SimpleTouchHandler.CurrentPos, _this->SimpleTouchHandler.HittingPos );

    if (((( ofs.X < -8 ) || ( ofs.X > 8 )) || ( ofs.Y < -8 )) || ( ofs.Y > 8 ))
      CoreRoot_DeflectCursor( CoreView__GetRoot( _this ), ((CoreView)&_this->SlideTouchHandler ), 
      _Const0074 );
  }
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   activate the caret movement mode if the user has pressed the finger on the screen 
   for a while. The method also shows a small magnifying glass where the text around 
   the caret is shown. This should help the user to navigate the caret with the 
   finger. */
void ApplicationTextEditor_onHoldTouch( ApplicationTextEditor _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->SimpleTouchHandler.HoldPeriod >= 300 ) && ( _this->magnifyingView 
      == 0 ))
  {
    XInt32 height = _this->Caret.Super1.Point2.Y - _this->Caret.Super1.Point1.Y;
    XInt32 width = height * 3;

    if ( height > EwGetRectH( _this->Super3.Bounds ))
      height = EwGetRectH( _this->Super3.Bounds );

    if ( width > EwGetRectW( _this->Super3.Bounds ))
      width = EwGetRectW( _this->Super3.Bounds );

    CoreGroup__OnSetBuffered( _this, 1 );
    _this->magnifyingView = EwNewObject( ViewsWarpGroup, 0 );
    _this->magnifyingBack = EwNewObject( ViewsRectangle, 0 );
    ViewsWarpGroup_OnSetGroup( _this->magnifyingView, ((CoreGroup)_this ));
    ViewsWarpView_OnSetQuality((ViewsWarpView)_this->magnifyingView, 1 );
    ViewsWarpGroup_OnSetOpacity( _this->magnifyingView, 200 );
    ViewsWarpView_OnSetSourceArea((ViewsWarpView)_this->magnifyingView, EwNewRect( 
    0, 0, width, height ));
    CoreQuadView__OnSetPoint2( _this->magnifyingView, EwSetPointX( _this->magnifyingView->Super2.Point2, 
    width * 2 ));
    CoreQuadView__OnSetPoint3( _this->magnifyingView, EwSetPointX( _this->magnifyingView->Super2.Point3, 
    width * 2 ));
    CoreQuadView__OnSetPoint3( _this->magnifyingView, EwSetPointY( _this->magnifyingView->Super2.Point3, 
    height * 2 ));
    CoreQuadView__OnSetPoint4( _this->magnifyingView, EwSetPointY( _this->magnifyingView->Super2.Point4, 
    height * 2 ));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectSize( _this->magnifyingBack->Super1.Bounds, 
    EwMovePointPos( EwNewPoint( width * 2, height * 2 ), _Const007B )));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectOrigin( _this->magnifyingBack->Super1.Bounds, 
    _Const007C ));
    ViewsRectangle_OnSetColor( _this->magnifyingBack, _Const007D );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingBack ), 0 );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingView ), 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateMagnifyingView ), 
      ((XObject)_this ));
  }

  if ( _this->magnifyingView != 0 )
    EwSignal( EwNewSlot( _this, ApplicationTextEditor_onDragTouch ), ((XObject)_this ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   obtain the focused state for the editor so the user can interact with the editor 
   content and to place the caret at the touched position. */
void ApplicationTextEditor_onPressTouch( ApplicationTextEditor _this, XObject sender )
{
  XPoint rc;
  XInt32 newCaretIndex;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !CoreGroup_HasViewState((CoreGroup)_this, CoreViewStateFocused ))
    CoreGroup_ObtainFocus((CoreGroup)_this );

  rc = ViewsText_Position2RowCol( &_this->Text, _this->SimpleTouchHandler.CurrentPos );
  newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

  if ( newCaretIndex != _this->caretIndex )
  {
    _this->caretIndex = newCaretIndex;
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateCaret ), ((XObject)_this ));
    _this->autoScroll = 1;
  }

  CoreGroup_ObtainFocus((CoreGroup)_this );
  EwTrace( "%b", CoreGroup_HasViewState((CoreGroup)_this, CoreViewStateFocused ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   move the caret up/down/left or right in the editor text. */
void ApplicationTextEditor_onCursorKey( ApplicationTextEditor _this, XObject sender )
{
  XPoint rc;
  XInt32 newCaretIndex;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Font == 0 )
    return;

  rc = ViewsText_StringIndex2RowCol( &_this->Text, _this->caretIndex );

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeLeft )
  {
    rc.X = ( rc.X - 1 );

    if ( ViewsText_RowCol2StringIndex( &_this->Text, rc ) == _this->caretIndex )
    {
      rc.Y = ( rc.Y - 1 );
      rc.X = EwGetStringLength( ViewsText_GetRowString( &_this->Text, rc.Y ));
    }
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeRight )
  {
    rc.X = ( rc.X + 1 );

    if ( ViewsText_RowCol2StringIndex( &_this->Text, rc ) == _this->caretIndex )
    {
      rc.Y = ( rc.Y + 1 );
      rc.X = 0;
    }
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeUp )
  {
    XPoint pos = ViewsText_RowCol2Position( &_this->Text, rc );
    XInt32 rowHeight = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;
    rc = ViewsText_Position2RowCol( &_this->Text, EwMovePointNeg( pos, EwNewPoint( 
    0, rowHeight )));
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeDown )
  {
    XPoint pos = ViewsText_RowCol2Position( &_this->Text, rc );
    XInt32 rowHeight = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;
    rc = ViewsText_Position2RowCol( &_this->Text, EwMovePointPos( pos, EwNewPoint( 
    0, rowHeight )));
  }

  newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

  if ( newCaretIndex != _this->caretIndex )
  {
    _this->caretIndex = newCaretIndex;
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateCaret ), ((XObject)_this ));
    _this->autoScroll = 1;
  }
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign preceding the current caret position and to move the caret accordingly. */
void ApplicationTextEditor_onBackspaceKey( ApplicationTextEditor _this, XObject 
  sender )
{
  XChar ch;
  XInt32 count;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->caretIndex == 0 )
    return;

  if ( _this->Password )
  {
    _this->RealValue = EwShareString( EwStringRemove( _this->RealValue, _this->caretIndex 
    - 1, 1 ));
    _this->caretIndex = _this->caretIndex - 1;
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updatePasswordDisplay ), 
      ((XObject)_this ));
    _this->autoScroll = 1;
    EwPostSignal( _this->OnChange, ((XObject)_this ));
    return;
  }

  ch = EwGetStringChar( _this->Text.String, _this->caretIndex - 1 );
  count = 1;

  if ((( ch == '^' ) || ( ch == '~' )) || ( ch == '%' ))
    count = 2;

  ViewsText_OnSetString( &_this->Text, EwStringRemove( _this->Text.String, _this->caretIndex 
  - count, count ));
  _this->caretIndex = _this->caretIndex - count;
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign at the current caret position. */
void ApplicationTextEditor_onDeleteKey( ApplicationTextEditor _this, XObject sender )
{
  XChar ch;
  XInt32 count;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Password )
  {
    if ( _this->caretIndex >= EwGetStringLength( _this->RealValue ))
      return;

    _this->RealValue = EwShareString( EwStringRemove( _this->RealValue, _this->caretIndex, 
    1 ));
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updatePasswordDisplay ), 
      ((XObject)_this ));
    _this->autoScroll = 1;
    EwPostSignal( _this->OnChange, ((XObject)_this ));
    return;
  }

  if ( _this->caretIndex >= ( EwGetStringLength( _this->Text.String ) - 1 ))
    return;

  ch = EwGetStringChar( _this->Text.String, _this->caretIndex );
  count = 1;

  if ( ch == '%' )
    count = 2;

  ViewsText_OnSetString( &_this->Text, EwStringRemove( _this->Text.String, _this->caretIndex, 
  count ));
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the <new line> sign and to move the caret 
   to the next row. */
void ApplicationTextEditor_onNewlineKey( ApplicationTextEditor _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, EwLoadString( 
  &_Const007E ), _this->caretIndex ));
  _this->caretIndex = _this->caretIndex + 1;
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the sign which has been input by the user 
   and to move the caret to the next column. */
void ApplicationTextEditor_onCharacterKey( ApplicationTextEditor _this, XObject 
  sender )
{
  XChar ch;
  XInt32 len;
  XString str;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ch = _this->CharacterKeyHandler.CharCode;

  if (( _this->InputType == 1 ) && (( ch < '0' ) || ( ch > '9' )))
    return;

  if (( _this->InputType == 2 ) && !(((( ch >= 'A' ) && ( ch <= 'Z' )) || (( ch 
      >= 'a' ) && ( ch <= 'z' ))) || ( ch == 0x0020 )))
    return;

  if (( _this->InputType == 3 ) && !(((( ch >= 'A' ) && ( ch <= 'Z' )) || (( ch 
      >= 'a' ) && ( ch <= 'z' ))) || (( ch >= '0' ) && ( ch <= '9' ))))
    return;

  if ( _this->Password )
    len = EwGetStringLength( _this->RealValue );
  else
  {
    len = EwGetStringLength( _this->Text.String );

    if (( len > 0 ) && ( EwGetStringChar( _this->Text.String, len - 1 ) == 0x000A ))
      len = len - 1;
  }

  if (( _this->MaxLength > 0 ) && ( len >= _this->MaxLength ))
    return;

  str = EwNewStringChar( ch, 1 );

  if (((( ch == '^' ) || ( ch == '~' )) || ( ch == 0x00AD )) || ( ch == '%' ))
    str = EwConcatStringChar( EwLoadString( &_Const007F ), ch );

  if ( _this->Password )
  {
    _this->RealValue = EwShareString( EwStringInsert( _this->RealValue, str, _this->caretIndex ));
    _this->caretIndex = _this->caretIndex + EwGetStringLength( str );
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updatePasswordDisplay ), 
      ((XObject)_this ));
  }
  else
  {
    ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, str, 
    _this->caretIndex ));
    _this->caretIndex = _this->caretIndex + EwGetStringLength( str );
  }

  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* 'C' function for method : 'Application::TextEditor.OnGetString()' */
XString ApplicationTextEditor_OnGetString( ApplicationTextEditor _this )
{
  XString str;
  XInt32 inx;

  if ( _this->Password )
    return _this->RealValue;

  str = _this->Text.String;
  inx = EwStringFindChar( str, '%', 0 );

  while ( inx >= 0 )
  {
    str = EwStringRemove( str, inx, 1 );
    inx = EwStringFindChar( str, '%', inx + 1 );
  }

  return EwStringLeft( str, EwGetStringLength( str ) - 1 );
}

/* 'C' function for method : 'Application::TextEditor.OnSetString()' */
void ApplicationTextEditor_OnSetString( ApplicationTextEditor _this, XString value )
{
  XString str;
  XInt32 inx;

  if ( !EwCompString( _this->String, value ))
    return;

  _this->String = EwShareString( value );

  if ( _this->Password )
  {
    _this->RealValue = EwShareString( value );

    if ( _this->caretIndex > EwGetStringLength( _this->RealValue ))
      _this->caretIndex = EwGetStringLength( _this->RealValue );

    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updatePasswordDisplay ), 
      ((XObject)_this ));
    _this->autoScroll = 1;
    ViewsText_OnSetScrollOffset( &_this->Text, _Const0074 );
    return;
  }

  str = value;
  inx = EwStringFindChar( str, '%', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const007F ), inx );
    inx = EwStringFindChar( str, '%', inx + 2 );
  }

  inx = EwStringFindChar( str, '^', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const007F ), inx );
    inx = EwStringFindChar( str, '^', inx + 2 );
  }

  inx = EwStringFindChar( str, '~', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const007F ), inx );
    inx = EwStringFindChar( str, '~', inx + 2 );
  }

  inx = EwStringFindChar( str, 0x00AD, 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const007F ), inx );
    inx = EwStringFindChar( str, 0x00AD, inx + 2 );
  }

  if ( _this->caretIndex > EwGetStringLength( str ))
    _this->caretIndex = EwGetStringLength( str );

  ViewsText_OnSetString( &_this->Text, EwConcatString( str, EwLoadString( &_Const0080 )));
  _this->autoScroll = 1;
  ViewsText_OnSetScrollOffset( &_this->Text, _Const0074 );
}

/* 'C' function for method : 'Application::TextEditor.OnSetColor()' */
void ApplicationTextEditor_OnSetColor( ApplicationTextEditor _this, XColor value )
{
  if ( !EwCompColor( _this->Color, value ))
    return;

  _this->Color = value;
  ViewsText_OnSetColor( &_this->Text, value );
  ViewsLine_OnSetColor( &_this->Caret, value );
}

/* 'C' function for method : 'Application::TextEditor.OnSetFont()' */
void ApplicationTextEditor_OnSetFont( ApplicationTextEditor _this, ResourcesFont 
  value )
{
  if ( _this->Font == value )
    return;

  _this->Font = value;
  ViewsText_OnSetFont( &_this->Text, value );
  _this->autoScroll = 1;
  ViewsText_OnSetScrollOffset( &_this->Text, _Const0074 );
}

/* 'C' function for method : 'Application::TextEditor.OnSetInputType()' */
void ApplicationTextEditor_OnSetInputType( ApplicationTextEditor _this, XInt32 value )
{
  if ( _this->InputType == value )
    return;

  _this->InputType = value;
}

/* 'C' function for method : 'Application::TextEditor.OnSetMaxLength()' */
void ApplicationTextEditor_OnSetMaxLength( ApplicationTextEditor _this, XInt32 value )
{
  if ( _this->MaxLength == value )
    return;

  _this->MaxLength = value;
}

/* 'C' function for method : 'Application::TextEditor.OnSetShowPassword()' */
void ApplicationTextEditor_OnSetShowPassword( ApplicationTextEditor _this, XBool 
  value )
{
  if ( _this->ShowPassword == value )
    return;

  _this->ShowPassword = value;
  EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updatePasswordDisplay ), 
    ((XObject)_this ));
}

/* 'C' function for method : 'Application::TextEditor.updatePasswordDisplay()' */
void ApplicationTextEditor_updatePasswordDisplay( ApplicationTextEditor _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwTrace( "%s", _this->RealValue );
  EwTrace( "%b", _this->Password );
  EwTrace( "%b", _this->ShowPassword );

  if ( !_this->Password || _this->ShowPassword )
    ViewsText_OnSetString( &_this->Text, EwConcatString( _this->RealValue, EwLoadString( 
    &_Const0080 )));
  else
  {
    XString maskedText = 0;
    XInt32 i;

    for ( i = 0; i < EwGetStringLength( _this->RealValue ); i = i + 1 )
      maskedText = EwConcatString( maskedText, EwLoadString( &_Const0081 ));

    ViewsText_OnSetString( &_this->Text, EwConcatString( maskedText, EwLoadString( 
    &_Const0080 )));
  }
}

/* Variants derived from the class : 'Application::TextEditor' */
EW_DEFINE_CLASS_VARIANTS( ApplicationTextEditor )
EW_END_OF_CLASS_VARIANTS( ApplicationTextEditor )

/* Virtual Method Table (VMT) for the class : 'Application::TextEditor' */
EW_DEFINE_CLASS( ApplicationTextEditor, TemplatesTextEditor, magnifyingBack, OnChange, 
                 blinkEffect, blinkEffect, String, caretIndex, "Application::TextEditor" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationTextEditor_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationTextEditor )

/* Include a file containing the font resource : 'Application::FontNormal28' */
#include "_ApplicationFontNormal28.h"

/* Table with links to derived variants of the font resource : 'Application::FontNormal28' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontNormal28 )

/* Include a file containing the font resource : 'Application::FontBold32' */
#include "_ApplicationFontBold32.h"

/* Table with links to derived variants of the font resource : 'Application::FontBold32' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontBold32 )

/* Embedded Wizard */
