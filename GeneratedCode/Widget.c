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
#include "_CoreSimpleTouchHandler.h"
#include "_CoreView.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetAddProfileButton.h"
#include "_WidgetCustomButton.h"
#include "_WidgetEnterButton.h"
#include "_WidgetNumButton.h"
#include "_WidgetNumPad.h"
#include "_WidgetProfileListItem.h"
#include "_WidgetSettingsDiagnosticList.h"
#include "_WidgetSettingsList.h"
#include "_WidgetStatusLabel.h"
#include "Application.h"
#include "Core.h"
#include "Res.h"
#include "Resources.h"
#include "Views.h"
#include "Widget.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x000001BA, /* ratio 59.73 % */
  0xB8000F00, 0x800A8452, 0x00F00032, 0x21A003A0, 0x62458181, 0x90F00434, 0x15898CA0,
  0x08C0CC8B, 0x82470691, 0xB1163E35, 0x4886F221, 0x4C73221C, 0x08710044, 0x01073600,
  0x47200184, 0x10958C24, 0xB370008B, 0x86CD6630, 0x0106200A, 0x00288640, 0xC49C0010,
  0x019133BC, 0x01322644, 0x135A89C0, 0x3099CD61, 0x09689A1B, 0xA44F4EA0, 0x395E431B,
  0x5905C00A, 0x9EA26F97, 0xE5117B21, 0x9166A458, 0x10AA8936, 0x00ABDAE9, 0x4B2548E6,
  0xA5486CD2, 0x9440210D, 0x11286002, 0x3C004900, 0x27584B21, 0xA7439D54, 0x30D9D000,
  0x89C94403, 0x0C2D248F, 0xC5D22A00, 0x8423253C, 0x4F4C7089, 0xA68B33C2, 0x08569001,
  0x350D8300, 0x400D0440, 0xA698CBF4, 0xBA36A219, 0xB26BF5BA, 0x55232589, 0xF1B3A55A,
  0x42090286, 0x6F57AA89, 0x8D1004C3, 0xDA4D5D44, 0x1006C368, 0x8865A695, 0xBD422194,
  0x6C4FADDE, 0x00001018, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 119, 86 }};
