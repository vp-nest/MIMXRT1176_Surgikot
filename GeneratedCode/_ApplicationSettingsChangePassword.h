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

#ifndef _ApplicationSettingsChangePassword_H
#define _ApplicationSettingsChangePassword_H

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

#include "_ApplicationAlphaNumKeyboard1.h"
#include "_ApplicationKeyboard.h"
#include "_ApplicationSettingsInputField.h"
#include "_ApplicationTitleBar.h"
#include "_CoreGroup.h"
#include "_CoreOutline.h"
#include "_CorePropertyObserver.h"
#include "_CoreSimpleTouchHandler.h"
#include "_EffectsInt32Effect.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetCustomButton.h"

/* Forward declaration of the class Application::Settings */
#ifndef _ApplicationSettings_
  EW_DECLARE_CLASS( ApplicationSettings )
#define _ApplicationSettings_
#endif

/* Forward declaration of the class Application::SettingsChangePassword */
#ifndef _ApplicationSettingsChangePassword_
  EW_DECLARE_CLASS( ApplicationSettingsChangePassword )
#define _ApplicationSettingsChangePassword_
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

/* Forward declaration of the class Resources::Bitmap */
#ifndef _ResourcesBitmap_
  EW_DECLARE_CLASS( ResourcesBitmap )
#define _ResourcesBitmap_
#endif


/* Deklaration of class : 'Application::SettingsChangePassword' */
EW_DEFINE_FIELDS( ApplicationSettingsChangePassword, CoreGroup )
  EW_VARIABLE( theme,           ApplicationSettings )
  EW_ARRAY   ( SettingsImage,   ResourcesBitmap, [4])
  EW_OBJECT  ( TitleBar,        ApplicationTitleBar )
  EW_OBJECT  ( Outline,         CoreOutline )
  EW_OBJECT  ( Rectangle,       ViewsRectangle )
  EW_OBJECT  ( TopLine,         ViewsLine )
  EW_OBJECT  ( PropertyObserver, CorePropertyObserver )
  EW_OBJECT  ( rctTitile,       ViewsRectangle )
  EW_OBJECT  ( TopLine1,        ViewsLine )
  EW_OBJECT  ( Text,            ViewsText )
  EW_OBJECT  ( Image,           ViewsImage )
  EW_OBJECT  ( slBack,          CoreSimpleTouchHandler )
  EW_OBJECT  ( SimpleTouchHandler, CoreSimpleTouchHandler )
  EW_OBJECT  ( CustomButton,    WidgetCustomButton )
  EW_OBJECT  ( CurrentPassword, ApplicationSettingsInputField )
  EW_OBJECT  ( Text1,           ViewsText )
  EW_OBJECT  ( Text2,           ViewsText )
  EW_OBJECT  ( NewPassword,     ApplicationSettingsInputField )
  EW_OBJECT  ( Text3,           ViewsText )
  EW_OBJECT  ( ConNewPass,      ApplicationSettingsInputField )
  EW_OBJECT  ( Text4,           ViewsText )
  EW_OBJECT  ( AlphaNumKeyboard1, ApplicationAlphaNumKeyboard1 )
  EW_OBJECT  ( moveEffect,      EffectsInt32Effect )
  EW_OBJECT  ( Keyboard,        ApplicationKeyboard )
EW_END_OF_FIELDS( ApplicationSettingsChangePassword )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsChangePassword' */
EW_DEFINE_METHODS( ApplicationSettingsChangePassword, CoreGroup )
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
EW_END_OF_METHODS( ApplicationSettingsChangePassword )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsChangePassword_Init( ApplicationSettingsChangePassword _this, 
  XHandle aArg );

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationSettingsChangePassword_onEvent( ApplicationSettingsChangePassword _this, 
  XObject sender );

/* 'C' function for method : 'Application::SettingsChangePassword.onBack()' */
void ApplicationSettingsChangePassword_onBack( ApplicationSettingsChangePassword _this, 
  XObject sender );

/* 'C' function for method : 'Application::SettingsChangePassword.OnInputSelected()' */
void ApplicationSettingsChangePassword_OnInputSelected( ApplicationSettingsChangePassword _this, 
  XObject sender );

/* 'C' function for method : 'Application::SettingsChangePassword.SlotMoveEffectFinished()' */
void ApplicationSettingsChangePassword_SlotMoveEffectFinished( ApplicationSettingsChangePassword _this, 
  XObject sender );

/* 'C' function for method : 'Application::SettingsChangePassword.SlotMoveEffect()' */
void ApplicationSettingsChangePassword_SlotMoveEffect( ApplicationSettingsChangePassword _this, 
  XObject sender );

/* 'C' function for method : 'Application::SettingsChangePassword.slotKeyboardOpen()' */
void ApplicationSettingsChangePassword_slotKeyboardOpen( ApplicationSettingsChangePassword _this, 
  XObject sender );

/* 'C' function for method : 'Application::SettingsChangePassword.slotKeyboardClose()' */
void ApplicationSettingsChangePassword_slotKeyboardClose( ApplicationSettingsChangePassword _this, 
  XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationSettingsChangePassword_H */

/* Embedded Wizard */
