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
* Profile  : Win
* Platform : Tara.Win32.RGBA8888
*
*******************************************************************************/

#include "ewlocale.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreView.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsImage.h"
#include "_ViewsText.h"
#include "_WidgetAddProfileButton.h"
#include "_WidgetEnterButton.h"
#include "_WidgetNumButton.h"
#include "_WidgetNumPad.h"
#include "_WidgetProfileListItem.h"
#include "Core.h"
#include "Res.h"
#include "Resources.h"
#include "Views.h"
#include "Widget.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x000000FA, /* ratio 60.80 % */
  0xB8000F00, 0x800A8452, 0x00F00032, 0x21A003A0, 0x62458181, 0x90F00434, 0x15898CA0,
  0x08C0CC8B, 0x82470691, 0xB1163E35, 0x4886F221, 0x4C73221C, 0x08710044, 0x01073600,
  0x47200184, 0x10958C24, 0xB370008B, 0x86CD6630, 0x0106200A, 0x00288640, 0xC49C0010,
  0x019133BC, 0x01322644, 0x135A89C0, 0x3099CD61, 0x09689A1B, 0xA44F4EA0, 0x395E431B,
  0x5905C00A, 0x9EA26F97, 0xE5117B21, 0x9166A458, 0x10AA8936, 0x00ABDAE9, 0x4B2548E6,
  0xA5486CD2, 0x04062713, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 101, 65 }};
static const XRect _Const0001 = {{ 0, 0 }, { 99, 64 }};
static const XRect _Const0002 = {{ 0, 0 }, { 100, 64 }};
static const XStringRes _Const0003 = { _StringsDefault0, 0x0002 };
static const XColor _Const0004 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XPoint _Const0005 = { 0, 0 };
static const XPoint _Const0006 = { 100, 0 };
static const XPoint _Const0007 = { 100, 64 };
static const XPoint _Const0008 = { 0, 64 };
static const XRect _Const0009 = {{ 0, 0 }, { 325, 334 }};
static const XRect _Const000A = {{ 0, 41 }, { 101, 106 }};
static const XRect _Const000B = {{ 112, 41 }, { 213, 106 }};
static const XRect _Const000C = {{ 224, 41 }, { 325, 106 }};
static const XRect _Const000D = {{ 0, 117 }, { 101, 182 }};
static const XRect _Const000E = {{ 112, 117 }, { 213, 182 }};
static const XRect _Const000F = {{ 224, 117 }, { 325, 182 }};
static const XRect _Const0010 = {{ 0, 193 }, { 101, 258 }};
static const XRect _Const0011 = {{ 112, 193 }, { 213, 258 }};
static const XRect _Const0012 = {{ 224, 193 }, { 325, 258 }};
static const XRect _Const0013 = {{ 0, 269 }, { 101, 334 }};
static const XRect _Const0014 = {{ 112, 269 }, { 213, 334 }};
static const XRect _Const0015 = {{ 224, 269 }, { 325, 334 }};
static const XRect _Const0016 = {{ 98, 0 }, { 118, 20 }};
static const XRect _Const0017 = {{ 134, 0 }, { 154, 20 }};
static const XRect _Const0018 = {{ 170, 0 }, { 190, 20 }};
static const XRect _Const0019 = {{ 206, 0 }, { 226, 20 }};
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
static const XStringRes _Const0025 = { _StringsDefault0, 0x0039 };
static const XRect _Const0026 = {{ 0, 0 }, { 138, 48 }};
static const XStringRes _Const0027 = { _StringsDefault0, 0x0041 };
static const XPoint _Const0028 = { 138, 0 };
static const XPoint _Const0029 = { 138, 48 };
static const XPoint _Const002A = { 0, 48 };
static const XRect _Const002B = {{ 0, 0 }, { 896, 104 }};
static const XRect _Const002C = {{ 26, 36 }, { 58, 68 }};
static const XRect _Const002D = {{ 83, 26 }, { 298, 54 }};
static const XStringRes _Const002E = { _StringsDefault0, 0x004B };
static const XRect _Const002F = {{ 82, 58 }, { 347, 78 }};
static const XStringRes _Const0030 = { _StringsDefault0, 0x0057 };
static const XRect _Const0031 = {{ 830, 32 }, { 870, 72 }};
static const XPoint _Const0032 = { 17, 28 };
static const XPoint _Const0033 = { 67, 28 };
static const XPoint _Const0034 = { 67, 77 };
static const XPoint _Const0035 = { 17, 77 };
static const XPoint _Const0036 = { 830, 32 };
static const XPoint _Const0037 = { 870, 32 };
static const XPoint _Const0038 = { 870, 72 };
static const XPoint _Const0039 = { 830, 72 };

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
  ViewsText_OnSetFont( &_this->label, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
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
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
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
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
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
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Image, _Const0002 );
  CoreRectView__OnSetBounds( &_this->label, _Const0001 );
  ViewsText_OnSetString( &_this->label, EwLoadString( &_Const0025 ));
  ViewsText_OnSetColor( &_this->label, _Const0004 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0005 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0006 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0007 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0008 );
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
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
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
  CoreRectView__OnSetBounds( _this, _Const0026 );
  CoreRectView__OnSetBounds( &_this->Image, _Const0026 );
  ViewsImage_OnSetAutoSize( &_this->Image, 1 );
  CoreRectView__OnSetBounds( &_this->label, _Const0026 );
  ViewsText_OnSetString( &_this->label, EwLoadString( &_Const0027 ));
  ViewsText_OnSetColor( &_this->label, _Const0004 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0005 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0028 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0029 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const002A );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResAddProfileNormalImg, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->label, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
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