static const XRect _Const0001 = {{ -6, 2 }, { 119, 86 }};
static const XRect _Const0002 = {{ -6, 5 }, { 113, 82 }};
static const XStringRes _Const0003 = { _StringsDefault0, 0x0002 };
static const XColor _Const0004 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XPoint _Const0005 = { 0, 5 };
static const XPoint _Const0006 = { 117, 5 };
static const XPoint _Const0007 = { 117, 82 };
static const XPoint _Const0008 = { 0, 82 };
static const XRect _Const0009 = {{ 0, 0 }, { 533, 440 }};
static const XRect _Const000A = {{ 61, 71 }, { 180, 163 }};
static const XRect _Const000B = {{ 182, 71 }, { 300, 163 }};
static const XRect _Const000C = {{ 304, 71 }, { 423, 170 }};
static const XRect _Const000D = {{ 63, 159 }, { 182, 244 }};
static const XRect _Const000E = {{ 183, 159 }, { 302, 244 }};
static const XRect _Const000F = {{ 304, 159 }, { 423, 244 }};
static const XRect _Const0010 = {{ 64, 248 }, { 183, 333 }};
static const XRect _Const0011 = {{ 184, 248 }, { 303, 335 }};
static const XRect _Const0012 = {{ 304, 248 }, { 423, 341 }};
static const XRect _Const0013 = {{ 65, 335 }, { 184, 420 }};
static const XRect _Const0014 = {{ 186, 335 }, { 305, 422 }};
static const XRect _Const0015 = {{ 304, 338 }, { 418, 440 }};
static const XRect _Const0016 = {{ 157, 7 }, { 189, 39 }};
static const XRect _Const0017 = {{ 206, 7 }, { 238, 39 }};
static const XRect _Const0018 = {{ 253, 7 }, { 285, 39 }};
static const XRect _Const0019 = {{ 301, 7 }, { 333, 39 }};
static const XStringRes _Const001A = { _StringsDefault0, 0x0009 };
static const XStringRes _Const001B = { _StringsDefault0, 0x000D };
static const XStringRes _Const001C = { _StringsDefault0, 0x0011 };
static const XStringRes _Const001D = { _StringsDefault0, 0x0015 };
static const XStringRes _Const001E = { _StringsDefault0, 0x0019 };
static const XStringRes _Const001F = { _StringsDefault0, 0x001D };
static const XStringRes _Const0020 = { _StringsDefault0, 0x0021 };
static const XStringRes _Const0021 = { _StringsDefault0, 0x0025 };
static const XStringRes _Const0022 = { _StringsDefault0, 0x0029 };
static const XStringRes _Const0023 = { _StringsDefault0, 0x002D };
static const XStringRes _Const0024 = { _StringsDefault0, 0x0035 };
static const XRect _Const0025 = {{ 0, 0 }, { 114, 85 }};
static const XRect _Const0026 = {{ 0, 0 }, { 114, 81 }};
static const XStringRes _Const0027 = { _StringsDefault0, 0x0039 };
static const XPoint _Const0028 = { 0, 0 };
static const XPoint _Const0029 = { 114, 0 };
static const XPoint _Const002A = { 114, 81 };
static const XPoint _Const002B = { 0, 81 };
static const XRect _Const002C = {{ 0, 0 }, { 138, 48 }};
static const XStringRes _Const002D = { _StringsDefault0, 0x0041 };
static const XPoint _Const002E = { 138, 0 };
static const XPoint _Const002F = { 138, 48 };
static const XPoint _Const0030 = { 0, 48 };
static const XRect _Const0031 = {{ 0, 0 }, { 1149, 107 }};
static const XColor _Const0032 = { 0x1A, 0x24, 0x42, 0xFF };
static const XColor _Const0033 = { 0x3A, 0x5F, 0xA0, 0xFF };
static const XRect _Const0034 = {{ 26, 39 }, { 58, 71 }};
static const XRect _Const0035 = {{ 83, 20 }, { 777, 56 }};
static const XStringRes _Const0036 = { _StringsDefault0, 0x004B };
static const XRect _Const0037 = {{ 83, 56 }, { 411, 84 }};
static const XStringRes _Const0038 = { _StringsDefault0, 0x0057 };
static const XRect _Const0039 = {{ 1073, 36 }, { 1113, 76 }};
static const XPoint _Const003A = { 17, 31 };
static const XPoint _Const003B = { 67, 31 };
static const XPoint _Const003C = { 67, 80 };
static const XPoint _Const003D = { 17, 80 };
static const XPoint _Const003E = { 1073, 35 };
static const XPoint _Const003F = { 1113, 35 };
static const XPoint _Const0040 = { 1113, 75 };
static const XPoint _Const0041 = { 1073, 75 };
static const XStringRes _Const0042 = { _StringsDefault0, 0x007D };
static const XStringRes _Const0043 = { _StringsDefault0, 0x008D };
static const XStringRes _Const0044 = { _StringsDefault0, 0x00A6 };
static const XRect _Const0045 = {{ 18, 8 }, { 113, 97 }};
static const XRect _Const0046 = {{ 137, 13 }, { 796, 62 }};
static const XRect _Const0047 = {{ 137, 61 }, { 549, 91 }};
static const XRect _Const0048 = {{ 17, 25 }, { 796, 53 }};
static const XRect _Const0049 = {{ 17, 57 }, { 796, 75 }};
static const XRect _Const004A = {{ 0, 0 }, { 1153, 81 }};
static const XRect _Const004B = {{ 4, 4 }, { 1153, 66 }};
static const XRect _Const004C = {{ 320, 10 }, { 830, 58 }};
static const XColor _Const004D = { 0x1B, 0x1B, 0x1B, 0xFF };
static const XPoint _Const004E = { 1153, 4 };
static const XPoint _Const004F = { 1151, 65 };
static const XPoint _Const0050 = { 0, 61 };
static const XRect _Const0051 = {{ 0, 0 }, { 1308, 120 }};
static const XRect _Const0052 = {{ 0, 0 }, { 1184, 116 }};
static const XRect _Const0053 = {{ 62, 34 }, { 721, 83 }};
static const XRect _Const0054 = {{ 1101, 33 }, { 1151, 83 }};
static const XRect _Const0055 = {{ 0, 0 }, { 216, 73 }};
static const XRect _Const0056 = {{ 21, 8 }, { 165, 52 }};
static const XStringRes _Const0057 = { _StringsDefault0, 0x00C0 };
static const XColor _Const0058 = { 0x12, 0x4B, 0x36, 0xFF };
static const XColor _Const0059 = { 0x4D, 0xFF, 0x7A, 0xFF };
static const XStringRes _Const005A = { _StringsDefault0, 0x00C7 };
static const XColor _Const005B = { 0x5A, 0x20, 0x24, 0xFF };
static const XColor _Const005C = { 0xFF, 0x6B, 0x72, 0xFF };
static const XStringRes _Const005D = { _StringsDefault0, 0x00D0 };
static const XColor _Const005E = { 0x2B, 0x37, 0x60, 0xFF };
static const XColor _Const005F = { 0xA8, 0xB4, 0xD0, 0xFF };

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

/* Initializer for the class 'Widget::NumButton' */
void WidgetNumButton__Init( WidgetNumButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetNumButton );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->label, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetNumButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Image, _Const0001 );
  CoreRectView__OnSetBounds( &_this->label, _Const0002 );
  ViewsText_OnSetString( &_this->label, EwLoadString( &_Const0003 ));
  ViewsText_OnSetColor( &_this->label, _Const0004 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0005 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0006 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0007 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0008 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResNumBtNormalImg, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->label, EwLoadResource( &ApplicationFontBold24, ResourcesFont ));
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, WidgetNumButton_SlotOnRelease );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, WidgetNumButton_SlotOnPress );
}

/* Re-Initializer for the class 'Widget::NumButton' */
void WidgetNumButton__ReInit( WidgetNumButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->label );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
}

/* Finalizer method for the class 'Widget::NumButton' */
void WidgetNumButton__Done( WidgetNumButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->label );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Widget::NumButton.SlotOnPress()' */
void WidgetNumButton_SlotOnPress( WidgetNumButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResNumBtPressedImg, ResourcesBitmap ));
}

/* 'C' function for method : 'Widget::NumButton.SlotOnRelease()' */
void WidgetNumButton_SlotOnRelease( WidgetNumButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResNumBtNormalImg, ResourcesBitmap ));
  EwPostSignal( _this->OnRelease, ((XObject)_this ));
}

