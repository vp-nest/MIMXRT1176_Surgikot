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

#ifndef _WidgetNumPad_H
#define _WidgetNumPad_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x000B0000
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x000B0000
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_CoreGroup.h"
#include "_ViewsImage.h"
#include "_WidgetEnterButton.h"
#include "_WidgetNumButton.h"

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::KeyPressHandler */
#ifndef _CoreKeyPressHandler_
  EW_DECLARE_CLASS( CoreKeyPressHandler )
#define _CoreKeyPressHandler_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::TaskQueue */
#ifndef _CoreTaskQueue_
  EW_DECLARE_CLASS( CoreTaskQueue )
#define _CoreTaskQueue_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Effects::Fader */
#ifndef _EffectsFader_
  EW_DECLARE_CLASS( EffectsFader )
#define _EffectsFader_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif

/* Forward declaration of the class Widget::NumPad */
#ifndef _WidgetNumPad_
  EW_DECLARE_CLASS( WidgetNumPad )
#define _WidgetNumPad_
#endif


/* Deklaration of class : 'Widget::NumPad' */
EW_DEFINE_FIELDS( WidgetNumPad, CoreGroup )
  EW_ARRAY   ( PinImgArray,     ViewsImage, [4])
  EW_PROPERTY( OnEnterKey,      XSlot )
  EW_OBJECT  ( NumButton1,      WidgetNumButton )
  EW_OBJECT  ( NumButton2,      WidgetNumButton )
  EW_OBJECT  ( NumButton3,      WidgetNumButton )
  EW_OBJECT  ( NumButton4,      WidgetNumButton )
  EW_OBJECT  ( NumButton5,      WidgetNumButton )
  EW_OBJECT  ( NumButton6,      WidgetNumButton )
  EW_OBJECT  ( NumButton7,      WidgetNumButton )
  EW_OBJECT  ( NumButton8,      WidgetNumButton )
  EW_OBJECT  ( NumButton9,      WidgetNumButton )
  EW_OBJECT  ( NumButton10,     WidgetNumButton )
  EW_OBJECT  ( NumButton11,     WidgetNumButton )
  EW_OBJECT  ( EnterButton,     WidgetEnterButton )
  EW_OBJECT  ( ImgPin1,         ViewsImage )
  EW_OBJECT  ( ImgPin2,         ViewsImage )
  EW_OBJECT  ( ImgPin3,         ViewsImage )
  EW_OBJECT  ( ImgPin4,         ViewsImage )
  EW_PROPERTY( Number,          XString )
EW_END_OF_FIELDS( WidgetNumPad )

/* Virtual Method Table (VMT) for the class : 'Widget::NumPad' */
EW_DEFINE_METHODS( WidgetNumPad, CoreGroup )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetBuffered,     void )( CoreGroup _this, XBool value )
  EW_METHOD( OnSetOpacity,      void )( CoreGroup _this, XInt32 value )
  EW_METHOD( IsCurrentDialog,   XBool )( CoreGroup _this )
  EW_METHOD( IsActiveDialog,    XBool )( CoreGroup _this, XBool aRecursive )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindViewAtPosition, CoreView )( CoreGroup _this, CoreView aView, XPoint 
    aPosition, XSet aFilter )
  EW_METHOD( FindNextView,      CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( RestackTop,        void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( WidgetNumPad )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void WidgetNumPad_Init( WidgetNumPad _this, XHandle aArg );

/* 'C' function for method : 'Widget::NumPad.SlotOnClick()' */
void WidgetNumPad_SlotOnClick( WidgetNumPad _this, XObject sender );

/* 'C' function for method : 'Widget::NumPad.OnSetNumber()' */
void WidgetNumPad_OnSetNumber( WidgetNumPad _this, XString value );

/* 'C' function for method : 'Widget::NumPad.UpdatePinImg()' */
void WidgetNumPad_UpdatePinImg( WidgetNumPad _this, XInt32 pinLength );

/* 'C' function for method : 'Widget::NumPad.SlotOnEnter()' */
void WidgetNumPad_SlotOnEnter( WidgetNumPad _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetNumPad_H */

/* Embedded Wizard */
