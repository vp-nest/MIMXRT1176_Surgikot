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

#ifndef _ApplicationSettings_H
#define _ApplicationSettings_H

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

/* Forward declaration of the class Application::Settings */
#ifndef _ApplicationSettings_
  EW_DECLARE_CLASS( ApplicationSettings )
#define _ApplicationSettings_
#endif


/* Deklaration of class : 'Application::Settings' */
EW_DEFINE_FIELDS( ApplicationSettings, XObject )
  EW_VARIABLE( SelectedProfile, XString )
  EW_VARIABLE( SurgerCompletedTime, XString )
  EW_PROPERTY( LoginResult,     XInt32 )
EW_END_OF_FIELDS( ApplicationSettings )

/* Virtual Method Table (VMT) for the class : 'Application::Settings' */
EW_DEFINE_METHODS( ApplicationSettings, XObject )
EW_END_OF_METHODS( ApplicationSettings )

/* 'C' function for method : 'Application::Settings.OnGetLoginResult()' */
XInt32 ApplicationSettings_OnGetLoginResult( ApplicationSettings _this );

/* 'C' function for method : 'Application::Settings.OnSetLoginResult()' */
void ApplicationSettings_OnSetLoginResult( ApplicationSettings _this, XInt32 value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationSettings_UpdateLoginResult( ApplicationSettings _this, XInt32 aNewValue );

/* Wrapper function for the non virtual method : 'Application::Settings.UpdateLoginResult()' */
void ApplicationSettings__UpdateLoginResult( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::Settings.UpdateLoginResult(). */
#define _ApplicationSettings__UpdateLoginResult_

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationSettings_H */

/* Embedded Wizard */