/* Variants derived from the class : 'Widget::NumButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetNumButton )
EW_END_OF_CLASS_VARIANTS( WidgetNumButton )

/* Virtual Method Table (VMT) for the class : 'Widget::NumButton' */
EW_DEFINE_CLASS( WidgetNumButton, CoreGroup, OnRelease, OnRelease, Image, Image, 
                 _.VMT, _.VMT, "Widget::NumButton" )
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
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetNumButton )

/* Initializer for the class 'Widget::NumPad' */
void WidgetNumPad__Init( WidgetNumPad _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetNumPad );

  /* ... then construct all embedded objects */
  WidgetNumButton__Init( &_this->NumButton1, &_this->_.XObject, 0 );
  WidgetNumButton__Init( &_this->NumButton2, &_this->_.XObject, 0 );
  WidgetNumButton__Init( &_this->NumButton3, &_this->_.XObject, 0 );
  WidgetNumButton__Init( &_this->NumButton4, &_this->_.XObject, 0 );
  WidgetNumButton__Init( &_this->NumButton5, &_this->_.XObject, 0 );
  WidgetNumButton__Init( &_this->NumButton6, &_this->_.XObject, 0 );
  WidgetNumButton__Init( &_this->NumButton7, &_this->_.XObject, 0 );
  WidgetNumButton__Init( &_this->NumButton8, &_this->_.XObject, 0 );
  WidgetNumButton__Init( &_this->NumButton9, &_this->_.XObject, 0 );
  WidgetNumButton__Init( &_this->NumButton10, &_this->_.XObject, 0 );
  WidgetNumButton__Init( &_this->NumButton11, &_this->_.XObject, 0 );
  WidgetEnterButton__Init( &_this->EnterButton, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImgPin1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImgPin2, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImgPin3, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImgPin4, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetNumPad );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0009 );
  CoreRectView__OnSetBounds( &_this->NumButton1, _Const000A );
  CoreRectView__OnSetBounds( &_this->NumButton2, _Const000B );
  CoreRectView__OnSetBounds( &_this->NumButton3, _Const000C );
  CoreRectView__OnSetBounds( &_this->NumButton4, _Const000D );
  CoreRectView__OnSetBounds( &_this->NumButton5, _Const000E );
  CoreRectView__OnSetBounds( &_this->NumButton6, _Const000F );
  CoreRectView__OnSetBounds( &_this->NumButton7, _Const0010 );
  CoreRectView__OnSetBounds( &_this->NumButton8, _Const0011 );
  CoreRectView__OnSetBounds( &_this->NumButton9, _Const0012 );
  CoreRectView__OnSetBounds( &_this->NumButton10, _Const0013 );
  CoreRectView__OnSetBounds( &_this->NumButton11, _Const0014 );
  CoreRectView__OnSetBounds( &_this->EnterButton, _Const0015 );
  CoreRectView__OnSetBounds( &_this->ImgPin1, _Const0016 );
  ViewsImage_OnSetAutoSize( &_this->ImgPin1, 1 );
  CoreRectView__OnSetBounds( &_this->ImgPin2, _Const0017 );
  ViewsImage_OnSetAutoSize( &_this->ImgPin2, 1 );
  CoreRectView__OnSetBounds( &_this->ImgPin3, _Const0018 );
  ViewsImage_OnSetAutoSize( &_this->ImgPin3, 1 );
  CoreRectView__OnSetBounds( &_this->ImgPin4, _Const0019 );
  ViewsImage_OnSetAutoSize( &_this->ImgPin4, 1 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumButton1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumButton2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumButton3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumButton4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumButton5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumButton6 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumButton7 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumButton8 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumButton9 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumButton10 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumButton11 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->EnterButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImgPin1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImgPin2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImgPin3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImgPin4 ), 0 );
  _this->NumButton1.OnRelease = EwNewSlot( _this, WidgetNumPad_SlotOnClick );
  _this->NumButton2.OnRelease = EwNewSlot( _this, WidgetNumPad_SlotOnClick );
  _this->NumButton3.OnRelease = EwNewSlot( _this, WidgetNumPad_SlotOnClick );
  _this->NumButton4.OnRelease = EwNewSlot( _this, WidgetNumPad_SlotOnClick );
  _this->NumButton5.OnRelease = EwNewSlot( _this, WidgetNumPad_SlotOnClick );
  _this->NumButton6.OnRelease = EwNewSlot( _this, WidgetNumPad_SlotOnClick );
  _this->NumButton7.OnRelease = EwNewSlot( _this, WidgetNumPad_SlotOnClick );
  _this->NumButton8.OnRelease = EwNewSlot( _this, WidgetNumPad_SlotOnClick );
  _this->NumButton9.OnRelease = EwNewSlot( _this, WidgetNumPad_SlotOnClick );
  _this->NumButton10.OnRelease = EwNewSlot( _this, WidgetNumPad_SlotOnClick );
  _this->NumButton11.OnRelease = EwNewSlot( _this, WidgetNumPad_SlotOnClick );
  _this->EnterButton.OnRelease = EwNewSlot( _this, WidgetNumPad_SlotOnEnter );
  ViewsImage_OnSetBitmap( &_this->ImgPin1, EwLoadResource( &ResPassPlainImg, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImgPin2, EwLoadResource( &ResPassPlainImg, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImgPin3, EwLoadResource( &ResPassPlainImg, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImgPin4, EwLoadResource( &ResPassPlainImg, ResourcesBitmap ));
  _this->PinImgArray[ 0 ] = &_this->ImgPin1;
  _this->PinImgArray[ 1 ] = &_this->ImgPin2;
  _this->PinImgArray[ 2 ] = &_this->ImgPin3;
  _this->PinImgArray[ 3 ] = &_this->ImgPin4;

  /* Call the user defined constructor */
  WidgetNumPad_Init( _this, aArg );
}

/* Re-Initializer for the class 'Widget::NumPad' */
void WidgetNumPad__ReInit( WidgetNumPad _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  WidgetNumButton__ReInit( &_this->NumButton1 );
  WidgetNumButton__ReInit( &_this->NumButton2 );
  WidgetNumButton__ReInit( &_this->NumButton3 );
  WidgetNumButton__ReInit( &_this->NumButton4 );
  WidgetNumButton__ReInit( &_this->NumButton5 );
  WidgetNumButton__ReInit( &_this->NumButton6 );
  WidgetNumButton__ReInit( &_this->NumButton7 );
  WidgetNumButton__ReInit( &_this->NumButton8 );
  WidgetNumButton__ReInit( &_this->NumButton9 );
  WidgetNumButton__ReInit( &_this->NumButton10 );
  WidgetNumButton__ReInit( &_this->NumButton11 );
  WidgetEnterButton__ReInit( &_this->EnterButton );
  ViewsImage__ReInit( &_this->ImgPin1 );
  ViewsImage__ReInit( &_this->ImgPin2 );
  ViewsImage__ReInit( &_this->ImgPin3 );
  ViewsImage__ReInit( &_this->ImgPin4 );
}

/* Finalizer method for the class 'Widget::NumPad' */
void WidgetNumPad__Done( WidgetNumPad _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  WidgetNumButton__Done( &_this->NumButton1 );
  WidgetNumButton__Done( &_this->NumButton2 );
  WidgetNumButton__Done( &_this->NumButton3 );
  WidgetNumButton__Done( &_this->NumButton4 );
  WidgetNumButton__Done( &_this->NumButton5 );
  WidgetNumButton__Done( &_this->NumButton6 );
  WidgetNumButton__Done( &_this->NumButton7 );
  WidgetNumButton__Done( &_this->NumButton8 );
  WidgetNumButton__Done( &_this->NumButton9 );
  WidgetNumButton__Done( &_this->NumButton10 );
  WidgetNumButton__Done( &_this->NumButton11 );
  WidgetEnterButton__Done( &_this->EnterButton );
  ViewsImage__Done( &_this->ImgPin1 );
  ViewsImage__Done( &_this->ImgPin2 );
  ViewsImage__Done( &_this->ImgPin3 );
  ViewsImage__Done( &_this->ImgPin4 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void WidgetNumPad_Init( WidgetNumPad _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ViewsText_OnSetString( &_this->NumButton1.label, EwLoadString( &_Const001A ));
  ViewsText_OnSetString( &_this->NumButton2.label, EwLoadString( &_Const001B ));
  ViewsText_OnSetString( &_this->NumButton3.label, EwLoadString( &_Const001C ));
  ViewsText_OnSetString( &_this->NumButton4.label, EwLoadString( &_Const001D ));
  ViewsText_OnSetString( &_this->NumButton5.label, EwLoadString( &_Const001E ));
  ViewsText_OnSetString( &_this->NumButton6.label, EwLoadString( &_Const001F ));
  ViewsText_OnSetString( &_this->NumButton7.label, EwLoadString( &_Const0020 ));
  ViewsText_OnSetString( &_this->NumButton8.label, EwLoadString( &_Const0021 ));
  ViewsText_OnSetString( &_this->NumButton9.label, EwLoadString( &_Const0022 ));
  ViewsText_OnSetString( &_this->NumButton10.label, EwLoadString( &_Const0023 ));
  ViewsText_OnSetString( &_this->NumButton11.label, EwLoadString( &_Const0024 ));
}

/* 'C' function for method : 'Widget::NumPad.SlotOnClick()' */
void WidgetNumPad_SlotOnClick( WidgetNumPad _this, XObject sender )
{
  if ( sender == ((XObject)&_this->NumButton10 ))
    WidgetNumPad_OnSetNumber( _this, 0 );
  else
  {
    WidgetNumButton currentBT = EwCastObject( sender, WidgetNumButton );

    if ( EwGetStringLength( _this->Number ) >= 4 )
      WidgetNumPad_OnSetNumber( _this, 0 );

    WidgetNumPad_OnSetNumber( _this, EwConcatString( _this->Number, currentBT->label.String ));
    EwTrace( "%s", _this->Number );
  }
}

/* 'C' function for method : 'Widget::NumPad.OnSetNumber()' */
void WidgetNumPad_OnSetNumber( WidgetNumPad _this, XString value )
{
  if ( !EwCompString( _this->Number, value ))
    return;

  _this->Number = EwShareString( value );
  WidgetNumPad_UpdatePinImg( _this, EwGetStringLength( _this->Number ));
}

/* 'C' function for method : 'Widget::NumPad.UpdatePinImg()' */
void WidgetNumPad_UpdatePinImg( WidgetNumPad _this, XInt32 pinLength )
{
  XInt8 i = 0;

  for ( ; i < pinLength; i++ )
    ViewsImage_OnSetBitmap( _this->PinImgArray[ EwCheckIndex( i, 4 )], EwLoadResource( 
    &ResPassFilledImg, ResourcesBitmap ));

  for ( ; i < 4; i++ )
    ViewsImage_OnSetBitmap( _this->PinImgArray[ EwCheckIndex( i, 4 )], EwLoadResource( 
    &ResPassPlainImg, ResourcesBitmap ));
}

/* 'C' function for method : 'Widget::NumPad.SlotOnEnter()' */
void WidgetNumPad_SlotOnEnter( WidgetNumPad _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnEnterKey, ((XObject)_this ));
}

/* Variants derived from the class : 'Widget::NumPad' */
EW_DEFINE_CLASS_VARIANTS( WidgetNumPad )
EW_END_OF_CLASS_VARIANTS( WidgetNumPad )

/* Virtual Method Table (VMT) for the class : 'Widget::NumPad' */
EW_DEFINE_CLASS( WidgetNumPad, CoreGroup, PinImgArray, OnEnterKey, NumButton1, NumButton1, 
                 Number, _.VMT, "Widget::NumPad" )
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
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetNumPad )

/* Initializer for the class 'Widget::EnterButton' */
void WidgetEnterButton__Init( WidgetEnterButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetEnterButton );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->label, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetEnterButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0025 );
  CoreRectView__OnSetBounds( &_this->Image, _Const0025 );
  CoreRectView__OnSetBounds( &_this->label, _Const0026 );
  ViewsText_OnSetString( &_this->label, EwLoadString( &_Const0027 ));
  ViewsText_OnSetColor( &_this->label, _Const0004 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0028 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0029 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const002A );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const002B );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResSubmitBtNormalImg, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->label, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, WidgetEnterButton_slotOnRelease );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, WidgetEnterButton_slotOnPress );
}

