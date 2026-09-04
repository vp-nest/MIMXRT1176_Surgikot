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

#ifndef _ApplicationScreenManager_H
#define _ApplicationScreenManager_H

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

/* Forward declaration of the class Application::ScreenManager */
#ifndef _ApplicationScreenManager_
  EW_DECLARE_CLASS( ApplicationScreenManager )
#define _ApplicationScreenManager_
#endif


/* Deklaration of class : 'Application::ScreenManager' */
EW_DEFINE_FIELDS( ApplicationScreenManager, XObject )
  EW_PROPERTY( LoginResult,     XInt32 )
EW_END_OF_FIELDS( ApplicationScreenManager )

/* Virtual Method Table (VMT) for the class : 'Application::ScreenManager' */
EW_DEFINE_METHODS( ApplicationScreenManager, XObject )
EW_END_OF_METHODS( ApplicationScreenManager )

/* 'C' function for method : 'Application::ScreenManager.OnGetLoginResult()' */
XInt32 ApplicationScreenManager_OnGetLoginResult( ApplicationScreenManager _this );

/* 'C' function for method : 'Application::ScreenManager.OnSetLoginResult()' */
void ApplicationScreenManager_OnSetLoginResult( ApplicationScreenManager _this, 
  XInt32 value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationScreenManager_UpdateLoginResult( ApplicationScreenManager _this, 
  XInt32 aNewValue );

/* Wrapper function for the non virtual method : 'Application::ScreenManager.UpdateLoginResult()' */
void ApplicationScreenManager__UpdateLoginResult( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::ScreenManager.UpdateLoginResult(). */
#define _ApplicationScreenManager__UpdateLoginResult_

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationScreenManager_H */

/* Embedded Wizard */
