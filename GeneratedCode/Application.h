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

#ifndef Application_H
#define Application_H

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

#include "_ApplicationAlphaNumKeyboard.h"
#include "_ApplicationApplication.h"
#include "_ApplicationDeviceClass.h"
#include "_ApplicationKeyboard.h"
#include "_ApplicationLogInScreen.h"
#include "_ApplicationProfileButtomBar.h"
#include "_ApplicationProfileScreen.h"
#include "_ApplicationProfileSurgeryCompletedScreen.h"
#include "_ApplicationProfileSurgeryInProgressScreen.h"
#include "_ApplicationSettings.h"
#include "_ApplicationSettingsBuzzerTest.h"
#include "_ApplicationSettingsChangePassword.h"
#include "_ApplicationSettingsDateTime.h"
#include "_ApplicationSettingsDiagnostic.h"
#include "_ApplicationSettingsDisplayTest.h"
#include "_ApplicationSettingsInputField.h"
#include "_ApplicationSettingsLEDTest.h"
#include "_ApplicationSettingsMotorTest.h"
#include "_ApplicationSettingsNewSurgicalProfile.h"
#include "_ApplicationSettingsScreen.h"
#include "_ApplicationSettingsSystemLogs.h"
#include "_ApplicationSpinButton.h"
#include "_ApplicationTextEditor.h"
#include "_ApplicationTitleBar.h"

/* Font resource : 'Application::FontNormal22' */
EW_DECLARE_FONT_RES( ApplicationFontNormal22 )

/* Font resource : 'Application::FontNormal28' */
EW_DECLARE_FONT_RES( ApplicationFontNormal28 )

/* Font resource : 'Application::FontBold32' */
EW_DECLARE_FONT_RES( ApplicationFontBold32 )

/* Font resource : 'Application::FontBold28' */
EW_DECLARE_FONT_RES( ApplicationFontBold28 )

/* Font resource : 'Application::FontBold22' */
EW_DECLARE_FONT_RES( ApplicationFontBold22 )

/* Font resource : 'Application::FontNormal33' */
EW_DECLARE_FONT_RES( ApplicationFontNormal33 )

/* Font resource : 'Application::FontBold24' */
EW_DECLARE_FONT_RES( ApplicationFontBold24 )

/* User defined auto object: 'Application::GlobalSettings' */
EW_DECLARE_AUTOOBJECT( ApplicationGlobalSettings, ApplicationSettings )

/* User defined auto object: 'Application::Device' */
EW_DECLARE_AUTOOBJECT( ApplicationDevice, ApplicationDeviceClass )

#ifdef __cplusplus
  }
#endif

#endif /* Application_H */

/* Embedded Wizard */