/* Re-Initializer for the class 'Widget::EnterButton' */
void WidgetEnterButton__ReInit( WidgetEnterButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->label );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
}

/* Finalizer method for the class 'Widget::EnterButton' */
void WidgetEnterButton__Done( WidgetEnterButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->label );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Widget::EnterButton.slotOnPress()' */
void WidgetEnterButton_slotOnPress( WidgetEnterButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResSubmitBtPressedImg, 
  ResourcesBitmap ));
}

/* 'C' function for method : 'Widget::EnterButton.slotOnRelease()' */
void WidgetEnterButton_slotOnRelease( WidgetEnterButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResSubmitBtNormalImg, 
  ResourcesBitmap ));
  EwPostSignal( _this->OnRelease, ((XObject)_this ));
}

/* Variants derived from the class : 'Widget::EnterButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetEnterButton )
EW_END_OF_CLASS_VARIANTS( WidgetEnterButton )

/* Virtual Method Table (VMT) for the class : 'Widget::EnterButton' */
EW_DEFINE_CLASS( WidgetEnterButton, CoreGroup, OnRelease, OnRelease, Image, Image, 
                 _.VMT, _.VMT, "Widget::EnterButton" )
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
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetEnterButton )

/* Initializer for the class 'Widget::AddProfileButton' */
void WidgetAddProfileButton__Init( WidgetAddProfileButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetAddProfileButton );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->label, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetAddProfileButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const002C );
  CoreRectView__OnSetBounds( &_this->Image, _Const002C );
  ViewsImage_OnSetAutoSize( &_this->Image, 1 );
  CoreRectView__OnSetBounds( &_this->label, _Const002C );
  ViewsText_OnSetString( &_this->label, EwLoadString( &_Const002D ));
  ViewsText_OnSetColor( &_this->label, _Const0004 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0028 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const002E );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const002F );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0030 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResAddProfileNormalImg, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->label, EwLoadResource( &ApplicationFontBold24, ResourcesFont ));
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, WidgetAddProfileButton_slotOnRelease );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, WidgetAddProfileButton_slotOnPress );
}