/* Variants derived from the class : 'Widget::AddProfileButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetAddProfileButton )
EW_END_OF_CLASS_VARIANTS( WidgetAddProfileButton )

/* Virtual Method Table (VMT) for the class : 'Widget::AddProfileButton' */
EW_DEFINE_CLASS( WidgetAddProfileButton, CoreGroup, OnRelease, OnRelease, Image, 
                 Image, _.VMT, _.VMT, "Widget::AddProfileButton" )
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
EW_END_OF_CLASS( WidgetAddProfileButton )

/* Initializer for the class 'Widget::ProfileListItem' */
void WidgetProfileListItem__Init( WidgetProfileListItem _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetProfileListItem );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Bg, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->RadioImg, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->H1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->H2, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->EditImg, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->RadioTouchHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->EditTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetProfileListItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const002B );
  CoreRectView__OnSetBounds( &_this->Bg, _Const002B );
  CoreRectView__OnSetBounds( &_this->RadioImg, _Const002C );
  CoreView_OnSetLayout((CoreView)&_this->H1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->H1, _Const002D );
  ViewsText_OnSetAutoSize( &_this->H1, 0 );
  ViewsText_OnSetAlignment( &_this->H1, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->H1, EwLoadString( &_Const002E ));
  ViewsText_OnSetColor( &_this->H1, _Const0004 );
  CoreRectView__OnSetBounds( &_this->H2, _Const002F );
  ViewsText_OnSetAutoSize( &_this->H2, 1 );
  ViewsText_OnSetAlignment( &_this->H2, ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->H2, EwLoadString( &_Const0030 ));
  ViewsText_OnSetColor( &_this->H2, _Const0004 );
  CoreRectView__OnSetBounds( &_this->EditImg, _Const0031 );
  CoreQuadView__OnSetPoint4( &_this->RadioTouchHandler, _Const0032 );
  CoreQuadView__OnSetPoint3( &_this->RadioTouchHandler, _Const0033 );
  CoreQuadView__OnSetPoint2( &_this->RadioTouchHandler, _Const0034 );
  CoreQuadView__OnSetPoint1( &_this->RadioTouchHandler, _Const0035 );
  CoreQuadView__OnSetPoint4( &_this->EditTouchHandler, _Const0036 );
  CoreQuadView__OnSetPoint3( &_this->EditTouchHandler, _Const0037 );
  CoreQuadView__OnSetPoint2( &_this->EditTouchHandler, _Const0038 );
  CoreQuadView__OnSetPoint1( &_this->EditTouchHandler, _Const0039 );
  CoreGroup__Add( _this, ((CoreView)&_this->Bg ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->RadioImg ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->H1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->H2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->EditImg ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->RadioTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->EditTouchHandler ), 0 );
  ViewsImage_OnSetBitmap( &_this->Bg, EwLoadResource( &ResListItemBgNormal, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->RadioImg, EwLoadResource( &ResRadioBtNormal, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->H1, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->H2, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
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
  ViewsImage__ReInit( &_this->Bg );
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
  ViewsImage__Done( &_this->Bg );
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

  EwPostSignal( _this->OnSelectRadioBT, ((XObject)_this ));
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
                 Bg, Bg, ItemNo, ItemNo, "Widget::ProfileListItem" )
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
EW_END_OF_CLASS( WidgetProfileListItem )

/* Embedded Wizard */
