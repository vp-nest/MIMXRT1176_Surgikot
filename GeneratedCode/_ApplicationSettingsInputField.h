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

#ifndef _ApplicationSettingsInputField_H
#define _ApplicationSettingsInputField_H

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

#include "_ApplicationTextEditor.h"
#include "_CoreGroup.h"
#include "_CoreSimpleTouchHandler.h"
#include "_ViewsBorder.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"

/* Forward declaration of the class Application::SettingsInputField */
#ifndef _ApplicationSettingsInputField_
  EW_DECLARE_CLASS( ApplicationSettingsInputField )
#define _ApplicationSettingsInputField_
#endif

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


/* Deklaration of class : 'Application::SettingsInputField' */
EW_DEFINE_FIELDS( ApplicationSettingsInputField, CoreGroup )
  EW_PROPERTY( OnSelected,      XSlot )
  EW_PROPERTY( OnEditStart,     XSlot )
  EW_OBJECT  ( Rectangle,       ViewsRectangle )
  EW_OBJECT  ( Border,          ViewsBorder )
  EW_OBJECT  ( TextEditor,      ApplicationTextEditor )
  EW_OBJECT  ( EyeImage,        ViewsImage )
  EW_OBJECT  ( EyeTouchHandler, CoreSimpleTouchHandler )
  EW_PROPERTY( Value,           XString )
  EW_PROPERTY( InputType,       XInt32 )
  EW_PROPERTY( MaxLength,       XInt32 )
  EW_PROPERTY( ShowPassword,    XBool )
  EW_PROPERTY( Password,        XBool )
EW_END_OF_FIELDS( ApplicationSettingsInputField )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsInputField' */
EW_DEFINE_METHODS( ApplicationSettingsInputField, CoreGroup )
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
EW_END_OF_METHODS( ApplicationSettingsInputField )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsInputField_Init( ApplicationSettingsInputField _this, XHandle 
  aArg );

/* 'C' function for method : 'Application::SettingsInputField.OnSetInputType()' */
void ApplicationSettingsInputField_OnSetInputType( ApplicationSettingsInputField _this, 
  XInt32 value );

/* 'C' function for method : 'Application::SettingsInputField.OnSetMaxLength()' */
void ApplicationSettingsInputField_OnSetMaxLength( ApplicationSettingsInputField _this, 
  XInt32 value );

/* 'C' function for method : 'Application::SettingsInputField.OnSetValue()' */
void ApplicationSettingsInputField_OnSetValue( ApplicationSettingsInputField _this, 
  XString value );

/* 'C' function for method : 'Application::SettingsInputField.OnPress()' */
void ApplicationSettingsInputField_OnPress( ApplicationSettingsInputField _this, 
  XObject sender );

/* 'C' function for method : 'Application::SettingsInputField.OnSetPassword()' */
void ApplicationSettingsInputField_OnSetPassword( ApplicationSettingsInputField _this, 
  XBool value );

/* 'C' function for method : 'Application::SettingsInputField.OnSetShowPassword()' */
void ApplicationSettingsInputField_OnSetShowPassword( ApplicationSettingsInputField _this, 
  XBool value );

/* 'C' function for method : 'Application::SettingsInputField.onEyePressed()' */
void ApplicationSettingsInputField_onEyePressed( ApplicationSettingsInputField _this, 
  XObject sender );

/* 'C' function for method : 'Application::SettingsInputField.OnSetOnSelected()' */
void ApplicationSettingsInputField_OnSetOnSelected( ApplicationSettingsInputField _this, 
  XSlot value );

/* 'C' function for method : 'Application::SettingsInputField.OnSetOnEditStart()' */
void ApplicationSettingsInputField_OnSetOnEditStart( ApplicationSettingsInputField _this, 
  XSlot value );

/* 'C' function for method : 'Application::SettingsInputField.slotTextEditStart()' */
void ApplicationSettingsInputField_slotTextEditStart( ApplicationSettingsInputField _this, 
  XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationSettingsInputField_H */

/* Embedded Wizard */