/* Re-Initializer for the class 'Widget::AddProfileButton' */
void WidgetAddProfileButton__ReInit( WidgetAddProfileButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->label );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
}

/* Finalizer method for the class 'Widget::AddProfileButton' */
void WidgetAddProfileButton__Done( WidgetAddProfileButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->label );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Widget::AddProfileButton.slotOnPress()' */
void WidgetAddProfileButton_slotOnPress( WidgetAddProfileButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResAddProfilePressedImg, 
  ResourcesBitmap ));
}

/* 'C' function for method : 'Widget::AddProfileButton.slotOnRelease()' */
void WidgetAddProfileButton_slotOnRelease( WidgetAddProfileButton _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResAddProfileNormalImg, 
  ResourcesBitmap ));
  EwPostSignal( _this->OnRelease, ((XObject)_this ));
}

/* 'C' function for method : 'Widget::AddProfileButton.OnSetValueString()' */
void WidgetAddProfileButton_OnSetValueString( WidgetAddProfileButton _this, XString 
  value )
{
  if ( !EwCompString( _this->ValueString, value ))
    return;

  _this->ValueString = EwShareString( value );
  ViewsText_OnSetString( &_this->label, value );
}

/* Variants derived from the class : 'Widget::AddProfileButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetAddProfileButton )
EW_END_OF_CLASS_VARIANTS( WidgetAddProfileButton )

/* Virtual Method Table (VMT) for the class : 'Widget::AddProfileButton' */
EW_DEFINE_CLASS( WidgetAddProfileButton, CoreGroup, OnRelease, OnRelease, Image, 
                 Image, ValueString, _.VMT, "Widget::AddProfileButton" )
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
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetAddProfileButton )

/* Initializer for the class 'Widget::ProfileListItem' */
void WidgetProfileListItem__Init( WidgetProfileListItem _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetProfileListItem );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->RadioImg, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->H1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->H2, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->EditImg, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->RadioTouchHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->EditTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetProfileListItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0031 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0031 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0032 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0031 );
  ViewsBorder_OnSetColor( &_this->Border, _Const0033 );
  CoreRectView__OnSetBounds( &_this->RadioImg, _Const0034 );
  CoreView_OnSetLayout((CoreView)&_this->H1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->H1, _Const0035 );
  ViewsText_OnSetAutoSize( &_this->H1, 0 );
  ViewsText_OnSetAlignment( &_this->H1, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->H1, EwLoadString( &_Const0036 ));
  ViewsText_OnSetColor( &_this->H1, _Const0004 );
  CoreRectView__OnSetBounds( &_this->H2, _Const0037 );
  ViewsText_OnSetAutoSize( &_this->H2, 1 );
  ViewsText_OnSetAlignment( &_this->H2, ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->H2, EwLoadString( &_Const0038 ));
  ViewsText_OnSetColor( &_this->H2, _Const0004 );
  CoreRectView__OnSetBounds( &_this->EditImg, _Const0039 );
  CoreQuadView__OnSetPoint4( &_this->RadioTouchHandler, _Const003A );
  CoreQuadView__OnSetPoint3( &_this->RadioTouchHandler, _Const003B );
  CoreQuadView__OnSetPoint2( &_this->RadioTouchHandler, _Const003C );
  CoreQuadView__OnSetPoint1( &_this->RadioTouchHandler, _Const003D );
  _this->RadioTouchHandler.RetargetCondition = 0;
  CoreQuadView__OnSetPoint4( &_this->EditTouchHandler, _Const003E );
  CoreQuadView__OnSetPoint3( &_this->EditTouchHandler, _Const003F );
  CoreQuadView__OnSetPoint2( &_this->EditTouchHandler, _Const0040 );
  CoreQuadView__OnSetPoint1( &_this->EditTouchHandler, _Const0041 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->RadioImg ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->H1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->H2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->EditImg ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->RadioTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->EditTouchHandler ), 0 );
  ViewsImage_OnSetBitmap( &_this->RadioImg, EwLoadResource( &ResRadioBtNormal, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->H1, EwLoadResource( &ApplicationFontBold28, ResourcesFont ));
  ViewsText_OnSetFont( &_this->H2, EwLoadResource( &ApplicationFontNormal22, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->EditImg, EwLoadResource( &ResEditNormal, ResourcesBitmap ));
  _this->RadioTouchHandler.OnRelease = EwNewSlot( _this, WidgetProfileListItem_SlotRadioBTRelease );
  _this->EditTouchHandler.OnRelease = EwNewSlot( _this, WidgetProfileListItem_SlotEditRelease );
  _this->EditTouchHandler.OnPress = EwNewSlot( _this, WidgetProfileListItem_SlotEditPress );
}

/* Re-Initializer for the class 'Widget::ProfileListItem' */
void WidgetProfileListItem__ReInit( WidgetProfileListItem _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsBorder__ReInit( &_this->Border );
  ViewsImage__ReInit( &_this->RadioImg );
  ViewsText__ReInit( &_this->H1 );
  ViewsText__ReInit( &_this->H2 );
  ViewsImage__ReInit( &_this->EditImg );
  CoreSimpleTouchHandler__ReInit( &_this->RadioTouchHandler );
  CoreSimpleTouchHandler__ReInit( &_this->EditTouchHandler );
}

/* Finalizer method for the class 'Widget::ProfileListItem' */
void WidgetProfileListItem__Done( WidgetProfileListItem _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsBorder__Done( &_this->Border );
  ViewsImage__Done( &_this->RadioImg );
  ViewsText__Done( &_this->H1 );
  ViewsText__Done( &_this->H2 );
  ViewsImage__Done( &_this->EditImg );
  CoreSimpleTouchHandler__Done( &_this->RadioTouchHandler );
  CoreSimpleTouchHandler__Done( &_this->EditTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Widget::ProfileListItem.SlotRadioBTRelease()' */
void WidgetProfileListItem_SlotRadioBTRelease( WidgetProfileListItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwTrace( "%s", EwLoadString( &_Const0042 ));
  EwTrace( "%&", _this->OnSelectRadioBT );

  if ( _this->OnSelectRadioBT.Object != 0 )
  {
    EwTrace( "%s", EwLoadString( &_Const0043 ));
    EwSignal( _this->OnSelectRadioBT, ((XObject)_this ));
  }
  else
    EwTrace( "%s", EwLoadString( &_Const0044 ));
}

/* 'C' function for method : 'Widget::ProfileListItem.OnSetOnSelectRadioBT()' */
void WidgetProfileListItem_OnSetOnSelectRadioBT( WidgetProfileListItem _this, XSlot 
  value )
{
  if ( !EwCompSlot( _this->OnSelectRadioBT, value ))
    return;

  _this->OnSelectRadioBT = value;
}

/* 'C' function for method : 'Widget::ProfileListItem.SlotEditRelease()' */
void WidgetProfileListItem_SlotEditRelease( WidgetProfileListItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetBitmap( &_this->EditImg, EwLoadResource( &ResEditNormal, ResourcesBitmap ));
}

/* 'C' function for method : 'Widget::ProfileListItem.SlotEditPress()' */
void WidgetProfileListItem_SlotEditPress( WidgetProfileListItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetBitmap( &_this->EditImg, EwLoadResource( &ResEditPressed, ResourcesBitmap ));
}

/* Variants derived from the class : 'Widget::ProfileListItem' */
EW_DEFINE_CLASS_VARIANTS( WidgetProfileListItem )
EW_END_OF_CLASS_VARIANTS( WidgetProfileListItem )

/* Virtual Method Table (VMT) for the class : 'Widget::ProfileListItem' */
EW_DEFINE_CLASS( WidgetProfileListItem, CoreGroup, OnSelectRadioBT, OnSelectRadioBT, 
                 Rectangle, Rectangle, ItemNo, ItemNo, "Widget::ProfileListItem" )
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
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetProfileListItem )

/* Initializer for the class 'Widget::SettingsList' */
void WidgetSettingsList__Init( WidgetSettingsList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSettingsList );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->SettingsImage, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->H1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->H2, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSettingsList );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0031 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0031 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0032 );
  CoreRectView__OnSetBounds( &_this->SettingsImage, _Const0045 );
  CoreView_OnSetLayout((CoreView)&_this->H1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->H1, _Const0046 );
  ViewsText_OnSetAutoSize( &_this->H1, 0 );
  ViewsText_OnSetAlignment( &_this->H1, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->H1, EwLoadString( &_Const0036 ));
  ViewsText_OnSetColor( &_this->H1, _Const0004 );
  CoreRectView__OnSetBounds( &_this->H2, _Const0047 );
  ViewsText_OnSetAutoSize( &_this->H2, 1 );
  ViewsText_OnSetAlignment( &_this->H2, ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->H2, EwLoadString( &_Const0038 ));
  ViewsText_OnSetColor( &_this->H2, _Const0004 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0031 );
  ViewsBorder_OnSetColor( &_this->Border, _Const0033 );
  _this->ImageVisible = 1;
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SettingsImage ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->H1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->H2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  ViewsImage_OnSetBitmap( &_this->SettingsImage, EwLoadResource( &ResSettings_Diagnostic, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->H1, EwLoadResource( &ApplicationFontBold28, ResourcesFont ));
  ViewsText_OnSetFont( &_this->H2, EwLoadResource( &ApplicationFontNormal22, ResourcesFont ));
}

/* Re-Initializer for the class 'Widget::SettingsList' */
void WidgetSettingsList__ReInit( WidgetSettingsList _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsImage__ReInit( &_this->SettingsImage );
  ViewsText__ReInit( &_this->H1 );
  ViewsText__ReInit( &_this->H2 );
  ViewsBorder__ReInit( &_this->Border );
}

/* Finalizer method for the class 'Widget::SettingsList' */
void WidgetSettingsList__Done( WidgetSettingsList _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsImage__Done( &_this->SettingsImage );
  ViewsText__Done( &_this->H1 );
  ViewsText__Done( &_this->H2 );
  ViewsBorder__Done( &_this->Border );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Widget::SettingsList.OnSetImageVisible()' */
void WidgetSettingsList_OnSetImageVisible( WidgetSettingsList _this, XBool value )
{
  if ( _this->ImageVisible == value )
    return;

  _this->ImageVisible = value;
  ViewsImage_OnSetVisible( &_this->SettingsImage, 0 );
  CoreRectView__OnSetBounds( &_this->H1, _Const0048 );
  CoreRectView__OnSetBounds( &_this->H2, _Const0049 );
}

/* Variants derived from the class : 'Widget::SettingsList' */
EW_DEFINE_CLASS_VARIANTS( WidgetSettingsList )
EW_END_OF_CLASS_VARIANTS( WidgetSettingsList )

/* Virtual Method Table (VMT) for the class : 'Widget::SettingsList' */
EW_DEFINE_CLASS( WidgetSettingsList, CoreGroup, Rectangle, Rectangle, Rectangle, 
                 Rectangle, ImageVisible, ImageVisible, "Widget::SettingsList" )
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
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSettingsList )

/* Initializer for the class 'Widget::CustomButton' */
void WidgetCustomButton__Init( WidgetCustomButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetCustomButton );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->label, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetCustomButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const004A );
  CoreRectView__OnSetBounds( &_this->Image, _Const004B );
  ViewsImage_OnSetAutoSize( &_this->Image, 1 );
  CoreRectView__OnSetBounds( &_this->label, _Const004C );
  ViewsText_OnSetString( &_this->label, EwLoadString( &_Const002D ));
  ViewsText_OnSetColor( &_this->label, _Const004D );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0028 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const004E );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const004F );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0050 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResSettings_Custom_Button, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->label, EwLoadResource( &ApplicationFontBold28, ResourcesFont ));
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, WidgetCustomButton_slotOnRelease );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, WidgetCustomButton_slotOnPress );
}

/* Re-Initializer for the class 'Widget::CustomButton' */
void WidgetCustomButton__ReInit( WidgetCustomButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->label );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
}

/* Finalizer method for the class 'Widget::CustomButton' */
void WidgetCustomButton__Done( WidgetCustomButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->label );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Widget::CustomButton.slotOnPress()' */
void WidgetCustomButton_slotOnPress( WidgetCustomButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResSettings_Custom_Pressed_Button, 
  ResourcesBitmap ));
}

/* 'C' function for method : 'Widget::CustomButton.slotOnRelease()' */
void WidgetCustomButton_slotOnRelease( WidgetCustomButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResSettings_Custom_Button, 
  ResourcesBitmap ));
}

/* Variants derived from the class : 'Widget::CustomButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetCustomButton )
EW_END_OF_CLASS_VARIANTS( WidgetCustomButton )

/* Virtual Method Table (VMT) for the class : 'Widget::CustomButton' */
EW_DEFINE_CLASS( WidgetCustomButton, CoreGroup, Image, Image, Image, Image, _.VMT, 
                 _.VMT, "Widget::CustomButton" )
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
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetCustomButton )

/* Initializer for the class 'Widget::SettingsDiagnosticList' */
void WidgetSettingsDiagnosticList__Init( WidgetSettingsDiagnosticList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSettingsDiagnosticList );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->H1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image1, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSettingsDiagnosticList );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0051 );
  CoreRectView__OnSetBounds( &_this->Image, _Const0052 );
  CoreView_OnSetLayout((CoreView)&_this->H1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->H1, _Const0053 );
  ViewsText_OnSetAutoSize( &_this->H1, 0 );
  ViewsText_OnSetAlignment( &_this->H1, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->H1, EwLoadString( &_Const0036 ));
  ViewsText_OnSetColor( &_this->H1, _Const0004 );
  CoreRectView__OnSetBounds( &_this->Image1, _Const0054 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->H1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image1 ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResSettings_CurvedRect, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->H1, EwLoadResource( &ApplicationFontBold28, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image1, EwLoadResource( &ResSettings_Arrow, ResourcesBitmap ));
}

/* Re-Initializer for the class 'Widget::SettingsDiagnosticList' */
void WidgetSettingsDiagnosticList__ReInit( WidgetSettingsDiagnosticList _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->H1 );
  ViewsImage__ReInit( &_this->Image1 );
}

/* Finalizer method for the class 'Widget::SettingsDiagnosticList' */
void WidgetSettingsDiagnosticList__Done( WidgetSettingsDiagnosticList _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->H1 );
  ViewsImage__Done( &_this->Image1 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Widget::SettingsDiagnosticList' */
EW_DEFINE_CLASS_VARIANTS( WidgetSettingsDiagnosticList )
EW_END_OF_CLASS_VARIANTS( WidgetSettingsDiagnosticList )

/* Virtual Method Table (VMT) for the class : 'Widget::SettingsDiagnosticList' */
EW_DEFINE_CLASS( WidgetSettingsDiagnosticList, CoreGroup, Image, Image, Image, Image, 
                 _.VMT, _.VMT, "Widget::SettingsDiagnosticList" )
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
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSettingsDiagnosticList )

/* Initializer for the class 'Widget::StatusLabel' */
void WidgetStatusLabel__Init( WidgetStatusLabel _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetStatusLabel );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetStatusLabel );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0055 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0056 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0056 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0003 ));
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontBold28, ResourcesFont ));
}

/* Re-Initializer for the class 'Widget::StatusLabel' */
void WidgetStatusLabel__ReInit( WidgetStatusLabel _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Widget::StatusLabel' */
void WidgetStatusLabel__Done( WidgetStatusLabel _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Widget::StatusLabel.OnSetStatus()' */
void WidgetStatusLabel_OnSetStatus( WidgetStatusLabel _this, XInt32 value )
{
  if ( _this->Status == value )
    return;

  _this->Status = value;

  if ( _this->Status == 1 )
  {
    ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0057 ));
    ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0058 );
    ViewsText_OnSetColor( &_this->Text, _Const0059 );
  }
  else
    if ( _this->Status == 2 )
    {
      ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const005A ));
      ViewsRectangle_OnSetColor( &_this->Rectangle, _Const005B );
      ViewsText_OnSetColor( &_this->Text, _Const005C );
    }
    else
    {
      ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const005D ));
      ViewsRectangle_OnSetColor( &_this->Rectangle, _Const005E );
      ViewsText_OnSetColor( &_this->Text, _Const005F );
    }
}

/* Variants derived from the class : 'Widget::StatusLabel' */
EW_DEFINE_CLASS_VARIANTS( WidgetStatusLabel )
EW_END_OF_CLASS_VARIANTS( WidgetStatusLabel )

/* Virtual Method Table (VMT) for the class : 'Widget::StatusLabel' */
EW_DEFINE_CLASS( WidgetStatusLabel, CoreGroup, Rectangle, Rectangle, Rectangle, 
                 Rectangle, Status, Status, "Widget::StatusLabel" )
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
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetStatusLabel )

/* Embedded Wizard */
